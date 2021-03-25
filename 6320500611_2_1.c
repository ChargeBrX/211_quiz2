#include <stdio.h>
int main()
{
    int n,i,j,x=0,t,z;

    scanf("%d",&n);

    int a[n+1];

    a[1] = 1;

    for(i=2,t=2;t<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            z = j*j*j;
            if(i%z==0)
            {
                x = 1;
                break;
            }
        }
        if(x==0)
        {
            a[t] = i;
            t++;
        }
        x=0;
    }
    for(i=1;i<=n;i++)
    {
        if(n==a[i])
        {
            printf("%d",i);
            x = 1;
            break;
        }
        else
        {
            x = 0;
        }
    }
    if(x == 0)
    {
        printf("Not Cube Free");
    }
    return 0;
}
