#include <stdio.h>
int box(int a,int b)
{
    if(a==0) return b;
    if(b==0) return a;
    return box(b,a%b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    int ans=box(a,b);
    printf("%d",ans);
}
