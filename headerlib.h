#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

void help(){
        printf("Bitte nutzen Sie folgende Argumente \n");
        printf("-h: Hilfe");
        printf("-e: Angabe des Erwartungswerts (ganzzahlig)");
        printf("-s: Angabe der Standardabweichung (ganzzahlig)");
        printf("-a: Angabe der Anzahl an Werten die generiert werden sollen (ganzzahlig)");
}

void print_gaussian_dist (int expected_value, int std_deviation , int amount_of_values, FILE *output_stream){


        double random1, random2, std_num1, std_num2, random_num;
        srand(time(NULL));

        random1 = ((double)rand() / RAND_MAX) * (10 - 0) + 0;
        while(random1==0){
                 random1 = ((double)rand() / RAND_MAX) * (10 - 0) + 0;
        }

        random2 = ((double)rand() / RAND_MAX) * (10 - 0) + 0;

        std_num1 = sqrt(-2*log(random1))*cos(2*M_PI*random2);
        std_num2 = sqrt(-2*log(random1))*sin(2*M_PI*random2);

        random_num = expected_value + std_deviation*std_num1;
        //printf("%f \n",random_num); //testweise
        //fprintf(output_stream, "%f \n",random_num);
        printf("%f \n",random1);
        printf("%f \n",random2);
        return;
}
