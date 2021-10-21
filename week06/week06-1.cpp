#include <stdio.h>
int main()
{
    int a=999,b=100;
    int temp;
    printf("a:%d b:%d    temp:%d\n",a,b,temp);

    temp=a;
    printf("a:%d b:%d    temp:%d\n",a,b,temp);

    a=b;
    printf("a:%d b:%d    temp:%d\n",a,b,temp);

    b=temp;
    printf("a:%d b:%d    temp:%d\n",a,b,temp);
}
