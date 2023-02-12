#include <stdio.h>
int main()
{
    int a,d,c,sum,b;
    scanf("%d",&a);
    b=1;
    while(b<=a)
    {
        scanf("%d",&c);
        sum=0;
        d=0;
        while (d<=c)
        {
            sum+=d;
            d++;
        }
        printf("%d",sum);
        b++;
    }
        return 0;
}