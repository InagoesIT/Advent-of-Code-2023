#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;  

char getFirstDigit(string text);

char getLastDigit(string text);

int getCalibrationNumber(string text);

int getCalibrationSumFromStream(ifstream& inputFile);

ifstream getStream();

int getCalibrationSum();

int main();

#endif