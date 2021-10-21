#include<stdio.h>

int main(){
  int character;
  while ((character = getchar()) != EOF){
    if (character == ' '){
      putchar(0x5C);
      putchar(0x6E);
    } else {
      if (character == '\t'){
        putchar(0x5C);
        putchar(0x74);
      } else {
        putchar(character);
      }
    }
  }
  return 0;
}
