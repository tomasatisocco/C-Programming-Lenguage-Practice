#include <stdio.h>

int main(){
  int character;
  int lastCharacter;
  while ((character = getchar()) != EOF){
    if ((character == ' ') && (lastCharacter == ' ')){
      continue;
    } else {
      putchar(character);
    }
    lastCharacter = character;
  }
  return 0;
}
