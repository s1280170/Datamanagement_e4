#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i;
  int dice;
  int total = 0;
  char name[20];
  
  srand((unsigned) time(NULL));

  printf("What is your name?\n> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  
  printf("Rolling the dice...\n");
  
  for (i = 1; i <= 2 ; i++){
    dice = rand() % 6 + 1;
    printf("Die %d: %d\n",i,dice);
    total += dice;
  }
  printf("Total value: %d\n",total);
  
}
