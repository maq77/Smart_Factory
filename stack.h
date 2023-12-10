#ifndef STACK_H
#define STACK_H
#include "linkedlist.h"
#include <bits/stdc++.h>
using namespace std;
template <class T>
class Stack : public LinkedList<T>
{
    public:
        int top=-1;
        int size=0;
        Node<T> *head,*tail;
        Stack();
        void push(T data);
        void print() ;
        void pop();

};
////////////////////////////constructor
template <class T>
Stack<T>::Stack(){

}
template <class T>
////////////////////////////// Insertation

void Stack<T>::push(T data) {

        LinkedList<T>::push(data);
        top++;

}

/////////////////////////////////////
template <class T>
void  Stack<T>::print() {

         Node<T> *tmp;
         tmp = tail;
         while(tmp->prev){
            cout<<tmp->data<<endl;
            tmp = tmp->prev;
         }
}
template <class T>
void  Stack<T>::pop(){

         Node<T> *tmp,*newtail;
         tmp = tail;
         newtail = tail->prev;
         delete tmp;
         tail = newtail;

}

#endif // STACK_H
