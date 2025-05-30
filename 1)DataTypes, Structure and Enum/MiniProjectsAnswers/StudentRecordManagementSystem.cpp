#include <iostream>
using namespace std;

// Define enum for departments
enum Department { CSE, EEE, MECH, CIVIL, BBA };

// Define struct for student
struct Student {
    int id;
    char name[50];
    float cgpa;
    Department dept;
    int semester;
};

// Function to convert Department enum to string for display
const char* getDepartmentName(Department d) {
    switch(d) {
        case CSE: return "CSE";
        case EEE: return "EEE";
        case MECH: return "MECH";
        case CIVIL: return "CIVIL";
        case BBA: return "BBA";
        default: return "Unknown";
    }
}

// Function to input student details
void inputStudent(Student &s) {
    cout << "Enter ID: ";
    cin >> s.id;
    cout << "Enter Name: ";
    cin.ignore(); // to clear newline character from input buffer
    cin.getline(s.name, 50);
    cout << "Enter CGPA: ";
    cin >> s.cgpa;
    cout << "Enter Department (0=CSE, 1=EEE, 2=MECH, 3=CIVIL, 4=BBA): ";
    int depInput;
    cin >> depInput;
    s.dept = static_cast<Department>(depInput);
    cout << "Enter Semester: ";
    cin >> s.semester;
}

// Function to display student details
void displayStudent(const Student &s) {
    cout << "ID: " << s.id << ", Name: " << s.name
         << ", CGPA: " << s.cgpa
         << ", Department: " << getDepartmentName(s.dept)
         << ", Semester: " << s.semester << endl;
}

// Function to display students by department
void displayByDepartment(Student students[], int n, Department dept) {
    cout << "Students in Department: " << getDepartmentName(dept) << endl;
    for (int i = 0; i < n; i++) {
        if (students[i].dept == dept) {
            displayStudent(students[i]);
        }
    }
}

int main() {
    int n;
    cout << "How many students do you want to enter? ";
    cin >> n;
    
    Student students[n];  // Array of students
    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i+1 << ":\n";
        inputStudent(students[i]);
    }
    
    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < n; i++) {
        displayStudent(students[i]);
    }
    
    cout << "\nEnter department number to filter students (0=CSE, 1=EEE, 2=MECH, 3=CIVIL, 4=BBA): ";
    int filterDept;
    cin >> filterDept;
    
    displayByDepartment(students, n, static_cast<Department>(filterDept));
    
    return 0;
}
