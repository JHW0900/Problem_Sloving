#include <stdio.h>

int main(){
  int a, b;
  int sum = 0, cnt = 0;

  scanf("%d%d", &a, &b);

  if(a > b){
    int tmp = a;
    a = b;
    b = tmp;
  }

  for(int i = a; i <= b; i++)
    if(i%3==0 || i%5==0){ 
      sum+=i;
      cnt++;
    }

  printf("sum : %d\n", sum);
  printf("avg : %.1f", sum/(double)cnt);
  return 0;
}