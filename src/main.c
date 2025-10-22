#include <stdio.h>
#include <string.h>
#include "lib1.h"
#include "lib2.h"

/**
 * @file main.c
 * @brief kalder funktionerne for at enkryptere og decode med vigenere.
 *@param argc = antal argumenter skrevet i terminal
  *@param arg[] = selve ordene skrevet i terminalen gennem som string(char array)
 */

int main(int argc, char *argv[]) {

    // Ceaser
    if (strcmp(argv[1], "caesar") == 0) {
        if (strcmp(argv[2], "encrypt") == 0 && argc >= 4)
            caesar_encrypt(argv[3]);
        else if (strcmp(argv[2], "decrypt") == 0 && argc >= 4)
            caesar_decrypt(argv[3]);
        else
            printf("Usage: ./crypto caesar [encrypt|decrypt] TEXT\n");
    }

    //  VIGENERE 
    else if (strcmp(argv[1], "vigenere") == 0) {
        if (strcmp(argv[2], "encrypt") == 0 && argc >= 5)
            vigenere_encrypt(argv[3], argv[4]);
        else if (strcmp(argv[2], "decrypt") == 0 && argc >= 5)
            vigenere_decrypt(argv[3], argv[4]);
        else
            printf("Usage: ./crypto vigenere [encrypt|decrypt] TEXT KEY\n");
    }

    else {
        printf("Invalid cipher. Use 'caesar' or 'vigenere'.\n");
    }

    //ved succesfuldt program
    return 0;
}
