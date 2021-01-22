#include <stdio.h>

int main(){
  int a, b;
  scanf("%d%d", &a, &b);
  
  int cnt = (a>b?a-b:b-a) + 1;
  for(int i = 1; i < 10; i++){
    int n = a;
    for(int j = 0; j < cnt; j++){
      printf("%d * %d = %2d   ", n, i, n*i);
      if(n>b) n--;
      else n++;
    }
    puts("");
  }
  return 0;
}