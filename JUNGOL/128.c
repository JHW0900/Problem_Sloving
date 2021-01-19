#include <stdio.h>

int main(){
  int cnt = 0;
  int n;

  while(1){
    scanf("%d", &n);
    if(n == 0) break;
    else if (n % 3 == 0 || n % 5 == 0) cnt--;
    cnt++;
  }

  printf("%d", cnt);

  return 0;
}