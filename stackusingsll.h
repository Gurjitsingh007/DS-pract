#include<iostream>
#include "sll.h"
using namespace std;

template <class T>
class Stack {
private:
    SLL_ADT<T> list;  

public:
    
    void push(T el) {

        list.addtohead(el);
    }


    void pop() {
        
        list.RemovefromHead();
    }

    void Display(){

        list.display();

    }
    bool isEmpty() {
        return list.isempty();
    }

    T top(){
        return list.gethead();
    }
};
