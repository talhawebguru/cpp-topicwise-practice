<!-- filepath: d:\Pratice\C++\1)DataTypes, Structure and Enum\Notes\Lecture1.md -->

# ✅ Lecture 1: Introduction to C++ Programming

---

## 🛠️ Setup
- **Install a C++ compiler** (e.g., MinGW)
- Or use an online IDE: [replit.com](https://replit.com), Coding Ninjas Studio, or **VS Code** with C++ extension

---

## 📄 File Extension
- C++ source files use the `.cpp` extension

---

## ✨ First Program: Hello World

```cpp
#include<iostream>
using namespace std;

int main() {
    cout << "Hello World!";
    return 0;
}
```

---

## 🧩 Keywords in C++
- `#include<iostream>` — Preprocessor directive for input/output
- `using namespace std;` — Allows use of standard namespace
- `int main()` — Entry point of C++ program
- `cout` — Output
- `cin` — Input
- `return 0;` — Exits the program

---

## 🔢 Variables & Data Types

```cpp
int a = 10;
float b = 5.5;
char c = 'A';
bool isTrue = true;
```

---

## 🔄 Input/Output Example

```cpp
int a;
cin >> a;
cout << "Value is: " << a;
```

---

## 🌳 Data Types Tree in C++

```
               Data Types
                    |
        ┌────────────┴────────────┐
        |                         |
   Primitive                 Non-Primitive
        |                         |
 ┌──────┼────────┐          ┌─────┬────────┬──────┐
 |      |        |          |     |        |      |
Integer Float  Character   Array String  Structure Pointer
 |               |
Signed         Unsigned
```

---

# 🧩 1. Primitive Data Types (Built-in)

These are basic data types provided by C++.

### 🔹 a. Integer Types

| Type      | Size (bytes) | Range                              | Description                  |
|-----------|--------------|-------------------------------------|------------------------------|
| int       | 4            | -2,147,483,648 to 2,147,483,647     | Used for integers (default)  |
| short     | 2            | -32,768 to 32,767                   | Smaller range than int       |
| long      | 4 or 8       | Larger than int                     | Used when int is not enough  |
| long long | 8            | Up to ±9 quintillion                | Very large integers          |
| unsigned  | same as int  | Only positive numbers               | Doubles the max value range  |

**Example:**
```cpp
int age = 25;
unsigned int score = 450;
```

### 🔹 b. Floating-Point Types

| Type        | Size (bytes) | Precision         | Description             |
|-------------|--------------|-------------------|-------------------------|
| float       | 4            | 6 decimal places  | Single precision float  |
| double      | 8            | 15 decimal places | Double precision float  |
| long double | 10/12        | 18-19 decimals    | Extended precision      |

**Example:**
```cpp
float weight = 65.5;
double pi = 3.1415926535;
```

### 🔹 c. Character Type

| Type | Size (bytes) | Description                |
|------|--------------|----------------------------|
| char | 1            | Stores a single character  |

**Example:**
```cpp
char grade = 'A';
```

### 🔹 d. Boolean Type

| Type | Size (bytes) | Description      |
|------|--------------|------------------|
| bool | 1            | true or false    |

**Example:**
```cpp
bool isPassed = true;
```

### 🔹 e. void
- Represents absence of type.
- Mostly used with functions that don’t return any value.

**Example:**
```cpp
void greet() {
    cout << "Hello Talha!";
}
```

---

# 🧱 2. Non-Primitive Data Types (User-defined / Derived)

Used to store a collection of values or customize your own types.

### 🔸 a. Array
- Collection of elements of the same type stored in contiguous memory.

```cpp
int numbers[5] = {1, 2, 3, 4, 5};
```

### 🔸 b. String
- Sequence of characters.
- In C++: `char str[]` (C-style), or `string` (STL)

```cpp
string name = "Talha";
char college[] = "Apna College";
```

### 🔸 c. Structure (struct)
- Groups different types under one name.

```cpp
struct Student {
    string name;
    int rollNo;
    float marks;
};
```

### 🔸 d. Pointer
- Stores the memory address of another variable.

```cpp
int a = 10;
int* ptr = &a;
```

### 🔸 e. Class, Function, Reference, Enum, Union
- These are also user-defined data types.

---

## 📦 Type Modifiers
Used with basic types to alter the range:
- `signed`
- `unsigned`
- `short`
- `long`

**Example:**
```cpp
unsigned short int u = 65000;
long long int bigNumber = 9223372036854775807;
```

---

## 📘 Summary Table

| Category       | Type           | Size (Bytes) | Notes                        |
|----------------|----------------|--------------|------------------------------|
| Integer        | int            | 4            | Default integer type         |
| Floating-point | float / double | 4 / 8        | Use double for precision     |
| Character      | char           | 1            | Stores a single character    |
| Boolean        | bool           | 1            | Stores true/false            |
| Void           | void           | 0            | No return / empty parameter  |
| Array          | int arr[5]     | varies       | Collection of fixed-size     |
| String         | string         | varies       | Use #include<string>         |
| Structure      | struct         | varies       | Custom grouping of variables |
| Pointer        | int*           | 4 / 8        | Address of variables         |

---

# ⚡️ Important Concepts & Tips

## 1. Unsigned Behavior with Negative Values

> **Concept:** Unsigned types can only hold non-negative values. Assigning a negative number wraps around using modulo arithmetic.

**Example:**
```cpp
unsigned int x = -5;
cout << x; // Output: 4294967291 (on 32-bit)
```

**Explanation:**
-5 + 2^32 = 4294967291

> **Rule:** Never assign a negative number to an unsigned variable unless you want wraparound.

---

## 2. Compiler-Dependent Memory Layout (Structure Padding)

> **Concept:** The size of a struct may include padding for alignment, not just the sum of its members.

**Example:**
```cpp
struct Data {
  char a;   // 1 byte
  int b;    // 4 bytes
  float c;  // 4 bytes
};
```

- Expected: 1 + 4 + 4 = 9 bytes
- Actual (with padding): 12 bytes

**Why?**
- `char a` is 1 byte, but `int b` needs to start at a 4-byte aligned address, so 3 bytes of padding are added.

> **Tip:** Use `#pragma pack(1)` to avoid padding (not recommended unless necessary).

---

## 3. Correct Enum Syntax in C++

> **Concept:** `enum` allows you to create a set of named integral constants.

**Correct Syntax:**
```cpp
enum Color { Red, Blue, Green };
Color myColor = Blue;
```
- Internally: Red = 0, Blue = 1, Green = 2

**Incorrect Syntax:**
```cpp
enum Color = { Red, Blue };  // Wrong
Color enum { Red, Blue };    // Wrong
```

**Custom Values:**
```cpp
enum Level { Easy = 1, Medium = 5, Hard = 10 };
```

**C++11: Strongly Typed Enum (Recommended)**
```cpp
enum class Status { Online, Offline, Busy };
Status s = Status::Busy;  // safer and scoped
```
- Prevents name clashes
- Safer and more readable
- Requires scoped access (Status::Online)

---

# 🔶 PART 1: struct in C++

## ✅ What is a struct?
A struct (structure) is a user-defined data type that groups multiple variables (of different types) under one name.

**Example:**
```cpp
struct Person {
    string name;
    int age;
    float height;
};
```

### 💡 Use Cases
- Model real-world entities: Person, Car, Product, Order, etc.
- Group related data together

**Example Usage:**
```cpp
#include <iostream>
using namespace std;

struct Car {
    string brand;
    int year;
    float mileage;
};

int main() {
    Car myCar = {"Toyota", 2020, 15000.5};
    cout << myCar.brand << " - " << myCar.year << " - " << myCar.mileage << " km";
    return 0;
}
```

---

## 🔍 Structure Padding & Memory Layout
- Memory alignment is critical for struct performance.
- The compiler adds padding bytes to ensure each data member starts at an address divisible by its size.

**Example:**
```cpp
struct Demo {
    char a;     // 1 byte
    int b;      // 4 bytes
    char c;     // 1 byte
};
```
- `char a` → 1 byte
- 3 bytes of padding to align `int b`
- `int b` → 4 bytes
- `char c` → 1 byte
- 3 bytes of padding to make total size a multiple of 4
- **Total: 12 bytes (not 6!)**

### 🛠 Tips to Reduce Padding
```cpp
struct Optimized {
    int b;    // 4 bytes
    char a;   // 1 byte
    char c;   // 1 byte
}; // Total: 6 bytes (Better layout)
```

---

## 🧠 When to Use struct in Real Projects
- Define a Product type in an eCommerce app
- Represent a SensorReading in an IoT project
- Store coordinates in a game:

```cpp
struct Point {
    int x, y;
};
```

---

# 🔷 PART 2: enum in C++

## ✅ What is an enum?
An enum (enumeration) is a user-defined data type that assigns names to constant integral values.

**Example:**
```cpp
enum Color { Red, Green, Blue };
// Red = 0, Green = 1, Blue = 2 (by default)
```

**Example Usage:**
```cpp
enum Status { Success, Failure, Pending };

int main() {
    Status jobStatus = Pending;
    if (jobStatus == Success) {
        cout << "Task Completed!";
    } else {
        cout << "Still in progress...";
    }
}
```

### 🧠 Real-World Uses of enum
- Represent state of UI: Loading, Success, Error
- HTTP status codes: OK = 200, NotFound = 404
- Roles: Admin, Editor, Viewer

**Custom Values in enum:**
```cpp
enum HttpCode {
    OK = 200,
    NotFound = 404,
    ServerError = 500
};
```

### 🔒 Safer Enums: enum class (C++11)
```cpp
enum class Mode { Auto, Manual };
Mode m = Mode::Auto;  // safer, scoped
```
- You can't do `m = Auto;` like in regular enum
- This avoids name conflicts

---

# 🔁 enum vs struct

| Feature        | struct                        | enum                        |
|---------------|-------------------------------|-----------------------------|
| Purpose       | Group different types          | Group related constants     |
| Example Use   | Person, Product, Order        | Color, Status, Direction    |
| Members       | Variables                     | Named integer values        |
| Memory Layout | Can have padding              | Just simple integers        |

---

# 📘 Summary Notes

## struct
- Groups multiple related variables (even of different types)
- May include padding for memory alignment
- Good for representing objects or entities

## enum
- Groups related named constants
- Default values start from 0 unless specified
- Use `enum class` for type safety and scoped access
