#include <stdio.h>

int main(){
  int n;
  int even = 0, odd = 0;

  while(1){
    scanf("%d", &n);

    if(n == 0) break;
    else if(n % 2 == 0) even++;
    else odd++;
  }

  printf("odd : %d\n", odd);
  printf("even : %d", even);

  return 0;
}