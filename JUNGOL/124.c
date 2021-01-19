#include <stdio.h>

int main(){
  int month;
  int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  scanf("%d", &month);

  printf("%d", days[month-1]);

  return 0;
}