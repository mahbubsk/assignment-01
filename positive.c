#include <stdio.h>
int main(){
    int number_input;
    printf("enter a value: ");
    scanf("%d",&number_input);
    if(number_input>=0){
        printf("the number %d is positive",number_input);
    } else {
        printf("the number %d is negative",number_input);
    }
    return 0;
}
