# SimpleCalculatorC

A command-line calculator that show `int`, `float`, and `double`, user input with `scanf()`, arithmetic operators, and operator precedence

## Build and Run

Compile the program using GCC:

```sh
gcc -Wall -Wextra -std=c11 simple-calculator.c -o simple-calculator
```

Run the executable:

```sh
./simple-calculator
```

## Usage

Enter two numbers when prompted. The program displays their sum, difference, product, and quotient (unless the second number is zero)

It also demonstrates `float` addition and compares `2 + 3 * 4` with `(2 + 3) * 4` to illustrate operator precedence