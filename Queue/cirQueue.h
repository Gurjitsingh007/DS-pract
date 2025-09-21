//by me...
#include<iostream>
using namespace std;

template<class x>
class cQueueADT{
    x *arr;
    int front,rear,n,curSize;

    public:
        cQueueADT(int size){
            n=size;
            front=0;
            rear=-1;
            arr=new x[n]; //dynamic array
            curSize=0;
        }

        void enqueue(x data);
        x dequeue();
        bool isEmpty();
        bool isFull();
        void Front();
        void display();

};

template<class x>
void cQueueADT <x>:: enqueue(x data){
    if(!isFull()){
        rear=(rear+1)%n;
        arr[rear]=data;
        curSize++;

    }
    else{
        cout<<"queue is full ";
    }


}


template<class x>
x cQueueADT <x>:: dequeue(){
    if(!isEmpty()){
        x p=arr[front];
        front=(front+1)%n;
        curSize--;

        return p;
    }
    else{
        return -999;
    }


}


template<class x>
bool cQueueADT <x> ::isEmpty(){
    if(curSize==0){
        return true;
    }else{
        return false;
    }
}

template<class x>
bool cQueueADT <x> ::isFull(){
    if(curSize==n){
        return true;
    }else{
        return false;
    }
}

template<class x>
void cQueueADT <x> ::Front(){
    if(!isEmpty()){
    cout<<"Front element is : "<<arr[front]<<endl;}
    else{
        cout<<"queue is empty\n";
    }
}

template<class x>
void cQueueADT <x> ::display(){
    if(!isEmpty()){
    for(int  i=front;i<=rear;i++){
        cout<<arr[i]<<",";
    }cout<<endl;
}else{
    cout<<"queue is full\n";
}
}
