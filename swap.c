#include <stdio.h>
int main(){
    int a, b, temp;
    printf("enter value of a: (it will be value of b): ");
    scanf("%d",&a);
    printf("enter value of b: (it will be value of a): ");
    scanf("%d",&b);
    temp = a;
    a=b;
    b=temp;
    printf("the value of A=%d\n",a);
    printf("the value of B=%d\n",b);
    return 0;
}
