#include<stdio.h>

int main(){
    int number, sum=0, i;
    printf("Enter a range: ");
    scanf("%d",&number);
    for(i=0; i<=number; i++){
        sum+=i;
    }
    printf("sum of 1 to %d = %d\n",number,sum);
    
    // another way
    
    sum = (1+number)*number/2;
    printf("sum of 1 to %d = %d\n",number,sum);
    return 0;
}
