#include<stdio.h>

int main(){
    int stomach=0, i, apple=20;
    
    for(i=0; i<apple; i++){
        if(stomach==0){
            stomach++;
        } 
        else{
            break;
        }
    }
    printf("stomach = %d\n",stomach);
    
    return 0;
}
