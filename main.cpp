#include <stdio.h>
#include <cstring>

int slong(char *s1);

int main() {
    char str[] = "ceci est un tableau";

    printf("Entrez une chaine de caractéres : ");
    scanf("%20s", str);
    printf("longueur de %s = %d \n", str, slong(str));
    return 0;
}

int slong(char *s1) {
    return strlen(s1);
}
