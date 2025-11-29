#include <stdio.h>
#include <string.h>

int main() {
    char pass[30];
    int length, special = 0;
    

    printf("Enter your password: ");
    scanf("%s", pass);

    length = strlen(pass);

    if (strchr(pass, '!') || strchr(pass, '@') || strchr(pass, '#') ||
        strchr(pass, '$') || strchr(pass, '%') || strchr(pass, '&') || strchr(pass, '*')) {
        special = 1;
    }

    printf("Password length: %d\n", length);

    if (length < 6) {
        printf("Password Strength: WEAK\n");
    }
    else if ((length >= 6 && special == 0) || (length <= 6 && special == 1)) {
        printf("Password Strength: MEDIUM (Add Special Character to make password STRONGER)\n");
    }
    else {
        printf("Password Strength: STRONG\n");
    }

    return 0;
}
