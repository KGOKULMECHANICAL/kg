#include <stdio.h>
int main()
{
    int N, i;

    printf("Enter an integer: ");
    scanf("%d",&N);

    for(i=1; i<=10; ++i)
    {
       printf("\n%d",N*i);
    }
}
