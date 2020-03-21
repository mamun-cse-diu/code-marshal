#include<stdio.h>
int main()
{
    int j=1;
    long long int n,resl,num1,num2;
    char oparetor;
    scanf("%lld",&n);
    while(n!=0){
        scanf("%lld %lld %c",&num1,&num2,&oparetor);
        if(oparetor=='+'){
            resl=num1+num2;
        }
        else if(oparetor=='-'){
            resl=num1-num2;
        }
        else if(oparetor=='*'){
            resl=num1*num2;
        }
        else if(oparetor=='%'){
            resl=num1%num2;
        }
        else if(oparetor=='/'){
            resl=num1/num2;
        }
        printf("Case %d: %lld\n",j,resl);
        j++;
        n--;
    }
    return 0;
}
