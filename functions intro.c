#include<stdio.h>
int add(int a,int b)
{
  int c=a+b;
  return c;	
}
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int sum=add(a,b);
	printf("%d",sum);
}

