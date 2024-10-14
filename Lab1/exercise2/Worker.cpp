#include "Worker.hpp"

Worker::Worker(unsigned int socNum[SOC_NUM_LEN], unsigned int yearsOfExp,
               unsigned int salaries[MAX_NUM_OF_SALARIES], unsigned int salariesNum) :
            m_yearsOfExperience(yearsOfExp),
            m_salariesNum(salariesNum)
{
    memcpy(m_socNum, socNum, SOC_NUM_LEN * sizeof(unsigned int));

    if(salariesNum <= MAX_NUM_OF_SALARIES)
        memcpy(m_salaries, salaries, salariesNum * sizeof(unsigned int));
    else
        cout << "Invalid number of salaries" << endl;
}

Worker::Worker(string currPos){
    m_currentPosition = currPos;
}

void Worker::setSocNum(unsigned int socNum[SOC_NUM_LEN]){
    memcpy(m_socNum, socNum, SOC_NUM_LEN * sizeof(unsigned int));
}

void Worker::setYearsOfExp(unsigned int yearsOfExp){
    m_yearsOfExperience = yearsOfExp;
}

void Worker::setCurrPos(string currPos){
    m_currentPosition = currPos;
}

void Worker::setSalaries(unsigned int salaries[MAX_NUM_OF_SALARIES], unsigned int salariesNum){
    if(salariesNum <= MAX_NUM_OF_SALARIES) {
        memcpy(m_salaries, salaries, salariesNum * sizeof(unsigned int));
        m_salariesNum = salariesNum;
    }
    else {
        cout << "Invalid number of salaries" << endl;
    }
}

const double Worker::avgSalary() {
    unsigned int sum = 0;

    for (size_t i = 0; i < m_salariesNum; i++)
    {
        sum += m_salaries[i];
    }

    return sum / (double)m_salariesNum;
}

const unsigned int Worker::minSalary() {
    unsigned int min = UINT_MAX;

    for (size_t i = 0; i < m_salariesNum; i++)
    {
        if(m_salaries[i] < min)
            min = m_salaries[i];
    }

    return min;
}
