#include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    (x>y)?((x>z)?(printf("%d",x)):(printf("%d",z))):((y>z)?(printf("%d",y)):(printf("%d",z)));
    return 0;
}