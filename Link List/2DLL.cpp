#include<iostream>
#include<vector>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;
        Node* back;

        Node(int data1,Node* next1,Node* back1){
            data = data1;
            next = next1;
            back = back1;
        }

        Node(int data1){
            data = data1;
            next = nullptr;
            back = nullptr;
        }
};

Node* convertTo2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1 ; i<arr.size() ; i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void print2DLL(Node* head){
    if(head == nullptr){
        return;
    }
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* deleteHead(Node* head){
    if(head == nullptr || head->next == nullptr){
        return nullptr;
    }

    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;

    return head;

}

Node* deleteTail(Node* head){
    if(head == nullptr || head->next ==nullptr){
        return nullptr;
    }

    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    temp->next->back = nullptr;
    temp->next = nullptr;
    delete temp->next;

    return head;
}

Node* deleteAtKthPos(Node* head,int pos){
    if(head == nullptr || pos <= 0){
        return nullptr;
    }

    int count = 0;
    Node* temp = head;
    while(temp != nullptr){
        count ++;
        if(count == pos){
            break;
        }
        temp = temp->next;
    }

    Node* front = temp->next;
    Node* prev = temp->back;

    if(front == nullptr && prev == nullptr){
        delete temp;
        return nullptr;
    }

    else if(prev == nullptr){
        deleteHead(head);
        return head;
    }

    else if(front == nullptr){
        deleteTail(head);
        return head;
    }

    else{
        prev->next = front;
        front->back = prev;
        temp->next = nullptr;
        temp->back = nullptr;

        return head;
    }


}

Node* deleteSpecifiedNode(Node* head,int ele){
    if(head == nullptr){
        return nullptr;
    }

    Node* temp = head;
    int flag = 0;
    while(temp != nullptr){
        if(temp->data == ele){
            flag = 1;
            break;
        }
        temp = temp->next;
    }

    if(flag){
        Node* front = temp->next;
        Node* prev = temp->back;
    
        if(front == nullptr && prev == nullptr){
            delete temp;
            return nullptr;
        }
    
        else if(prev == nullptr){
            deleteHead(head);
            return head;
        }
    
        else if(front == nullptr){
            deleteTail(head);
            return head;
        }
    
        else{
            prev->next = front;
            front->back = prev;
            temp->next = nullptr;
            temp->back = nullptr;
    
            return head;
        }
    }
    if(!flag){
        cout<<"Node Not Found!!!"<<endl;
        return nullptr;
    }
}

Node* insertBeforeHead(Node* head,int ele){
    if(head == nullptr){
        return new Node(ele);
    }

    Node* new_node = new Node(ele);
    new_node->next = head;
    head->back = new_node;

    return new_node;
}

Node* insertAfterHead(Node* head, int ele){
    if(head == nullptr){
        return new Node(ele);
    }

    Node* temp = head->next;
    Node* new_node = new Node(ele);
    head->next = new_node;
    new_node->back = head;
    new_node->next = temp;
    temp->back = new_node;

    return head;
}

Node* insertBeforeTail(Node* head,int ele){
    if(head == nullptr){
        return nullptr;
    }

    Node* tail = head;
    while(tail->next != nullptr){
        tail = tail->next;
    }

    Node* prev = tail->back;
    Node* new_node = new Node(ele);
    prev->next = new_node;
    new_node->back = prev;
    new_node->next = tail;
    tail->back = new_node;

    return head;
}

Node* insertAfterTail(Node* head,int ele){
    if(head == nullptr){
        return nullptr;
    }

    Node* tail = head;
    while(tail->next != nullptr){
        tail = tail->next;
    }

    Node* prev = tail->back;
    Node* new_node = new Node(ele);
    tail->next = new_node;
    new_node->back = tail;

    return head;
}



int main(){
    vector<int> arr = {1 , 2 , 3 , 4 , 5};
    cout<<"The Doubly Link List is: ";
    Node* head = convertTo2DLL(arr);
    print2DLL(head);

    cout<<endl;

    //Head Deletion For 2DLL

    // Node* new_list = deleteHead(head); 
    // cout<<"The List After Head Deletion : ";
    // print2DLL(new_list);

    //TailDeletion for 2DLL

    // Node* new_list = deleteTail(head); 
    // cout<<"The List After Tail Deletion : ";
    // print2DLL(new_list);

    //Delete the Kth Node

    // int pos;
    // int ele;
    // cout<<"Enter the node number to be deleted : ";
    // cin>>pos;
    // cout<<endl;
    // Node* new_list = deleteAtKthPos(head,pos);
    // print2DLL(new_list);

    //Delete a node given

    // int ele;
    // cout<<"Enter the node to be deleted : ";
    // cin>>ele;
    // Node* new_list = deleteSpecifiedNode(head,ele);
    // print2DLL(new_list);

    //Insert Before Head
    // int ele;
    // cout<<"Enter the element to be inserted before head : ";
    // cin>>ele;
    // Node* new_list = insertBeforeHead(head,ele);
    // print2DLL(new_list);

    //Insert After Head
    // int ele;
    // cout<<"Enter the element to be inserted after head : ";
    // cin>>ele;
    // Node* new_list = insertAfterHead(head,ele);
    // print2DLL(new_list);


    //Insert Before Tail
    // int ele;
    // cout<<"Enter the element to be inserted before tail : ";
    // cin>>ele;
    // Node* new_list = insertBeforeTail(head,ele);
    // print2DLL(new_list);

    //Insert After Tail
    // int ele;
    // cout<<"Enter the element to be inserted after tail : ";
    // cin>>ele;
    // Node* new_list = insertAfterTail(head,ele);
    // print2DLL(new_list);

    





}