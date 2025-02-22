#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int el;
    int array[n];
    int new_array[n];
    int j = 0;
    //input the array
    for(int i=0;i<n;i++){
        scanf("%d",&el);
        array[i] = el;
    }
    //remove duplicate elements
    for(int i=0;i<n;i++){
        int visited = 0;
        for(int k=0;k<j;k++){
            if(array[i]==new_array[k]){
                visited = 1;
                break;
            }
        }
        if(!visited){
            new_array[j++] = array[i];
        }
    }
    //to calculate frequency for each element
    for(int i=0;i<j;i++){
        int count = 0;
        for(int k = 0;k<n;k++){
            if(new_array[i]==array[k]){
                count++;
            }
        }
        printf("%d %d\n",new_array[i],count);
    }
    return 0;
}