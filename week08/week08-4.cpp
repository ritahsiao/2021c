#include <stdio.h>
int main()
{
    int m;
    scanf("%d",&m);

    for(int n=2;n<=m;n++)
    {
        int bad=0;
        for(int i=2;i<n;i++)
        {
            if(n%i==0) bad++;
        }
        if(bad==0) printf("%d ",n);
    }
}
