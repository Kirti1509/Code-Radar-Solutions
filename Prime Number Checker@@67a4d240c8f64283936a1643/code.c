#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int el;
    int isPrime = 1;
    for(int i=0;i<n;i++){
        scanf("%d",&el);
        for(int i=2;i<el;i++){
            if(el%i==0){
                isPrime = 0;
            }
        }
        printf("%d",isPrime);
    }
    return 0;
}