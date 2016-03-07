/*
 * Loader.cpp
 *
 *  Created on: Jun 19, 2015
 *      Author: karim
 */
/*#include "Loader.h"
#include <cstdio>
#include <cstdlib>
void Loader::openFiles(fstream ){
	std::vector<FILE> filePointers;
	std::vector<std::string> fileNames= getCsvFileNames();
		for(int i=0; i < fileNames.size() ; ++i ){
			std::string  fileName = "investments/"+fileNames[i];
			//If you just want to pass a std::string
			//to a function that needs const char* you can use
			const char *mode= getMode().c_str();
			FILE* filePtr = std::fopen(fileName.c_str(), mode);
			if(!filePtr){
				perror("File opening failed: ");
				exit(EXIT_FAILURE);
			}
			filePointers.push_back(*filePtr);
		}
		return filePointers;
};
FILE Loader::loadFilesIntoMemory(std::vector<FILE> filePointers){
		for(int i=0; i< filePointers.size(); ++i){
			FILE filePtr = filePointers[i];
		int c;
		while((c = fgetc(filePtr)) != EOF){
			putchar(c);
		}
	}
};


std::vector<std::string> Loader::getFiles(){
	return this->files;
};

std::string Loader::getMode() const{
	return this->mode;
}
*/
