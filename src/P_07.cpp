/*
 * P7.cpp
 *.
 *  Created on: Dec 7, 2016
 *      Author: brian wray
 *
 * 		projecteuler.net/problem=7
 *
 *      Description: By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,
 *      we can see that the 6th prime is 13.
 *      What is the 10,001st prime number?
 *
 *      Answer:
 *
 */

#include "P_07.h"

#include "P_03.h"

P7::P7(){}

P7::~P7(){}

int P7::getPrimeNumber( int num ){
	int counter = 0;
	int series = 0;
	P3 p3;
	while(counter <= num){
		++series;
		if (p3.isPrime(series)){
			++counter;
		}
	}

	return series;
}
