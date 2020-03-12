#include <iostream>
#include <stdio.h>

using namespace std;
struct s_etudiant{
    char nom_etudiant[20];
    char classe_etudiant[10];
    int point[10];
    float reponse_proposee[10];
};
int main()
{
    //objet de la structure
    s_etudiant et1;


    // start using the strtucture

    //declaration des variables
    float valeur1, valeur2, valeurSolution =0.0f;
    char operation = '+';
    float reponse_proposee = 0.0f;

    int nbre_quest;

    printf("BIENVENU AU TEST\n=================\n");

    printf("NOM:\t");
    scanf("%s", et1.nom_etudiant);
    printf("\n\n");

    printf("CLASSE:\t");
    scanf("%s", et1.classe_etudiant);
    printf("\n\n");

    nbre_quest = 0;

    do{
        printf("\n\nChoisir l'operation voulue:\n \t+ pour l'addition \n\t- pour la soustraction \n\t* pour la multiplication\n\t/ pour la division\n\n\t");

        scanf("%c", &operation);

        switch(operation)
        {
            case '+':
                printf("\nsaisir la premiere valeur:  ");
                scanf("%f",&valeur1);

                printf("\nsaisir la seconde valeur:  ");
                scanf("%f", &valeur2);

                printf("\nProposer une reponse:  ");
                scanf("%f", &et1.reponse_proposee[nbre_quest]);

                //calcul et test
                valeurSolution = valeur1+valeur2;
                if(et1.reponse_proposee[nbre_quest] == valeurSolution){
                    et1.point[nbre_quest] = 5;
                    printf("\nC O R R E C T\n\n");
                }
                else{
                    et1.point[nbre_quest] = 0;
                    printf("\nO O O O O O O O O O O O O  O\n\n");
                }

                nbre_quest ++;

                break;

            case '-':
                printf("\nsaisir la premiere valeur:  ");
                scanf("%f",&valeur1);

                printf("\nsaisir la seconde valeur:  ");
                scanf("%f", &valeur2);

                printf("\nProposer une reponse:  ");
                scanf("%f", &et1.reponse_proposee[nbre_quest]);

                //calcul et test
                valeurSolution = valeur1-valeur2;
                if(et1.reponse_proposee[nbre_quest] == valeurSolution){
                    et1.point[nbre_quest] = 5;
                    printf("\nC O R R E C T\n\n");
                }
                else{
                    et1.point[nbre_quest] = 0;
                    printf("\nO O O O O O O O O O O O O  O\n\n");
                }

                nbre_quest ++;

                break;

            case '*':
                printf("\nsaisir la premiere valeur:  ");
                scanf("%f",&valeur1);

                printf("\nsaisir la seconde valeur:  ");
                scanf("%f", &valeur2);

                printf("\nProposer une reponse:  ");
                scanf("%f", &et1.reponse_proposee[nbre_quest]);

                //calcul et test
                valeurSolution = valeur1*valeur2;
                if(et1.reponse_proposee[nbre_quest] == valeurSolution){
                    et1.point[nbre_quest] = 5;
                    printf("\nC O R R E C T\n\n");
                }
                else{
                    et1.point[nbre_quest] = 0;
                    printf("\nO O O O O O O O O O O O O  O\n\n");
                }

                nbre_quest ++;

                break;
            case '/':
                printf("\nsaisir la premiere valeur:  ");
                scanf("%f",&valeur1);

                printf("\nsaisir la seconde valeur:  ");
                scanf("%f", &valeur2);

                printf("\nProposer une reponse:  ");
                scanf("%f", &et1.reponse_proposee[nbre_quest]);

                //calcul et test
                valeurSolution = valeur1/valeur2;
                if(et1.reponse_proposee[nbre_quest] == valeurSolution){
                    et1.point[nbre_quest] = 5;
                    printf("\nC O R R E C T\n\n");
                }
                else{
                    et1.point[nbre_quest] = 0;
                    printf("\nO O O O O O O O O O O O O  O\n\n");
                }

                nbre_quest ++;

                break;
        }



    }while(nbre_quest < 10);

    printf("\nP R O C L A M M A T I O N \n=========================\n\n");

    int resultat = et1.point[0]+et1.point[1]+et1.point[2]+et1.point[3]+et1.point[4]+et1.point[5]+et1.point[6]+et1.point[7]+et1.point[8]+et1.point[9];


    printf("\nVous avez obtenu %i / 50", resultat);

    printf("\nF     I     N \n==================\n");

    return 0;
}
