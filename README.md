# Caesar Cipher

This is a C program that implements the Caesar cipher algorithm for encrypting plaintext. The program takes a single command-line argument, which is the "key" to use for the encryption.

Prerequisites

To run this program, you need to have a C compiler installed on your machine. This program has been tested with the gcc compiler on macOS and Linux.

You will also need to have the cs50 library installed. You can install this library by following the instructions on the CS50 website.

Usage

To use this program, follow these steps:

Open a terminal or command prompt.
Navigate to the directory containing the program files.
Compile the program by running the following command: gcc -o caesar caesar.c -lcs50
Run the program by running the following command: ./caesar k, where k is the number of positions to shift each letter in the plaintext.
For example, to encrypt the message "HELLO" with a key of 3, run the following command:

makefile
Copy code
./caesar 3
plaintext: HELLO
ciphertext: KHOOR
How it works

The Caesar cipher works by shifting each letter in the plaintext k positions down the alphabet. For example, if k is 3, then the letter 'A' would be encrypted as 'D', the letter 'B' would be encrypted as 'E', and so on. The program accomplishes this by adding k to the numeric value of the character in the alphabet (i.e., 'A' = 65, 'B' = 66, etc.), and then taking the result modulo 26 (the number of letters in the alphabet). This ensures that the resulting value is always within the range of valid letters. Finally, the program adds 65 or 97 (depending on whether the original character was uppercase or lowercase) to the result to get the ASCII code for the encrypted letter.

Contributing

If you would like to contribute to this project, please fork the repository and submit a pull request.
