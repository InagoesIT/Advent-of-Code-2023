#include "CalibrationCalculator.h"

int main()
{
    try
    {
        CalibrationCalculator calibrationCalculator = CalibrationCalculator();
        int calibrationSum = calibrationCalculator.getCalibrationSum();
        cout << calibrationSum << endl;
    }
    catch (const invalid_argument &e)
    {
        cerr << "[ERROR] [given data is invalid]" << e.what() << std::endl;
    }
    catch (const ios_base::failure &e)
    {
        cerr << "[ERROR] [given file arose problems]" << e.what() << std::endl;
    }
}