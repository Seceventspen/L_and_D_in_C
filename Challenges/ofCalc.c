#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

bool flag = false;

void numGame1() {
    int x, y, sum;
    printf("[!] Adding two numbers\n");
    printf("Type a number: ");
    scanf("%d", &x);
    printf("Type another number: ");
    scanf("%d", &y);
    sum = x + y;
    printf("Sum is: %d\n", sum);
}

void numGame2() {
    int x, y, sub;
    printf("[!] Subtracting two numbers\n");
    printf("Type a number: ");
    scanf("%d", &x);
    printf("Type another number: ");
    scanf("%d", &y);
    sub = x - y;
    printf("Subtraction result is: %d\n", sub);
}

void numGame3() {
    double x, y, prod;
    printf("[!] Multiplication of two numbers\n");
    printf("Type a number: ");
    scanf("%lf", &x);
    printf("Type another number: ");
    scanf("%lf", &y);
    prod = x * y;
    printf("Product is: %lf\n", prod);
}

void numGame4() {
    double x, y, div;
    printf("[!] Division of two numbers\n");
    printf("Type a number: ");
    scanf("%lf", &x);
    printf("Type another number: ");
    scanf("%lf", &y);
    if (y == 0) {
        printf("Error! Division by zero.\n");
        return;
    }
    div = x / y;
    printf("Result of division is: %lf\n", div);
}

static bool neddih() {
    char buffer[64];
    printf("Enter your input: ");
    scanf("%s", buffer);
    printf("Your input: %s\n", buffer);
    printf("\n");
    return (buffer[0] == 'O' && buffer[1] == 'V' && buffer[2] == 'E' && buffer[3] == 'R' && buffer[4] == 'F' && buffer[5] == 'L' && buffer[6] == 'O' && buffer[7] == 'W');
}

void menu() {
    char choice;
    do {
        printf("Would you like to: [a]dd, [s]ubtract, [m]ultiply, [d]ivide, [q]uit or [h]ack\n");
        printf("Choose a, s, m, d, h, or q: ");
        scanf(" %c", &choice);
	printf("\n");

        switch (choice) {
        case 'a':
            numGame1();
            break;
        case 's':
            numGame2();
            break;
        case 'm':
            numGame3();
            break;
        case 'd':
            numGame4();
            break;
        case 'h':
            flag = neddih();
            break;
        case 'q':
            printf("Exiting program...\n");
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    } while (toupper(choice) != 'Q');
}

int main() {
    printf("Hello World!\n");
    printf("This is my first C Program - a simple calculator, or is it!\n\n");
    menu();

    if (flag) {
        printf("Flag obtained: 1337-peepeepoopypants\n");
    }

    return 0;
}
