#include<stdio.h>

int main(){
    int number, temp=1, power, i;
    printf("Enter a base number: ");
    scanf("%d",&number);
    printf("Enter a power: ");
    scanf("%d",&power);
    
    for(i=0; i<power; i++){
        temp*=number;
    }
    printf("Power = %d\n",temp);
    
    return 0;
}
