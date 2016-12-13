/*
 * P9.cpp
 *.
 *  Created on: Dec 7, 2016
 *      Author: brian wray
 *
 * 		projecteuler.net/problem=9
 *
 *      Description: A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 *
 *      		a^2 + b^2 = c^2
 *
 *      For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
 *
 *      There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 *      Find the product abc.
 *
 *
 *      Answer: 31875000
 *
 */

#include "P_09.h"

#include <stdio.h>

P9::P9():a(1), b(1), c(1){}

P9::~P9(){}

void P9::findTriplet(){
	int x = a;
	int y = b;
	int z = c;

	for (int i = x; i < 500; i++){
		for (int j = y; j < 500; j++){
			for (int k = z; k < 500; k++){
				if ((i * i) + (j * j) == (k * k)){
					//printf("Found a pythagorean triplet: a = %d, b = %d, c = %d\n", i, j, k);
					//printf("Their sum is %d\n\n", (i + j + k));
					if (i + j + k == 1000){
						//printf("a^2 = %d, b^2 = %d, c^2 = %d, a^2 + b^2 = %d\n", (i * i), (j * j), (k * k), (i * i + j * j));
						a = i;
						b = j;
						c = k;
						return;
					}
				}
			}
		}
	}
}


int P9::returnTripletProduct(){
	findTriplet();
	if (a * a + b * b == c * c && a + b + c == 1000){
		return a * b * c;
	}

	return 0;
}
