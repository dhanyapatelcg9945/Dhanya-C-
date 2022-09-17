#include <string>
#include <fstream>
using namespace std;
int main() {
 ifstream input("copy.cpp"); // Open for reading //source
 ofstream output("Scopy2.cpp"); // Open for writing //destination
 string s;
 while(getline(input, s)) // Discards newline char
 output << s << "\n"; // ... must add it back
}
