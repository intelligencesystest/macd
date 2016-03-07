/*
 * CsvParser.h
 *
 *  Created on: Jun 22, 2015
 *      Author: karim
 */
#include <iostream>
#include <vector>

#ifndef CSVPARSER_H_
#define CSVPARSER_H_
class CsvParser{
public:
	CsvParser();
	std::vector<std::string> tokenizeString(const std::string& str, const std::string& delimiters);
	void setEndOfLineDelimiter(char endOfLineDelimiter);
	char getEndOfLineDelimiter();
	void setCsvDelimeter(std::string csvDelimiter);
	std::string getCsvDelimiter();
private:
	char endOfLineDelimiter;
	std::string csvDelimiter;
};



#endif /* CSVPARSER_H_ */
