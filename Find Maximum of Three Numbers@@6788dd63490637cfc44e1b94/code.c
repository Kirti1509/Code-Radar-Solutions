#include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    (x>y)?((x>z)?(printf(x):printf(z))):((y>z)?(printf(y):printf(z)));
    return 0;
}