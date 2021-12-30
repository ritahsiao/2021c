#include <stdio.h>
int a[4];
char s[4]="ABC";
char s2[4]={'A','B','C','\0'};

int main()
{
    for(int i=0;i<4;i++)
    {
        printf("字母:%c= 值是%d\n",s[i],s[i]);
        printf("另一陣列:%c= 值是%d\n",s2[i],s2[i]);
    }
    printf("反斜線n的值是:%d\n",'\n');
    printf("反斜線0的值是:%d\n",'\0');
}

