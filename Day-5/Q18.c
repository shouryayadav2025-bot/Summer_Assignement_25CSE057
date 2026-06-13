#include<stdio.h>
int main(){
    int n,temp,digit,fact,sum =0,i;
    printf("Enter any number :");
    scanf("%d",&n);

    temp=n;
    while(temp>0){
        digit = temp % 10;
        fact = 1;

    for(i = 1;i <= digit; i++){
        fact = fact * i;
    }
    sum = sum + fact;
    temp = temp/ 10;
    }

    if(sum == n) {
        printf("strong number %d:\n",n);
    }
    else{
        printf("not a strong number%d:\n",n);
    }
    return 0;

}