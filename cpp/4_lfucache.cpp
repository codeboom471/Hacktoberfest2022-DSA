//https://leetcode.com/problems/lfu-cache/submissions/
#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
struct Node{
        int key, val, cnt;
        Node* next;
        Node* prev;
        
        Node(int k, int v){
            key = k;
            val = v;
            cnt=1;
        }
    };
    struct List{
        int size;
        Node* head;
        Node* tail;
        List(){
            head = new Node(0,0);
            tail = new Node(0,0);
            head->next = tail;
            tail->prev = head;
            size=0;
        }
        void addFront(Node* newnode){
            Node* temp = head->next;
            head->next = newnode;
            temp->prev = newnode;
            newnode->prev = head;
            newnode->next = temp;
            size++;
        }
        void removenode(Node* delnode){
            Node* delprev = delnode->prev;
            Node* delnext = delnode->next;
            delprev->next = delnext;
            delnext->prev = delprev;
            size--;
        }
    };
class LFUCache {
    int maxsize, leastfreq, cursize;
    unordered_map<int,Node*> keyNode;
    unordered_map<int, List*> freqListmap;
public:
    
    LFUCache(int capacity) {
        maxsize = capacity;
        leastfreq = 0;
        cursize = 0;
    }
    
    void updateFreqlistmap(Node* node){
        keyNode.erase(node->key);
        freqListmap[node->cnt]->removenode(node);
        if(node->cnt == leastfreq && freqListmap[node->cnt]->size==0){
            leastfreq++;
        }
        List* nextHigherFreqList = new List();
        if(freqListmap.find(node->cnt+1)!=freqListmap.end()){
            nextHigherFreqList  = freqListmap[node->cnt+1];
        }
        node->cnt+=1;
        nextHigherFreqList->addFront(node);
        freqListmap[node->cnt] = nextHigherFreqList;
        keyNode[node->key] = node;
    }
    int get(int key) {
        if(keyNode.find(key)!=keyNode.end()){
            Node* resnode = keyNode[key];
            int res = resnode->val;
            updateFreqlistmap(resnode);
            return res;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(maxsize==0){
            return;
        }
        if(keyNode.find(key)!=keyNode.end()){
            Node* existingnode = keyNode[key];
            existingnode->val = value;
            updateFreqlistmap(existingnode);
        }
        else{
            if(cursize == maxsize){
                List* list = freqListmap[leastfreq];
                keyNode.erase(list->tail->prev->key);
                freqListmap[leastfreq]->removenode(list->tail->prev);
                cursize--;
            }
            cursize++;
            leastfreq = 1;  //for new element, least frequency will become one
            List* listfreq = new List();
            if(freqListmap.find(leastfreq)!=freqListmap.end()){  //if new element equiavalent frequency key already exist, just take that list
                listfreq = freqListmap[leastfreq];
            }
            Node* newnode = new Node(key,value);
            listfreq->addFront(newnode);
            keyNode[key] = newnode;       //update the hashmap
            freqListmap[leastfreq] = listfreq;   //update the list
            
        }
    }
};