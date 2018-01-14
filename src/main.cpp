//============================================================================
// Name        : MACD.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Config.h"
#include "CsvParser.h"
#include <iostream>
#include <fstream>
#include <vector>



using namespace std;

int main() {
	std::vector<std::string> csvFileNames{"AZO","PHYS","JJP","CNP","DBP","ORLY","COST","DGL","ASPS","CVS"};
	ifstream readFileStream;
	string fileName;
	string rootPath = "investments/";
	string line;
	std::vector<std::string> csvFields;
	CsvParser parser;

	for (int i=0; i < csvFileNames.size(); ++i){
	    fileName = rootPath + csvFileNames[i] + ".csv";
	    readFileStream.open(fileName);
		if(!readFileStream){
			cerr << "Error: Couldn't open: " << fileName << endl;
			return -1;
		}
		while(getline(readFileStream, line, parser.getEndOfLineDelimiter())){
		cout << "read line: " << line << endl;
		csvFields = parser.tokenizeString(line, parser.getCsvDelimiter());

		cout << "Number of fields: " << csvFields.size();
		cout <<endl;
		}
		//close file stream after use to associate with another file
		readFileStream.close();
	}
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
