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
 * @file stats.h
 * @brief Header file for stats.c
 *
 * This file contains the declarations of the functions used in stats.c
 *
 * @author mtalirfan
 * @date 02/01/2025
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

/**
 * @brief print_statistics
 *
 * This function prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param arr The array to be analyzed
 * @param size The size of the array
 *
 * @return nothing
 */
unsigned char print_statistics(unsigned char *arr, unsigned int size);

/**
 * @brief print_array
 *
 * This function prints the array to the screen
 *
 * @param arr The array to be analyzed
 * @param size The size of the array
 *
 * @return nothing
 */
unsigned char print_array(unsigned char *arr, unsigned int size);

/**
 * @brief find_median
 *
 * This function finds the median value of the array
 *
 * @param arr The array to be analyzed
 * @param size The size of the array
 *
 * @return The median value of the array
 */
unsigned char find_median(unsigned char *arr, unsigned int size);

/**
 * @brief find_mean
 *
 * This function finds the mean value of the array
 *
 * @param arr The array to be analyzed
 * @param size The size of the array
 *
 * @return The mean value of the array
 */
unsigned char find_mean(unsigned char *arr, unsigned int size);

/**
 * @brief find_maximum
 *
 * This function finds the maximum value of the array
 *
 * @param arr The array to be analyzed
 * @param size The size of the array
 *
 * @return The maximum value of the array
 */
unsigned char find_maximum(unsigned char *arr, unsigned int size);

/**
 * @brief find_minimum
 *
 * This function finds the minimum value of the array
 *
 * @param arr The array to be analyzed
 * @param size The size of the array
 *
 * @return The minimum value of the array
 */
unsigned char find_minimum(unsigned char *arr, unsigned int size);

/**
 * @brief sort_array
 *
 * This function sorts the array from largest to smallest
 *
 * @param arr The array to be analyzed
 * @param size The size of the array
 *
 * @return The sorted array
 */
unsigned char sort_array(unsigned char *arr, unsigned int size);

#endif /* __STATS_H__ */