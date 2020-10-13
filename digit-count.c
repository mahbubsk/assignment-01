#include<stdio.h>
int main(){
    int number, count=0, reminder, result;
    scanf("%d",&number);
    while(number!=0){
        number = number/10;
        result=number/10;
        count++;
        if(number==0){
            break;
        }

    }
    printf("%d\n",count);
    return 0;
}
