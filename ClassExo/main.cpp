#include <iostream>
#include <stdio.h>

using namespace std;
struct s_etudiant{
    char nom_eleve[20];
    char classe_eleve;
    int point[10];
    float reponse_proposee[10];
};
int main()
{
    //objet de la structure
    nom_eleve promesse;


    // start using the strtucture

    //declaration des variables
    float valeur1, valeur2, valeurSolution =0.0f;
    char operation = '+';
    float reponse_proposee = 0.0f;

    printf("BIENVENU AU TEST\n=================\n");
    printf("\n\nChoisir l'operation voulue:\n \t+ pour l'addition \n\t- pour la soustraction \n\t* pour la multiplication\n\t/ pour la division\n\t");

    scanf("%c", &operation);

    switch(operation)
    {
        case '+':
            printf("saisir la premiere valeur:  ");
            scanf("%f",&valeur1);

            printf("saisir la seconde valeur:  ");
            scanf("%f", &valeur2);

            printf("Proposer une reponse:  ");
            scanf("%f", &reponse_proposee);

            //calcul et test
            valeurSolution = valeur1+valeur2;
            if(reponse_proposee == valeurSolution){
                printf("C O R R E C T");
            }
            else{
                printf("O O O O O O O O O O O O O  O");
            }
            break;
        case '-':
            printf("saisir la premiere valeur:  ");
            scanf("%f",&valeur1);

            printf("saisir la seconde valeur:  ");
            scanf("%f", &valeur2);

            printf("Proposer une reponse:  ");
            scanf("%f", &reponse_proposee);

            //calcul et test
            valeurSolution = valeur1-valeur2;
            if(reponse_proposee == valeurSolution){
                printf("C O R R E C T");
            }
            else{
                printf("O O O O O O O O O O O O O  O");
            }

            break;

        case '*':
            printf("saisir la premiere valeur:  ");
            scanf("%f",&valeur1);

            printf("saisir la seconde valeur:  ");
            scanf("%f", &valeur2);

            printf("Proposer une reponse:  ");
            scanf("%f", &reponse_proposee);

            //calcul et test
            valeurSolution = valeur1*valeur2;
            if(reponse_proposee == valeurSolution){
                printf("C O R R E C T");
            }
            else{
                printf("O O O O O O O O O O O O O  O");
            }

            break;
        case '/':
            printf("saisir la premiere valeur:  ");
            scanf("%f",&valeur1);

            printf("saisir la seconde valeur:  ");
            scanf("%f", &valeur2);

            printf("Proposer une reponse:  ");
            scanf("%f", &reponse_proposee);

            //calcul et test
            valeurSolution = valeur1/valeur2;
            if(reponse_proposee == valeurSolution){
                printf("C O R R E C T");
            }
            else{
                printf("O O O O O O O O O O O O O  O");
            }


            break;
        default: printf("O P E R A T I O N    N O N    R E C O N N U E");
    }

    return 0;
}
