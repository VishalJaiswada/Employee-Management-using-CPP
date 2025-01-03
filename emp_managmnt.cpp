#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>

using namespace std;

struct Employee
{
    int id;
    string name;
    double salary;
};

void displayEmployee(const Employee &emp)
{
    cout << "ID: " << emp.id << ", Name: " << emp.name << ", Salary: $" << emp.salary << endl;
}

int main()
{

    vector<Employee> employees = {
        {101, "Vishal Patel", 100001},
        {102, "Vikas Patel", 100002},
        {103, "Priti Patel", 50000},
        {104, "Bhola Singh", 30000},
        {105, "Anand Patel", 20000},
    };

    // lembda function is unnamed function ,denoted by [](){}
    sort(employees.begin(), employees.end(), [](const Employee &e1, const Employee &e2)
         { return e1.salary > e2.salary; });

    cout << "Employees sorted by salary -> Highest to lowest: " << endl;

    for_each(employees.begin(), employees.end(), displayEmployee);

    // show the employee details who earns >= $50000

    //    cout<<"\nEmployees earning >= $50000: "<<endl;
    //    for_each(employees.begin(), employees.end(), [](const Employee& emp){
    //        if(emp.salary >= 50000) displayEmployee(emp);
    //    });

    vector<Employee> highEarners;

    copy_if(employees.begin(), employees.end(), back_inserter(highEarners),
            [](const Employee &e)
            {
                return e.salary >= 50000;
            });
    
    cout << "Employees salary >=50000  sorted by -> Highest to lowest: " << endl;

    for_each(highEarners.begin(), highEarners.end(), displayEmployee);
    
   // calculate and display the total salary of all employees
    double totalSalary = accumulate(employees.begin(),employees.end(),0.0,
    [](double sum ,const Employee &e){
        return sum+e.salary;
    });
    
    // Average salary
    double averageSalary = totalSalary/employees.size();
    
    // Show highest paid salary of Employee
   auto highestPaidEmp= max_element(employees.begin(),employees.end(),[](const Employee& e1,const Employee& e2){
       return e1.salary < e2.salary;
    });
    
    cout<<"Highest Paid Employee: "<<endl;
    //cout<<highestPaidEmp.id<<" "<<highestPaidEmp.name<<" "<<highestPaidEmp.salary<<endl;
    displayEmployee(*highestPaidEmp);

    return 0;
}
