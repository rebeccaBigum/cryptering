#include <stdio.h>
#include "lib1.h"

#define SHIFT 3  // Caesar shift mængde

// inkrypter med Ceaser 
void caesar_encrypt(const char text[]) {
    printf("Encrypted (Caesar): ");
    for (int i = 0; text[i] != '\0'; i++) {
        // finder bogstav som skal enkrypteres
        char c = text[i];

        if (c+SHIFT >= 'A' && c+SHIFT <= 'Z') {//hvis det er inde for alfabet
            c=c+SHIFT;
        }else{//hvis det skal køre rundt
            c=c+SHIFT+26;
        }
        printf("%c", c);
    }
    printf("\n");
}


// Dekrypt med Caesar 
void caesar_decrypt(const char text[]) {
    printf("Decrypted (Caesar): ");
    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];

        if (c-SHIFT >= 'A' && c-SHIFT <= 'Z') {//hvis det er inde for alfabet
            c=c-SHIFT;
        }else{//hvis det skal køre rundt
            c=c-SHIFT+26;
        }
        printf("%c", c);
    }
    printf("\n");
}
