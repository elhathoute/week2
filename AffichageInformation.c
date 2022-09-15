


#include<stdio.h>

int main(){
  char  Nom[20];
  char  Prenom[20];
  int Age;
  char Sexe[10];
  int NumTel;

   printf("Entrer Nom \n");
   scanf("%s",&Nom);
   printf("Le nom est: %s \n",Nom);
       /////////////////////////////////
          printf("Entrer prenom \n");
   scanf("%s",&Prenom);
   printf("Le prenom est: %s \n",Prenom);
  /////////////////////////////////
          printf("Entrer age \n");
   scanf("%d",&Age);
   printf("age est: %d \n",Age);
    
    /////////////////////////////////
          printf("Entrer Sexe \n");
   scanf("%s",&Sexe);
   printf("sexe est: %s \n",Sexe);
     /////////////////////////////////
          printf("Entrer NumTel \n");
   scanf("%d",&NumTel);
   printf("NumTel est: %d\n",NumTel);
   
    return 0;
}

