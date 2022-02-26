#include<stdio.h>
int main()
{
	inc();//function call
	inc();
	inc();
}
inc()//function definition
{
    register	int a=10;
	a=a+1;
	printf("%d\n",a);
}
