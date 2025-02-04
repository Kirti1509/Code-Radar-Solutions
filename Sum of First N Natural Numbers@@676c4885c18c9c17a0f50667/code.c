#include <stdio.h>

int main(){
    int N;
    int sum;
    scanf("%d",&N);
    for(int i=0;i<=N;i++){
        sum+=i;
    }
    printf("%d",sum);
    
    return 0;
}