#include <stdio.h>

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if(x*y>=0){
        printf("False");
    }
    else{
        printf("True");
    }
    return 0;
}