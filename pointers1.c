int main()
{
int a=10,*p;
p=&a;
printf("value of a=%d",a);
printf("address of a=%u",p);
printf("address of p=%u",&p);
printf("value of p=%d",*p);
return 0;	
}
