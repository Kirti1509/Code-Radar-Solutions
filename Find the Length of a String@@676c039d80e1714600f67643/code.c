#include <stdio.h>

int main(){
    int count = 0;
    char ch = 0;
    while(ch!='\n'){
        scanf("%c",&ch); 
        if(ch=='\n'){
            break;
        } 
        count++;                                                                                                     
    }
    printf("%d",count);
    return 0;
}