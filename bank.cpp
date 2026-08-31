#include<iostream>
#include<string>
using namespace std;
class SavingAccount{
private:
 string name;
 int accountNumber;
 double balance;
 double interestRate;

public:
 SavingAccount(string n,int accNo,double bal,double rate)
{ 
   name=n;
   accountNumber=accNo;
   balance=bal;
   interestRate=rate;
   }
   void deposit(double amount)
   {
    if (amount>0){
    balance=balance+amount;
    cout<<"Deposited:Rs."<<amount<<endl;
    }
   }
  void withdraw(double amount)
  {
  if (amount>0 && amount<=balance){
  balance=balance-amount;
  cout<<"Withdrawn:Rs."<<amount<<endl;
  }
  else{
  cout<<"Insufficient Balance"<<endl;
  }
 }
 void applyInterest(){
 double interest=balance*interestRate/100;
 balance=balance+interest;
 cout<<"Interest Applied:Rs."<<interest<<endl;
 }
 void display(){
 cout<<"\n[Savings Account]"<<endl;
 cout<<"Account Holder:"<<name<<endl;
 cout<<"Account Number:"<<accountNumber<<endl;
 cout<<"Balance:Rs."<<balance<<endl;
 cout<<"Interest Rate:"<<interestRate<<"%"<<endl;
 }
};
class CheckingAccount{
private:
string name;
int accountNumber;
double balance;
double transactionFee;
public:
CheckingAccount(string n,int accNo,double bal,double fee){
 name=n;
 accountNumber=accNo;
 balance=bal;
 transactionFee=fee;
 }
 void deposit(double amount)
 {
  if (amount>0){
  balance=balance+amount;
  cout<<"Deposited:Rs."<<amount<<endl;
  }
 }
 void withdraw(double amount)
 {
  double total=amount+transactionFee;
  if (amount>0 && total<=balance){
   balance=balance-total;
   cout<<"Withdrawn:Rs."<<amount<<"(Rs."<<transactionFee<<"fee applied)"<<endl;
   }
  }
  void display(){
   cout<<"\n[Checking Account]"<<endl;
   cout<<"Account Holder:"<<name<<endl;
   cout<<"Account Number:"<<accountNumber<<endl;
   cout<<"Balance:Rs."<<balance<<endl;
   cout<<"Transaction Fee:Rs."<<transactionFee<<endl;
   }
};
  
int main()
{
SavingAccount savings("Ella",1111,5500.0,4.0);
CheckingAccount checking("Max",2222,3000.0,15);

savings.display();
savings.deposit(1000);
savings.withdraw(2000);
savings.applyInterest();
savings.display();

checking.display();
checking.deposit(1500);
checking.withdraw(1000);
checking.display();

return 0;
}
