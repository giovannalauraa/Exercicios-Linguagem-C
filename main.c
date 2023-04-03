#include <stdio.h>

int main(void) {
  int num1, num2, num3;

  printf("\nEscreva três números inteiros: ");
  
  printf("\nDigite o número 1: ");
  scanf("%d", &num1);
  
  
  printf("\nDigite o número 2: ");
  scanf("%d", &num2);
  
  
  printf("\nDigite o número 3: ");
  scanf("%d", &num3);

  if(num1 < num2 && num1 < num3){
     if(num2 < num3){
       printf("%d %d %d", num1, num2, num3);
     }else{
       printf("%d %d %d", num1, num3, num2);
     }
  }
    
  
  return 0;
}