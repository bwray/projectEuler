/*
 * P6.cpp
 *.
 *  Created on: Dec 7, 2016
 *      Author: brian wray
 *
 * 		projecteuler.net/problem=6
 *
 *      Description: The sum of the squares of the first ten natural numbers is,
 *
 *      1^2 + 2^2 + ... + 10^2 = 385
 *
 *      The square of the sum of the first ten natural numbers is,
 *
 *      (1 + 2 + ... + 10)^2 = 55^2 = 3025
 *
 *      Hence the difference between the sum of the squares of the first ten natural
 *      numbers and the square of the sum is 3025 − 385 = 2640.
 *
 *      Find the difference between the sum of the squares of the first one hundred
 *      natural numbers and the square of the sum.
 *
 *      Answer:
 *
 */

#include "P_06.h"

#include <stdio.h>

P6::P6():num(100){}

P6::P6( int n ):num(n){}

P6::~P6(){}

int P6::sumOfSquares(){
	int retVal = 0;

	for (int i = 0; i <= this->num; i++){
		retVal += (i * i);
	}
	return retVal;
}

int P6::squareOfSums(){
	int retVal = 0;

	for (int i = 0; i <= this->num; i++){
		retVal += i;
	}

	retVal = retVal * retVal;

	return retVal;
}

int P6::calcDifferenc(){
	int retVal = 0;
	int sumSquare = sumOfSquares();
	int squareSum = squareOfSums();


	retVal = squareSum - sumSquare;
	return retVal;

}




