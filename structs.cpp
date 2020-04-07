
#include <iostream>
#include<cstring>

using namespace std;
struct Customer{
    char name[50];
    int zip;
    char address[50];
    
};

void show(Customer *cust){
    cout<<"Customer Name is "<<cust->name;
    cout<<endl<<"Customer Zip is "<<cust->zip;
    cout<<endl<<"Customer Address is "<<cust->address;
}
int main()
{
   Customer customer;
   strcpy(customer.name,"Sai");
   customer.zip=94587;
   strcpy(customer.address,"1 Hacker Drive");
   show(&customer);

    return 0;
}
