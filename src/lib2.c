#include <stdio.h>
#include <string.h>
#include "lib2.h"


// enkryptere med vignere 
void vigenere_encrypt(const char text[], const char key[]) {
    printf("Encrypted (Vigenere): ");
    int keyLen = strlen(key); //længde af teksten
    int j = 0; // Nøglebogstavs tal jeg er på

//kører loop for hvert bogstav i teksten og slutter når bogstavet er \n
    for (int i = 0; text[i] != '\0'; i++) {
    //finder bogstav som skal ændres
        char c = text[i];
    // Finder det nøgle bogstav jeg er nået til, og genstager nøglen med % hvis ordet er længere end nøglen
        char k = key[j % keyLen]; 
        int shift = k - 'A';      // Laver det nøgle bogstav om til et shift antal ved at trække binær A fra.
        if (c+shift >= 'A' && c+shift <= 'Z') {//hvis det er inde for alfabet
            c=c+shift;
        }else{//hvis det skal køre rundt
            c=c+shift-26;
        }

        printf("%c", c);
    }
    printf("\n");
}

// dekryptere med vignere 
void vigenere_decrypt(const char text[], const char key[]) {
    printf("Decrypted (Vigenere): ");
    int keyLen = strlen(key); //længde af teksten
    int j = 0; // Nøglebogstavs tal jeg er på

//kører loop for hvert bogstav i teksten og slutter når bogstavet er \n
    for (int i = 0; text[i] != '\0'; i++) {
    //finder bogstav som skal ændres
        char c = text[i];
    // Finder det nøgle bogstav jeg er nået til, og genstager nøglen med % hvis ordet er længere end nøglen
        char k = key[j % keyLen]; 
        int shift = k - 'A';      // Laver det nøgle bogstav om til et shift antal ved at trække binær A fra.
        if (c-shift >= 'A' && c-shift <= 'Z') {//hvis det er inde for alfabet
            c=c-shift;
        }else{//hvis det skal køre rundt
            c=c-shift+26;
        }

        printf("%c", c);
    }
    printf("\n");
}