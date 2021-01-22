#include <stdio.h>

int main(){
  int n;
  int even = 0, odd = 0;

  for(int i=0; i < 10; i++){
    scanf("%d", &n);
    if(n % 2 == 0) even += 1;
    else odd += 1;
  }
  printf("even : %d\n", even);
  printf("odd : %d\n", odd);
  return 0;
}