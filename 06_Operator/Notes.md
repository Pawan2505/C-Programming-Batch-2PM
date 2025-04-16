## 🧠 C Programming – Unary & Binary Operators  
---

### 🔹 Post-Increment (`a++`)
```
Syntax: a++;

→ Pehle value use hoti hai  
→ Fir value increase hoti hai

Example:
int a = 10;
printf("%d", a++);   // Output: 10
printf("%d", a);     // Output: 11
```

---

### 🔹 Pre-Increment (`++a`)
```
Syntax: ++a;

→ Pehle value increase hoti hai  
→ Fir use hoti hai

Example:
int a = 10;
printf("%d", ++a);   // Output: 11
```

---

### 🔹 Post-Decrement (`a--`)
```
Syntax: a--;

→ Pehle value use hoti hai  
→ Fir decrease hoti hai

Example:
int a = 10;
printf("%d", a--);   // Output: 10
printf("%d", a);     // Output: 9
```

---

### 🔹 Pre-Decrement (`--a`)
```
Syntax: --a;

→ Pehle decrease hoti hai  
→ Fir use hoti hai

Example:
int a = 10;
printf("%d", --a);   // Output: 9
printf("%d", a);     // Output: 9
```

---

### 🔸 Complex Unary Expression
```
int a = 10;
a = a++ + ++a;

Step-by-step:
a++ → 10 (use and then increment to 11)
++a → 12 (increment and then use)

a = 10 + 12 → 22

Final value: a = 22
```

---

### ➕ Arithmetic Operators

| Operator | Meaning         | Example          | Output |
|----------|------------------|------------------|--------|
| `+`      | Addition          | 10 + 20          | 30     |
| `-`      | Subtraction       | 10 - 20          | -10    |
| `*`      | Multiplication    | 10 * 20          | 200    |
| `/`      | Division (int)    | 10 / 20          | 0      |
| `%`      | Modulus (Remainder) | 10 % 20       | 10     |

---

### 🔁 Relational Operators

| Expression       | Meaning                | Output |
|------------------|-------------------------|--------|
| `num1 == num2`   | Equal to                | 0      |
| `num1 > num2`    | Greater than            | 0      |
| `num1 < num2`    | Less than               | 1      |
| `num1 >= num2`   | Greater than or equal   | 0      |
| `num1 <= num2`   | Less than or equal      | 1      |
| `num3 > num2`    | (40 > 20)               | 1      |
| `num3 <= num2`   | (40 <= 20)              | 0      |

