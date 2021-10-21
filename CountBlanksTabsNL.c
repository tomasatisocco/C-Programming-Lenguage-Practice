#include <stdio.h>

int main(){
  int character;
  int countBlank = 0;
  int countTab = 0;
  int countNL = 0;
  while ((character = getchar()) != EOF){
    if (character == ' '){
      countBlank++;
    }
    if (character == '\n'){
      countNL++;
    }
    if (character == '\t'){
      countTab++;
    }
  }
  printf("\n There are %d Blank Sapeces %d Tabs, and %d New Lines in the file", countBlank, countTab, countNL);
  return 0;
}
