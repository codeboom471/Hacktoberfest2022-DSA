#include <iostream>
#include <stdlib.h>
using namespace std;
struct node {
    int num;
    struct node * preptr;
    struct node * nextptr;
}*start_node, *end_node;
 

void Listcreation(int n);
void DeleteFirstNode();
void displayList(int a);

int main()
{
    int n,num1,a,plc;
    start_node = NULL;
    end_node = NULL;
     
    cout<<" Enter the number of nodes: ";
    cin>>n;
    Listcreation(n); 
    a=1;
    displayList(a);
    DeleteFirstNode();
        a=2;
    displayList(a);
    return 0;
}
 
void Listcreation(int n)
{
    int i, num;
    struct node *fnNode;
 
    if(n >= 1)
    {
        start_node = (struct node *)malloc(sizeof(struct node));
        if(start_node != NULL)
        {
            cout<<" Enter data for node 1: "; //assigning data in the first node
            cin>>num;
            start_node->num = num;
            start_node->preptr = NULL;
            start_node->nextptr = NULL;
            end_node = start_node;
            for(i=2; i<=n; i++)
            {
                fnNode = (struct node *)malloc(sizeof(struct node));
                if(fnNode != NULL)
                {
                    cout<<" Enter data for node "<< i<< ": ";
                    cin>>num;
                    fnNode->num = num;
                    fnNode->preptr = end_node;    // new node is linking with the previous node
                    fnNode->nextptr = NULL;       // set next address of fnnode is NULL
                    end_node->nextptr = fnNode;   // previous node is linking with the new node
                    end_node = fnNode;            // assign new node as last node
                }
                else
                {
                    cout<<" Memory can not be allocated.";
                    break;
                }
            }
        }
        else
        {
            cout<<" Memory can not be allocated.";
        }
    }
}

void DeleteFirstNode()
{
    struct node * NodeToDel;
    if(start_node == NULL)
    {
        cout<<" Deletion is not possible. No data in the list.\n";
    }
    else
    {
        NodeToDel = start_node;
        start_node = start_node->nextptr;    // move the next address of starting node to second node
        start_node->preptr = NULL;          // set previous address of staring node is NULL
        free(NodeToDel);                   // delete the first node from memory
    }
}

void displayList(int m)
{
    struct node * tmp;
    int n = 1;
    if(start_node == NULL)
    {
        cout<<" No data found in the List yet.";
    }
    else
    {
        tmp = start_node;
        if (m==1)
        {
        cout<<"\n Data entered in the list are :\n";
        }
        else
        {
         cout<<"\n After deletion the new list are :\n";   
        }
        while(tmp != NULL)
        {
            cout<<" node "<< n<<": "<< tmp->num<<endl;
            n++;
            tmp = tmp->nextptr; 
        }
    }
}