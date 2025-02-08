#include <stdio.h>

int main(){
    int input[2];
    int array[100];
    int count =0;
    int el;
    for(int i=0;i<2;i++){
        scanf("%d",&el);
        input[i] = el;
    }
    for(int i=0;i<input[0];i++){
        scanf("%d",&el);
        array[i] = el;
    }

    for(int i=0;i<input[0];i++){
        if(array[i]>input[1]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}