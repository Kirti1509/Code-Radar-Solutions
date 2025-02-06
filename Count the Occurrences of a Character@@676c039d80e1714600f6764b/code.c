#include <stdio.h>

int main(){
    int i = 0;
    int count = 0;
    int count_final = 0;
    char ch;
    char letter;
    char array[1000];

    while(letter!='\n'){
        scanf("%c",&letter);
        array[i] = letter;
        count++;
        i++;
    }array[i] = '\n';

    scanf("%c",&ch);

    for(int i=0;i<count;i++){
        if(array[i]== ch){
            count_final++;
        }
    }
    printf("%d",count_final);
    return 0;
}