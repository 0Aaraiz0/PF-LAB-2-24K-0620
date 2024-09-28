#include <stdio.h>

int main() {
    int a;
    char o, e, d;

    printf("Enter Character You Want To Encrypt and then Decrypt: ");
    scanf(" %c", &o);  

    e = o ^ 3;  
    printf("Encrypted Character: %c\n", e);

    printf("Enter 1 to decrypt your character: ");
    scanf("%d", &a);

    if (a == 1) {
         d = e ^ 3;  
        printf("Decrypted Character: %c\n", d);
    } else {
        printf("End.\n");
    }

    return 0;
}
