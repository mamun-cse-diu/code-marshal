#include<stdio.h>
int main()
{
    int n,total,i,num[100],sum,ave,j=1;
    scanf("%d",&n);
    while(n!=0){
        scanf("%d",&total);
        sum=0;
        for(i=0; i<total; i++){
            scanf("%d",&num[i]);
            sum=num[i]+sum;
        }
        ave=sum/total;
        printf("Case %d: %d\n",j,ave);
        n--;
        j++;
    }
    return 0;

}
