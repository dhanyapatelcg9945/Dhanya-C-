#include<iostream>
using namespace std;
class A {




	public:
void func(int,char,float);
void display();
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



void B::func(int ip,char ch,float fp) {
i=ip;
j=ch;
f=fp;
}
int main() {
A a; B b;
#if 0
a.i = b.i = 1;
a.j = b.j = 'c';
a.f = b.f = 3.14159;
#endif
a.func(2,'a',1.1);
a.display();
b.func(3,'b',2.2);
}

