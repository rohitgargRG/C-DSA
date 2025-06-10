#include <bits/stdc++.h>
using namespace std;

// node structure of a DLL
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data,Node* next,Node* back){
        this->data = data;
        this->next = next;
        this->back = back;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->back = NULL;
    }
};

// print DLL
void printDLL(Node* head){
    if(head == NULL) return;

    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

// find length of LL
int findLen(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        temp = temp -> next;
    }

    return cnt;
}

// convert array to DLL
Node* array_to_DLL(vector<int> arr){
    int n = arr.size();
    if(n == 0) return NULL;
    Node* head = new Node(arr[0]);
    if(n == 1) return head;
    Node* prev = head;

    // start iterating
    for(int i = 1 ; i < n; i++){
        Node* newNode = new Node(arr[i]);

        prev -> next = newNode;
        newNode -> back = prev;
        prev = prev->next;
    }

    return head;
}

// Deletion 

// delete head -> TC - O(1)
Node* deleteHead(Node* head){
    // edge cases
    if(head == NULL || head -> next == NULL) return NULL;

    Node* prev = head;
    head = head -> next;
    prev->next = NULL;
    head->back = NULL;
    free(prev);
    return head;
}

// deleteTail -> O(n)
Node* deleteTail(Node* head){
    //edge case
    if(head == NULL || head -> next == NULL) return NULL;

    Node* tail = head;

    while(tail->next != NULL){
        tail = tail -> next;
    }

    Node* prev = tail->back;
    prev->next = NULL;
    tail->back = NULL;
    free(tail);
    return head;
}

// DeleteKth -> O(n)
Node* deleteKth(Node* head , int k){
    // edge case
    if(k == 1) return deleteHead(head);

    // k <= no of nodes
    if(head == NULL || head -> next == NULL) return NULL;

    // reach till kth node
    int cnt = 1;
    Node* curr = head;
    while(curr != NULL && cnt != k){
        curr = curr -> next;
        cnt++;
    }

    if(cnt != k) return head;

    Node* prev = curr->back;

    prev->next = curr->next;
    if(curr->next != NULL) curr->next->back = prev;
    curr->next = NULL;
    curr->back = NULL;
    return head;
}

// insertion

// insert at head -> TC = O(1)

Node* insert_head(Node* head , int val){
    Node* newNode = new Node(val);

    if(head == NULL) return newNode;

    newNode->next = head;
    head->back = newNode;
    head = newNode;
    return head;
}

// insert at tail
Node* insert_tail(Node* head , int val){
    Node* newNode = new Node(val);

    // edge case
    if(head == NULL) return newNode;

    // reach till tail
    Node* tail = head;
    while(tail -> next != NULL){
        tail = tail -> next;
    }

    tail->next = newNode;
    newNode->back = tail;
    tail = newNode;  // not necessary

    return head;
}


// insert at kth posn -> O(n)
Node* insert_kth(Node* head , int val , int k){
    Node* newNode = new Node(val);

    // edge case
    if(head == NULL) return newNode;
    if(k == 1) return insert_head(head,val);
    if(k > findLen(head)) return insert_tail(head,val);

    // reach till kth posn
    Node* curr = head;
    int cnt = 1;

    while(curr != NULL && cnt != k){
        cnt++;
        curr = curr -> next;
    }

    Node* prev = curr->back;

    prev->next = newNode;
    newNode->back = prev;
    newNode->next = curr;
    curr->back = newNode;

    return head;
}

int main() {

    vector<int> arr = {10,20,30,40,50};
    Node* head = array_to_DLL(arr);
    printDLL(head);

    // delete

    // delete head
    head = deleteHead(head);
    printDLL(head);

    // delete tail
    head = deleteTail(head);
    printDLL(head);

    // deleteKth
    head = deleteKth(head , 20);
    printDLL(head);

    // insertion

    // insert at head
    head = insert_head(head , 100);
    printDLL(head);

    // insert at tail
    head = insert_tail(head , 1000);
    printDLL(head);

    // insert at kth
    head = insert_kth(head , 2000 , 5);
    printDLL(head);
    return 0;
}