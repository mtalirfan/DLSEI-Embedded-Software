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
 * @file stats.c
 * @brief Implementation file for stats.c
 *
 * This file contains the implementation of the functions used in stats.c
 *
 * @author mtalirfan
 * @date 02/01/2025
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  print_array(test, SIZE);
  print_statistics(test, SIZE);

}

/* Add other Implementation File Code Here */
unsigned char sort_array(unsigned char *arr, unsigned int size) {
  unsigned char temp;
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] < arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  return *arr;
};

unsigned char find_median(unsigned char *arr, unsigned int size) {
  unsigned char median;
  sort_array(arr, size);
  if (size % 2 == 0) {
    median = (arr[size / 2] + arr[size / 2 - 1]) / 2;
  } else {
    median = arr[size / 2];
  }
  return median;
};

unsigned char find_mean(unsigned char *arr, unsigned int size) {
  unsigned int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum / size;
};

unsigned char find_maximum(unsigned char *arr, unsigned int size) {
  sort_array(arr, size);
  return arr[0];
};

unsigned char find_minimum(unsigned char *arr, unsigned int size) {
  sort_array(arr, size);
  return arr[size - 1];
};

unsigned char print_statistics(unsigned char *arr, unsigned int size) {
  printf("The median is: %d\n", find_median(arr, size));
  printf("The mean is: %d\n", find_mean(arr, size));
  printf("The maximum is: %d\n", find_maximum(arr, size));
  printf("The minimum is: %d\n", find_minimum(arr, size));
  return 0;
};

unsigned char print_array(unsigned char *arr, unsigned int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
};