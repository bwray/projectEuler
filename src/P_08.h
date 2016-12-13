/*
 * P8.h
 *
 *  Created on: Dec 7, 2016
 *      Author: brianwray
 */

#ifndef P_08_H_
#define P_08_H_

class P8{

public:
	P8();
	~P8();
	long long findLargestProduct( int n );

private:
	int numbers[1000];
	void numToArray();


};




#endif /* P_08_H_ */
