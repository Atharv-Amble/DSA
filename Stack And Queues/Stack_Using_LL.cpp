#include<iostream>
using namespace std;

class Node{
    public :
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};

class Stack{
    public :
        Node* top;
        int size;
    
        Stack(){
            top = nullptr;
            size = 0;
        }

        void push(int data){
            Node* newNode = new Node(data);
            newNode->next = top;
            top = newNode;
            size ++;
        }

        void pop(){
            if(top == nullptr){
                cout<< "Stack Underflow "<<endl;
                return;
            }

            Node* temp = top;
            top = top->next;
            delete temp;
            size --;
        }

        int getTop(){
            if(top == nullptr){
                cout<<"Stack Underflow "<<endl;
                return -1;
            }
            else{
                return top->data;
            }
        }

        int getSize(){
            if(top == nullptr){
                cout<<"Stack Underflow "<<endl;
                return 0;
            }
            else{
                return size;
            }
        }

        void printStack() {
            if (top == nullptr) {
                cout << "Stack is empty" << endl;
                return;
            }
            Node* temp = top;
            while (temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);

    cout << "Stack elements: ";
    stack.printStack();

    cout << "Top element: " << stack.getTop() << endl;
    cout << "Stack size: " << stack.getSize() << endl;

    stack.pop();
    cout << "Stack after popping: ";
    stack.printStack();

    return 0;
}