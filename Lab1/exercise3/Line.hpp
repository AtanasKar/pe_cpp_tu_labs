#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>

using namespace std;

class Line {
public:
    Line(unsigned int len);
    ~Line();
private:
    unsigned int m_len;
};