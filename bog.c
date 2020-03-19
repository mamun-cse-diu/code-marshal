#include<stdio.h>
int main()
{
    int n,num1,num2,num3,i=1;
    scanf("%d",&n);
    while(n!=0){
        scanf("%d %d %d",&num1,&num2,&num3);
        if(num1>num2){
            if(num1>num3){
                printf("Case %d: %d\n",i,num1);
            }
            else{
                printf("Case %d: %d\n",i,num3);
            }
        }
        else if(num2>num1){
            if(num2>num3){
                printf("Case %d: %d\n",i,num2);
            }
            else{
                printf("Case %d: %d\n",i,num3);
            }
        }
        else{
            printf("Case %d: %d\n",i,num3);
        }
        i++;
        n--;
    }
    return 0;

}
