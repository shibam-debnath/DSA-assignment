// =============================================================
// Assignment II 
// Name: SHIBAM DEBNATH
// Scholar Id; 2012181
// Date 2021-10-15 
// =============================================================


#include<stdio.h>
#include<string.h>



int main(){

  while(1){
    int select;
    
    printf("Select an option : \n1. Addition \n2. Multiplication \n3. Exit\n");
    
   
    scanf("%d",&select);
    if(select == 1){
      char unary_1[100], unary_2[100],temp[100];
      printf("Enter two unary numbers: ");
      scanf("%s %s", unary_1, unary_2);
      strcpy(temp,unary_2);
      strcat(unary_2, unary_1);
        printf("The sum of  %s and %s is : %s\n",unary_1, temp, unary_2);
    }
    else if(select == 2){
      char unary_1[100], unary_2[100];
      printf("Enter two unary numbers: ");
      scanf("%s %s", unary_1, unary_2);
       printf("The product of %s and %s  is: ",unary_1,unary_2);
        for(int i=0; i<strlen(unary_1);i++){
          printf("%s", unary_2);}
        printf("\n");
      

    }
    else {
      printf("Exited.");
      break;
    }
  }

  return 0;
}