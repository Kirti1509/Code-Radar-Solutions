#include<stdio.h>
int main(){
    int n;
    int array[100];
    int new_array[100];
    int temp[100];
    int j = 0;
    int max_value = -999;
    scanf("%d",&n);
    int el;
    for(int i=0;i<n;i++){
        scanf("%d",&el);
        array[i] = el;  //max value
    }
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if(array[i] == array[j]){
                count++;
            }
        }
        new_array[i] = count;
    }
    int m = 1000;
    for(int i=0;i<n;i++){
        if(new_array[i]>max_value){
            max_value = new_array[i];
        }
        if(max_value==new_array[i] && array[i]<m){
            m = array[i];
            }
    }
    printf("%d",m);
    return 0 ;
}