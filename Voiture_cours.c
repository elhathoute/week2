#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

struct Race {
    int numberOfLaps;
    int currentLap;
    char firstPlaceDriverName[10];
    char firstPlaceRaceCarColor[22];
    };

struct RaceCar{
    char driverName[10];
    char raceCarColor[12];
    int totalLapTime;
    };
  void printIntro(){ 
   printf ("Bienvenue a notre evenement principal, les fans de course numerique !\n J'espere que tout le monde a pris son gouter car nous allons commencer !\n");
 }
 void printCountDown(){
     printf("Coureurs prêts ! Dans...:\n");
     int i ;
    for(i=5;i>=1;i--){
    printf("%d\n",i);
        } 
    printf("Course !");
 }  
 void printFirstPlaceAfterLap(struct Race race){
     printf("Après le tour numéro %d \nLa première place est occupée par:%s dans la voiture de course %s",race.currentLap,race.firstPlaceDriverName,race.firstPlaceRaceCarColor);
 }
 void printCongratulation(struct Race race){
     printf("Félicitons tous %s,dans la voiture de course %s,pour son incroyable performance.C'était vraiment une belle course et bonne nuit à tous !",race.firstPlaceDriverName,race.firstPlaceRaceCarColor);
 }
 //fonctions logiques
 int calculateTimeToCompleteLap(){
 	srand(time(NULL));
 		 int vitesse= (rand() % 3)+1;
     int acceleration= (rand() % 3)+1;
    int nerves= (rand() % 3)+1;
    
    return vitesse+acceleration+nerves;
	}
   
			void updateRaceCar(struct RaceCar *raceCar){
				raceCar->totalLapTime+=raceCar->totalLapTime;
			}
			void updateFirstPlace(struct Race *race,struct RaceCar *raceCar1,struct RaceCar *raceCar2 ){
				 race->firstPlaceDriverName;
				 race->firstPlaceRaceCarColor;
				
				if((raceCar1->totalLapTime)<=(raceCar2->totalLapTime)){
					raceCar1->driverName;
					raceCar1->raceCarColor;
				}else{
					raceCar1->driverName;
					raceCar1->raceCarColor;
					
				}
			}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			  
 
int main(){
    printIntro();
    printCountDown();
    
    return 0;
}
  
