# 📘 Day 4: Bank Account Management

## 🧠 Objective
Handle bank account creation and basic display using C++ structs and functions.

---

## ✅ Requirements

- Define a `struct` for storing entity details
- Use an `enum` to represent types, categories or roles
- Store multiple records using an array of structs
- Create functions to input and display details
- Optional: Add sorting or filtering logic

---

## 🧱 Structure Definitions (example)

```cpp
enum Category { TYPE1, TYPE2, TYPE3 };

struct Entity {
    int id;
    char name[50];
    float value;
    Category category;
};
```

---

## 🔨 Functions to Implement

```cpp
void inputEntities(Entity arr[], int size);
void displayEntities(const Entity arr[], int size);
const char* getCategoryName(Category c);
```

---

## 🧪 Practice Questions

1. How does `enum` help avoid magic numbers?
2. How would you filter specific records based on enum type?
3. How can you improve the display format?
4. How would you sort records based on ID or value?
5. What will happen if invalid enum index is entered?

---

## 🧠 Tip
Practice using `switch-case` to convert enums into readable names using `const char*` functions.