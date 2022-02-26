#include<stdio.h>
float multi(float x,float y)
{
	float z=x*y;
	return z;
}
void main()
{
	float x,y;
	scanf("%f%f",&x,&y);
	float pro=multi(x,y);
	printf("%f",pro);
}
