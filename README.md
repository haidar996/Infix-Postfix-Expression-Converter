# Infix-Postfix-Expression-Converter
A C++ application that converts infix expressions to postfix notation and evaluates postfix expressions. Handles operators, parentheses, and follows standard arithmetic precedence rules.
## 🎯 Features

- 🔁 Converts infix expressions to postfix (RPN)
- 🧠 Evaluates postfix expressions
- ➕ Supports operators: `+`, `-`, `*`, `/`
- 🧮 Handles parentheses for grouping
- 🏗️ Follows standard arithmetic precedence rules

---

## 📌 Examples

### ✅ Infix to Postfix Conversion

- Input: `(a*r*b)*c`  
  Output: `arb**c*`

- Input: `A + B - C`  
  Output: `AB+C-`

### ✅ Postfix Evaluation

- Input: `6 3 3 * 1 /`  
  Output: `6`

- Input: `6 3 3 * + 3 /`  
  Output: `5`

---

## 🚀 Usage

### 1. Compile the Program

```bash
g++ -o expression_converter main.cpp
2. Run the Executable
bash
Copy code
./expression_converter
3. Program Output
Postfix conversion result

Evaluation result

Execution time

🔧 Implementation Details
📚 Uses stack data structures for both infix-to-postfix conversion and postfix evaluation

🔢 Implements operator precedence and associativity handling

⚠️ Includes basic error checking for invalid expressions

💡 Applications
🧑‍🏫 Educational tool for understanding expression notation and order of operations

🧮 Core logic for calculator applications

🧵 Useful in compilers and interpreters for expression parsing
