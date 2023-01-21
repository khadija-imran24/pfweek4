#include<iostream>
using namespace std;
main()
{
  
  float amount;
  string day;
  cout<<"enter total purchase amount:" ;
  cin>>amount;
  cout<<"enter day:" ;
  cin>>day;
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
