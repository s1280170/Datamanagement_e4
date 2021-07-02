#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i;
  int dice;
  int total = 0;
  
  srand((unsigned) time(NULL));
  
  printf("Rolling the dice...\n");
  
  for (i = 1; i <= 2 ; i++){
    dice = rand() % 6 + 1;
    printf("Die %d: %d\n",i,dice);
    total += dice;
  }
  printf("Total value: %d\n",total);
  if(total > 7) printf("%s won!\n",name);
  else printf("%s lost!\n",name);
  
}
