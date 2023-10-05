# include <iostream>

/* LE BUT EST DE TRADUIRE CE CODE EN C++ :
int main(int ac, char **ag)
{
    int i = 1;
    int j = 0;
    if (ac == 1)
        printf("Pas de bruit");
    else
    {
        while (i < ac)
        {
            j = 0;
            while (ag[i][j])
            {
                ag[i][j] = toupper(ag[1][j]);
                write(1, &ag[1][j], 1);
                j++;
            }
            if (i < ac - 1)
                write(1, " ", 1);
            i++;
        }
    }
}
*/

int main(int ac, char **ag) {
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE NOISE *" << std::endl;
    else {
        for (int i = 0; i < ac; i++) {
            for (int j = 0; ag[i][j] != '\0'; j++) {
                std::cout << (char)toupper((unsigned char)ag[i][j]);
            }
            if (i < ac - 1)
                std::cout << " ";
        }
    }
    std::cout << std::endl;
    return 0; }

/* PENSER A REMETTRE UN MAKEFILE + dossier du rendu est ex00 */