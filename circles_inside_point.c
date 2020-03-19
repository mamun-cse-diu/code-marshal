#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=1;
    long long int cx,cy,px,py,r,d;
    scanf("%d",&n);
    while(n!=0){
        scanf("%lld %lld %lld %lld %lld",&cx,&cy,&r,&px,&py);
        d=sqrt((pow((cx-px),2)) + (pow((cy-py),2)));
        if(d<r){
            printf("Case %d: yes\n",i);
        }
        else{
           printf("Case %d: no\n",i);
        }
        i++;
        n--;
    }
    return 0;
}
