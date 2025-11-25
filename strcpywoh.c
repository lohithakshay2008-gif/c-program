#include<stdio.h>
int main()
{
	char S1[20],S2[20],i;
	printf("enter string1 name");
	scanf("%s",&S1);
	for(i=0;S1[i]!='\0';i++)
	{
		S2[i]=S1[i];
	}
	S2[i]='\0';
	printf("original string=%s",S1);
	printf("\n copied string=%s",S2);
	return 0;
}
