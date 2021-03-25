#include <stdio.h>
int main()
{
    int n,i,j,x=0,t,z;

    scanf("%d",&n);

    int a[n],b[n];
    a[0] = 1;

    for(i=2,t=1;t<n;i++)
    {
        x = 0;
        for(j=2;j<=n;j++)
        {
            if(i%(j*j*j)==0)
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
    }
    for(i=0;i<n;i++)
    {
        if(n==a[i])
        {
            printf("%d",i+1);
            x = 1;
            break;
        }
        else
        {
            x = 0;
        }
    }
    if(x==0)
    {
        printf("Not Cube Free");
    }

    return 0;
}
