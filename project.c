#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct etudiant
{
    int id;
    char name[100];
    char date_de_naissance[100];
    char classe[100];
    int note;
};

struct etudiant t[100]; // declaration tableau des etudient
struct etudiant c[100]; // declaration d'un tableau temporelle
struct etudiant b[100]; // declaration d'un tableau temporelle

// data principale

void data()
{
    t[0].id = 1;
    strcpy(t[0].name, "younes rabiaa\n");
    strcpy(t[0].date_de_naissance, "10-09-2005\n");
    strcpy(t[0].classe, "Math");
    t[0].note = 18;

    t[1].id = 2;
    strcpy(t[1].name, "merwan kamli\n");
    strcpy(t[1].date_de_naissance, "15-01-2006\n");
    strcpy(t[1].classe, "Math");
    t[1].note = 10;

    t[2].id = 3;
    strcpy(t[2].name, "jawad rahimi\n");
    strcpy(t[2].date_de_naissance, "26-07-2004\n");
    strcpy(t[2].classe, "Math");
    t[2].note = 7;

    t[3].id = 4;
    strcpy(t[3].name, "hamza kabo\n");
    strcpy(t[3].date_de_naissance, "01-12-2005\n");
    strcpy(t[3].classe, "Math");
    t[3].note = 13;

    t[4].id = 5;
    strcpy(t[4].name, "kamal maro\n");
    strcpy(t[4].date_de_naissance, "12-09-2005\n");
    strcpy(t[4].classe, "Physique");
    t[4].note = 7;

    t[5].id = 6;
    strcpy(t[5].name, "rayan sbati\n");
    strcpy(t[5].date_de_naissance, "29-10-2005\n");
    strcpy(t[5].classe, "Physique");
    t[5].note = 9;

    t[6].id = 7;
    strcpy(t[6].name, "khadija kamili\n");
    strcpy(t[6].date_de_naissance, "10-01-2006\n");
    strcpy(t[6].classe, "Physique");
    t[6].note = 19;

    t[7].id = 8;
    strcpy(t[7].name, "ahmed saroukh\n");
    strcpy(t[7].date_de_naissance, "26-07-2004\n");
    strcpy(t[7].classe, "Physique");
    t[7].note = 15;

    t[8].id = 9;
    strcpy(t[8].name, "hiba rima\n");
    strcpy(t[8].date_de_naissance, "01-12-2006\n");
    strcpy(t[8].classe, "Informatique");
    t[8].note = 10;

    t[9].id = 10;
    strcpy(t[9].name, "saad jbar\n");
    strcpy(t[9].date_de_naissance, "13-01-2006\n");
    strcpy(t[9].classe, "Informatique");
    t[9].note = 11;

    t[10].id = 11;
    strcpy(t[10].name, "nohaila rayan\n");
    strcpy(t[10].date_de_naissance, "17-11-2004\n");
    strcpy(t[10].classe, "Informatique");
    t[10].note = 17;

    t[11].id = 12;
    strcpy(t[11].name, "walid mahrouch\n");
    strcpy(t[11].date_de_naissance, "01-02-2006\n");
    strcpy(t[11].classe, "Informatique");
    t[11].note = 4;
}

