#include <iostream>
#include <string>
#include <climits>

using namespace std;

#define SOC_NUM_LEN 10
#define MAX_NUM_OF_SALARIES 255

class Worker{
public:
    Worker(unsigned int socNum[SOC_NUM_LEN], unsigned int yearsOfExp, 
           unsigned int salaries[MAX_NUM_OF_SALARIES], unsigned int salariesNum);

    Worker(string currPos);

    void setSocNum(unsigned int socNum[SOC_NUM_LEN]);
    void setYearsOfExp(unsigned int yearsOfExp);
    void setCurrPos(string currPos);
    void setSalaries(unsigned int salaries[MAX_NUM_OF_SALARIES], unsigned int salariesNum);

    const unsigned int* getSocNum() { return m_socNum; }
    const unsigned int getYearsOfExp() { return m_yearsOfExperience; }
    const string getCurrPos() { return m_currentPosition; }
    const unsigned int* getSalaries() { return m_salaries; }

    const double avgSalary();
    const unsigned int minSalary();

private:
    unsigned int m_socNum[SOC_NUM_LEN];
    unsigned int m_yearsOfExperience;
    string m_currentPosition;
    unsigned int m_salaries[MAX_NUM_OF_SALARIES];
    unsigned int m_salariesNum;
};