#include<stdio.h>
int reverse(int n)
{
	int rev=0,r;
	while(n)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	return rev;
}
void main()
{
	int a;
	scanf("%d",&a);
	if(a==reverse(a))
	printf("Palindrome");
	else
	printf("Not a palindrome");
}
