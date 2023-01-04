#include <stdio.h>

int main(void){
    int i = 1;
    for(int j = 0; j < 10; i++){
        i=i*j;
    }
    print("%d", i);
    printf("Hola");
    return 1;
}
