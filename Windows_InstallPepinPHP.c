#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char projectName[256];
    printf("Entrez le nom du projet (ex: WebSiteMaker) : ");
    fgets(projectName, sizeof(projectName), stdin);

    // Enlever le retour chariot final
    size_t len = strlen(projectName);
    if (len > 0 && projectName[len - 1] == '\n')
    {
        projectName[len - 1] = '\0';
    }

    if (strlen(projectName) == 0)
    {
        strcpy(projectName, "PepinPHP");
    }

    system("cd %USERPROFILE%\\Desktop && rmdir /s /q PepinPHP");

    char gitCmd[512];
    snprintf(gitCmd, sizeof(gitCmd), "cd %%USERPROFILE%%\\Desktop && git clone https://github.com/WebSiteMaker24/PepinPHP.git PepinPHPTemp");
    system(gitCmd);

    char renameCmd[512];
    snprintf(renameCmd, sizeof(renameCmd), "cd %%USERPROFILE%%\\Desktop && ren PepinPHPTemp %s", projectName);
    system(renameCmd);

    char openCodeCmd[512];
    snprintf(openCodeCmd, sizeof(openCodeCmd), "cd %%USERPROFILE%%\\Desktop\\%s && code .", projectName);
    system(openCodeCmd);

    char phpCmd[512];
    snprintf(phpCmd, sizeof(phpCmd), "cd %%USERPROFILE%%\\Desktop\\%s && php -S localhost:8000 -t public_html/public", projectName);
    system(phpCmd);

    return 0;
}
