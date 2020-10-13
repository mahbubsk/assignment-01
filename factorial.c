#include<stdio.h>

int main(){
    int number, fac=1, i;
    printf("Enter a range(factorial): ");
    scanf("%d",&number);
    for(i=number; i>0; i--){
        fac *=i;
    }
    printf("factorial of %d = %d\n",number,fac);
    
    return 0;
}
