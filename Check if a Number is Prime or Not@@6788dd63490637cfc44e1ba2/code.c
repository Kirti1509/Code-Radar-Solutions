#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(n==2){
        printf("Prime");
    }
    else if(count>0){
        printf("Not Prime");
    }
    else if(count==0){
        printf("Prime");
    }
    return 0;
}