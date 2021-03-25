#include <stdio.h>
int main()
{
    int n,i,j,x=0,t,z;

    scanf("%d",&n);

    int a[n],b[n];
    a[0] = 1;

    for(i=2;i<=n+1;i++)
    {
        b[i-2] = i*i*i;
        printf("%d ",b[i-2]);
    }




    return 0;
}
