//circular queue....

#include<iostream>
using namespace std;
template<class T>
class QueueADT{
    int front,rear,n;
    T * arr;
    public:QueueADT(int size){
        n=size;
        arr=new T[n];
        front=rear=-1;
    }
    void enqueue(T el);
    T dequeue();
    bool isempty();
    bool isfull();
    void display();
};

template<class T>
void QueueADT<T>::enqueue(T el){
    if(!isfull()){
        rear=(rear+1)%n;
        arr[rear]=el;
        if(front==-1)front++; //when queue is empty
    }
    else cout<<"overflow error";  //when queue is full
}

template<class T>
T QueueADT<T>::dequeue(){
    if(!isempty()){
        T x=arr[front];
        if(front==rear) front=rear=-1;   //when queue left with one element
        else front=(front+1)%n;
        return x;
    }
    else{cout<<"underflow queue";
        return -999;
    }
}

template<class T >
bool QueueADT<T>:: isempty(){
    if(front==rear==-1)return true;
    else return false;
}

template<class T>
bool QueueADT<T>::isfull(){
    if(front==(rear+1)%n) return true;
    else return false;
}

template<class T>
void QueueADT<T>::display(){
    for(int i=front;;i=(i+1)%n){
        cout<<arr[i]<<" ";
        if(i==rear) break;
    }
}