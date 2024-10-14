#include "Line.hpp"

Line::Line(unsigned int len) : m_len(len) {
    system("cls");
    for (size_t i = 0; i < len; i++)
    {
        cout << '*' ;
        this_thread::sleep_for(chrono::milliseconds(50));
    }
}

Line::~Line() {
    system("cls");
    for (size_t i = 0; i < m_len; i++)
    {
        for (size_t j = i; j < m_len; j++)
        {
            cout << '*' ;
        }
        this_thread::sleep_for(chrono::milliseconds(50));
        system("cls");
    }
}