//find number of vowels, consonant, words, digit from string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[200],ch;

    int vowel, consonant, word, digit, other;
    vowel=consonant=word=digit=other=0;

    printf("Enter a string: ");

    gets(str);

    int i=0;

    while((ch = str[i])!='\0')
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowel++;
        }
        else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
        {
            consonant++;
        }
        else if(ch>='0' && ch<='9')
        {
            digit++;
        }
        else if(ch==' '){
            word++;
        }
        else{
            other++;
        }
        i++;

    }
    word++;

        printf("Vowel = %d\n",vowel);
        printf("Consonant = %d\n",consonant);
        printf("Digits = %d\n",digit);
        printf("Words = %d\n",word);
        printf("Other = %d\n",other);


        getch();

}
