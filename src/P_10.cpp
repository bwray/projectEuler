/*
 * P10.cpp
 *.
 *  Created on: Dec 7, 2016
 *      Author: brian wray
 *
 * 		projecteuler.net/problem=10
 *
 *      Description: The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 *      Find the sum of all the primes below two million.
 *
 *      Answer: 1179908154
 *
 */
#include "P_03.h"
#include "P_10.h"
P_10::P_10(){}

P_10::~P_10(){};

long P_10::returnPrimeSum( int maxInt ){
	long sum = 0;
	int i = 2;
	P3 p3;

	while (i < maxInt){
		if (p3.isPrime(i)){
			sum += i;
		}
		++i;
	}

	return sum;

}



