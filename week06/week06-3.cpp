#include <stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);

	if(a>c)
	{
		temp=a;
		a=c;
		c=temp;
	}

	if(b>c)
	{
		temp=b;
		b=c;
		c=temp;
	}
	if(a+b<=c)printf("Error");
	else if(a*a+b*b==c*c) printf("ª½¨¤");
	else if(a*a+b*b<c*c) printf("¶w¨¤");
	else if(a*a+b*b>c*c) printf("¾U¨¤");
}
