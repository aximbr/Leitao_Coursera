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
 * @file <stats.h> 
 * @brief header file for trainning propouse
 *
 * This is a header file for declaration of our functions to help in this trainnig
 *
 * @author Jose Leitao
 * @date 2018-05-05
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* print_array()*/
/**
 * @brief print the whole array
 *
 * Print all elements from an array
 *
 * @param <arrayname> array addres (pointer)
 * @param <arraylenght> number of elements
 *
 * @return NONE
 */
void print_array(unsigned char * dataset , int datasetsize) ;

/* print_statistics()*/ 
/**
 * @brief print stats data of an array
 *
 * Print all stats MAX, MIN, MEDIAN and MEAN of an Array
 *
 * @param <arrayname> array address (pointer)
 * @param <arraylength> number of elements
 *
 * @return NONE
 */
void print_statistics(unsigned char * dataset , int datasetsize) ;

#endif /* __STATS_H__ */
