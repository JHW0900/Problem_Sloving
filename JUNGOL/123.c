#include <stdio.h>

int main(){
  char *words[3] = {"dog", "cat", "chick"};
  int n;
  printf("Number? ");
  scanf("%d",&n);

  if(0 < n && n < 4)
    printf("%s", words[n-1]);
  else
    puts("I don't know.");

  return 0;
}