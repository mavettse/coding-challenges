#include <stdio.h>
#include <string.h>

int main()
{
    int N, tam, tamcd;
    char str[141], newstr[1000] = {'\0'}, letras[] = "abcdefghijklmnopqrstuvwxyz", letrasMaiusculas[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"}, codigos[27][10] = {"2", "22", "222", "3", "33", "333", "4", "44", "444", "5", "55", "555", "6", "66", "666", "7", "77", "777", "7777", "8", "88", "888", "9", "99", "999", "9999", "0"};

    scanf("%d", &N);
    getchar();

    for (int i = 0; i < N; i++)
    {
        scanf("%[^\n]", str);

        tam = strlen(str);

        for (int t = 0; t < tam; t++)
        {
            if (str[t] == ' ')
            {
                newstr[strlen(newstr)] = '0';
            }
            else
            {
                for (int i = 0, j = 0; i < 27; i++)
                {

                    if (str[t] == letras[i])
                    {
                        if (newstr[strlen(newstr) - 1] == codigos[i][0])
                        {
                            newstr[strlen(newstr)] = '*';
                        }

                        strcat(newstr, codigos[i]);
                        break;
                    }
                    else if (str[t] == letrasMaiusculas[i])
                    {
                        if (newstr[strlen(newstr)] == codigos[i][0])
                        {
                            newstr[strlen(newstr)] = '*';
                        }
                        newstr[strlen(newstr)] = '#';
                        strcat(newstr, codigos[i]);
                        break;
                    }
                }
            }
        }
        newstr[strlen(newstr) + 1] = '\0';

        printf("%s\n", newstr);

        tamcd = strlen(newstr);

        for (int k = 0; k < tamcd; k++)
        {
            newstr[k] = '\0';
        }

        getchar();
    }

    return 0;
}