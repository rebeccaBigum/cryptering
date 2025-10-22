Author  : Rebecca bigum (based on exercise)

This program is encrypter/decoder using the vigenere and ceaser method
It was written using modularization, with a module for vigenere and one for ceaser method which both has a decrypt and encrypt part. 
The main.c is the monnand line interface, which calls the other modules. 
The program works for both uppercase and lowercase letters.
It was written for an assignment for 62712 Basic C Programming, Fall 2025

Programkørse eksempel terminal:
gcc -I../include main.c lib1.c lib2.c -o crypto.exe

.\crypto.exe caesar encrypt ABCD
.\crypto.exe caesar decrypt DEFG
.\crypto.exe vigenere encrypt HELLO KEY
.\crypto.exe vigenere decrypt RIJVS KEY
