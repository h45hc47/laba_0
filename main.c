#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


void get_numbers(const char* msg, int nums[3]) {
    char answer[256];

    printf("%s", msg);
    fgets(answer, sizeof(answer), stdin);

    while (sscanf(answer, "%d %d %d", &nums[0], &nums[1], &nums[2]) != 3) {
        printf("Incorrect input. Try again: ");
        fgets(answer, sizeof(answer), stdin);
    }
}


int main(void) {
    const char* msg = "Enter three numbers: ";
    int nums[3];

    get_numbers(msg, nums);

    printf("Second number - first number = %d", nums[1] - nums[0]);

    return 0;
}
