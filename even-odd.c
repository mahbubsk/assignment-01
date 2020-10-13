#include<stdio.h>
int main(){
    int number_input;
    printf("enter a value: ");
    scanf("%d",&number_input);
    if(number_input%2==0){
        printf("the number %d is a even number\n",number_input);
    } else if(number_input%2==1){
        printf("the number %d is a odd number\n",number_input);
    }
    return 0;
}
