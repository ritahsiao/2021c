#include <stdio.h>
int a[100][100];
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("\n");

	for(int j=0;j<n;j++)
	{
		for(int i=0;i<n;i++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
