// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    int new_array[100];
    int el;
    for(int i=0;i<n;i++){
        scanf("%d",&el);
        array[i] = el;
    }
    int temp[n];
    int j = 0;
    for(int i=0;i<n;i++){
        int visited = 0;
        for(int k=0;k<j;k++){
            if(array[i] == temp[k]){
                visited = 1;
                break;
            }
        }
        if(!visited){
            temp[j++] = array[i];
        }
    }
    for(int i=0;i<j;i++){
        int count = 0;
        for(int k=0;k<n;k++){
            if(temp[i]==array[k]){
                count++;
            }
        }
        new_array[i] = count;
    }
    int max_value = -999;
    for(int i=0;i<j;i++){
        if(new_array[i]>max_value){
            max_value = new_array[i];
        }
    }
    printf("%d",max_value);
    return 0;
}