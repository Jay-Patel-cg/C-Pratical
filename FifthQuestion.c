#include <stdio.h>

int main(){

    int num1;
    printf("Enter The First Number : ");
    scanf("%d",&num1);

    int num2;
    printf("Enter The First Number : ");
    scanf("%d",&num2);

    int num3;
    printf("Enter The First Number : ");
    scanf("%d",&num3);


    if(num1 > num2 && num1 > num3){
        printf("%d is Largest",num1);
    } else if(num2 > num1 && num2 > num3){
        printf("%d is Largest",num2);
    } else{
        printf("%d is Largest",num3);
    }

    
    return 0;
}