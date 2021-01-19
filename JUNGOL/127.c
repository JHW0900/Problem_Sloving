#include <stdio.h>

int main(){
  int n;
  double sum = 0, cnt = 0;

  while(1){
    scanf("%d", &n);
    if(n < 0 || n > 100) break;
    sum += n;
    cnt++;
  }

  printf("sum : %d\n", (int)sum);
  printf("avg : %.1lf", sum/cnt);

  return 0;
}