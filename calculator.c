#include<stdio.h>
 
main() {
       float OP1, OP2;
       char caracter;
       
       printf("Introduce first operator:");
       scanf("%f", &OP1);
       printf("Introduce second operator:");
       scanf("%f", &OP2);
       printf("Choose Operation ( + - * / ):");
       fflush(stdin);
       scanf(" %c", &caracter);
       
       switch (caracter){
              case '+': printf("Sum result: %f", OP1+OP2); break;
                   
              case '-': printf("Subtraction result: %f", OP1-OP2); break;
                   
              case '*': printf("Multiplication result: %f", OP1*OP2); break;
                 
              case '/': if(OP2 != 0) printf("Division result: %f", OP1/OP2); break;
               
              default: printf("Invalid Operation");  
       }
       
       getchar();
       
       
}
