#include <stdio.h>

int main(){
    int x;
    printf("integer: ");
    scanf("%i", &x);
    printf("%i\n", x);
    int *p = &x;
    printf("%p\n", p);

    // switch (x) {
	// 	case 18:
	// 		printf("Eligible for drinking alcohol.\n");
	// 		break;
	// 	case 17:
	// 		printf("Not eligible for drinking alcohol.\n");
	// 		break;
	// 	default:
	// 		printf("Please enter your valid age.\n");
	// }
    return 0;

}
