#include <stdio.h>
#include <cstring>

int slong(char *s1);

int main() {
    char str[50];

    printf("Entrez une chaine de caractéres :\n");
    scanf("%20s", str);
    printf("longueur de %s = %d \n", str, slong(str));
    return 0;
}

int slong(char *str_input)
{
    int length = 0;
    while(*str_input != '\0')
    {
        length++;
        str_input++;
    }
    return length;
}