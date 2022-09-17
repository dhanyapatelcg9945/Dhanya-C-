#include <stdio.h>
struct abc {
	int num;
	char ch;
	float fp;
}__attribute__((packed));
struct abc abc;
int main()
{
printf("%d", sizeof(abc));
}
