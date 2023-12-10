#ifndef QUEUE_H
#define QUEUE_H
#include "linkedlist.h"
#include <bits/stdc++.h>
using namespace std;
template <class T>
class Queue : public LinkedList<T>
{
    public:
        int top=-1;
        int size_=0;
        Node<T> *head,*tail;
        Queue();
       // void push(T data);
       // void print();
        //void pop();
        T& getfirst();


};
////////////////////////////constructor
template <class T>
Queue<T>::Queue(){

}
/*
template <class T>
////////////////////////////// Insertation
void Queue<T>::push(T data){

        Node<T> *tmp = new Node<T>(data);
        tmp->data = data;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
        size_++;

}
/////////////////////////////////////

template <class T>
void  Queue<T>::print(){

         Node<T> *tmp;
         tmp = head;
         while(tmp){
            cout<<tmp->data<<endl;
            tmp = tmp->next;
         }
}

template <class T>
void  Queue<T>::pop(){

         Node<T> *tmp,*newtail;
         tmp = tail;
         newtail = tail->prev;
         tail = newtail;
        // tail->next = nullptr;
         delete tmp;
         size_--;

}
*/
template <class T>
T& Queue<T>::getfirst(){
return head->data;

}

#endif // QUEUE_H
