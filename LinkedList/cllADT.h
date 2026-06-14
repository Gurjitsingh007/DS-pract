#include<iostream>
using namespace std;

template<class X>
class Node{
    public:
    X data;
    Node* next;

    Node(X el){
        data=el;
        next=NULL;
    }



};

template<class X>
class CLL_ADT{
    public:
    Node<X>* head;
    Node<X>* tail;

    CLL_ADT(){
        head=NULL;
        tail=NULL;
    }

    void insert( X ele);
    void remove( X ele);
    Node<X>* search(X el);
    void display();


};

template<class X>
void CLL_ADT<X>::insert(X data){         //add in last
    Node<X>* newnode= new Node<X>(data);

    if(head==tail && head==NULL){//empty
        head=tail=newnode;
        tail->next=head;
        return;
    }
    tail->next=newnode;
    tail=newnode;
    tail->next=head;




}

template<class X>
void CLL_ADT<X>::remove(X ele){
    Node<X>* temp=head;

    if(head==tail && head==NULL){
        cout<<"LIST IS EMPTY";
        return;
    }

    if(head->data==ele){ //delete head node

        if(head==tail){//single node
            delete head;
            head=tail=NULL;
            return;
        }
        Node<X>* R=head;
        head=head->next;
        tail->next=head;
        delete R;
        return;
        
    }
   do {
        if (temp->next->data == ele) {
            Node<X>* toDelete = temp->next;
            temp->next = temp->next->next;
            if (toDelete == tail){  // Update tail if last node is deleted
                tail = temp;

            }
            
            delete toDelete;
            return;
        }
        temp = temp->next;
    } while (temp != head);

    cout << "element not found";

    
}

template<class X>
Node<X>* CLL_ADT<X>::search(X ele){
    Node<X>* temp=head;

    if(head==tail && head==NULL){
        return nullptr;
    }
    do{
        if(temp->data==ele){
            return temp;
        }
        temp=temp->next;

    }while(temp!=head);

    return nullptr;



}
template<class X>
void CLL_ADT<X>:: display() {
     Node<X>* temp = head;
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }

       
        cout << "Circular Linked List: ";
        do {
            cout << temp->data << "->";
            temp = temp->next;
        } while (temp != head);
        cout<<"head";
        cout << endl;

        return;
    }




