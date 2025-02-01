#include <stdio.h>

int main(){
    int costPrice,sellPrice;
    scanf("%d%d",&costPrice,&sellPrice);
    if(costPrice-sellPrice<0){
        printf("Profit");
    }else{printf("Loss");}
    return 0;
}