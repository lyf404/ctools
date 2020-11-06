#include <stdio.h>
#include <stdlib.h>
#include <max.h>
#include <sum.h>

int main()
{
    int a,b,s,m;
    a=10,b=12;
    s=sum(a,b);
    m=max(a,b);
    printf("%d %d",s,m);
    
    return 0;

}
