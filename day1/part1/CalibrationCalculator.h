#ifndef CALIBRATIONCALCULATOR_H
#define CALIBRATIONCALCULATOR_H

#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

using namespace std;  

class CalibrationCalculator
{
    public:
        int getCalibrationSum();

    protected:
        ifstream getStream();

        int getCalibrationSumFromStream(ifstream& inputFile);

        virtual int getCalibrationNumber(string text);

        virtual char getFirstDigit(string text);

        virtual char getLastDigit(string text);
};

#endif