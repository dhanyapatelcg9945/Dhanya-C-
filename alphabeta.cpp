#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class beta; //needed for frifunc declaration
class alpha
{
private:
int data;
public:
alpha() : data(3) { } //no-arg constructor
alpha(int x)
	{
		data=x;
	}
friend int frifunc(alpha, beta); //friend function
};
////////////////////////////////////////////////////////////////
class beta
{
private:
int data;
public:
beta() : data(7) { } //no-arg constructor
beta(int x)
{
	data=x;
}
friend int frifunc(alpha, beta); //friend function
};
////////////////////////////////////////////////////////////////
int frifunc(alpha a, beta b) //function definition
{
return( a.data + b.data );
}
//--------------------------------------------------------------
int main()
{
alpha aa;
beta bb;
cout << frifunc(aa, bb) << endl; //call the function
return 0;
}
