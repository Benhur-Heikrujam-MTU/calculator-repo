#include<stdio.h>

void main() {

  char option;
  double a, b;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &option);
  printf("Enter two operands: ");
  scanf("%lf %lf", &a, &b);

  switch (option) {
    case '+': //adding two numbers
      printf("%.1lf + %.1lf = %.1lf", a, b, a+b);
      break;
    case '-': //subtracting two numbers
      printf("%.1lf - %.1lf = %.1lf", a, b, a-b);
      break;
    case '*': ///multiplying two numbers
      printf("%.1lf * %.1lf = %.1lf", a, b, a*b);
      break;
    case '/': //dividing two numbers
      printf("%.1lf / %.1lf = %.1lf", a, b, a/b);
      break;
    default: //when the option is not an arithmetic operation
      printf("Error! The option is invalid");
  }

}

