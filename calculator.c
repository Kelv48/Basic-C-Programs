#include <stdio.h>

int main() {
    int a, b;
    int op;

    printf("Please choose an op by entering one of the following numbers\n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n");
    scanf("%d", &op);

    switch (op) {
        case 1:
            printf("You chose Addition\n");

            printf("Enter the 1st number: ");
            scanf("%d", &a);

            printf("Enter the 2nd number: ");
            scanf("%d", &b);

            printf("The sum of %d and %d is %d\n", a, b, a + b);
            break;
        case 2:
            printf("You chose Subtraction\n");
            
            printf("Enter the 1st number: ");
            scanf("%d", &a);

            printf("Enter the 2nd number: ");
            scanf("%d", &b);

            printf("The difference between %d and %d is %d\n", a, b, a - b);
            break;
        case 3:
            printf("You chose Multiplication\n");
            
            printf("Enter the 1st number: ");
            scanf("%d", &a);

            printf("Enter the 2nd number: ");
            scanf("%d", &b);

            printf("The multiplication of %d and %d is %d\n", a, b, a * b);
            break;
        case 4:
            printf("You chose Division\n");
            printf("Enter the 1st number: ");
            scanf("%d", &a);

            printf("Enter the 2nd number: ");
            scanf("%d", &b);

            printf("The sum of %d and %d is %d\n", a, b, a / b);
            break;
        default:
            printf("Invalid choice\n Additions will be performed by default\n");
            return 1;
    }
}