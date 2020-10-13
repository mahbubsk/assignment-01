#include<stdio.h>

int main(){
    int number, i;
    printf("Enter a base number: ");
    scanf("%d",&number);
    
    
    for(i=1; i<=number; i++){
        if(i%3==0 && i%5==0){
            printf("The number %d is fizz buzz\n",i);
        }
        else if(i%3==0){
            printf("The number %d is fizz\n",i);
        } 
        
        else if(i%5==0){
            printf("The number %d is buzz\n",i);
        } 
        
    }

    
    return 0;
}
