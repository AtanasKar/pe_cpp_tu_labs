#include "Time.hpp"

Time::Time(unsigned int hours, unsigned int minutes, unsigned int seconds) {
    if(hours >= 0 && hours <= 23 ) {
        m_hours = hours;
    }else{
        cout << "Wrong value for hours!" << endl;
    }
    if(minutes >= 0 && minutes <= 59 ) {
        m_minutes = minutes;
    }else{
        cout << "Wrong value for minutes!" << endl;
    }
    if(seconds >= 0 && seconds <= 59 ) {
        m_seconds = seconds;
    }else{
        cout << "Wrong value for seconds!" << endl;
    }
}

void Time::printTime(TimeStandard timeStandard) {
    switch (timeStandard)
    {
    case TimeStandard::CLOCK_24:
        cout << setfill('0') << setw(2) << m_hours << ':' 
             << setfill('0') << setw(2) << m_minutes << ':' 
             << setfill('0') << setw(2) << m_seconds << endl;
        break;
    case TimeStandard::CLOCK_12:
        if (m_hours >= 12) {
            cout << setfill('0') << setw(2) << m_hours % 12 << ':' 
                 << setfill('0') << setw(2) << m_minutes << ':' 
                 << setfill('0') << setw(2) << m_seconds << " PM" << endl;
        }else{
            cout << setfill('0') << setw(2) << m_hours << ':' 
                 << setfill('0') << setw(2) << m_minutes << ':' 
                 << setfill('0') << setw(2) << m_seconds << " AM" << endl;
        }
        break;
    default:
        cout << "Invalid time standard" << endl;
        break;
    }
}