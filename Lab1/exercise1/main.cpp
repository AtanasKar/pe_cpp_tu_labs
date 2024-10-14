#include "Time.hpp"

int main() {

    Time time(13,3,4);

    time.printTime(TimeStandard::CLOCK_12);
    time.printTime(TimeStandard::CLOCK_24);

    return 0;
}