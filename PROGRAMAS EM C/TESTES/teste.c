#include <stdio.h>
 
int main() {
 
    int i=1,j=60;
    
    for( ;j>=0;j-=5){
        printf("I=%d j=%d\n",i,j);
        i+=3;
    }
 
    return 0;
}