#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    int el;
    for(int i=0;i<n;i++){
        scanf("%d",&el);
        array[i] = el;
    }
    int target;
    getchar();
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(array[i]==target){
            printf("%d",i);
            break;
        }
        else{
            printf("%d",-1);
        }
    }
    return 0;
}