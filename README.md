# Employee Management System using C++

A simple **Employee Management System** built in **C++** utilizing the **Standard Template Library (STL)**. This program demonstrates efficient handling of employee data using various STL containers and algorithms for sorting, filtering, and aggregating data.

---

## Features

- **Store Employee Details**:
  - Each employee has an `ID`, `Name`, and `Salary`.
  - Employee details are stored in a `std::vector`.

- **Sort Employees**:
  - Employees are sorted by salary in descending order using `std::sort`.

- **Filter High Earners**:
  - Identify employees earning more than or equal to `$50,000` using `std::copy_if`.

- **Calculate Total and Average Salary**:
  - Use `std::accumulate` to calculate the total salary of all employees.
  - Calculate the average salary.

- **Find Highest Paid Employee**:
  - Identify the employee with the highest salary using `std::max_element`.

---

## Prerequisites

To compile and run this project, you need:
- A C++ compiler supporting **C++11 or later** (e.g., GCC, Clang, MSVC).

---

## How to Run

1. Clone or download the repository to your local machine.
2. Compile the code using a C++ compiler. For example:
   ```bash
   g++ -std=c++11 employee_management.cpp -o employee_management
