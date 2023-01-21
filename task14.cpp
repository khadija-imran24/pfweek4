#include<iostream>
using namespace std;
 void total(float amount,string day);
main()
{
  
  float amount;
  string day;
  cout<<"enter total purchase amount:" ;
  cin>>amount;
  cout<<"enter day:" ;
  cin>>day;
  total( amount, day);
}
 void total(float amount,string day)
 {
    float payable;
  if (day=="sunday")  
  {
    payable=amount-(amount*0.10);
    cout<<"the amount is:"<<payable;
  }
   if (day!="sunday" )  
  {
    payable=amount;
    cout<<"the amount is:"<<payable;
  }
  
}
