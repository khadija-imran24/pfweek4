#include<iostream>
using namespace std;
void evenOrOdd(int num);
main()
{
  int num;
  cout<<"enter a number:" ;
  cin>>num;
 evenOrOdd( num);
}
void evenOrOdd(int num)
{
  if (num%2==0)  
  {
    cout<<"even";
  }
  if(num%2!=0)
  {
    cout<<"odd";
  }
}