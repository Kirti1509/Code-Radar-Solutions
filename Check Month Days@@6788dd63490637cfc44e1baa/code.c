#include <stdio.h>

int main(){
    int month;
    scanf("%d",&month);
    switch(month){
        case 1: //jan
        case 3: //march
        case 5: //may
        case 7: //july
        case 8: // august
        case 10: //october
        case 12: //december
        printf("%d",31);
        break;
        case 4: //april
        case 6: //june
        case 9: //sept
        case 11: //november
        printf("%d",30);
        break;
        case 2: //february
        printf("%d",28);
        default: printf("Invalid month");
        return 0;
    }
    return 0;
}