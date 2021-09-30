#include <stdio.h>
#define MAX 4000

void add(char num1[], char num2[], char result[])
{
  int carry = 0;  //initialise caarry with 0
  for (int i = MAX - 1; i >= 0; i--)
  {
    int digit = (num1[i] - '0') + (num2[i] - '0') + carry;  //we are substrcating ascii value of 0 to get actual no
    result[i] = (digit % 10) + '0';  
    carry = digit / 10; //updates the carry after each step
  }
}

void copy2on1(char num1[], char num2[])
{
  for (int i = MAX - 1; i >= 0; i--)
    num1[i] = num2[i];
}

char fibo1[MAX];
char fibo2[MAX];
char result[MAX];

int main()
{

  for (int i = 0; i < MAX; i++)
  {
    fibo1[i] = fibo2[i] = result[i] = '0';
  }
  fibo2[MAX - 1] = '1';

  int n;
  printf("Enter position at which you want thr fibonacci sum : ");
  scanf("%d", &n);

  if (n == 0 || n == 1)
  {
    printf("%c", n + '0');  //prints n if input is either 0 or 1
  }
  else
  {
    for (int i = 2; i <= n; i++)
    {
      add(fibo1, fibo2, result);  //function call
      copy2on1(fibo1, fibo2);       //function call
      copy2on1(fibo2, result);     //function call
    }

    int numStart = 0;
    for (int i = 0; i < MAX; i++)
    {
      if (numStart == 0 && result[i] == '0')
        continue;

      if (numStart == 0 && result[i] != '0')
        numStart = 1;
      printf("%c", result[i]);
    }
    printf("\n");
  }
  return 0;
}
