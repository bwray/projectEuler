/*
 * P_12.cpp
 *.
 *  Created on: Dec 9, 2016
 *      Author: brian wray
 *
 * 		projecteuler.net/problem=12
 *
 *      Description: The sequence of triangle numbers is generated by adding the natural numbers.
 *      So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms
 *      would be:
 *
 *      1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
 *
 *      Let us list the factors of the first seven triangle numbers:
 *
 *      1: 1
 *      3: 1,3
 *      6: 1,2,3,6
 *      10: 1,2,5,10
 *      15: 1,3,5,15
 *      21: 1,3,7,21
 *      28: 1,2,4,7,14,28
 *
 *      We can see that 28 is the first triangle number to have over five divisors.
 *      What is the value of the first triangle number to have over five hundred divisors?
 *
 *      Answer: 76576500
 *
 */

#include "P_12.h"
#include <stdio.h>
#include <cmath>

P_12::P_12(){}

P_12::~P_12(){}


//int P_12::getTriangleNumber( int n ){
//	int triangleNum = 0;
//
//	for (int i = 1; i <= n; i++){
//		triangleNum += i;
//	}
//
//	return triangleNum;
//}

int P_12::numFactors( int n ){
	int numFactors = 1;

	for (int i = 1; i <= n/2; i++){
		if (n % i == 0){
			++numFactors;
			//printf("factor: %d\n", i);
		}
	}
	//printf("numFactors = %d\n", numFactors);
	return numFactors;
}

int P_12::fiveHundredDivisors(){
	int triangleNumber = 1;
	int numFactors = 0;
	int counter = 1;
	while (numFactors < 500){
		triangleNumber += counter;
		//printf("new triangle number = %d, ", toReturn);
		numFactors = this->numFactors(triangleNumber);
		//printf("numFactors = %d\n", numFactors);

		++counter;
	}
	return triangleNumber;
}


