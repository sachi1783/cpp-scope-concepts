#include<iostream>
using namespace std;

int x=20;       //global variable

int main(){
  
  int x=50;     //local variable
  
  cout<<"local x= "<< x<< endl;
  cout<<"global x= "<<::x<<endl;

  return 0;
}