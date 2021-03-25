#include <stdio.h>
int main()
{
    int n,i,ans=0,palin,x,a=1,b,tmp;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        a = 1;
        tmp = i;
        palin = 0;
        b = i;
        while(b>9)
        {
            a *= 10;
            b /= 10;
        }
        while(tmp!=0)
        {
            x = tmp%10;
            tmp /= 10;
            palin += x*a;
            a /=10;
        }
        if(i==palin)
        {

            ans++;
        }
    }
    printf("%d",ans);
}
