#if 0
#include<iostream>
using namespace std;

struct A {
	 void func(int, char, float);
	 void display(int, char, float );
 private:
 int i;
 char j;
 float f;
};
void A::func(int ip, char ch, float fp) {
i=ip;
j=ch;
f=fp;
}
void display(int ip, char ch, float fp) {
	cout<<ip<<ch<<fp<<endl;
void Cstash::cleanup() {
}

struct B {
public: 
int i;
 char j;
 float f;
 void func();
};
void B::func(int ip, char ch, float fp) {
i=ip;
j=ch;
f=fp;
}
void display(int ip, char ch, float fp) {
	cout<<ip<<ch<<fp<<endl;
}

int main() {
 A a; B b;
 a.i = b.i = 1;
 a.j = b.j = 'c';
 a.f = b.f = 3.14159;
 a.func();
 b.func()
} ///:~) 
#end if

