#include <stdio.h>
int z = 10;

int main(){
    int x;
    printf("num: ");
    scanf("%d", &x);
    int y = (x >10) ? printf("Greater than 10\n") : printf("Less than 10\n");
    printf("%i\n", y);

    printf("this is global variable %i\n", z);
    return 0;
}
