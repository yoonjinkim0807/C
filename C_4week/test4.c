#include <stdio.h>

int main(void)
{
    int x,y,z;

    scanf("%d %d",&x,&y);

    z=x*(y%10);
    printf("%d",z);
    z=x*(y/10%10);
    printf("%d",z);
    z=x*(y%100);
    printf("%d",z);
    z=x*y;
    printf("%d",z);

return 0;
}