### Variable and Data Type in C Programming

---

## 🔹 1. What is a Variable?

A **variable** is a **named memory location** used to **store data**. The value stored can **change** during the program.

🧠 *Think of it as a box that holds a value.*

### Example:
```c
int age = 25;
```
- `int` → data type (for numbers)
- `age` → variable name
- `25` → value

---

## 🔹 2. Rules for Naming Variables

**Valid rules:**
- Start with a **letter** or **underscore (`_`)**
- Use only letters, numbers, and underscores
- **Case-sensitive** (`roll` ≠ `Roll`)
- Don't use C **keywords** (like `int`, `return`, `float`)

**Invalid examples:**
- `2value` (starts with a number)
- `float` (keyword)

**Valid examples:**
- `total`, `_marks`, `data1`, `Speed`

---

## 🔹 3. Declaring Variables

### 🛠 Syntax:
```c
<data_type> <variable_name>;
```

### Example:
```c
int marks;
float percentage;
char grade;
```

You can also declare and assign together:
```c
int marks = 95;
```

---

## 🔹 4. Types of Variables

| Type       | Where Declared?                          |
|------------|-------------------------------------------|
| Local      | Inside function or block                 |
| Global     | Outside all functions                    |
| Static     | Remembers value between function calls   |
| Extern     | Global variable from another file        |

---

## 🔹 5. What is a Data Type?

A **data type** tells the compiler:
- What kind of data the variable will store
- How much memory to use

Examples: int, float, char, etc.

---

## 🔹 6. Basic Data Types

| Type     | Size     | Example   | Format Specifier |
|----------|----------|-----------|------------------|
| `int`    | 2 or 4 B | 10        | `%d`             |
| `float`  | 4 B      | 3.14      | `%f`             |
| `char`   | 1 B      | 'A'       | `%c`             |
| `double` | 8 B      | 10.3245   | `%lf`            |

---

## 🔹 7. Example Program

```c
#include <stdio.h>

int main() {
    int age = 20;
    float marks = 89.75;
    char grade = 'A';
    double salary = 50000.89;

    printf("Age: %d\n", age);
    printf("Marks: %.2f\n", marks);
    printf("Grade: %c\n", grade);
    printf("Salary: %.2lf\n", salary);

    return 0;
}
```

---

## 🔹 8. Other Data Types

| Type           | Example               |
|----------------|------------------------|
| Array          | `int arr[5];`          |
| Structure      | `struct student {}`    |
| Union          | `union data {}`        |
| Enum           | `enum days {}`         |

*(We’ll study these in detail later.)*

---

## 🔹 9. Memory Concepts

- `int` → usually **4 bytes**
- `char` → **1 byte**
- Use `sizeof()` to check size

### Example:
```c
printf("%d", sizeof(int)); // usually 4
```

---

## 🔹 Practice Questions

1. Declare a variable for your name, age, and percentage.
2. Write a program to take and print a character and a float.
3. What’s the difference between `float` and `double`?
4. Is `float roll = 'A';` valid? Why/why not?

