#include <stdio.h>

int main(){
    int x,y;
    char z;
    scanf("%d%d%c",&x,&y,&z);
    int sum = x+y;
    int minus = x-y;
    int product = x*y;
    int divide = x/y;
    if(z=='+'){
        printf("%d",sum);
    }
    else if(z=='-'){
        printf("%d",minus);
    }
    else if(z=='*'){
        printf("%d",product);
    }
    else if(z=='/'){
        printf("%f",divide);
    }else{
        printf("error");
    }
    return 0;
}