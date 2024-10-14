#include "Worker.hpp"

int main() {

    Worker worker("Worker");

    unsigned int socNum[] = {0,1,2,3,4,5,6,7,8,9};
    worker.setSocNum(socNum);

    unsigned int salaries[] = {12345, 1234, 123, 456, 789};
    worker.setSalaries(salaries, 5);

    worker.setYearsOfExp(20);

    cout << "avg salary: " << worker.avgSalary() << "\nmin salary: " << worker.minSalary() << endl;

    return 0;
}