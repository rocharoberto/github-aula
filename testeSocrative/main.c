#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10,b=0;
    if (a>5)
    {
        a=20;
        b=15;
    }
    printf("a=%d,b=%d\n",a,b);
    a=3;b=0;
    if (a>5)
        a=20;
        b=15;
    printf("a=%d,b=%d\n",a,b);

    return 0;
}
