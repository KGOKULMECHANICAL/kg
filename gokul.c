#include <stdio.h>
int main()
{
    int Low, high, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &Low, &high);

    printf("Prime numbers between %d and %d are: ", Low, high);

    while (Low < high)
    {
        flag = 0;
        for(i = 2; i <= Low/2; ++i)
        {
            if(Low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", Low);
        ++Low;
    }
    return 0;
}
