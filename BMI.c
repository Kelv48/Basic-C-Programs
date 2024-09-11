#include <stdio.h>

int main() {
    int weight;
    float height;
    float bmi;

    printf("Please enter your weight in kg: ");
    scanf("%d", &weight);

    printf("Please enter your height in m: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("Your BMI is %f\n", bmi);

    if (bmi < 18.5) {
        printf("You are underweight\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("You are normal\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("You are overweight\n");
    } else {
        printf("You are obese\n");
    }

    return 0;
}