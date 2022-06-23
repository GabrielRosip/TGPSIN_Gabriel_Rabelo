#ifndef REG_PACIENTESE_H_INCLUDED
#define REG_PACIENTESE_H_INCLUDED
#include <locale.h>
struct pe
{
    char nomee[35];
    int idade,utente;
    char genero[10];


};
struct pe pacie[20];
pace()
{
    FILE*paciente;

    setlocale(LC_ALL,"Portuguese");
    int i,a,d=0,k[15],op;
    char doenca[10][15]={"Covid","Gripe","SIDA","Poliomielite","Herpes","HPV","Catapora","Caxumba","Variola","Ebola"};
    printf("1-Ira registrar\n2-prescrição\n");
    scanf("%i",&op);
    fflush(stdin);
    if(op==1)
    {
        printf("\tRegistrou de quantos pacientes?\n\t--->");
     scanf("%i",&a);
     fflush(stdin);
     for(i=0;i<a;i++)
     {

         printf("\tDigite o nome do paciente\n\t--->");
         gets(pacie[i].nomee);
         printf("\tdigite a idade do(a) paciente %s\n\t--->",pacie[i].nomee);
         scanf("%i",&pacie[i].idade);
         fflush(stdin);
         printf("\tO(A) paciente %s é do genero F(feminino) ou M(masculino)\n\t--->",pacie[i].nomee);
         gets(pacie[i].genero);
         system("cls");


          printf(R"EOF(    __  __                 _ __        __   _  __ ____ __________
   / / / ____  _________  (_/ /_____ _/ /  | |/ // __ /_  __/ __ \
  / /_/ / __ \/ ___/ __ \/ / __/ __ `/ /   |   // /_/ // / / / / /
 / __  / /_/ (__  / /_/ / / /_/ /_/ / /   /   |/ ____// / / /_/ /
/_/ /_/\____/____/ .___/_/\__/\__,_/_/   /_/|_/_/    /_/  \____/
                /_/ )EOF");
                printf("\n");
     }
     for(i=0;i<a;i++)
     {
        system("cls");
        printf("\tO(A) paciente %s teve qual destas doenças teve\n",pacie[i].nomee);


         for(d=0;d<10;d++)
         {
             printf("\n");
             printf("%d-",(d+1));

             for(int j=0;j<15;j++)
                {


              printf("%c",doenca[d][j]);


         }
         }
         printf("\n\t--->");
         scanf("%i",&k[i]);

         fflush(stdin);
         }
         system("cls");
         for(i=0;i<a;i++)
    {

          if(k[i]==1)
          {
             paciente=fopen("utilizador2.txt","a");

              fprintf(paciente,"O %s %i %s Covid\n",pacie[i].nomee,pacie[i].idade,pacie[i].genero);
              fclose(paciente);
          }
          else if(k[i]==2)
          {
             paciente=fopen("utilizador2.txt","a");

              fprintf(paciente,"O %s %i %s Gripe\n",pacie[i].nomee,pacie[i].idade,pacie[i].genero);
              fclose(paciente);
          }
          else if(k[i]==3)
          {
                 paciente=fopen("utilizador2.txt","a");

              fprintf(paciente,"O %s %i %s Sida\n",pacie[i].nomee,pacie[i].idade,pacie[i].genero);
              fclose(paciente);

          }
          else if(k[i]==4)
          {
                paciente=fopen("utilizador2.txt","a");

              fprintf(paciente,"O %s %i %s Poliomielite\n",pacie[i].nomee,pacie[i].idade,pacie[i].genero);
              fclose(paciente);


          }
          else if(k[i]==5)
          {
                 paciente=fopen("utilizador2.txt","a");

              fprintf(paciente,"O %s %i %s Herpes\n",pacie[i].nomee,pacie[i].idade,pacie[i].genero);
              fclose(paciente);

          }
          else if(k[i]==6)
          {
                 paciente=fopen("utilizador2.txt","a");

              fprintf(paciente,"O %s %i %s HPV\n",pacie[i].nomee,pacie[i].idade,pacie[i].genero);
              fclose(paciente);


          }
          else if(k[i]==7)
          {
                paciente=fopen("utilizador2.txt","a");

              fprintf(paciente,"O %s %i %s Catapora\n",pacie[i].nomee,pacie[i].idade,pacie[i].genero);
              fclose(paciente);
          }
          else if(k[i]==8)
          {
                paciente=fopen("utilizador2.txt","a");

              fprintf(paciente,"O %s %i %s Caxumba\n",pacie[i].nomee,pacie[i].idade,pacie[i].genero);
              fclose(paciente);

          }
          else if(k[i]==9)
          {

                  paciente=fopen("utilizador2.txt","a");

              fprintf(paciente,"O %s %i %s Variola\n",pacie[i].nomee,pacie[i].idade,pacie[i].genero);
              fclose(paciente);

          }
          else if(k[i]==10)
          {

            paciente=fopen("utilizador2.txt","a");

              fprintf(paciente,"O %s %i %s Ebola\n",pacie[i].nomee,pacie[i].idade,pacie[i].genero);
              fclose(paciente);

          }


          }

    }

   else if(op==2)
   {
       FILE*paciente;
    setlocale(LC_ALL,"Portuguese");
          int i,a,d=0,k[15];
          char teste[100000];
          printf("Tratou de quantos pacientes\n");
          scanf("%i",&a);
          for(i=0;i<a;i++)
          {


          }
   }
   else
   {
       printf("ERRO\n");
   }

     }





#endif // REG_PACIENTESE_H_INCLUDED
