/*
 * P_11.h
 *
 *  Created on: Dec 8, 2016
 *      Author: brianwray
 */

#ifndef P_11_H_
#define P_11_H_


class P_11{
public:
	P_11();
	~P_11();

	int greatestProduct();

private:
	void buildGrid();
	int grid[20][20];
	int rightProduct(int row, int column);
	int downProduct(int row, int column);
	int rDiagProduct(int row, int column);
	int lDiagProduct(int row, int column);

};


#endif /* P_11_H_ */
