#include <iostream>
#include <iomanip>

using namespace std;

enum TimeStandard {
    CLOCK_12 = 0,
    CLOCK_24
};

class Time {
public:
    Time(unsigned int hours, unsigned int minutes, unsigned int seconds);

    void printTime(TimeStandard timeStandard);

private:
    unsigned int m_hours;
    unsigned int m_minutes;
    unsigned int m_seconds;

};