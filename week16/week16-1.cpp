#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i=0;
    while(i<n)
    {
        int k=0;
        while(k<n)
        {
            if(k<n-i-1) printf(" ");
            else printf("*");
            k++;
        }
        int space=n-i-1;
        printf("\n");
        i++;
    }
}
