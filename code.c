#include <stdio.h>
#include <string.h>

int main() {
    char pass[30];
    int length = 0, special = 0;
    
    printf("Enter your password: ");
    scanf("%s", pass);

    int i = 0;
    while (pass[i] != '\0') {

        length++;

        if (pass[i] == '!' || pass[i] == '@' || pass[i] == '#' || pass[i] == '$' || pass[i] == '%' || pass[i] == '&' || pass[i] == '*') 
        {
            special = 1;
        }

        i++;
    }

    printf("Password length: %d\n", length);

    if (length < 6 && special ==0) {
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
