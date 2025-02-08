#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int array[100];
    int el;

    int new_array[100];
    int count = 0;
    for(int i=0;i<n;i++){

        scanf("%d",&el);
        array[i] = el;
    }


    for(int i=0;i<n;i++){
        new_array[i] = array[n-i-1];
    }
    for(int i=0;i<n;i++){
        if(new_array[i] == array[i]){
            count++;
        }
    }
    if(count==n){
        printf("YES");
    }

    else{
        printf("NO");
    }
    return 0;
}