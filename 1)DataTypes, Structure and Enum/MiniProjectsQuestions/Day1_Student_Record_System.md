# 📘 Day 1: Student Record Management System

## 🧠 Objective
Create a system to manage and display student records using C++ `struct`, `enum`, arrays, and functions.

---

## ✅ Requirements

- Define a `struct` for storing student details (Name, Roll No, Marks, Department)
- Use an `enum` to represent departments (CSE, EEE, MECH, CIVIL, BBA)
- Store multiple student records using an array of structs
- Create functions to input and display student details
- Optional: Display students with marks above a certain threshold

---

## 🧱 Structure Definitions

```cpp
enum Department { CSE, EEE, MECH, CIVIL, BBA };

struct Student {
    int rollNo;
    char name[50];
    float marks;
    Department dept;
};
```

---

## 🔨 Functions to Implement

```cpp
void inputStudents(Student arr[], int size);
void displayStudents(const Student arr[], int size);
const char* getDepartmentName(Department d);
```

---

## 💡 Sample Output

```
Enter total number of students: 2

Student 1:
Enter Roll No: 101
Enter Name: Talha
Enter Marks: 87.5
Enter Department (0:CSE 1:EEE 2:MECH 3:CIVIL 4:BBA): 0

Student 2:
Enter Roll No: 102
Enter Name: Ahsan
Enter Marks: 78.0
Enter Department (0:CSE 1:EEE 2:MECH 3:CIVIL 4:BBA): 4

Displaying Student Records:
101 - Talha - 87.5 - CSE
102 - Ahsan - 78.0 - BBA
```

---

## 🧪 Practice Questions

1. What is the benefit of using an `enum` instead of an `int` for department?
2. What happens if you don't return a default case in the `switch` for `getDepartmentName()`?
3. How can you calculate the average marks of all students?
4. How would you store more than 100 students?
5. Can you add a filter to display only CSE students?

---

## 🧠 Tip
Use `cin.ignore()` before `cin.getline()` when switching between `cin` and `getline()`.