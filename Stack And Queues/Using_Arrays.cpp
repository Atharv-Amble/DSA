#include <iostream>
using namespace std;

class UsingArrays {
public:
    int top = -1;
    int size = 10;
    int st[10];

    void push(int data) {
        if (top >= size - 1) {
            cout << "Stack Overflow" << endl;
        } else {
            top = top + 1;
            st[top] = data;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "No elements in stack to pop" << endl;
        } else {
            top = top - 1;
        }
    }

    int getTop() {
        if (top == -1) {
            cout << "The stack is empty" << endl;
            return -1;
        } else {
            return st[top];
        }
    }

    int getSize() {
        if (top == -1) {
            cout << "The size is zero" << endl;
            return 0;
        } else {
            return top + 1;
        }
    }

    void printStack() {  
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            int tempTop = top;  
            while (tempTop >= 0) {
                cout << st[tempTop] << " ";
                tempTop--;
            }
            cout << endl;
        }
    }
};

int main() {
    UsingArrays stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);

    stack.printStack();  

    return 0;
}
