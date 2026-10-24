# Menu-Driven-Program-in-C-to-implement-Arithmetic-Operations

Menu-Driven Arithmetic Calculator in C

## 📌 Overview

This assignment implements a **menu-driven arithmetic calculator using the C programming language**. The program accepts two numbers from the user and allows the user to select an arithmetic operation from a menu. It then performs the selected operation using a `switch-case` control structure and displays the result.

The assignment focuses on understanding arithmetic operators, user input, conditional execution, and the use of `switch-case` statements in C.

## 🎯 Objectives

- To understand and implement arithmetic operators in C.
- To learn how to use the `switch-case` control structure.
- To develop a menu-driven program for performing basic arithmetic calculations.
- To understand how user input determines program execution.
- To handle invalid menu choices using the `default` case.

## 🛠️ Technologies Used

- **Programming Language:** C
- **Platform:** 64-bit open-source Linux
- **Editor:** gedit or any compatible text editor
- **Compiler:** GCC (GNU Compiler Collection)

## 📚 Theory

### 1. Arithmetic Operators

Arithmetic operators perform mathematical calculations on numeric operands.

| Operator | Operation | Example |
|---|---|---|
| `+` | Addition | `20 + 4 = 24` |
| `-` | Subtraction | `20 - 4 = 16` |
| `*` | Multiplication | `20 * 4 = 80` |
| `/` | Division | `20 / 4 = 5` |
| `%` | Modulus (remainder) | `20 % 4 = 0` |

**Note:** The modulus operator `%` is used with integer operands in C. When using integer division, any fractional part of the quotient is discarded.

### 2. Logical Operators

Logical operators are used to combine or negate conditions. They produce either `1` (true) or `0` (false) in C.

| Operator | Meaning | Example |
|---|---|---|
| `&&` | Logical AND | `(a > 0 && b > 0)` |
| `||` | Logical OR | `(a > 0 || b > 0)` |
| `!` | Logical NOT | `!(a > 0)` |

### 3. Relational Operators

Relational operators compare two values and return `1` if the condition is true or `0` if it is false.

| Operator | Meaning |
|---|---|
| `==` | Equal to |
| `!=` | Not equal to |
| `>` | Greater than |
| `<` | Less than |
| `>=` | Greater than or equal to |
| `<=` | Less than or equal to |

### 4. Switch-Case Control Structure

The `switch-case` statement is a selection control structure that executes a particular block of code based on the value of an expression.

**Syntax:**

```c
switch (expression)
{
    case constant1:
        // Statements
        break;

    case constant2:
        // Statements
        break;

    default:
        // Statements for unmatched choices
}
```

- `switch`: Evaluates the expression.
- `case`: Specifies a possible matching value.
- `break`: Terminates the current switch block.
- `default`: Executes when none of the cases match.

The `break` statement prevents execution from falling through into subsequent cases.

## ⚙️ Algorithm

1. Start the program.
2. Declare variables to store two numbers, the user's choice, and the result.
3. Accept two numbers from the user.
4. Display a menu of available arithmetic operations.
5. Accept the user's choice.
6. Use a `switch-case` statement to identify the selected operation.
7. Perform the corresponding arithmetic calculation.
8. Check for division or modulus by zero where applicable.
9. Display the result or an appropriate error message.
10. If the choice is invalid, display an invalid-choice message.
11. Stop the program.

## 🧪 Sample Input and Output

**Example 1: Addition**

```text
Enter the first number: 20
Enter the second number: 4

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus

Enter your choice: 1
Addition = 24
```

**Example 2: Subtraction**

```text
Enter the first number: 20
Enter the second number: 4

Enter your choice: 2
Subtraction = 16
```

**Example 3: Multiplication**

```text
Enter the first number: 20
Enter the second number: 4

Enter your choice: 3
Multiplication = 80
```

**Example 4: Division**

```text
Enter the first number: 20
Enter the second number: 4

Enter your choice: 4
Division = 5
```

## ▶️ How to Compile and Run

### Step 1: Save the source code

Save your C program as `calculator.c`.

### Step 2: Compile the program

Open a terminal in the directory containing the source file and execute:

```bash
gcc calculator.c -o calculator
```

### Step 3: Run the program

```bash
./calculator
```

**Requirements:** GCC must be installed on the system. On Ubuntu or Debian-based Linux distributions, it can be installed using:

```bash
sudo apt install gcc
```

## ❓ Frequently Asked Questions

### 1. What is the `break` statement?

The `break` statement immediately terminates the nearest enclosing loop or `switch` statement. In a `switch-case` structure, it prevents the execution from continuing into the following cases.

### 2. What happens if all `break` statements are removed from a switch-case structure?

Once a case matches, execution continues into the subsequent cases until a `break` or the end of the switch block is reached. This behavior is called **fall-through** and may cause multiple operations to execute unintentionally.

### 3. Why is the `default` case used?

The `default` case handles situations where the switch expression does not match any available case. In a menu-driven calculator, it can display an error message when the user enters an invalid choice.

## ✅ Conclusion

The program demonstrates the implementation of a basic arithmetic calculator using C. It provides practical experience with arithmetic, logical and relational operators, user input, and the `switch-case` control structure. The assignment also highlights the importance of `break` and `default` in writing clear and reliable menu-driven programs.

## 📂 Repository Contents

- `calculator.c` — Source code for the menu-driven arithmetic calculator.
- `README.md` — Assignment description, theory, algorithm, and execution instructions.

## 👨‍💻 Academic Context

**Course:** Programming and Problem Solving (PPS)  
**Institution:** MIT World Peace University (MIT-WPU), Pune  
**Lab Assignment:** 03  
**Topic:** Basic Arithmetic Operations Using Switch-Case
