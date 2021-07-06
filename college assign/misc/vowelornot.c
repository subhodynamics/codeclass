#include <stdio.h>
int main()
{
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');   //97 to 122
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');   //65 to 90
    if (lowercase_vowel || uppercase_vowel)
    printf("%c is a vowel.", c);
    else
    printf("%c is a consonant.", c);
    return 0;
}