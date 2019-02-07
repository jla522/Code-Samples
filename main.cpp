#include <iostream>
#include "Stack.h"

using namespace std;

int main(){
    int input;      // Input data
    int data;       // Node data
    
    Stack newStack; // Declaring the stack object
    
    while(1){
        
        cout << "Please choose an option:\n";
        cout << "[1] Insert an element.\n";
        cout << "[2] Delete top element.\n";
        cout << "[3] Look at top element.\n";
        cout << "[4] Get element count.\n";
        cout << "[5] Check if the stack is empty.\n";
        cout << "[6] Display all elements in order.\n";
        cout << "[7] Exit the program.\n";
        
        cin >> input;
        
        if (input == 1){
            cout << "Input the data: ";
            cin >> data;
            
            newStack.push(data);
        }
        else if (input == 2){
            cout << "Popped " << newStack.pop() << endl;
        }
        else if (input == 3){
            cout << "Top element: " << newStack.peek() << endl;
        }
        else if (input == 4){
            cout << "Element count: " << newStack.elementCount() << endl;
        }
        else if (input == 5){
            if (newStack.isEmpty()){
                cout << "Stack is empty.\n";
            }
            else{
                cout << "Stack is not Empty.\n";
            }
        }
        else if (input == 6){
            newStack.display();
        }
        else if (input == 7){
            break;
        }
        else{
            cerr << "ERROR: Input not valid.\nPlease try again.\n";
        }
    }
    
    return 0;
}