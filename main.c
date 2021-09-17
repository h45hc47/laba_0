#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE  
#define _CRT_NONSTDC_NO_DEPRECATE


#include <stdio.h>


void get_integer(const char* msg, int nums[3]) {
    char answer[256];
    int a, b, c;

    printf("%s", msg);
    fgets(answer, sizeof(answer), stdin);

    while (sscanf(answer, "%d %d %d", &a, &b, &c) != 3) {
        printf("Incorrect input. Try again: ");
        fgets(answer, sizeof(answer), stdin);
    }

    nums[0] = a;
    nums[1] = b;
    nums[2] = c;
}


int main(void) {
    const char* msg = "Enter three numbers: ";
    int nums[3];

    get_integer(msg, nums);

    printf("Second number - first number = %d", nums[1] - nums[0]);

    return 0;
}