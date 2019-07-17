#include <stdio.h>
int main()
{
    char name[20];
    double a,m,t,sum;
    scanf("%s", name);
    scanf("%lf",&m);
    scanf("%lf",&t);
    a=t*15/100;
    sum=a+m;
    printf("%s\n", name);
    printf("TOTAL = R$ %.2lf\n",sum);
    return 0;
}
