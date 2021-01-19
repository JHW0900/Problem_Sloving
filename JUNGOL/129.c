#include <stdio.h>
#include <string.h>

int main(){
  int base, height;
  char cmd[2];

  while(1){
    printf("Base = "); scanf("%d", &base);
    printf("Height = "); scanf("%d", &height);
    printf("Triangle width = %.1lf\n", base*height/2.0);

    printf("Continue? "); scanf(" %c", &cmd);

    if(!strcmp(cmd,"Y") || !strcmp(cmd,"y")) continue;
    else break;
  }

  return 0;
}