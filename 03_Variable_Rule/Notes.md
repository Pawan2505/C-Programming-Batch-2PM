### **Rules of Identifiers in C Programming**

---

#### **What are Identifiers?**

- Identifiers are names for variables, functions, arrays, etc., in a C program. They help the program refer to data stored in memory.

---

#### **Rules for Naming Identifiers:**

1. **Start with a Letter or Underscore (_):**  
   - Must start with a letter (a-z, A-Z) or underscore (_).  
     Example: `studentName`, `_score`, not `2score`.

2. **Use Letters, Digits, or Underscore (_):**  
   - After the first character, use letters, digits, or underscores.  
     Example: `student_21`, `total_marks1`, not `first-name`.

3. **No Spaces:**  
   - Identifiers cannot contain spaces.  
     Example: `first_name` is valid, `first name` is not.

4. **Case-Sensitive:**  
   - C is case-sensitive. `score` and `Score` are different.  
     Example: `totalMarks` and `totalmarks` are different.

5. **No Keywords:**  
   - C keywords (e.g., `int`, `float`, `return`) cannot be used as identifiers.

6. **Length:**  
   - No strict limit on length, but keep identifiers short and meaningful.  
     Example: `totalMarks`, `studentName`.

---

#### **Avoid:**

- Starting with a number (e.g., `123abc`).
- Using special characters (e.g., `$`, `@`, `#`).

---

#### **Naming Tips:**

- **Be Descriptive:** Use meaningful names like `studentAge` instead of `x`.
- **Use Clear Naming Styles:** Use camelCase (`totalMarks`) or snake_case (`total_marks`).

---

#### **Valid Identifiers:**

```c
int studentAge;        // valid
float total_marks;     // valid
char first_name[];     // valid
int _score;            // valid
```

---

#### **Note:**

- Start with a letter or underscore.
- Use letters, digits, and underscores.
- Avoid spaces, special characters, and keywords.
