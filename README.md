# Owner-avatar-Codtech-internship-Advanced-Task3
# Lexical Analyzer (Lexer) Program

## Overview
This program implements a **Lexical Analyzer** (Lexer) in C that identifies **keywords**, **operators**, and **identifiers** from an input file. The lexical analyzer is a crucial component of a compiler, as it scans the input source code and categorizes tokens into meaningful units for further processing.

The program reads the source code (in the form of a text file) and outputs the categorized tokens: keywords, operators, and identifiers.

## Features
- **Keyword Identification**: Detects predefined keywords like `if`, `else`, `int`, `return`, etc.
- **Operator Identification**: Identifies various operators like `+`, `-`, `*`, `/`, `=`, `==`, etc.
- **Identifier Recognition**: Identifies variables and user-defined identifiers.
- **File Handling**: Processes an input file and categorizes tokens found within it.

---

## Instructions

### Input:
- The program expects an **input file** containing source code written in a programming language (e.g., C-like syntax).
- It processes the file and categorizes the tokens in the file into **keywords**, **operators**, and **identifiers**.

### Output:
- The program outputs a list of identified **keywords**, **operators**, and **identifiers** found in the input file.

### Supported Keywords (Example):
- `int`, `float`, `return`, `if`, `else`, `while`

### Supported Operators (Example):
- `+`, `-`, `*`, `/`, `=`, `==`, `<`, `>`

### Supported Identifiers:
- User-defined variables or function names, such as `main`, `num`, `total`.

---

## How to Use

1. **Prepare the Input File**:
   - Create a text file (e.g., `source_code.txt`) that contains the source code you want to analyze.

2. **Compile the Program**:
   - Save the C code in a file, for example, `lexical_analyzer.c`.
   - Open a terminal and run the following command to compile the code:
     ```bash
     gcc lexical_analyzer.c -o lexical_analyzer
     ```

3. **Run the Program**:
   - Execute the compiled program:
     ```bash
     ./lexical_analyzer
     ```

4. **Provide the Input File**:
   - The program will prompt you to enter the name of the input file (e.g., `source_code.txt`).

5. **View the Output**:
   - After processing, the program will display the list of identified **keywords**, **operators**, and **identifiers**.

---

## Sample Input
Example content of an input file (`source_code.txt`):
```c
int main() {
    int num = 5;
    float total = num * 3.14;
    return total;
}
```

---

## Sample Output
After processing the above input file, the program may output the following tokens:

```
Keywords:
int, main, return, float

Operators:
=, *, ;

Identifiers:
num, total
```

---

## Code Walkthrough

1. **Reading the Input File**:
   - The program opens the input file and reads it line by line.
   
2. **Lexical Analysis**:
   - The program scans each line for tokens (e.g., keywords, operators, and identifiers).
   - Keywords are checked against a predefined list, and operators are identified using pattern matching.
   - Identifiers are checked to ensure they consist of valid characters (letters, digits, and underscores), but they cannot start with a digit.

3. **Displaying the Results**:
   - The program categorizes the tokens into keywords, operators, and identifiers and outputs them to the terminal.

4. **Error Handling**:
   - The program checks for common errors, such as missing input files and invalid characters, and displays appropriate error messages.

---

## Compilation and Execution

1. Save the program as `lexical_analyzer.c`.
2. Open a terminal and run the following command to compile the program:
   ```bash
   gcc lexical_analyzer.c -o lexical_analyzer
   ```
3. Run the program:
   ```bash
   ./lexical_analyzer
   ```

---

## Future Enhancements
1. **Extended Token Recognition**:
   - Add support for recognizing other token types such as **constants**, **strings**, and **comments**.
   
2. **Regular Expressions**:
   - Enhance token identification using regular expressions for more complex patterns.
   
3. **Error Handling**:
   - Improve error handling to detect invalid or unknown tokens more robustly.

---

## License
This project is released under the MIT License.

---

## Contributions
Feel free to contribute by submitting pull requests, reporting issues, or suggesting improvements.

---
