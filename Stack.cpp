#include <iostream>
#include "Stack.h"

using namespace std;

// Constructor
Stack::Stack(){
    // Starts off with zero elements in the list
    len = 0;
    
    // When the list is empty, both head and tail point to NULL
    head = NULL;
    tail = NULL;
}
    
// Destructor
Stack::~Stack(){
    
}
    
// Inserts element into the head of the stack
void Stack::push(int element){
    Node *newNode;          // Declaring a new Node pointer
    
    newNode = new Node;     // Allocating space for a Node, pointing Node pointer to it
    
    // If the list was previously empty, point the head and tail to the new node
    if (len == 0){
        head = newNode;
        tail = newNode;
        tail -> next = NULL;
    }
    else{
        // Make the new Node point to the head, then set the head to point to the new node
        newNode -> next = head;
        head = newNode;
    }
    
    // Data put into the new Node
    head -> data = element;
    
    len++;
}
    
// Pops from the head of the stack
int Stack::pop(){
    
    Node *temp;     // A temporary Node pointer
    int tempData;   // A variable to hold the data
    
    // Set the temp pointer to point to the head Node
    temp = head;
    
    // Head points to the next Node
    head = head -> next;
    
    // Storing the data in the top node
    tempData = temp -> data;
    
    // Deleteing the top Node
    delete temp;
    
    // Decrementing the element counter
    len--;
    
    return tempData;
}
    
// Returns number of elements
int Stack::elementCount(){
    return len;
}
    
// Peeks at top element (head)
int Stack::peek(){
    return head -> data;
}
    

    
// Returns true if the list is empty
bool Stack::isEmpty(){
    return len == 0;
}

// Displays all elements from top to bottom
void Stack::display(){
    Node *temp;
    
    temp = head;
    
    for (int i = 0; i < len; i++){
        cout << temp -> data << endl;
        temp = temp -> next;
    }
}