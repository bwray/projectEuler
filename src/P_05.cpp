/*
 * P5.cpp
 *
 *  Created on: Dec 6, 2016
 *      Author: brian wray
 *
 * 		projecteuler.net/problem=5
 *
 *      Description: 2520 is the smallest number that can be divided by each of the numbers
 *      from 1 to 10 without any remainder.
 *      What is the smallest positive number that is evenly divisible by all of the numbers
 *      from 1 to 20?
 *
 *      Answer: 232792560
 *
 */

#include "P_05.h"

#include <stdio.h>

P5::P5(){}

P5::~P5(){};

int P5::smallestMultiple( int n ){
	int counter = 100;
	int result = 0;

	for (int i = counter; i < 1000000000; i++){
		bool evenlyDiv = true;
		for (int j = 1; j < n; j++){
			if (i % j != 0) {
				evenlyDiv = false;
			}
		}
		if (evenlyDiv == true){
			result = i;
			break;
		}
	}

	return result;
}

//
