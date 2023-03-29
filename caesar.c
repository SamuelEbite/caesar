#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Check if there are exactly 2 command line arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }

    // Convert the second command line argument (key) to an integer
    int k = atoi(argv[1]);

    // Prompt user for plaintext
    string p = get_string("plaintext: ");

    // Create an array for the ciphertext
    int n = strlen(p);
    char ciphertext[n];

    // Iterate through each character in the plaintext
    for (int i = 0; i < n; i++)
    {
        // Check if the character is alphabetic
        if (isalpha(p[i]))
        {
            // Check if the character is uppercase
            if (isupper(p[i]))
            {
                ciphertext[i] = 65 + (p[i] - 65 + k) % 26;
            }
            // If the character is lowercase
            else
            {
                ciphertext[i] = 97 + (p[i] - 97 + k) % 26;
            }
        }
        // If the character is not alphabetic, add it to the ciphertext as is
        else
        {
            ciphertext[i] = p[i];
        }
    }

    // Print the ciphertext
    printf("ciphertext: %s\n", ciphertext);
    return 0;
}
