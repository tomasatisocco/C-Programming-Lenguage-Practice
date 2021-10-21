#include <stdio.h>

/*
Ejercicio 1-6 verificacion de !=EOF
Ejercicio 1-7 imprimir el valor de EOF
*/

main(){
  int c;
  c = 0x01;
  int eof;
  eof = EOF;
  if (c == (getchar() != EOF)){
    putchar(0x31);
  } else {
      putchar(0x30);
  }
  printf("\nEl caracter EOF es %d", eof);
  return 0;
}
