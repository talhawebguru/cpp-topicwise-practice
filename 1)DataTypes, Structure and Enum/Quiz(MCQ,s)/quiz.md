# 🟢 Section 1: Easy (Basic Concepts)

**1. What is the size of an int on most 64-bit systems in C++?**

- A) 2 bytes
- B) 4 bytes
- C) 8 bytes
- D) Depends on compiler

**2. Which of the following is a correct declaration of a character variable?**

- A) char c = "A";
- B) char c = 'A';
- C) char c = A;
- D) character c = 'A';

**3. What is the output of this code?**

```cpp
int x = 5;
float y = x;
cout << y;
```

- A) 5
- B) 5.0
- C) Error
- D) Undefined

**4. Which of the following is a boolean data type in C++?**

- A) bit
- B) bool
- C) boolean
- D) bitflag

**5. What does the void keyword represent?**

- A) An empty loop
- B) A class
- C) A function that returns nothing
- D) A memory address

**6. Which of the following is a floating-point data type in C++?**

- A) int
- B) char
- C) float
- D) bool

**7. What does the following declaration do?**

```cpp
char name[50];
```

- A) Stores one character
- B) Stores up to 50 characters
- C) Declares a number
- D) Causes an error

**8. Which keyword is used to define an enum?**

- A) type
- B) define
- C) enum
- D) struct

**9. What is the default value of the first element in an enum?**

- A) 0
- B) 1
- C) It must be assigned
- D) Undefined

**10. What is the output of the following code?**

```cpp
enum Color { RED, GREEN, BLUE };
Color c = GREEN;
cout << c;
```

- A) RED
- B) 0
- C) 1
- D) GREEN

# 🟡 Section 2: Medium (Code + Logic)

**11. What is the output?**

```cpp
bool x = true;
bool y = false;
cout << x + y;
```

- A) 0
- B) 1
- C) truefalse
- D) Error

**12. Choose the correct statement about unsigned int:**

- A) It stores negative and positive numbers
- B) It is not a valid data type
- C) It only stores non-negative integers
- D) It stores float values

**13. Predict the output:**

```cpp
float a = 3.5;
int b = (int)a;
cout << b;
```

- A) 3
- B) 3.5
- C) 4
- D) Error

**14. How many bytes are typically required to store a double?**

- A) 2
- B) 4
- C) 8
- D) 10

**15. Which line will cause a compile-time error?**

```cpp
int a = 10;
float b = 5.5;
char c = 'A';
bool d = true;
b = "Hello";
```

- A) int a = 10;
- B) float b = 5.5;
- C) char c = 'A';
- D) b = "Hello";

**16. Which statement correctly defines a structure in C++?**

- A) struct Book { string title; };
- B) structure Book { string title; }
- C) enum Book { title };
- D) type Book { string title; }

**17. How do you access a member of a struct named Student declared as Student s;?**

- A) Student.name
- B) s.name
- C) name.s
- D) Student->name

**18. Which of these is a valid enum definition and usage?**

- A) enum Size { Small, Medium, Large }; Size s = Large;
- B) enum Size { Small = 1; Medium = 2; };
- C) enum { Small = 'S', Medium = 'M' };
- D) Size enum { S, M, L };

**19. What will this output?**

```cpp
enum Mode { OFF, ON };
Mode m = ON;
cout << m;
```

- A) ON
- B) 0
- C) 1
- D) Error

**20. Which data type can store a true or false value?**

- A) int
- B) float
- C) bool
- D) double

# 🔴 Section 3: Hard (Advanced + Debugging)

**21. What is the output of this code?**

```cpp
int x = 10;
unsigned int y = -5;
cout << y;
```

- A) -5
- B) 5
- C) Large positive number
- D) Error

**22. What is the output?**

```cpp
char c = 65;
cout << c;
```

- A) A
- B) 65
- C) Error
- D) 'c'

**23. How much memory is used by this structure (assume no padding)?**

```cpp
struct Data {
  char a;
  int b;
  float c;
};
```

- A) 9 bytes
- B) 5 bytes
- C) 8 bytes
- D) Depends on compiler

**24. Which option correctly defines an enum and uses it?**

A)
```cpp
enum Color { Red, Blue };
Color c = Blue;
```
B)
```cpp
enum Color = { Red, Blue };
Color c = Blue;
```
C)
```cpp
Color enum { Red, Blue };
c = Red;
```
D)
```cpp
enum { Red = 1, Blue = 2 };
int c = Color.Red;
```

**25. What is the output?**

```cpp
float f = 10.75;
int i = f;
cout << i;
```

- A) 10.75
- B) 10
- C) 11
- D) Error

**26. What is the default value of the first member in an enum if not specified?**

- A) 1
- B) 0
- C) -1
- D) None of these

**27. What is the correct way to define a struct named Student?**

- A) struct Student()
- B) struct Student { };
- C) Student struct { };
- D) define struct Student { };

**28. Which of the following is true about struct padding?**

- A) It increases performance
- B) It reduces memory usage
- C) It is used for aligning memory
- D) It compresses the struct size

**29. How would you access the age field of a struct Student instance named s1?**

- A) Student.age
- B) s1->age
- C) s1.age
- D) s1:age

**30. What is the size of this struct (on a 4-byte aligned system)?**

```cpp
struct Example {
    char a;
    int b;
};
```

- A) 5
- B) 8
- C) 4
- D) 6

**31. What is the use of enum class over regular enum?**

- A) To use floating point values
- B) To allow duplicates
- C) To prevent name conflicts and provide type safety
- D) To allow string names

**32. Which of these is a valid enum declaration?**

- A) enum Direction { "Left", "Right" };
- B) enum Direction { Left, Right };
- C) enum Direction = { Left, Right };
- D) enum Direction() { Left, Right };

**33. What keyword is used to access a value from enum class Mode { Auto, Manual };?**

- A) ::
- B) .
- C) ->
- D) :

**34. When should you use struct over a class?**

- A) When you want inheritance
- B) When you need public members by default
- C) When you want encapsulation
- D) When you only want constants

**35. What will the following code print?**

```cpp
enum Level { Easy = 1, Medium = 2, Hard = 4 };
cout << Medium;
```

- A) Medium
- B) 2
- C) Hard
- D) Error

**36. What is the correct way to print an enum value as a string?**

- A) cout << Mode::ON;
- B) Use a switch-case function like getEnumName()
- C) cout << enum_to_string(ON);
- D) cout << ON;

**37. Which concept is used to group different types (int, float, char) into one type?**

- A) Union
- B) Enum
- C) Struct
- D) Array

**38. What will this print?**

```cpp
struct Person {
    int id;
    char name[30];
    float height;
};
Person p1 = {1, "Talha", 5.9};
cout << p1.name;
```

- A) Talha
- B) Error
- C) 1
- D) 5.9

**39. What is padding in a structure?**

- A) Adding white space in output
- B) Rearranging data types
- C) Memory added for alignment
- D) Reducing memory usage

**40. How do you create an array of 3 employees using a structure Employee?**

- A) Employee emp = [3];
- B) Employee emp[3];
- C) emp[] = Employee[3];
- D) Employee[] emp;

