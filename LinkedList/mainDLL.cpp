#include<iostream>
#include"DLLADT.h"
using namespace std;

int main(){
    int choice,element;
    DLL_ADT<int>dll;

    do{
        cout << "\nMenu: \n";
        cout << "1. AddToHead\n";
        cout << "2. AddToTail\n";
        cout << "3. RemoveFromHead\n";
        cout << "4. RemoveFromTail\n";
        cout << "5. Display\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice){
            case 1:{
                cout << "Enter element :";
                cin >> element;
                dll.pushFront(element);
                break;
            }
            case 2:{
                cout << "Enter element :";
                cin >> element;
                dll.pushBack(element);
                break;
            }
            case 3:{

            int data=dll.popFront();
            if(data!=-999){
                cout<<"removed node: "<<data;
                break;

            }
        }
             
            case 4:{
                int data=dll.popBack();
            if(data!=-999){
                cout<<"removed node: "<<data;
                break;
            }


            }
            case 5:{
                dll.display();
                break;

            }
            case 6:{
                cout << "Exiting...\n";
                break;
            }
            default:{
                cout << "Invalid choice. Try again.\n";
            }
        }
    } 
    while(choice != 6);

    return 0;
    }
