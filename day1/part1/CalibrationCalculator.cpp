#include "CalibrationCalculator.h"

int CalibrationCalculator::getCalibrationSum()
{
    ifstream inputFile = getStream();
    int calibrationSum = getCalibrationSumFromStream(inputFile);
    inputFile.close();

    return calibrationSum;
}

ifstream CalibrationCalculator::getStream()
{
    const string FILE_NAME = "../input.txt";
    ifstream inputFile(FILE_NAME);

    if (!inputFile.is_open())
    {
        throw std::ios_base::failure(FILE_NAME + " couldn't be opened.");
    }
    return inputFile;
}

int CalibrationCalculator::getCalibrationSumFromStream(ifstream &inputFile)
{
    string line;
    int calibrationSum = 0;
    while (getline(inputFile, line))
    {
        calibrationSum += getCalibrationNumber(line);
    }
    return calibrationSum;
}

int CalibrationCalculator::getCalibrationNumber(string text)
{
    char firstDigit = getFirstDigit(text);
    char lastDigit = getLastDigit(text);

    string stringCalibrationNumber = string(1, firstDigit) + lastDigit;
    int calibrationNumber = stoi(stringCalibrationNumber);
    return calibrationNumber;
}

char CalibrationCalculator::getFirstDigit(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (isdigit(text[i]))
        {
            return text[i];
        }
    }

    throw std::invalid_argument(text + " doesn't contain a digit.");
}

char CalibrationCalculator::getLastDigit(string text)
{
    for (int i = text.length() - 1; i >= 0; i--)
    {
        if (isdigit(text[i]))
        {
            return text[i];
        }
    }

    throw std::invalid_argument(text + " doesn't contain a digit.");
}