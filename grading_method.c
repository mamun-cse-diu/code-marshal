#include<stdio.h>
int main()
{
    int n,mark,j=1;
    scanf("%d",&n);
    while(n!=0){
        scanf("%d",&mark);
        if(mark>=0 && mark<=34){
            printf("Student %d: F\n",j);
            j++;
        }
        else if(mark>=35 && mark<=39){
            printf("Student %d: D\n",j);
            j++;
        }
        else if(mark>=40 && mark<=49){
            printf("Student %d: C\n",j);
            j++;
        }
        else if(mark>=50 && mark<=59){
            printf("Student %d: B-\n",j);
            j++;
        }
        else if(mark>=60 && mark<=69){
            printf("Student %d: B+\n",j);
            j++;
        }
        else if(mark>=70 && mark<=79){
            printf("Student %d: A-\n",j);
            j++;
        }
        else if(mark>=80 && mark<=89){
            printf("Student %d: A\n",j);
            j++;
        }
        else if(mark>=90 && mark<=100){
            printf("Student %d: A+\n",j);
            j++;
        }
        n--;
    }
    return 0;
}
