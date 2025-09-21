//circular queue....

#include <iostream>
#include "queue.h"
using namespace std;

int main(){
    int size;
    cout << "Enter the size of the queue: ";
    cin >> size;
    
    QueueADT<int> queue(size);
    
    int choice, element;
    
    do{
        cout << "\nMenu: \n";
        cout << "1. enqueue\n";
        cout << "2. dequeue\n";
        cout << "3. Display queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice){
            case 1:
                cout << "Enter element to enqueue: ";
                cin >> element;
                queue.enqueue(element);
                break;
            case 2:
                cout << "dequeued element: " << queue.dequeue() << endl;
                break;

            case 3:
                queue.display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } 
    while(choice != 4);

    return 0;
}
