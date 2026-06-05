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
    public:
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


   bool isCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast){
            cout<< " cycle exists \n"<<endl;
            return true;
        }
    }
    cout<< "cycle doesnt exist" << endl;
    return false;
    }


    void removeCycle(Node * head){
         Node* slow = head;
        Node* fast = head;
        bool isCycle = false;
        while(fast != NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow==fast){
            cout<< " cycle exists \n"<<endl;
           isCycle =true;
           break;
        }
    }
    if(!isCycle){
         cout<< " cycle doesnt exists \n"<<endl;
         return;
    }

    slow = head;
    if(slow==fast){
        while(fast->next != slow){   // SPECIAL CASE - tail->head
            fast = fast-> next;
        }
        fast->next=NULL;
}
else{
    Node* prev = fast;
    while(slow!=fast){
        slow = slow->next;
        prev = fast;
        fast = fast->next;
    }
    prev->next = NULL;
}
    }

    
};

int main() {
   List ll;
   ll.push_front(3);
   ll.push_front(2);
   ll.push_front(1);
   ll.push_back(4);
   ll.push_back(5);
   ll.removeCycle(ll.head);
   ll.printList();
   return 0;
  }
