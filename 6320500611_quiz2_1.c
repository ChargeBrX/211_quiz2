#include <stdio.h>
int main()
{
    int n,i,j,x=0,t;

    scanf("%d",&n);

    int a[n];

    a[0] = 1;

    for(i=2,t=1;t<n;i++)
    {
        for(j=2;j<=i;)
        {
            if(i%j==0)
            {
                x++;
            }
            else
            {
                x = 0;
                j++;
            }
        }
        if(x!=3)
        {
            a[t] = i;
            t++;
        }
        x=0;
    }
    for(i=0;i<n;i++)
    {
         printf("%d ",a[i]);
    }
}
