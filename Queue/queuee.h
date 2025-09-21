// linear queue.... by me...

#include<iostream>
using namespace std;
template <class x>

class queueADT{

    int front,rear,n;
    x *arr;
    public:

    queueADT(int size){
       n=size;
       front=rear=-1;
       arr=new x[n];
    }

    void enqueue(x data);
    x dequeue();
    bool isEmpty();
    bool isFull();
    void Front();
    void display();

 };
template <class x>
void queueADT<x>::enqueue(x el){
    if(!isFull()){
        rear++;
        arr[rear]=el;
        if(front==-1){
            front++;
        }
    }else{
        cout<<"queue overflow";
    }

}

// int queueADT::dequeue(){                     //O(n) time complexity
//     if(!isEmpty()){
//         int x = arr[front];
        
//         for(int i=0;i<rear;i++){  //a[0]<-a[1],a[1]<-a[2]
//             arr[i]=arr[i+1];
//         }

//         if(front==rear){
//             front=rear=-1;
//         }
//         return x;

//     }else{
//         cout<<"queue underflow";
//         return -999;
//     }
// }

template <class x>
x queueADT<x>::dequeue(){      //O(1)
    if(!isEmpty()){
        x X = arr[front];
        front++;
        

        if(front>=rear){
            front=rear=-1;
        }
        return X;

    }else{
        return -999;
    }
}
template<class x>
bool queueADT<x>::isEmpty(){
    if(front==-1){
        return true;

    }else{
        return false;
    }

}
template<class x>
bool queueADT<x>::isFull(){
    if(rear==n-1){
        return true;

    }else{
        return false;
    }

}
template<class x>
void queueADT<x>::Front(){
    if(!isEmpty()){
        cout<<"Front element is : "<<arr[front];
    }
    else{
        cout<<"queue is empty";
    }

}
template<class x>
void queueADT<x>::display(){
    if(!isEmpty()){
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<",";
        }
    }


}
