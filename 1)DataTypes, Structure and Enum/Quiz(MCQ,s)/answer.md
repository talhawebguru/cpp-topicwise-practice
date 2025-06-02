# 🟢 Section 1: Easy (Basic Concepts) — Answers & Explanations

**1. B) 4 bytes**  
Most 64-bit systems use 4 bytes for `int` in C++.

**2. B) char c = 'A';**  
Single quotes are used for character literals in C++.

**3. B) 5.0**  
Assigning `int` to `float` and printing outputs `5.0`.

**4. B) bool**  
`bool` is the standard boolean type in C++.

**5. C) A function that returns nothing**  
`void` means the function does not return a value.

**6. C) float**  
`float` is a floating-point data type.

**7. B) Stores up to 50 characters**  
`char name[50];` declares an array for 50 characters.

**8. C) enum**  
The `enum` keyword is used to define enumerations.

**9. A) 0**  
The first element of an enum defaults to 0.

**10. C) 1**  
`GREEN` is the second element, so its value is 1.

---
# 🟡 Section 2: Medium (Code + Logic) — Answers & Explanations

**11. B) 1**  
`true` is 1, `false` is 0, so `1 + 0 = 1`.

**12. C) It only stores non-negative integers**  
`unsigned int` cannot represent negative numbers.

**13. A) 3**  
Casting `3.5` to `int` truncates the decimal part.

**14. C) 8**  
A `double` typically uses 8 bytes.

**15. D) b = "Hello";**  
Assigning a string to a float is a type error.

**16. A) struct Book { string title; };**  
This is the correct C++ struct syntax.

**17. B) s.name**  
Use the instance name and dot operator to access members.

**18. A) enum Size { Small, Medium, Large }; Size s = Large;**  
This is the correct enum definition and usage.

**19. C) 1**  
`ON` is the second element, so its value is 1.

**20. C) bool**  
`bool` stores true or false values.

---
# 🔴 Section 3: Hard (Advanced + Debugging) — Answers & Explanations

**21. C) Large positive number**  
Assigning `-5` to `unsigned int` wraps to a large positive value.

**22. A) A**  
ASCII value 65 corresponds to 'A'.

**23. A) 9 bytes**  
`char` (1) + `int` (4) + `float` (4) = 9 bytes (no padding).

**24. A) enum Color { Red, Blue }; Color c = Blue;**  
This is the correct enum definition and usage.

**25. B) 10**  
Casting `10.75` to `int` truncates to 10.

**26. B) 0**  
First enum member defaults to 0 if not specified.

**27. B) struct Student { };**  
This is the correct struct definition.

**28. C) It is used for aligning memory**  
Padding aligns struct members in memory.

**29. C) s1.age**  
Use the instance and dot operator to access fields.

**30. B) 8**  
Due to alignment, the struct size is 8 bytes on a 4-byte system.

**31. C) To prevent name conflicts and provide type safety**  
`enum class` provides better type safety and avoids name clashes.

**32. B) enum Direction { Left, Right };**  
This is the correct enum declaration.

**33. A) ::**  
Scope resolution operator is used with `enum class`.

**34. B) When you need public members by default**  
Structs have public members by default.

**35. B) 2**  
`Medium` is assigned value 2 in the enum.

**36. B) Use a switch-case function like getEnumName()**  
C++ does not print enum names directly; use a function.

**37. C) Struct**  
A struct can group different types together.

**38. A) Talha**  
`p1.name` prints the string assigned to the struct.

**39. C) Memory added for alignment**  
Padding is extra memory for alignment.

**40. B) Employee emp[3];**  
This declares an array of 3 Employee structs.
