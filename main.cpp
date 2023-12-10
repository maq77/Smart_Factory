#include <bits/stdc++.h>
#include "smartfactory.h"
//#include "Stack.h"
//#include "Queue.h"
//#include "linkedlist.h"
//#include "factory.h"
using namespace std;

int main()
{
   SmartFactory Smart;
    int n;
do{
    cout<<"\n\t\t\t--[ Smart Factory ]--\n"<<endl;
    cout<<"\t\t\t"<<endl;
    cout<<"\t\t\t1-Add Product"<<endl;
    cout<<"\t\t\t2-Show Products"<<endl;
    cout<<"\t\t\t3-Search Products"<<endl;
    cout<<"\t\t\t4-Delete Products"<<endl;
    cout<<"\t\t\t5-Show Product Sequence"<<endl;
    cout<<"\t\t\t6-Edit Product Sequence"<<endl;
    cout<<"\t\t\t0-Exit"<<endl;

    cout<<"\t\t\t>>>> ";cin>>n;

    switch(n){
case 0:
    {

           exit(0);
           break;
    }
case 1:{
             Smart.addnewproduct();

           break;
}
case 2:{
          Smart.printproducts();

        break;
}
case 3:{
        int ID;
        cout<<"\t\t\tEnter ID : ";
        cin>>ID;
        Smart.search_product(ID);

        break;
}

case 4:
         {


        int ID;
        cout<<"\t\t\tEnter ID : "; cin>>ID;
        Smart.delete_product(ID);

        break;
         }
case 5:
        {

        int ID;
        cout<<"\t\t\tEnter ID : "; cin>>ID;
        Smart.get_product_Sequence(ID);

        break;

         }
case 6:
    {
        int ID;
        cout<<"\t\t\tEnter ID : "; cin>>ID;
        Smart.edit_product_Sequence(ID);



    }

//     default:
  //      break;


    }
    }while(n != 0);
    return 0;
}