// main start
int main()
{
    int programme_stop = 0; // indice de flags pour arreter le programme
    int counter = 12;       // conteur des nombres des etudients

    data();

    // do start

    do
    {
        // afficher la liste principale
        printf("====================MENU PRINCIPALE====================\n");
        printf("\n===============1* Ajoutez un eleve\n");
        printf("===============2* afficher les details de tout les etudiants \n");
        printf("===============3* modifier les informations d'un etudiant \n");
        printf("===============4* supprimer un eleve \n");
        printf("===============5* afficher les details d'un seul etudiant\n");
        printf("===============6* calculer la moyenne generale  \n");
        printf("===============7* afficher statistiques entrer \n");
        printf("===============8* afficher les 3 etudiants ayant les meilleures notes \n");
        printf("===============9* Quitter le programme \n");
        printf("====================================================================\n");
        int answer;
        printf("\n  veuillez entrer votre choix: ");
        scanf("%i", &answer);

        int search_stop = 0;
        int class_type;
        int eleve_id;
        char eleve_name[100];

        int counter_math = 0;
        int counter_physique = 0;
        int counter_informatique = 0;
        switch (answer)
        {

        case 1:
            // Ajoute un élève:

            system("cls");
            printf("===== 1*Pour ajoute un eleve sur class Math \n");
            printf("===== 2*Pour ajoute un eleve sur class Physique \n");
            printf("===== 3*Pour ajoute un eleve sur class Informatique \n");
            printf("===== 0*Retourn a la liste principale \n");

            printf("\n veuillez entrer votre choix: ");
            scanf("%i", &class_type);
            getchar();

            if (class_type == 1)
            {
                strcpy(t[counter].classe, "Math");
            }
            else if (class_type == 2)
            {
                strcpy(t[counter].classe, "Physique");
            }
            else if (class_type == 3)
            {
                strcpy(t[counter].classe, "Informatique");
            }
            else
            {
                printf("choix invalide!");
                break;
            }

            printf("\n\n========= Ajoutez un eleve =========\n\n");

            t[counter].id = counter + 1;

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
            printf("===== 1*Pour afficher tout les eleves \n");
            printf("===== 2*Pour afficher tout les eleves de class Math \n");
            printf("===== 3*Pour afficher tout les eleves de class Physique \n");
            printf("===== 4*Pour afficher tout les eleves de class Informatique\n");
            printf("===== 5*Pour afficher tout les eleves A-Z \n");
            printf("======0* Retourn a la liste principale \n");

            int affichage_type;
            printf("\n entrer votre choix: ");
            scanf("%i", &affichage_type);
            getchar();
            int save_id;
            char save_nom[100];
            char save_date[100];
            char save_class[100];
            int save_note;

            switch (affichage_type)
            {
            case 1:
                for (int i = 0; i < counter; i++)
                {
                    printf("============ l'eleve ============\n");
                    printf("ID: %i\n", t[i].id);
                    printf("Nom et Prenom: %s", t[i].name);
                    printf("Date de naissance: %s", t[i].date_de_naissance);
                    printf("Class: %s\n", t[i].classe);
                    printf("La note: %i/20\n", t[i].note);
                }

                break;

            case 2:
                for (int i = 0; i < counter; i++)
                {
                    if (strcmp(t[i].classe, "Math") == 0)
                    {
                        printf("============ l'eleve ============\n");
                        printf("ID: %i\n", t[i].id);
                        printf("Nom et Prenom: %s", t[i].name);
                        printf("Date de naissance: %s", t[i].date_de_naissance);
                        printf("Class: %s\n", t[i].classe);
                        printf("La note: %i/20\n", t[i].note);
                    }
                }

                break;

            case 3:
                for (int i = 0; i < counter; i++)
                {
                    if (strcmp(t[i].classe, "Physique") == 0)
                    {
                        printf("============ l'eleve ============\n");
                        printf("ID: %i\n", t[i].id);
                        printf("Nom et Prenom: %s", t[i].name);
                        printf("Date de naissance: %s", t[i].date_de_naissance);
                        printf("Class: %s\n", t[i].classe);
                        printf("La note: %i/20\n", t[i].note);
                    }
                }

                break;
            case 4:
                for (int i = 0; i < counter; i++)
                {
                    if (strcmp(t[i].classe, "Informatique") == 0)
                    {
                        printf("============ l'eleve ============\n");
                        printf("ID: %i\n", t[i].id);
                        printf("Nom et Prenom: %s", t[i].name);
                        printf("Date de naissance: %s", t[i].date_de_naissance);
                        printf("Class: %s\n", t[i].classe);
                        printf("La note: %i/20\n", t[i].note);
                    }
                }

                break;
            case 5:

                for (int i = 0; i < counter; i++)
                {
                    b[i] = t[i];
                }

                for (int i = 0; i < counter; i++)
                {
                    for (int j = 0; j < counter - 1; j++)
                    {
                        if (strcmp(b[j].name, b[j + 1].name) > 0)
                        {

                            struct etudiant tmp = b[j];
                            b[j] = b[j + 1];
                            b[j + 1] = tmp;
                        }
                    }
                }

                for (int i = 0; i < counter; i++)
                {
                    printf("============ l'eleve ============\n");
                    printf("ID: %i\n", b[i].id);
                    printf("Nom et Prenom: %s", b[i].name);
                    printf("Date de naissance: %s", b[i].date_de_naissance);
                    printf("Class: %s\n", b[i].classe);
                    printf("La note: %i/20\n", b[i].note);
                }

                break;

            default:
                break;
            }

            break;

        // modifie les élèves
        case 3:
            system("cls");
            printf("Entrer l'ID d'un eleve: ");
            scanf("%i", &eleve_id);
            getchar();

            for (int i = 0; i < counter; i++)
            {
                if (t[i].id == eleve_id)
                {
                    system("cls");
                    printf("===== Pour modifier le nom d'un eleve entrer '1'\n");
                    printf("===== Pour modifier la date de naissance d'un eleve entrer '2'\n");
                    printf("===== Pour modifier la class d'un eleve entrer '3'\n");
                    printf("===== Pour modifier la note d'un eleve entrer '4'\n");
                    printf("===== Retourn a la liste principale entrer '0'\n");

                    int type_modifie;
                    printf("\n entrer votre choix: ");
                    scanf("%i", &type_modifie);
                    getchar();

                    switch (type_modifie)
                    {
                    case 1:

                        printf("\n\n======== Modifier les informations d'un etudiant ========\n\n");
                        printf("Entrer le nom et le prenom d'etudiant: ");
                        fgets(t[i].name, sizeof(t[i].name), stdin);

                        printf("\n\n======== les informations a ete modifie avec succes ========\n\n");

                        search_stop = 1;

                        break;
                    case 2:

                        printf("\n\n======== Modifier les informations d'un etudiant ========\n\n");
                        printf("\nEntrer la date de naissance d'etudiant ex(DD-MM-YYYY): ");
                        fgets(t[i].date_de_naissance, sizeof(t[i].date_de_naissance), stdin);

                        printf("\n\n======== les informations a ete modifie avec succes ========\n\n");
                        search_stop = 1;
                        break;
                    case 3:
                        printf("\n\n======== Modifier les informations d'un etudiant ========\n\n");

                        printf("===== Pour ajoute l'eleve sur class Math entrer '1'\n");
                        printf("===== Pour ajoute l'eleve sur class Physique entrer '2'\n");
                        printf("===== Pour ajoute l'eleve sur class Informatique entrer '3'\n");

                        printf("\n entrer votre choix: ");
                        scanf("%i", &class_type);
                        getchar();
                        if (class_type == 1)
                        {
                            strcpy(t[i].classe, "Math");
                        }
                        else if (class_type == 2)
                        {
                            strcpy(t[i].classe, "Physique");
                        }
                        else if (class_type == 3)
                        {
                            strcpy(t[i].classe, "Informatique");
                        }
                        else
                        {
                            break;
                        }
                        printf("\n\n======== les informations a ete modifie avec succes ========\n\n");
                        search_stop = 1;
                        break;
                    case 4:

                        printf("\n\n======== Modifier les informations d'un etudiant ========\n\n");
                        printf("\nEntrer la note d'etudiant (/20): ");
                        scanf("%i", &t[i].note);

                        printf("\n\n======== les informations a ete modifie avec succes ========\n\n");
                        search_stop = 1;
                        break;
                    default:
                        break;
                    }
                }
            }
            if (search_stop == 0)
            {
                printf("\n\n=========== Votre recherche n'existe pas ===========\n\n");
            }

            break;

        // suppreme un élève
        case 4:

            system("cls");
            printf("Entrer l'ID d'un eleve: ");
            scanf("%i", &eleve_id);
            getchar();
            int f = 0;
            for (int i = 0; i < counter; i++)
            {
                if (t[i].id == eleve_id)
                {
                    f = i;

                    search_stop = 1;
                }
            }

            if (search_stop == 0)
            {
                printf("\n\n=========== Votre recherche n'existe pas ===========\n\n");
            }
            else
            {
                for (int i = f; i < counter; i++)
                {

                    t[i] = t[i + 1];
                }
                printf("\n\n======== l'etudiant a ete supprimer avec success ========\n\n");
                counter--;
            }

            break;

            // Recherche un élève

        case 5:

            system("cls");

            printf("===== Pour rechercher d'un eleve par l'ID entrer '1'\n");
            printf("===== Pour rechercher d'un eleve par le nom entrer '2'\n");
            printf("===== Retourn a la liste principale entrer '0'\n");

            int recherche_type;
            printf("\n entrer votre choix: ");
            scanf("%i", &recherche_type);
            getchar();

            switch (recherche_type)
            {
            case 1:
                printf("Entrer l'ID d'un eleve: ");
                scanf("%i", &eleve_id);
                getchar();

                for (int i = 0; i < counter; i++)
                {
                    if (t[i].id == eleve_id)
                    {
                        printf("\n\n=========== Votre eleve est: ===========\n\n");
                        printf("ID: %i\n", t[i].id);
                        printf("Nom et Prenom: %s", t[i].name);
                        printf("Date de naissance: %s", t[i].date_de_naissance);
                        printf("Class: %s\n", t[i].classe);
                        printf("La note: %i/20\n", t[i].note);
                    }
                }
                if (search_stop == 0)
                {
                    printf("\n\n=========== Votre recherche n'existe pas ===========\n\n");
                }

                break;
            case 2:
                printf("Entrer le nom d'un eleve: ");
                fgets(eleve_name, sizeof(eleve_name), stdin);

                int search_stop = 0;

                for (int i = 0; i < counter; i++)
                {
                    if (strcmp(eleve_name, t[i].name) == 0)
                    {
                        printf("\n\n=========== Votre eleve est: ===========\n\n");
                        printf("ID: %i\n", t[i].id);
                        printf("Nom et Prenom: %s", t[i].name);
                        printf("Date de naissance: %s", t[i].date_de_naissance);
                        printf("Class: %s\n", t[i].classe);
                        printf("La note: %i/20\n", t[i].note);
                        search_stop = 1;
                        break;
                    }
                }

                if (search_stop == 0)
                {
                    printf("\n\n=========== Votre recherche n'existe pas ===========\n\n");
                }

                break;

            default:
                break;
            }

            break;

            // Les notes moyenne

        case 6:
            system("cls");
            printf("\n\n=========== Les notes moyenne ===========\n\n");

            int notes_math = 0;
            int notes_physic = 0;
            int notes_informatique = 0;

            for (int i = 0; i < counter; i++)
            {
                if (strcmp(t[i].classe, "Math") == 0)
                {
                    notes_math += t[i].note;
                    counter_math++;
                }
            }
            for (int i = 0; i < counter; i++)
            {
                if (strcmp(t[i].classe, "Physique") == 0)
                {
                    notes_physic += t[i].note;
                    counter_physique++;
                }
            }
            for (int i = 0; i < counter; i++)
            {
                if (strcmp(t[i].classe, "Informatique") == 0)
                {
                    notes_informatique += t[i].note;
                    counter_informatique++;
                }
            }

            printf("===== La note moyenne de class Math est: %i/20 \n", notes_math / counter_math);
            printf("===== La note moyenne de class Physique est: %i/20\n", notes_physic / counter_physique);
            printf("===== La note moyenne de class Informatique est: %i/20\n", notes_informatique / counter_informatique);
            printf("===== La note moyenne globale est: %i/20\n", (notes_math + notes_physic + notes_informatique) / (counter_math + counter_physique + counter_informatique));

            break;

            // Statistique de l'école

        case 7:
            system("cls");
            int meilleur__math = 0;
            int meilleur__pc = 0;
            int meilleur__info = 0;

            printf("\n\n=========== les etudiants ayant reussi  ===========\n\n");

            for (int i = 0; i < counter; i++)
            {
                if (strcmp(t[i].classe, "Math") == 0)
                {
                    counter_math++;
                    if (t[i].note >= 10)
                    {
                        printf("===== l'etudiant %s sur class %s avec la note: %i/20\n", t[i].name, t[i].classe, t[i].note);
                        meilleur__math++;
                    }
                }
                else if (strcmp(t[i].classe, "Physique") == 0)
                {
                    counter_physique++;
                    if (t[i].note >= 10)
                    {
                        printf("===== l'etudiant %s sur class %s avec la note: %i/20\n", t[i].name, t[i].classe, t[i].note);
                        meilleur__pc++;
                    }
                }
                else if (strcmp(t[i].classe, "Informatique") == 0)
                {
                    counter_informatique++;
                    if (t[i].note >= 10)
                    {
                        printf("===== l'etudiant %s sur class %s avec la note: %i/20\n", t[i].name, t[i].classe, t[i].note);
                        meilleur__info++;
                    }
                }
                else
                {
                    break;
                }
            }
            printf("\n\n===================== Statistique de l'ecole ======================\n\n");

            printf("===== Le nombre d'etudiants ayant une note superieure ou egale a 10/20 sur class Math: %i => %i%%\n", meilleur__math, (meilleur__math * 100) / counter_math);
            printf("===== Le nombre d'etudiants ayant une note superieure ou egale a 10/20 sur class Physique: %i => %i%%\n", meilleur__pc, (meilleur__pc * 100) / counter_physique);
            printf("===== Le nombre d'etudiants ayant une note superieure ou egale a 10/20 sur class Informatique: %i => %i%%\n", meilleur__info, (meilleur__info * 100) / counter_informatique);
            printf("===== Le nombre des eleves de class Math est: %i => %i%% \n", counter_math, (counter_math * 100) / counter);
            printf("===== Le nombre des eleves de class Physique est: %i => %i%%\n", counter_physique, (counter_physique * 100) / counter);
            printf("===== Le nombre des eleves de class Informatique est: %i => %i%%\n", counter_informatique, (counter_informatique * 100) / counter);
            printf("===== Le nombre globale des eleves est: %i\n", counter);

            break;

            // afficher Les 3 meilleurs eleves dans l'ecole
        case 8:
            system("cls");
            printf("\n\n=========== Les 3 meilleurs eleves dans l'ecole ===========\n\n");

            for (int i = 0; i < counter; i++)
            {
                c[i] = t[i];
            }

            for (int i = 0; i < counter; i++)
            {
                for (int j = 0; j < counter - 1; j++)
                {
                    if (c[j].note < c[j + 1].note)
                    {
                        struct etudiant tmp = c[j];
                        c[j] = c[j + 1];
                        c[j + 1] = tmp;
                    }
                }
            }

            for (int i = 0; i < 3; i++)
            {
                printf("============ l'eleve ============\n");
                printf("ID: %i\n", c[i].id);
                printf("Nom et Prenom: %s", c[i].name);
                printf("Date de naissance: %s", c[i].date_de_naissance);
                printf("Class: %s\n", c[i].classe);
                printf("La note: %i/20\n", c[i].note);
            }

            break;

        default:
            programme_stop = 1;
            break;
        }

    } while (programme_stop == 0);

    return 0;
}