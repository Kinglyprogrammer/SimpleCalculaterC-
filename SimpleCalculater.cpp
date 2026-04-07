#include <iostream>
#include<cstdlib>
using namespace std;
int main(){ 
    int choice;
    double Firstnumber,Secondnumber;
cout<<"Hello sir, I wish u doing great"<<endl;
cout<<"#### NOTICE:First, you have to choose two numbers to calculate"<<endl<<
"Second,choose an arithmetic operation,after that you will get the result"<<endl;
cout<<"**Enetr the first number:"<<endl;
cin>>Firstnumber;
cout<<"**Enetr the second number:"<<endl;
cin>>Secondnumber;
cout<<"1:Addition:'\n'2:Subtraction:'\n'3:Multiplication:'\n'4:division:"<<endl;
cout<<"choose a number to go within : "<<endl;
cin>>choice;
switch (choice){
    case 1:{
cout<<"------ADDITION-------"<<endl;
const double Result=Firstnumber+Secondnumber;
cout<<"   "<<Firstnumber<<"+"<<Secondnumber<<"="<<Result<<endl;
    break;}
    case 2:{
    cout<<"------SUBTRACTION-------"<<endl;
const double Result=Firstnumber-Secondnumber;
cout<<"   "<<Firstnumber<<"-"<<Secondnumber<<"="<<Result<<endl;
    break;}
    case 3:{
    cout<<"------MULTIPLICATION-------"<<endl;
const double Result=Firstnumber*Secondnumber;
cout<<"   "<<Firstnumber<<"*"<<Secondnumber<<"="<<Result<<endl;
    break;}
    case 4:{
    cout<<"------DIVISION-------"<<endl;
const double Result=Firstnumber/Secondnumber;
cout<<"   "<<Firstnumber<<"/"<<Secondnumber<<"="<<Result<<endl;
    break;}
    default:cout<<"Invalid choice!!\n";
}
cin.get(); 
return 0;}