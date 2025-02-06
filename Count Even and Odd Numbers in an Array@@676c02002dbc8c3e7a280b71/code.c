#include <stdio.h>

int main(){
    int n;
    int array[1000];
    scanf("%d",&n);
    int count1 = 0;
    int count2 = 0;
    int ch;
    int i = 0;
    while(i<n){
        scanf("%d",&ch);
        array[i] = ch;
        if(array[i]%2==0){
            count1++;
        }else{
            count2++;
        }
        i++;
    }
    printf("%d %d",count1, count2);
    return 0;
}