#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    int size;
    cout<<"enter size of stack";
    cin>>size;

    stackADT<int> stack(size); //object creation

    int choice,element;
   do{
   cout<<"\n--menu--\n1. push\n2. pop\n3.isempty\n4.isFull\n5.peektop\n6.display\n7.exit\n";
   cin>>choice;

   switch(choice){
        case 1:{
            cout<<"enter element to push";
            cin>>element;
            stack.push(element);
            break;}
        case 2:{
            int x=stack.pop();
            cout<<"poped element:"<<x;
            break;}
        case 3:{
            if(stack.isEmpty()){
                cout<<"stack is empty";
            }else{
                cout<<"stack is not empty";
            }
            break;
        }
                
        case 4:{
                if(stack.isFull()){
                cout<<"stack is full";
            }else{
                cout<<"stack is not full";
            }
            break;
        }
        case 5:{
                cout<<"top element is :",stack.peektop();
                break;
        }
        case 6:{
            stack.display();
            break;
        }
        case 7:{
            cout<<"exiting....";
            break;
        }
        default:{
            cout<<"invalid choice";
            break;
        }

   }
   }
   while(choice!=7);
    return 0;
   
}