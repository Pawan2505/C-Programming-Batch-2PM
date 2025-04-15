# Constant and Macro in C Programming

---

## What is Constant?

A **constant** is a value that does **not change** while the program is running.  
We use the `const` keyword to declare a constant.

### Example:
```c
const int NUM = 10;
```

In this example, the value of `NUM` will always be 10. You cannot change it later in the program.

### Good Practice:
Write const variable names in capital letters, like `PI`, `MAX`, `RATE`, etc.

---

## Rules of Constant:

1. Must be initialized at the time of declaration.
2. Cannot be re-assigned later.

### Invalid Example:
```c
const int NUM;
NUM = 20;  // This is wrong because const must be initialized while declaring.
```

---

## Why use Constants?

- To protect values from being changed.
- To improve code readability.
- To make values easy to update (by changing in only one place).

---

## What is Macro?

A **macro** is a preprocessor command.  
It is used to define constant values before the program is compiled.  
We use `#define` to declare a macro.

### Example:
```c
#define PI 3.14
```

In this example, PI is a macro with a fixed value of 3.14.  
It does not need any data type.

---

## Syntax of Macro:
```c
#define name value
```

### Example:
```c
#define MAX 100
```

---

## Difference Between Constant and Macro:

| Point                | const                        | #define (macro)              |
|----------------------|------------------------------|------------------------------|
| Declared using       | const keyword                | #define directive             |
| Data type            | Required (like int, float)   | Not required                 |
| Checked by compiler  | Yes                          | No                           |
| Memory               | Takes memory like variable   | No memory used               |
| Scope                | Follows variable scope rules | Works globally               |

---

## Example: Area of Circle Using const
```c
#include <stdio.h>

int main() {
    const float PI = 3.14;
    float radius = 2;
    printf("Area: %.2f", PI * radius * radius);
}
```

---

## Example: Area of Circle Using Macro
```c
#include <stdio.h>
#define PI 3.14

int main() {
    float radius = 2;
    printf("Area: %.2f", PI * radius * radius);
}
```

---

## Note:

- `const` is part of C language. `#define` is handled before compilation.
- You cannot change the value of either const or macro after defining them.
- Macros are faster but can cause errors if used carelessly.
- Prefer `const` in modern programming because it is safer and type-checked.
