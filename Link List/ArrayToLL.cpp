#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data1,Node* next1){
            data = data1;
            next = next1;
        }

        Node(int data1){
            data = data1;
            next = nullptr;
        }
};

Node* convertToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* current = head;

    for(int i = 1 ; i < arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        current->next = temp;
        current = current->next;
    }

    return head;
}

void printLL(Node* head){
    Node * temp = head;
    while(temp!= nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int lengthOfLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != nullptr){
        count++;
        temp = temp->next;
    }

    return count;
}

bool checkIfPresent(Node* head , int element){
    Node* temp = head;
    while(temp != nullptr){
        if(temp->data == element){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

Node* removeHead(Node* head){
    if(head == nullptr){
        return head;
    }

    Node* temp = head;
    head = head->next;
    delete temp;

    return head;
}

Node* removeTail(Node* head){
    if(head == nullptr || head->next == nullptr){
        delete head;
        return head;
    }

    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;

    return head;
}

Node* removeKPos(Node* head , int k){
    if(head == nullptr || k == 0){
        return head;
    }

    if(k == 1){
        Node* current = head;
        head = head->next;
        delete current;
        return head;
    }

    int count = 0;
    Node* temp = head;
    Node* prev = nullptr;
    while(temp != nullptr){
        count ++;
        if(count == k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}

Node* removeByVal(Node* head , int k){
    if(head == nullptr || k == 0){
        return head;
    }

    if(k == head->data){
        Node* current = head;
        head = head->next;
        delete current;
        return head;
    }

    Node* temp = head;
    Node* prev = nullptr;
    while(temp != nullptr){

        if(temp->data == k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}

Node* insertAtHead(Node* head , int ele){
    if(head == nullptr){
        Node* new_node = new Node(ele);
        return new_node;
    }

    Node* new_node = new Node(ele);
    new_node->next = head;
    return new_node;
}

Node* insertAtTail(Node* head,int ele){
    if(head == nullptr){
        Node* new_node = new Node(ele);
        return new_node;
    }
    Node* temp = head;
    while(temp->next!= nullptr){
        temp= temp->next;
    }
    Node* new_node = new Node(ele);
    temp->next = new_node;
    new_node->next = nullptr;

    return head;
}

Node* insertAtKPos(Node* head,int k,int ele){
    if(head == nullptr){
        return new Node(ele);
    }

    if(k == 1){
        Node* new_node = new Node(ele);
        new_node->next = head;
        return new_node;
    }

    Node* temp = head;
    Node* new_node = new Node(ele);
    Node* prev = nullptr;
    int count = 0;
    while(temp != nullptr){
        count ++;
        if(count == k){
            prev->next = new_node;
            new_node->next = temp;
            return head;
        }
         prev = temp;
         temp = temp->next;
    }

    return head;
}

Node* insertBeforeValue(Node* head,int val,int ele){
    if(head == nullptr){
        return new Node(ele);
    }

    if(head->data == val){
        Node* new_node = new Node(ele);
        new_node->next = head;
        return new_node;
    }

    Node* temp = head;
    Node* new_node = new Node(ele);
    while(temp != nullptr){
        if(temp->next->data == val){
            new_node -> next = temp -> next;
            temp->next = new_node;
            break;
        }
        else{
            temp = temp -> next;
        }
    }

    return head;
}



int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = convertToLL(arr);
    cout<<endl;
    cout<<"The link list is : ";
    printLL(head);

    cout<<endl;

    // cout<<"After deleting head : ";
    // Node* newHead = removeHead(head);
    // printLL(newHead);

    cout<<endl;

    // Tail deletion
    // cout<<"After deleting tail : ";
    // Node* newList = removeTail(head);
    // printLL(newList);

    // Deleting Based on Position
    // int pos;
    // cout<<"Enter the position to be deleted : ";
    // cin>>pos;
    // Node* newList = removeKPos(head,pos);
    // printLL(newList);

    // Deleting Based On Value
    // Node* newList = removeByVal(head,3);
    // printLL(newList);

    // Inserting At Head
    // int element;
    // cout<<"Enter the element to be inserted at Head : ";
    // cin>>element;
    // Node* newHead = insertAtHead(head,element);
    // cout<<endl;
    // cout<<"The Link List After Head Insertion is : ";
    // printLL(newHead);
    // cout<<endl;

    //Inserting at Tail
    // int element;
    // cout<<"Enter the element to be inserted at Tail : ";
    // cin>>element;
    // Node* newHead = insertAtTail(head,element);
    // cout<<endl;
    // cout<<"The Link List After Tail Insertion is : ";
    // printLL(newHead);
    // cout<<endl;

    //Inserting At K Position
    // int element;
    // int pos;
    // cout<<"Enter the position at which to be inserted : ";
    // cin>>pos;
    // Node* newHead = insertAtKPos(head,pos,element);
    // cout<<endl;
    // cout<<"The Link List After Tail Insertion is : ";
    // printLL(newHead);
    // cout<<endl;

    //Inserting at Value
    int element;
    int val;
    cout<<"Enter the element to be inserted : ";
    cin>>element;
    cout<<"Enter the value before at which to be inserted : ";
    cin>>val;
    Node* newHead = insertBeforeValue(head,val,element);
    cout<<endl;
    cout<<"The Link List After Insertion is : ";
    printLL(newHead);
    cout<<endl;


}