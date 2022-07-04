#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

void print_gaussian_dist (int expected_value, int std_deviation , int amount_of_values, FILE *output_stream){


        double random1, random2, std_num1, std_num2, ep, r, random_num;
        static double staticvar;
//      srand(time(NULL));

        if(staticvar==0.0){
                do{
                        random1 = ((double)rand() / RAND_MAX) * (10 - 0) + 0;
                        while(random1==0){
                                random1 = ((double)rand() / RAND_MAX) * (10 - 0) + 0;
                        }
                        random2 = ((double)rand() / RAND_MAX) * (10 - 0) + 0;
                        r = random1 * random1 + random2 * random2;
                } while(r==0.0 || r > 1.0);

        ep = sqrt(-2.0*log(r) / r);

        std_num1 = random1*ep;
        std_num2 = random2*ep;
        random_num = expected_value + std_deviation*std_num1;
        staticvar=0.0;
        }
        else{
                random_num=expected_value+std_deviation*staticvar;
                staticvar=0.0;
        }
        printf("%f \n",random_num); //testweise
        fprintf(output_stream, "%f \n",random_num);
        return;
}
