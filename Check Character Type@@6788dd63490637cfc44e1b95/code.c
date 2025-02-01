#include <stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(isdigit(ch)){
        printf("Digit");
    }
    else if(isalpha(ch)){
        if(ch == 'a' || ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u' || ch == 'A' || ch =='E' || ch == 'O' || ch == 'U' || ch == 'I'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        printf("Special Character");
    }
    return 0;
}