#include <stdio.h>

int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);

int main(int argc, char* argv[])
{
  int number1, number2, result;
  char operator;

  printf("수식을 입력하세요(예> 1 + 2): ");
  scanf("%d %c %d", &number1, &operator, &number2);

  // 다른 커밋이 생겼습니다.
  
  switch (operator)
  {
    case '+':
      c = add(a, b);
      break;

    case '-':
      c = sub(a, b);
      break;

    case '*':
      c = multi(a, b);
      break;

    case '/':
      c = div(a, b);
      break;
  }
}
