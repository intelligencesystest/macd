/*
 * MACD.cpp
 *
 *  Created on: Jun 19, 2015
 *      Author: karim
 */
#include "MACD.h"

float MACD::calculateSMA(std::vector<float> priceValues){
	float total = 0.0;
	float average = 0.0;
	for(int i=0; i < priceValues.size(); ++i){
		total += priceValues[i];
	}
	average = total/priceValues.size();
	return average;
};

float  MACD::calculateEMA(float priceToday, float EMAYesterday, int n){

	int k = 2 / (n + 1);
	float equation1 = priceToday * k;
	float equation2 = EMAYesterday * (1-k);
	float EMAToday = equation1 + equation2;
	return EMAToday;
};

float  MACD::calculateMACD(float EMA12, float EMA26){
	return EMA12 - EMA26;
};


