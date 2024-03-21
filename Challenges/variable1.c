// variable1.c : Have fun ...
// by Seceventspen, a C noob ^_^

#include <stdio.h>
#include <string.h>

int main(void) {

    char phrase[13];
    int auth = 0;

    printf("\n");
    printf("Speak Friend and Enter: \n\n");
    gets(phrase);
    printf("\n");

    if(strcmp(phrase, "friend") == 0)
    {
        printf("[*] Correct Response!\n\n");
        auth = 1;
    }
    else
    {
        printf("[!] Incorrect Response!\n\n");
    }

    if(auth)
    {
        printf("[*] You may pass through the Doors of Durin as a friend (authorised=%d) ^_^\n\n", auth);
    } else {
        printf("[!] You shall not pass (authorised=%d) :(\n\n", auth);
    }

    return 0;
}
