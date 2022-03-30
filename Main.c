#include <stdio.h>
#include <string.h>

int is_palindrome(char frase[]);
int is_aplhabetic(char );

char user_input[] = "roma tem amor";
char frase_limpa[] = "";

int main(void)
{

    int index = 0, count=0;
    while (user_input[index])
    {
        if (is_aplhabetic(user_input[index]) > 0)
        {
            frase_limpa[count] = tolower(user_input[index]);
            count++;
        }
        else
        {
            ;
        }
        index++;
    }
    if (is_palindrome(frase_limpa) > 0)
    {
        printf("Palindrome encontrado na frase \"%s\"\nPalindrome: %s", user_input, frase_limpa);
    }
    else
    {
        printf("N�o existe nenhum palindrome na frase introduzida");
    }
}


int is_aplhabetic(char c)
{
    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
        {
        return 1;
        }
    else
    {
        return 0;
    }
}


int is_palindrome(char *frase)
{
    int len = strlen(frase);
    int endIndex = len-1;
    int flag, i;

    for (i=0; i <= len; i++)
    {
        if (frase[i] != frase[len-i-1])
        {
            break;
        }
        endIndex--;
    }
    if (i>= endIndex)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}