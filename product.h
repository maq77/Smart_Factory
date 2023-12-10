#ifndef PRODUCT_H
#define PRODUCT_H
#include <bits/stdc++.h>
#include <iostream>

using namespace std;
class Product
{
    private:
        int id;
        string name;
        Queue<string> operations;
        int steps_counter=0;
        friend ostream &operator << (ostream &out,const Product &c);
        friend istream &operator >> (istream  &input, Product &c );


    public:
        Product(int id ,string name)
        {
          id = id;
          name = name;

        }
        Product(){}
        void get_prod(){
        cout<<"\t\t\tEnter Product ID: "; cin>>id;
        cout<<"\t\t\tEnter Product Name: "; cin>>name;

        }
        void print_prod(){
        cout<<"\t\t\tProduct ID: "<<id;
        cout<<"\t\t\tProduct Name: "<<name;
        }
        int getID(){
        return id;
        }
        string getName(){
        return name;
        }
        void getSequence(){
        string operation;
        char ch;
        cout<<"\t\t\tEnter Sequence of steps which the Product undergoes during manufacturing : "<<endl;
        do{
        steps_counter++;
        cout<<"\n\t\t\t Step[ " <<steps_counter<<" ] : "; cin>>operation;
        operations.push(operation);
        cout<<"\t\t\tDo you want to add another steps (y,n) : "; cin>>ch;
        }while(ch == 'y' || ch == 'Y');

        }
        void editSequence(){ ///// Edit Sequence
        int old_steps_counter = steps_counter;
        steps_counter = 0;
        string operation;
        char ch;
        cout<<"\t\t\tEnter Sequence of steps which the Product undergoes during manufacturing : "<<endl;
        do{
        cout<<"\n\t\t\t Step[ " <<steps_counter+1<<" ] : "; cin>>operation;
        operations.push_at(operation,steps_counter++);
        cout<<"\t\t\tDo you want to add another steps (y,n) : "; cin>>ch;
        }while(ch == 'y' || ch == 'Y');
        int dif = old_steps_counter-steps_counter;
        old_steps_counter--;
        while((dif--)>0){
            operations.delete_node(old_steps_counter--);
        }

        }
        void printSequence(){
        cout<<"\t\t\t[ Product Sequence ]"<<endl;
        operations.print();

        }
        void printSequence_V2(){ ///improved function
        cout<<"\t\t\t[ Product Sequence ]"<<endl;
        for(int i=0;i<steps_counter;i++){
        cout<<"\t\t\tStep [ "<<i+1<<" ] ----> "<<operations.at(i)<<endl;
        }

        }



};
std::ostream &operator << (ostream& out,const Product& c)
        {
        out <<"\t\t\tID: "<< c.id << endl;
        out <<"\t\t\tName: "<< c.name << endl;
        return out;
        }

std::istream &operator >> (istream  &input, Product &c ) {
         cout<<"\t\t\tEnter Product ID: "; input>>c.id;
         cout<<"\t\t\tEnter Product Name: "; input>>c.name;
         return input;

        }

#endif // PRODUCT_H
