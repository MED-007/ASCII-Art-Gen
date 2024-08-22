<!--- MED-007 --->

# ASCII Art Generator

This is a simple C++ program that prints ASCII art for digits (0-9) based on user input. Each digit is represented by a specific pattern, and you can easily extend the program to include more characters.

## Table of Contents

- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Contributing](#contributing)

## Features

- ASCII art representation for digits 0-9.
- Customizable character replacement for the ASCII art.
- Simple and easy-to-understand code, perfect for beginners.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., GCC, Clang, or MSVC).

### Building the Program

1. Clone the repository:
    ```bash
    git clone https://github.com/MED-007/ASCII-Art-Gen.git
    cd ASCII-Art-Gen
    ```

2. Compile the program:
    ```bash
    g++ -o ascii.cpp
    ```

3. Run the program:
    ```bash
    ./ascii
    ```

## Usage

1. Run the program.
2. Enter a single digit (0-9) when prompted.
3. The program will display the ASCII art representation of the digit.

Example:
```
Enter a single digit: 3
333333  
3    33 
     33 
  3333  
     33 
3    33 
333333  
```

## Extending the Program

If you want to add more characters or digits, simply extend the `asciiArt` unordered_map in the `printArt` function. Add your desired characters and their corresponding ASCII art representation. 

Example for the character `A`:
```cpp

{'A', "   AA   \n  A  A  \n A    A \n AAAAAA \n A    A \n A    A \n"}

```

## Contributing

Contributions are welcome! Feel free to open an issue or submit a pull request if you have suggestions for improvements or new features.
