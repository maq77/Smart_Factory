#ifndef SMARTFACTORY_H
#define SMARTFACTORY_H
#include <bits/stdc++.h>
#include "Linkedlist.h"
#include "Stack.h"
#include "Queue.h"
#include "Product.h"

//using namespace std;

class SmartFactory
{
    public:
        Queue<Product> products;
        int prod_size = 0;
        SmartFactory(){}
        void  addnewproduct(){
         char ch;
         do{
         cout<<"\t\t\t [ New Product ] "<<endl;
         Product p;
         cin>>p;
         p.getSequence();
         products.push(p);
         prod_size++;
         cout<<"\t\t\tProduct [ "<<prod_size<<" ] Added Successfully ! "<<endl;
         cout<<"\t\t\tDo you want to add another Product (y,n) : ";
         cin>>ch;
         }while(ch =='Y' || ch =='y');
        }
        void printproducts(){
          if(!products.is_Empty()){
          products.print();
          }
          else{
            cout<<"\n\t\t\t No Products .... "<<endl;
          }


         }
         void search_product(int ID){
         bool flag=false;
         for(int i=0;i<prod_size;i++){
         if(products.at(i).getID() == ID){
            products.at(i).print_prod();
            flag = true;
            break;
         }
         }
         if(flag){
            cout<<"\t\t\tProduct Matched !"<<endl;
         }
         else{
            cout<<"\t\t\tNo Products Matched !"<<endl;
         }

         }
         Product& return_product(int ID){ ////Optimized Function
         bool flag=false;
         for(int i=0;i<prod_size;i++){
         if(products.at(i).getID() == ID){
            return products.at(i);
            flag = true;
            break;
         }

         }
         if(flag){
            cout<<"\t\t\tProduct Matched !"<<endl;
           }

         else{
            cout<<"\t\t\tNo Products Matched !"<<endl;
         }

         }
         int return_product_index(int ID){ ////Optimized Function --return index
         for(int i=0;i<prod_size;i++){
         if(products.at(i).getID() == ID){
            return i;
            break;
         }
         }
         return 0;
         }
         void delete_product(int ID){
           char ch;
           bool flag=false;
         for(int i=0;i<prod_size;i++){
         if(products.at(i).getID() == ID){
            products.at(i).print_prod();
            flag = true;
            break;
         }
         }
         if(flag){
            cout<<"\t\t\tProduct Matched !"<<endl;
            cout<<"\t\t\tDo You Want to Delete it (y,n): ";cin>> ch;
           if(ch == 'y'|| ch=='Y'){
            int i=return_product_index(ID);
            products.delete_node(i);
            cout<<"\t\t\tDeleted Successfully !"<<endl;
           }
         }
         else{
            cout<<"\t\t\tNo Products Matched !"<<endl;
         }



         }
         void get_product_Sequence(int ID){
           return_product(ID).printSequence_V2();
         }
         void edit_product_Sequence(int ID){
          // Product p = return_product(ID);
           return_product(ID).editSequence();
         }




        };


#endif // SMARTFACTORY_H
