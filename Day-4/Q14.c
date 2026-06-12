#include<stdio.h>
int main(){
    int n1=0,n2=1,n3,num,i;
    printf("Enter term to print:\n");
    scanf("%d",&num);
    if(num<=0){
        printf("invalid input:\n");  
}
    else if(num==1){
        printf("%d:",n1);
    }
    else if(num==2){
        printf("%d:/n",n2);
    }
    else{

        for(i=3;i<=num;i++){
           n3=n1+n2;
           n1=n2;
           n2=n3;         
        }
        printf("%d:\n",n3);
        return 0;
        

}
}