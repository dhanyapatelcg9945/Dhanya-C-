struct A {
	 void func();
 private:
 int i;
 char j;
 float f;
};
void A::func() {
i=10;
j='a';
f=3.5;
}
struct B {
public: 
int i;
 char j;
 float f;
 void func();
};
void B::func() {
i=20;
j='b';
f=4.5;
}
int main() {
 A a; B b;
#if 0
 a.i = b.i = 1;
 a.j = b.j = 'c';
 a.f = b.f = 3.14159;
 a.func();
 b.func();
#endif
} ///:~) 


