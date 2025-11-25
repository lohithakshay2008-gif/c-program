#include<stdio.h>
int main()
{
	char S[20];
	printf("enter string name");
	gets(S);
	strrev(S);
	printf("reverse string is=%s",S);
	return 0;
}
