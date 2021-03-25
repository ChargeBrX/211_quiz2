#include <stdio.h>
int main()
{
    int n,i,j,x=0,t,z,b=1;

    scanf("%d",&n);

    int a[n];

    a[0] = 1;

    for(i=2,t=1;t<n;i++)
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
    for(i=0;i<n;i++)
    {
        if(n==a[i])
        {
            printf("%d",i+1);
            b = 1;
            break;
        }
        else
        {
            b = 0;
        }
    }
    if(b == 0)
    {
        printf("Not Cube Free");
    }

}
