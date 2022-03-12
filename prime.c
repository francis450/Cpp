#include <stdio.h>
#include <stdbool.h>
int main(){
    int num, i;
    bool flag = false;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i = 2;i <= num/2; ++i){
        if(num%i == 0){
            flag = true;
            break;
        }
    }
    if(num == 0 || num == 1){
        printf("Not a prime numbers");
    }else{
        if(flag == false){
            printf("Its a prime number");
        }else{
            printf("Its not a prime number");
        }
    }
}
