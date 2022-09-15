#include<stdio.h>
#include<stdbool.h>

void  inserer(int *tab,int *taille)     //tab est une pointeur sur la table
{
     int n,i,position;
     
     printf("entrer le nombre a inserer \n");
     scanf("%d",&n);
     printf("entrer la position d'insertion \n");
     scanf("%d",&position);
        ( *taille)++; //incrementer la taille de la table pour inserer l'element( n) a la position (position)
//          printf(" %d \n",*taille);
            for(i=(*taille)-1;i>position;i--){
            	  tab[i]=tab[i-1];
            	  
			}
			
	         tab[position]=n;
	         //affichage table after insertion
	         int j;
	      
	        for(j=0;j<*taille;j++) {
	        	
			printf("%d ",tab[j]);
			}
			
		  
													}
										

	
int main(){
	  int tab[100];
	  int i,taille;
	        printf("donner la taille du tableaux \n");
	        scanf("%d",&taille);
	        printf("veuillez remplir le tableaux \n");
	           for(i=0;i<taille;i++)  scanf("%d",tab); 
			       
	                inserer(tab,&taille);   // passage par adress pour incrementer la taille du tableaux a chaque appel de la fonction
               
return 0;}








