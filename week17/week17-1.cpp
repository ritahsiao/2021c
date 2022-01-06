#include <stdio.h>
int main()
{
    int N=1234567892;

    printf("%d => %d %d \n",N,N/10,N%10);
    N=N/10;
    printf("%d => %d %d \n",N,N/10,N%10);
    N=N/10;
    printf("%d => %d %d \n",N,N/10,N%10);
    N=N/10;
    printf("%d => %d %d \n",N,N/10,N%10);
    N=N/10;
    printf("%d => %d %d \n",N,N/10,N%10);
}


