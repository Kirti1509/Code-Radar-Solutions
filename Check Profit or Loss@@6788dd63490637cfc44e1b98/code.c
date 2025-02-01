#include <stdio.h>

int main(){
    int costPrice,sellPrice;
    scanf("%d%d",&costPrice,&sellPrice);
    if(costPrice-sellPrice<0){
        printf("Profit");
    }else if(costPrice-sellPrice>0){printf("Loss");}
    else{
        printf("No Profit No Loss");
    }
    return 0;
}