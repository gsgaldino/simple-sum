#include <stdio.h>

int sum(int number1, int number2) {
  int result = number1 + number2;
  return result;
}

int main() {

  int n1, n2;

  printf("Insert first number: \n");
  scanf("%d", &n1);

  printf("Insert second number: \n");
  scanf("%d", &n2);

  int result = sum(n1, n2);

  printf("The result is: %d\n", result);
  return 0;
}
