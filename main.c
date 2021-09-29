#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <math.h>


void get_numbers(const char* msg, float nums[3]) {
    char answer[256];

    printf("%s", msg);
    fgets(answer, sizeof(answer), stdin);

    while (sscanf(answer, "%f %f %f", &nums[0], &nums[1], &nums[2]) != 3) {
        printf("Incorrect input. Try again: ");
        fgets(answer, sizeof(answer), stdin);
    }
}


int main(void) {
    const char* msg = "Enter three numbers: ";
    float nums[3];
    float sum;

    get_numbers(msg, nums);

    sum = nums[0] + nums[1] + nums[2];

    printf("Square root of sum of three numbers = %f", sqrt(sum));

    return 0;
}
