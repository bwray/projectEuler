/*
 * P6.h
 *
 *  Created on: Dec 6, 2016
 *      Author: brianwray
 */

#ifndef P_06_H_
#define P_06_H_

class P6{

public:
	P6();
	P6( int n );
	~P6();
	int calcDifferenc();

private:

	int num;
	int sumOfSquares();
	int squareOfSums();

};



#endif /* P_06_H_ */
