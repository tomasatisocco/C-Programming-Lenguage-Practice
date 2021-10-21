#include <stdio.h>

void main(){
    int lengths[100];
    int character, i, j, wordnum;

    wordnum = 0;

    for ( i = 0; i < 10; i++){
        lengths[i] = 0;
    }
    

    while ((character = getchar()) != EOF){

        if (character == '\n' || character == '\t' || character == ' ' )
            wordnum++;
        else
            ++lengths[wordnum];
    }

    for ( i = 0; i < 10; i++){
        if (lengths[i] == 0)
        {
            break;
        }
        
        for ( j = 0; j < lengths[i]; j++)
        {
            printf("-");
        }
        printf("%d\n",lengths[i]);
    }
    return 0;
}