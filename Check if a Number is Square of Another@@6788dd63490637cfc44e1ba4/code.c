#include <stdio.h>
#include <math.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int val = pow(y,2);
    if(x==val){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}