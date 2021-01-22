#include <stdio.h>

int main(){
  int n;
  int tmp, avg = 0;
  scanf("%d", &n);

  for (int i=0;i<n;i++){
    scanf("%d", &tmp);
    avg += tmp;
  }
  
  printf("%.2f", avg/(double)n);
  return 0;
}