#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
    {
        const int MIN = 0;
        int menuChoice = 0;
        int max = 0;
        int switchMenuChoiceSecurity =0;
        const int EXIT_LOOP =1;
        int nombreChoisi =0;
        int mysteryNumber =0;
        int counter =0;
        int continueToPlay = 1;
        int nombreConti = 0;
        int choixModeJeu =0;


        do {
                srand(time(NULL));
                counter = 0;
                nombreConti = 0 ;
                menuChoice = 0;
                switchMenuChoiceSecurity =0;
                mysteryNumber = 0;
                choixModeJeu = 0;
                printf("Merci de choisir un mode ci-dessous: \n");
                printf("=====Menu====\n");
                printf("1 -- Mode Solo !! \n");
                printf("2 -- Mode MultiJoueur !!\n");
                printf("=====Merci====\n");
                scanf("%d",&choixModeJeu);



                do
                    {
                        printf("Merci de choisir une difficulte dans le menu suivant : \n");
                        printf("=====Menu====\n");
                        printf("1 -- Tres Facile -- Chiffre compris entre 0 et 3 !! \n");
                        printf("2 -- Facile -- Chiffre compris entre 0 et 100 !! \n");
                        printf("3 -- Moyen -- Chiffre compris entre 0 et 1000 !! \n");
                        printf("4 -- Difficile -- Chiffre compris entre 10000 et 5 !! \n");
                        scanf("%d",&menuChoice);
                        switch (menuChoice)
                            {
                                case 1 :
                                    printf("Vous avez selectione le mode tres facile !! \n Choisir un nombre entre 0 et 3 \n");
                                    max = 3;
                                    switchMenuChoiceSecurity ++;
                                break;
                                case 2 :
                                    printf("Vous avez selectione le mode facile !! \nChoisir un nombre entre 0 et 100 \n");
                                    max = 100;
                                    switchMenuChoiceSecurity ++;
                                    break;
                                case 3 :
                                    printf("Vous avez selectione le mode moyen !! \nChoisir un nombre entre 0 et 1000 \n");
                                    switchMenuChoiceSecurity ++;
                                    max = 1000;
                                break;
                                case 4 :
                                    printf("Vous avez selectione le mode difficile !! \nChoisir un nombre entre 0 et 10000 \n");
                                    max = 10000;
                                    switchMenuChoiceSecurity ++;
                                break;
                                default :
                                    printf("Ce choix n'existe pas dans le menu. Merci de Selectionner un choix de la list ci-dessous : \n");
                                break;
                        }
                    }
                while(switchMenuChoiceSecurity!=EXIT_LOOP);

                if (choixModeJeu==2)
                    {
                        printf(" Joueur 1 merci de saisir ci-dessous le nombre choisi : \n");
                        scanf("%d",&mysteryNumber);

                    }
                else {mysteryNumber = (rand()%(max-MIN+1))+MIN;}

                do
                    {
                        printf("Quel est le nombre ? ");
                        scanf("%d", &nombreChoisi);
                        counter ++;
                        if (nombreChoisi<mysteryNumber)
                            printf("C'est plus !\n\n");
                        else if (nombreChoisi>mysteryNumber)
                            printf("C'est moins !\n\n");
                        else
                            printf ("Bravo, vous avez trouve le nombre mystere en %d coups !!!\n\n",counter);
                    }
                while (nombreChoisi!=mysteryNumber);
                printf("Voulez-vous refaire une partie ?\n Pour Continuer taper 1 sinon taper 0 pour arreter le programme. \n");

                scanf("%d",&nombreConti);
                if (nombreConti==0)
                {
                    continueToPlay=0;
                }


            }
        while (continueToPlay == 1);
        return 0;

}

