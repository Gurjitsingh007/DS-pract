#include<iostream>
using namespace std;
template<class X>

class stackADT{
    int top,n;
    X *arr;
    public:
        stackADT(int size){
            n=size;
            top=-1;
            arr=new X[n];
    
        }

        void push(X el);
        X pop();
        bool isEmpty();
        bool isFull();
        void peektop();
        void display();
       


};

template <class X>
void stackADT <X>::push(X el){
    if(!isFull()){
        top++;
        arr[top]=el;
    }
    else{
        cout<<"Stack overflow";
    }

}
template <class X>
X stackADT <X> ::pop(){
    X r;
    if(!isEmpty()){
        r=arr[top];
        top--;

    }
    else{
        cout<<"stack underflow";
    }
    return r;
}
template<class X>
bool stackADT<X>::isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}
template <class X>
bool stackADT <X>::isFull(){
    if(top==n-1){
        return true;
    }
    else{
        return false;
    }
}
template <class X>
void stackADT <X>::peektop(){
    if(!isEmpty()){
        cout<<arr[top];
    }
    else{
        cout<<"stack is empty";
    }


}
template <class X>
void stackADT <X>::display(){
    if(!isEmpty()){
        for(int i=0;i<=top;i++)
        {
            cout<<arr[i]<<",";
        }
    }
    else{
        cout<<"stack is empty";
    }

}