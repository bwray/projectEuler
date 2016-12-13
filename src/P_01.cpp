#include "P_01.h"

#include <stdio.h>

/*
 * 	P1.cpp
 *
 *  Created on: Dec 5, 2016
 *      Author: brian wray
 *
 * 		projecteuler.net/problem=1
 *
 *      Description: if we list all the natural numbers below 10 that are multiples of 3 or 5,
 *      we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *      Find the sum of all the multiples of 3 or 5 below 1000.
 *
 *      Answer: 233168
 *
 */


P1::P1():sum(0), calculated(false){}

P1::~P1(){}

  int P1::getSum(){
    return sum;
  }

void P1::calc(int num){

    if (calculated == false){

      //printf("calculating...\n");

      for (int i = 0; i < num; i++){

	if (i % 3 == 0 || i % 5 == 0){
	  sum += i;
      	}  // end if (i % 3 ...
      } // end for loop

      calculated = true;
    } // end if (calculated == false)
  }
