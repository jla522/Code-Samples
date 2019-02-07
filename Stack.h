// A stack using a linked list implementation
class Stack{
    
    private:
    
        struct Node{
            int data;       // The information being put into the stack
            Node *next;     // Points to the next Node in the list
        };
        
        int len;            // Number of elements in the list
        
        Node *head;         // Points to the top of the stack
        Node *tail;         // Points to the bottom of the list
        
    public:
    
    // Constructor
    Stack();
    
    // Destructor
    ~Stack();
    
    // Inserts element into the head of the stack
    void push(int element);
    
    // Pops from the head of the stack
    int pop();
    
    // Returns number of elements
    int elementCount();
    
    // Peeks at top element (head)
    int peek();
    
    // Returns true if the list is empty
    bool isEmpty();
    
    // Displays all elements from top to bottom
    void display();
    
};