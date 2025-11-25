#include<stdio.h>
#include<string.h>
int main()
{
	char S1[20],S2[20];
	printf("enter string1 name");
	scanf("%s",&S1);
	printf("enter string2 name");
	scanf("%s",&S2);
	strcat(S1,S2);
	printf("merge string=%s",S1);
	return 0;
}
