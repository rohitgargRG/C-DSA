#include <bits/stdc++.h>
using namespace std;

// singly LL
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data , Node* next){
        this -> data = data;
        this -> next = next;
    }
};

// convert array to LL
Node* arrayToLL(vector<int>& arr){

    int n = arr.size();
    
    // create head
    Node* head = new Node(arr[0] , NULL);
    Node* temp = head;
    // iterate and fill
    for(int i = 1; i < n; i++){
        Node* newNode = new Node(arr[i],NULL);
        temp->next = newNode;
        temp = temp->next;
    }

    return head;

}

// print LL -> O(n)
void printLL(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

// length of LL -> O(n)
int lengthLL(Node* head){
    Node* temp = head;
    int len = 0;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }

    return len;

}

// search in a LL -> O(n)
bool searchLL(Node* head , int element){
    Node* temp = head;

    while(temp != NULL){
        if(temp -> data == element) return true;
        temp = temp->next;
    }

    return false;
}

// deletion in LL

// deleteHead -> TC - O(1)
Node* deleteHead(Node* head){
    // edge case
    if(head == NULL || head -> next == NULL) return NULL;

    Node* temp = head;
    head = head -> next;
    free(temp);
    return head;
}

// deleTail -> TC -> O(n)
Node* deleteTail(Node* head){
    // edge case
    if(head == NULL || head -> next == NULL) return NULL;

    Node* tail = head;

    while(tail->next->next != NULL){
        tail = tail->next;
    }

    free(tail->next);
    tail -> next = NULL;
    return head;
}

// TC - O(n)
Node* delete_kth(Node* head , int k){

    // edge case
    if(head == NULL || head -> next == NULL){
        return NULL;
    }

    // case 1 - deleting head
    if(k == 1){ // delete head
        return deleteHead(head);
    }

    // case 2 - except head
    Node* prev = NULL;
    Node* curr = head;

    // first reach till kth element
    k--;
    while(k--){
        prev = curr;
        curr= curr->next;
    }

    prev -> next = curr -> next;
    curr->next = NULL;
    free(curr);
    return head;

}

// insertion in LL

// case 1 - insert at head -> O(1)
Node* insertAtHead(Node* head , int ele){
    // edge case
    if(head == NULL){
        return new Node(ele,NULL);
    }

    // create  a new Node
    Node* newNode = new Node(ele,NULL);
    newNode -> next = head;
    head = newNode;
    return head;
}

// case 2 - insert at tail -> TC -> O(n)
Node* insertAtTail(Node* head , int ele){
    // edge case
    if(head == NULL){
        return new Node(ele,NULL);
    }

    // create  a new node
    Node* newNode = new Node(ele,NULL);

    // reach till tail
    Node* tail = head;
    while(tail -> next != NULL){
        tail = tail -> next;
    }

    // now insert new Node at tail
    tail -> next = newNode;
    tail = tail -> next;

    return head;
}

// case 3 - insert at Kth posn -> TC -> O(n)
Node* insert_kth(Node* head , int ele , int k){

    // edge case
    if(head == NULL){
        if(k == 1) return new Node(ele, NULL);
        else return NULL;
    } 

    
    // case 1 - insert at head
    if(k == 1){
        return insertAtHead(head,ele);
    }

    // else case
    Node* temp = head;
    int cnt = 1;
    Node* newNode = new Node(ele,NULL);

    // reach till k
   
    while(temp->next != NULL){
        if(cnt == k-1) break;
        cnt++;
        temp = temp -> next;
    }

    newNode -> next = temp->next;
    temp -> next = newNode;
    
    return head;

}
int main() {

    vector<int> arr = {10,20,30,40,50};

    Node* head = arrayToLL(arr);
    printLL(head);
    cout<<lengthLL(head)<<endl;
    cout<<searchLL(head , 40)<<endl;

    // delete

    head = deleteHead(head);
    printLL(head);

    head = deleteTail(head);
    printLL(head);

    head = delete_kth(head , 2);
    printLL(head);

    // insert in LL

    head = insertAtHead(head , 100);
    printLL(head);

    head = insertAtTail(head , 200);
    printLL(head);

    head = insert_kth(head , 1000,100);
    printLL(head);

    return 0;
}