#include <stdio.h>

#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int count = 0;
    int array[100];
    int el;
    for(int i = 0;i<n;i++){
        scanf("%d",&el);
        array[i] = el;
    }
    int max_value = -999;
    // setting it to a very small negative value as max_value = 0 is not gonna work for -ves
    for(int i =0;i<n;i++){
        if(abs(array[i])%2==0){
            if(array[i]>max_value){
                max_value = array[i];
                count++;
            }
        
        }

    }
        
        if(count>0){
            printf("%d",max_value);
        }
        else{
            printf("%d",-1);
        }
        
    

    return 0;
}