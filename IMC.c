#include <stdio.h>

float calcul_imc(float poids, float taille) {
    return poids / (taille * taille);
}

void classification_imc(float imc) {
    if (imc < 18.5) {
        printf("Insuffisance pondérale\n");
    } else if (imc < 25) {
        printf("Poids normal\n");
    } else if (imc < 30) {
        printf("Surpoids\n");
    } else {
        printf("obesite\n");
    }
}

int main() {
    float poids, taille;
    
    printf("Entrez votre poids en kilogrammes : ");
    scanf("%f", &poids);
    
    printf("Entrez votre taille en metres : ");
    scanf("%f", &taille);
    
    float imc = calcul_imc(poids, taille);
    
    printf("Votre IMC est de %.2f\n", imc);
    printf("Classification de l'IMC : ");
    classification_imc(imc);
    
    return 0;
}
