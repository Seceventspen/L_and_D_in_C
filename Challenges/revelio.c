// revelio.c : Have fun ....
// by Spence, a C noob ^_^

#include <stdio.h>

void revelio() {
    printf("Flag Revealed: 1337-peepeepoopypants\n");
}

void name() {
    char buffer[16]; // Vulnerable buffer

    printf("Enter your input: ");
    scanf("%s", buffer);
    printf("Hello World and Hello, %s\n", buffer);
    printf("\n");
}

int main()
{
    printf("Hello World!\n");
    printf("This is one of my first C Program - a simple 'Hello World' ... or is it!\n");
    printf("\n");
    name();

    return 0;
}
