#include <stdio.h>
int main(){
    int number_input;
    printf("enter a negative value: ");
    scanf("%d",&number_input);
    number_input *=-1;
    printf("Converted Value: %d\n",number_input);
    return 0;
}
