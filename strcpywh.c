#include<stdio.h>
int main()
{
	char S1[20], S2[20];
	printf("enter string1 name");
	scanf("%s",&S1);
	strcpy(S2,S1);
	printf("original string=%s",S1);
	printf("\n copied string=%s",S2);
	return 0;
}
