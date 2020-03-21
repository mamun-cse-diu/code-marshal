#include<stdio.h>
#include<math.h>
int main()
{
    int n,j=1;
    double area,a,b,c,s=0;
    scanf("%d",&n);
    while(n!=0){
        scanf("%lf %lf %lf",&a,&b,&c);
        area=0;
         s=.5*(a+b+c);
        area=sqrt(s*(s-a)*(s-b)*(s-c));
         printf("Case %d: %.10lf\n",j,area);
         n--;
         j++;
     }
     return 0;

}
