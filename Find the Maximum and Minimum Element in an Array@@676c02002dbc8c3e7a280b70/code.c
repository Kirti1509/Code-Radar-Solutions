#include <stdio.h>

int main(){
    int n;
    int el;
    scanf("%d",&n);
    int array[100];
    for(int i=0;i<n;i++){
        scanf("%d",&el);
        array[i] = el;
    }
    int max_val = array[0];
    int min_val = array[0];
    for(int i=0;i<n;i++){
        if(array[i]>max_val){
            max_val = array[i];
        }
        if(array[i]<min_val){
            min_val = array[i];
        }
    }
    printf("%d %d",min_val,max_val);
    return 0;
}