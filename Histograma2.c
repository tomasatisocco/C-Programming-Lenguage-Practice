#include <stdio.h>

void main(){
    int lengths[100];
    int character, i, j, wordnum, maxlenght;

    wordnum = 0;
    maxlenght = 0;

    for ( i = 0; i < 100; i++){
        lengths[i] = 0;
    }
    

    while ((character = getchar()) != EOF){

        if (character == '\n' || character == '\t' || character == ' ' )
            wordnum++;
        else
            ++lengths[wordnum];
    }

    for (i = 0; i < 100; i++){
        if (lengths[i] != 0){
            if (lengths[i] > maxlenght){
                maxlenght = lengths[i];
            }
        } else {
            break;
        }
    }

    for ( i = 0; i < maxlenght; i++){
        for ( j = 0; j < wordnum; j++){
            if(lengths[j] != 0){
                printf(" | ");
                --lengths[j];
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}