#include<iostream>
using namespace std;
void swap(const int &x, int &y)  // constant is added, hence error
 {
     int temp;
     temp = x;
     x = y;
     y = temp;
 }
 int main()
 {
     int a, b;
    
     cout<<"Enter the value of a: ";
     cin>>a;
     cout<<"Enter the value of b: ";
     cin>>b;
     cout<<endl<<"Before swapping: ";
     cout<<"a= "<<a<<" and b= "<<b;
     swap(a, b);
     cout<<endl<<"After swapping: ";
     cout<<"a= "<<a<<" and b= "<<b;

 }
