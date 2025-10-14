#include <stdio.h>
#include <math.h>
#include <time.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif // M_PI

void logOperation(const char* operation, double num1, double num2, double result) {
    FILE* logFile = fopen("log.txt", "a");

    if (logFile == NULL) {
        printf("⚠ Log file could not be opened.\n");
        return;
    }

    time_t currentTime;
    time(&currentTime);
    struct tm* localTime = localtime(&currentTime);


    char timeStr[30];
    strftime(timeStr, sizeof(timeStr), "%d.%m.%Y - %H:%M", localTime);


    fprintf(logFile, "%s | Operation: %s | Input1: %.2lf | Input2: %.2lf | Result: %.2lf\n", timeStr, operation, num1, num2, result);

    fclose(logFile);
}

double getInput(const char* prompt) {
    double value;
    int status;

    while (1) {
        printf("%s", prompt);
        status = scanf("%lf", &value);

        if (status == 1) {
            return value;
        } else {
            printf("Error: Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n');
        }
}
}
int main() {
    int choice;
    double num1, num2, result;

    do {
        printf("\n--- Calculator---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Square Root\n");
        printf("7. Sin\n8. Cos\n9. Tan\n10. Cot\n");
        printf("0. Exit\n");
        printf("Choose an operation: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                num1 = getInput("Enter the first num: ");
                num2 = getInput("Enter the second num: ");
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                logOperation("Addition", num1, num2, result);
                break;
            case 2:
                num1 = getInput("Enter the first num: ");
                num2 = getInput("Enter the second num: ");
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                logOperation("Subtraction", num1, num2, result);
                break;
            case 3:
                num1 = getInput("Enter the first num: ");
                num2 = getInput("Enter the second num: ");
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                logOperation("Multiplication", num1, num2, result);
                break;
            case 4:
                num1 = getInput("Enter the first num: ");
                num2 = getInput("Enter the second num: ");
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                }else {
                   printf("Error: Division by zero is not allowed.\n");
                   logOperation("Division", num1, num2, result);
                }
                break;
            case 5:
                num1 = getInput("Enter the first num: ");
                num2 = getInput("Enter the second num: ");
                result = pow(num1, num2);
                printf("Result: %.2lf\n", result);
                logOperation("Power", num1, num2, result);
                break;
            case 6:
                num1 = getInput("Enter the number: ");
                if (num1 >= 0) {
                    result = sqrt(num1);
                    printf("Result: %.2lf\n", result);
                    logOperation("Square Root", num1, 0.0, result);
                } else {
                    printf("Error: Cannot calculate the square root of a negative number.\n");
                }
                break;
            case 7:
                num1 = getInput("Enter angle in degress: ");
                result = sin(num1 * M_PI /180);
                printf("sin(%.2lf°) = %.4lf\n", num1, result);
                logOperation("Sin", num1, 0.0, result);
                break;
            case 8:
                num1 = getInput("Enter angle in degrees: ");
                result = cos(num1 * M_PI / 180);
                printf("cos(%.2lf°) = %.4lf\n", num1, result);
                logOperation("Cos", num1, 0.0, result);
                break;
            case 9:
                num1 = getInput("Enter angle in degrees: ");
                result = tan(num1 * M_PI / 180);
                printf("tan(%.2lf°) = %.4lf\n", num1, result);
                logOperation("Tan", num1, 0.0, result);
                break;
            case 10: // Cot
                num1 = getInput("Enter angle in degrees: ");
                double tanVal = tan(num1 * M_PI / 180);
                if (tanVal != 0) {
                    result = 1.0 / tanVal;
                    printf("cot(%.2lf°) = %.4lf\n", num1, result);
                    logOperation("Cot", num1, 0.0, result);
                } else {
                    printf("Error: cotangent undefined (tan = 0).\n");
                }
                break;

            case 0:
                printf("Exiting ...\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
                }
    } while (choice != 0);

    return 0;
}
