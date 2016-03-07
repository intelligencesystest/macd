/*
 * MACD.h
 *
 *  Created on: Jun 19, 2015
 *      Author: karim
 */
#include <iostream>
#include <vector>
#ifndef MACD_H_
#define MACD_H_

class MACD{
	float calculateSMA(std::vector<float> values);
	float calculateEMA(float priceToday, float EMAYesterday, int n);
	float calculateMACD(float EMA12, float EMA26);

};


#endif /* MACD_H_ */
