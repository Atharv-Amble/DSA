#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};

class Queue{
    public :
        Node* front;
        Node* rear;
        int size;

        Queue(){
            front = rear = nullptr;
            size = 0;
        }

        void enqueue(int data){
            Node* newNode = new Node(data);
            if(rear == nullptr){
                front = rear = newNode;
            }
            else{
                rear->next = newNode;
                rear = newNode;
            }
            size ++;
        }

        void dequeue(){
            if(front == nullptr){
                cout<<"Queue underflow "<<endl;
                return;
            }
            else{
                Node* temp = front;
                front = front->next;
                if (front == nullptr) {
                    rear = nullptr;
                }
                delete temp;
                size--;
            }
        }

        int getFront() {
            if (front == nullptr) {
                cout << "Queue is empty" << endl;
                return -1;
            }
            return front->data;
        }

        int getSize() {
            return size;
        }
    
        // Print Queue Elements
        void printQueue() {
            if (front == nullptr) {
                cout << "Queue is empty" << endl;
                return;
            }
            Node* temp = front;
            while (temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }


};

int main(){
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    cout << "Queue elements: ";
    q.printQueue();

    cout << "Front element: " << q.getFront() << endl;
    cout << "Queue size: " << q.getSize() << endl;

    q.dequeue();
    cout << "Queue after dequeue: ";
    q.printQueue();

    return 0;
}