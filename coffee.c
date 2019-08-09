#include <stdio.h>

int main()
{
    int m,x,p,s;
    scanf("%d %d",&x,&p);
    s=x;
    m=100-p;
    while(x!=0)
    {
        x=x*m/100;
        s=s+x;
    }
    printf("%d",s);
    
    return 0;
}
