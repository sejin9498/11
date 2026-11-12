#include <stdio.h>


int main(void){
    int i=400;

    int *pi = &i;
    char *pc= (char *)&i;

    printf("%i, %i, %i\n", i, *pi, *pc);

    return 0;
}