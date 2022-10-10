void push_back(int newElement) {
  
  //1. allocate node
  Node* newNode = new Node();
  
  //2. assign data element
  newNode->data = newElement;
  
  //3. assign null to the next of new node
  newNode->next = NULL; 
  
  //4. Check the Linked List is empty or not,
  //   if empty make the new node as head 
  if(head == NULL) {
    head = newNode;
  } else {
    
    //5. Else, traverse to the last node
    Node* temp = head;
    while(temp->next != NULL)
      temp = temp->next;
    
    //6. Change the next of last node to new node
    temp->next = newNode;
  }    
}