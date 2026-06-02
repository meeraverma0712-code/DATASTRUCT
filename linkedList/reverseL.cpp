#include <iostream>
#include <vector>
using namespace std;
   
class Node {
    public:
    int data;
    Node* next;     

public:
    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = NULL;
        tail = NULL;
    }


void push_front(int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = tail = newNode;
    } else{
        newNode->next = head;
        head = newNode;
     }
}


void push_back(int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = tail = newNode;
    } else{
        tail->next = newNode;
        tail = newNode;
     }
}

void printList(){
    Node* temp = head;
    while(temp!= NULL){
        cout << temp->data << " -> ";
        temp = temp-> next;
    }
    cout << "NULL\n" ;
   }
   void insert(int val , int pos){
    Node* newNode = new Node(val);
    Node * temp = head;
    for(int i =0 ; i<pos-1;i++){
        if (temp == NULL){
            cout << "position is INVALID";
            return;
        }
        temp = temp -> next;
    }
     newNode->next = temp-> next;
     temp->next= newNode;
    }
    void pop_front(){
        Node*temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back(){
        Node*temp = head;
        while (temp-> next-> next != NULL){
            temp= temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    int searchItr(int key){
        Node* temp = head ;
        int idx = 0;
        while(temp!= NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp ->next;
            idx++ ;
        }
        return -1;
    }
    
    void reverse(){
    Node * curr = head;
    Node* prev = NULL;
    tail=head;
    while( curr != NULL){
        Node * next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next; 
        }
        head = prev;
    }

    
};

int main(){
   List ll;
   ll.push_front(5);
   ll.push_front(4);
   ll.push_front(3);
   ll.push_front(2);
   ll.push_front(1);
   ll.printList();
   ll.reverse();
   ll.printList();

   return 0;
}