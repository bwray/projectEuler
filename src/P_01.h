/*
 * P1.h
 *
 *  Created on: Dec 2, 2016
 *      Author: brianwray
 */

#ifndef P_01_H_
#define P_01_H_

class P1 {
public:
	P1();
	virtual ~P1();

	int getSum();
	void calc(int num = 1000);


private:
	int sum;
	bool calculated;
};

#endif /* P_01_H_ */
