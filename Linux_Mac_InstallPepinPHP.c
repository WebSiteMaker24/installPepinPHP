#include <stdio.h>
#include <stdlib.h>

int main()
{
    char newName[256];
    int ret;

    printf("Entrez le nouveau nom du projet : ");
    if (fgets(newName, sizeof(newName), stdin) == NULL)
    {
        fprintf(stderr, "Erreur de lecture.\n");
        return 1;
    }

    // Supprimer le \n final si présent
    char *p = newName;
    while (*p != '\0')
    {
        if (*p == '\n')
        {
            *p = '\0';
            break;
        }
        p++;
    }

    if (newName[0] == '\0')
    {
        fprintf(stderr, "Nom invalide.\n");
        return 1;
    }

    // Préparer la commande de renommage (mv)
    char command[512];
    snprintf(command, sizeof(command), "mv PepinPHP %s", newName);

    ret = system(command);
    if (ret != 0)
    {
        fprintf(stderr, "Erreur lors du renommage. Assurez-vous que le dossier 'PepinPHP' existe et que vous avez les droits.\n");
        return 1;
    }

    printf("Le projet a été renommé en '%s'.\n", newName);
    return 0;
}

/*
Pour compiler sous Linux :
gcc -o rename_project rename_project.c

Pour compiler sous macOS (idem Linux) :
gcc -o rename_project rename_project.c

Usage :
1. Placez ce binaire dans le dossier contenant le dossier 'PepinPHP'.
2. Lancez-le dans un terminal : ./rename_project
3. Entrez le nouveau nom demandé.

Remarque : Le programme utilise la commande 'mv' qui doit être disponible (standard sur Linux/mac).
*/
