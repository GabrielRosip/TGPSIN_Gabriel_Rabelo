#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "loginn.h"
#include <time.h>
#include "pacientes_m.h"
#include "reg_pacientesE.h"

int main()
{
    int op1,linen;
    char nome1[35],text[35];
    setlocale(LC_ALL,"portuguese");
    printf(R"EOF(    __  __                 _ __        __   _  __ ____ __________
   / / / ____  _________  (_/ /_____ _/ /  | |/ // __ /_  __/ __ \
  / /_/ / __ \/ ___/ __ \/ / __/ __ `/ /   |   // /_/ // / / / / /
 / __  / /_/ (__  / /_/ / / /_/ /_/ / /   /   |/ ____// / / /_/ /
/_/ /_/\____/____/ .___/_/\__/\__,_/_/   /_/|_/_/    /_/  \____/
                /_/ )EOF");
printf("\n");



op1=login();


if(op1!=-1)
{
    FILE *logg;



logg = fopen("Utilizador.txt","r");



linen = 0;
    while (EOF != fscanf(logg, "%100[^\n]\n", text))
    {
        linen++;
if(linen == op1)
    {
        if(text[0]=='M')
        {
            printf(R"EOF(    __  __                 _ __        __   _  __ ____ __________
   / / / ____  _________  (_/ /_____ _/ /  | |/ // __ /_  __/ __ \
  / /_/ / __ \/ ___/ __ \/ / __/ __ `/ /   |   // /_/ // / / / / /
 / __  / /_/ (__  / /_/ / / /_/ /_/ / /   /   |/ ____// / / /_/ /
/_/ /_/\____/____/ .___/_/\__/\__,_/_/   /_/|_/_/    /_/  \____/
                /_/ )EOF");
                printf("\n");
            printf("Bem vindo Medico %s\n",text);
            pace();
        }
        else if(text[0]=='E')
        {
            printf(R"EOF(    __  __                 _ __        __   _  __ ____ __________
   / / / ____  _________  (_/ /_____ _/ /  | |/ // __ /_  __/ __ \
  / /_/ / __ \/ ___/ __ \/ / __/ __ `/ /   |   // /_/ // / / / / /
 / __  / /_/ (__  / /_/ / / /_/ /_/ / /   /   |/ ____// / / /_/ /
/_/ /_/\____/____/ .___/_/\__/\__,_/_/   /_/|_/_/    /_/  \____/
                /_/ )EOF");
                printf("\n");
            printf("Bem vindo enfermeiro %s\n",text);
            pace();
        }


    }
    }



fclose(logg);

}
else if(op1==-1)
{
    login();
}
else
{
    printf("ERRO\n");
}



    return 0;
}
