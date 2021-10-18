// =============================================================
// Assignment II 
// Name: SHIBAM DEBNATH
// Scholar Id; 2012181
// Date 2021-10-15 
// =============================================================

#include<stdio.h>

int main(){

  while(1){
    
    int choice;
    
    printf("Select any choice: \n\t1. Addition \n\t2. Multiplication \n\t3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    
    
    if(choice == 1){
      long int num1, num2;
      printf("Enter two decimal numbers: ");
      scanf("%ld %ld", &num1, &num2);
      long long int sum = num1 + num2;
      printf("The sum is: %lld\n", sum);
    }
    
    else if(choice == 2){
      long int num1, num2;
      printf("Enter two decimal numbers: ");
      scanf("%ld %ld", &num1, &num2);
      long long int product = num1 * num2;
      printf("The product is: %lld\n", product);
    }
    
    else {
      printf("Exiting from the code :D ");
      break;
    }
  }

  return 0;
}