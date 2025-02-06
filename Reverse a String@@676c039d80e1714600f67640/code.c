#include <stdio.h>

int main(){
    char array[1000];
    char array_new[1000];
    int count = 0;
    int i = 0;
    char ch;
    while(ch!='\n'){
        scanf("%c",&ch);
        array[i] = ch;
        count++;
        i++;
    }array[i]='\n';
    for(int i=0;i<count;i++){
        array_new[i] = array[count-i];
    }
    printf("%c",array_new);
    return 0;
}