#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[100];
    int target;
    int count = 0;
    int el;
    int digit;
    for(int i=0;i<n;i++){
        scanf("%d",&el);
        array[i] = el;
    }
    getchar();
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(array[i]==target){
            digit = i;
            count++;
            break;
        }
    }
    if(count>0){
        printf("%d",digit);
    }
    else{
        printf("%d",-1);
    }
    return 0;
}