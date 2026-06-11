#include<stdio.h>
int main (){
   int lcm,n1,n2,i;
   printf("Enter any two numbers to check lcm:/n");
   scanf("%d%d",&n1,&n2);
     lcm = (n1>n2) ?n1 : n2;
      
    while(1){

        if(lcm%n1 ==0 && lcm%n2 ==0){

            printf("the Lcm is %d:",lcm);
            break;
        }  
      ++lcm;  
    }
     return 0;

     }

