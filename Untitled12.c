#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,r,b;
    printf("enter cartesian co ordinates(x,y)");
    scanf("%d%d",&x,&y);
    printf("\n cartesian co ordinates (%d,%d)",x,y);

    r=sqrt((x)*x)+((y)*y);
    b=atan(y/x);

    printf("\n polar co ordinates (%d,%d)",r,b);
}
