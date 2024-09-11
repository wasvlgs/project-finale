#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct etudiant
{
    int id;
    char name[100];
    char date_de_naissance[100];
    char class[100];
    int note;
};

int main()
{
    int programme_stop = 0;
    struct etudiant t[100];
    int counter = 0;

    do
    {
        printf("\n=========== Pour Ajoutez un eleve entrer '1'\n");
        printf("=========== Pour afficher les details des etudiant entrer '2'\n");
        printf("=========== Pour modifier les informations d'un etudiant entrer '3'\n");
        printf("=========== Pour supprimer un eleve entrer '4'\n");
        printf("=========== Pour afficher les details d'un etudiant entrer '5'\n");
        printf("=========== Pour calculer la moyenne generale entrer '6'\n");
        printf("=========== Pour afficher statistiques entrer '7'\n");
        printf("=========== Pour rechercher un etudiant entrer '8'\n");
        printf("=========== Quitter le programme entrer '0'\n");

        int answer;
        printf("\n entrer votre choix: ");
        scanf("%i", &answer);

        int search_stop = 0;
        switch (answer)
        {
        case 1:
            // Ajoute un élève:
            system("cls");
            printf("===== Pour ajoute un eleve sur class Math entrer '1'\n");
            printf("===== Pour ajoute un eleve sur class Physique entrer '2'\n");
            printf("===== Pour ajoute un eleve sur class Informatique entrer '3'\n");
            printf("===== Retourn a la liste principale entrer '0'\n");

            int class_type;
            printf("\n entrer votre choix: ");
            scanf("%i", &class_type);
            getchar();

            if (class_type == 1)
            {
                strcpy(t[counter].class, "Math");
            }
            else if (class_type == 2)
            {
                strcpy(t[counter].class, "Physique");
            }
            else if (class_type == 3)
            {
                strcpy(t[counter].class, "Informatique");
            }
            else
            {
                break;
            }

            printf("\n\n========= Ajoutez un eleve =========\n\n");

            t[counter].id = counter;
            printf("Entrer le nom et le prenom d'etudiant: ");
            fgets(t[counter].name, sizeof(t[counter].name), stdin);

            printf("\nEntrer la date de naissance d'etudiant ex(DD-MM-YYYY): ");
            fgets(t[counter].date_de_naissance, sizeof(t[counter].date_de_naissance), stdin);

            printf("\nEntrer la note d'etudiant (/20): ");
            scanf("%i", &t[counter].note);
            getchar();

            counter++;
            break;

        case 2:
            // affichage des eleves
            system("cls");
            printf("===== Pour afficher tout les eleves entrer '1'\n");
            printf("===== Pour afficher tout les eleves de class Math entrer '2'\n");
            printf("===== Pour afficher tout les eleves de class Physique entrer '3'\n");
            printf("===== Pour afficher tout les eleves de class Informatique entrer '4'\n");
            printf("===== Retourn a la liste principale entrer '0'\n");

            int affichage_type;
            printf("\n entrer votre choix: ");
            scanf("%i", &affichage_type);

            if (affichage_type == 1)
            {
                for (int i = 0; i < counter; i++)
                {
                    printf("============ l'eleve ============\n");
                    printf("ID: %i\n", t[i].id);
                    printf("Nom et Prenom: %s", t[i].name);
                    printf("Date de naissance: %s", t[i].date_de_naissance);
                    printf("Class: %s\n", t[i].class);
                    printf("La note: %i/20\n", t[i].note);
                }
            }
            else
            {
                char choix[100];

                if (affichage_type == 2)
                {
                    strcpy(choix, "Math");
                }
                else if (affichage_type == 3)
                {
                    strcpy(choix, "Physique");
                }
                else if (affichage_type == 4)
                {
                    strcpy(choix, "Informatique");
                }
                else
                {
                    break;
                }

                for (int i = 0; i < counter; i++)
                {
                    if (strcmp(t[i].class, choix) == 0)
                    {
                        printf("============ l'eleve ============\n");
                        printf("ID: %i\n", t[i].id);
                        printf("Nom et Prenom: %s", t[i].name);
                        printf("Date de naissance: %s", t[i].date_de_naissance);
                        printf("Class: %s\n", t[i].class);
                        printf("La note: %i/20\n", t[i].note);
                    }
                }
            }
            break;

        case 3:
            system("cls");
            printf("\n\n========= Rechercher un etudiant =========\n \n");
            printf("====== Pour rechercher par ID entrer '1'\n");
            printf("====== Pour rechercher par nom entrer '2'\n");
            printf("====== Retourn a la liste principale entrer '0'");

            int rechercher_par;
            printf("\n entrer votre choix: ");
            scanf("%i", &rechercher_par);
            getchar();

            switch (rechercher_par)
            {
            case 1:
                printf("\n\n=========== modifier les informations d'un etudiant ===========\n\n");
                int eleve_id;
                printf("Entrer l'ID d'un eleve: ");
                scanf("%i", &eleve_id);
                getchar();

                for (int i = 0; i < counter; i++)
                {
                    if (t[i].id == eleve_id)
                    {
                        
                    }
                }
                if (search_stop == 0)
                {
                    printf("\n\n=========== Votre recherche n'execte pas ===========\n\n");
                }

                break;

            case 2:
                printf("\n\n=========== modifier les informations d'un etudiant ===========\n\n");
                char eleve_name[100];
                printf("Entrer le nom d'un eleve: ");
                scanf("%i", &eleve_id);
                getchar();

                for (int i = 0; i < counter; i++)
                {
                    if (t[i].id == eleve_id)
                    {
                        
                    }
                }
                if(search_stop == 0){
                    printf("\n\n=========== Votre recherche n'execte pas ===========\n\n");
                }
                break;

            default:
                break;
            }

            break;

        default:
            programme_stop = 1;
            break;
        }

    } while (programme_stop == 0);

    return 0;
}
