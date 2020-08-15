#include <stdio.h>
// #include <cs50.h>
#include <string.h>
#include <ctype.h>

int countLetter(string text);
int countWord(string text);

int main() 
{
    string text;
    text = get_string("text:  ");
    int letterNum = countLetter(text);
    int wordNum = countWord(text);
    printf("%i\n", letterNum);
    printf("%i\n", wordNum);
    return 0;
}

int countLetter(string text)
{
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            printf("%c", text[i]);
            count++;
        }
    }
    printf("\n");
    return count;
}

int countWord(string text)
{
    int count = 0;
    for (int x = 0; x < strlen(text); x++)
    {
        if (text[i] == 32)    
        {
            count++;
        }
    }
    return count + 1;
}
