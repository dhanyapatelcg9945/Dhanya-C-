#include<iostream>
using namespace std;
struct A {
void func(int,char,float);
void display();
private:
int i;
char j;
float f;
};
void A::func(int ip,char ch,float fp) {
        i=ip;
        j=ch;
        f=fp;
}
void A::display(){
        cout<<"i"<<i <<"j"<<j <<"f"<<f <<endl;}
        struct B {
public:
int i;
char j;
float f;
void func(int,char,float);
};
                     
