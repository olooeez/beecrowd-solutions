#include <stdio.h>
#include <string.h>

#define MAX_LEN 20

int main() {
    char subphylum[MAX_LEN], class[MAX_LEN], diet[MAX_LEN];

    scanf("%20s", subphylum);
    scanf("%20s", class);
    scanf("%20s", diet);

    if (!strcmp(subphylum, "vertebrado")) {

        if (!strcmp(class, "ave")) {
            if (!strcmp(diet, "carnivoro")) printf("aguia\n");
            else if (!strcmp(diet, "onivoro")) printf("pomba\n");
        } else if (!strcmp(class, "mamifero")) {
            if (!strcmp(diet, "onivoro")) printf("homem\n");
            else if (!strcmp(diet, "herbivoro")) printf("vaca\n");
        }

    } else if (!strcmp(subphylum, "invertebrado")) {

        if (!strcmp(class, "inseto")) {
            if (!strcmp(diet, "hematofago")) printf("pulga\n");
            else if (!strcmp(diet, "herbivoro")) printf("lagarta\n");
        } else if (!strcmp(class, "anelideo")) {
            if (!strcmp(diet, "hematofago")) printf("sanguessuga\n");
            else if (!strcmp(diet, "onivoro")) printf("minhoca\n");
        }

    }
    
    return 0;
}
