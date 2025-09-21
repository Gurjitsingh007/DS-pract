//Linear queue..... by me

#include<iostream> 
#include "queuee.h"
using namespace std;
int main(){
    int size;
    cout<<"enter size of queue:";
    cin>>size;

    queueADT<int> queue(size);  // object created

    int choice,element;

    do{
         cout<<"\n--menu--\n1. add\n2. remove\n3.isempty\n4.isFull\n5.Front\n6.display\n7.exit\n";
        cin>>choice;

        switch(choice){
            case 1:{//add
                cout<<"enter element to add:";
                cin>>element;
                queue.enqueue(element);
                break;
            }
             case 2:{//remve
                int x=queue.dequeue();
                if(x==-999){
                    cout<<"queue underflow";
                }
                else{
                     cout<<"removed element is : "<<x;
                }
                break;
            }
             case 3:{ //isEmpty
                if(queue.isEmpty()){
                    cout<<"queue is empty";
                }else{
                    cout<<"queue is not empty";
                }
                break;
            }
             case 4:{ //isFull
                 if(queue.isFull()){
                    cout<<"queue is full";
                }else{
                    cout<<"queue is not full";
                }
                break;
            }
             case 5:{ //Front check
                queue.Front();
                break;
            }
             case 6:{ //display
                
                queue.display();
                break;
            }
             case 7:{
               cout<<"exiting.....";
               break;
            }
            default:{
                cout<<"invalid choice";
                break;

            }
        }

    }while(choice!=7);

return 0;


}