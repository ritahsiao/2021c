#include <stdio.h>
int main()
{
    int n=3;

    while(n>0)
    {
        printf("while(判斷n>0)有進來哦,n:%d\n", n);

        n--;
    }

    printf("最後順利離開while(迴圈),n:%d\n", n);
}
