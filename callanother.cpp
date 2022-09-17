#include <cstdlib>
#include<stdio.h>// Declare "system()"
using namespace std;
int main(int argc ,char *argv[]) {
	char buff[80];
	sprintf(buff,"%s%s%s%s%s","ifconfig"," ",argv[1]," ",argv[2]);
 system(buff);
}
