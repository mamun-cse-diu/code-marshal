#include<stdio.h>
int main()
{
    long int n,num,a=0,i=0;
    scanf("%ld",&n);
    for(i=n; i>0; i-- ){
        scanf("%ld",&num);
        a= num ^ a;
    }
    printf("%ld\n",a);
return 0;
}
