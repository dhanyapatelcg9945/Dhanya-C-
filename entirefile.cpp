#include <string>
#include <iostream>
#include <fstream>
using namespace std;
int main() {
 ifstream in("entirefile.cpp");
 string s, line;
 while(getline(in, line))
 s += line + "\n";
 cout << s;
 string  st1="namespace";
    size_t found = s.find(st1);
    if (found != string::npos)
cout << "First occurrence is " << found << endl;
} 
