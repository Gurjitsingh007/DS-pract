//by mee...
#include<iostream>
#include "cirQueue.h"
using namespace std;

int main(){
    int size;
    cout<<"enter size of array : ";
    cin>>size;

    cQueueADT<int> cqueue(size);

    int choice, element;

    do{ cout<<"--menue--\n";
        cout<<"1. enqueue\n";
        cout<<"2. dqueue\n";
        cout<<"3. isEmpty\n";
        cout<<"4. isFull\n";
        cout<<"5. Front\n";
        cout<<"6. display\n";
        cout<<"7. Exit\n";
        cout<<"enter choice : ";

        cin>>choice;

        switch(choice){
            case 1:{       //add
                cout<<"enter element : ";
                cin>>element;

                cqueue.enqueue( element);

                break;

            }
            case 2:{      //remove
                int x= cqueue.dequeue();
                if(x==-999){
                    cout<<"queue is empty\n";
                }
                else{
                    cout<<"removed element : "<<x<<endl;
                }
                break;

            }
            case 3:{  //check empty
                if((cqueue.isEmpty())){
                    cout<<"queue is empty\n";
                }
                else{
                    cout<<"queue is not empty\n";
                }
                break;

            }
            case 4:{ //check full
                 if(cqueue.isFull()){
                    cout<<"queue is Full\n\n";
                }
                else{
                    cout<<"queue is not Full\n\n";
                }
                break;
            }
            case 5:{  //front
                cqueue.Front();
                break;

            }
            case 6:{  //display
                cqueue.display();
                break;

            }
            case 7:{
                cout<<"exiting......";
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
