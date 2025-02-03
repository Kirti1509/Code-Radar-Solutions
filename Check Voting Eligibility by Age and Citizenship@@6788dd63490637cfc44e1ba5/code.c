#include <stdio.h>

int main(){
    int age,val;
    scanf("%d%d",&age,&val);
    if(age>=18 && val ==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
}