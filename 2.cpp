#include<bits/stdc++.h>
#include <iostream>
using namespace std;
class BankAccount{
protected:

     int Account_no;
      double Balance;
 public:
  void setDetails();
       void display();

//constructor declaration
      BankAccount(int ac,double bal)
       {
    Account_no=ac;
    Balance=bal;
      }
 };

 void BankAccount::display()
 {
     cout<<"\n\nThe account number is: "<<Account_no<<endl;
     cout<<"The balance is: "<<Balance<<endl;
     cout<<endl;
 }

// get, set method definitions
int main()
{
    int account_num;
    double balance;
    cout<<"Enter the details:"<<endl;
    cout<<"-------------------"<<endl;
    cout<<"Enter the account number"<<endl;
    cin>>account_num;
    cout<<"Enter the balance "<<endl;
    cin>>balance;
    BankAccount b(account_num,balance);
    b.display();
    return 0;
 }
