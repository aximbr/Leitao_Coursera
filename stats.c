/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file <Add File Name>
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
print_array(test , SIZE);
print_statistics(test, SIZE);

return(0);
}

/* Add other Implementation File Code Here */

void print_array(unsigned char * dataset, int datasetsize){
int i;
for (i = 0; i < datasetsize; i++){
    printf("%03d \t",dataset[i]);
    };
}

void print_statistics(unsigned char * dataset, int datasetsize){
int i, j, minimo, maximo, media, mediana;

/* ascending sort Array */
for (i = 0; i < datasetsize; i++)
{
    for (j = 0; j < datasetsize; j++)
    {
        if (dataset[j] > dataset[i])
        {
            unsigned char tmp = dataset[i];
            dataset[i] = dataset[j];
            dataset[j] = tmp;
        }
    }
}
/* descobre o minimo */
minimo = dataset[0];

/* descobre o maximo */
maximo = dataset[datasetsize-1];

/* descobre a media */
media = 0;
for (i=0; i< datasetsize; i++)
{
    media = media + dataset[i];
}
media = media/datasetsize;

/* descobre a mediana */
if (datasetsize % 2 == 0)
    /* o array eh par */
{
    i = datasetsize/2;
    mediana = (dataset[i] + dataset[i+1])/2;
}
else
{
    /* o array eh impar */
    i = (datasetsize +1)/2;
    mediana = dataset[i];
}

/* imprime o minimo e o maximo */
printf("\n\n");
printf("O minimo eh: %d \n",minimo);
printf("O maximo eh: %d \n",maximo);
printf("A media eh: %d \n", media);
printf("A mediana eh: %d \n", mediana);
printf("O Array em ordem crescente \n");
print_array(dataset,datasetsize);
}
