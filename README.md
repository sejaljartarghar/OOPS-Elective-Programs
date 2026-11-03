# OOPS Elective – C++ Programs

This repository contains C++ programs completed as part of the **Object-Oriented Programming (OOPS) Elective** coursework. The programs are organized session-wise from **Day 1 to Day 13**, covering C++ fundamentals and object-oriented programming concepts through practical examples.

## Repository Structure

```text
OOPS-Elective-Programs/
├── Programs/
│   ├── Day_1/
│   ├── Day_2/
│   ├── Day_3/
│   ├── Day_4/
│   ├── Day_5/
│   ├── Day_6/
│   ├── Day_7/
│   ├── Day_8/
│   ├── Day_9/
│   ├── Day_10/
│   ├── Day_11/
│   ├── Day_12/
│   └── Day_13/
├── .gitignore
└── README.md
```

Each `Day_x` folder contains the C++ programs for that session.

## Programs and Concepts

### Day 1 – C++ Fundamentals
| Program | Description |
|---|---|
| `Area_Rec.cpp` | Calculates the area of a rectangle using user input. |
| `Data_Types.cpp` | Demonstrates basic C++ data types and variable values. |

### Day 2 – Functions, Strings and Arrays
| Program | Description |
|---|---|
| `Biggest_array.cpp` | Finds the largest element in an array. |
| `Fun_call_methods.cpp` | Demonstrates function parameter passing methods: value, reference and pointer. |
| `Palindrome_string.cpp` | Checks whether a string is a palindrome. |
| `String_len.cpp` | Demonstrates finding the length of a string. |

### Day 3 – Classes and Objects
| Program | Description |
|---|---|
| `Area_Rec_withClass.cpp` | Calculates rectangle area using a class and object. |
| `Display marks.cpp` | Stores and displays student marks/details using a class. |
| `Student_details.cpp` | Stores and displays student information using a class. |

### Day 4 – Member Functions and Constructors
| Program | Description |
|---|---|
| `Add_objects.cpp` | Demonstrates addition of object-based values. |
| `Complex_Num.cpp` | Represents and displays a complex number using a class. |
| `EmployeeDetails.cpp` | Stores and displays employee details. |
| `Function_Outside_Class.cpp` | Demonstrates defining a member function outside the class. |
| `Parameterized_Constructor.cpp` | Initializes employee details using a parameterized constructor. |
| `Time.cpp` | Demonstrates time representation and operations using a class. |

### Day 5 – Constructors and Static Members
| Program | Description |
|---|---|
| `Copy_Constructor.cpp` | Demonstrates initialization of an object using a copy constructor. |
| `Default_Constructor.cpp` | Demonstrates a default constructor. |
| `EmployeeDetails_ 2.cpp` | Initializes employee information and demonstrates handling multiple employee objects. |
| `static.cpp` | Demonstrates a static data member shared among objects. |

### Day 6 – Inheritance and Access Modes
| Program | Description |
|---|---|
| `Access Modes.cpp` | Demonstrates access modes in inheritance. |
| `Multi level Inheritance.cpp` | Implements multilevel inheritance. |
| `Single level Inheritance.cpp` | Implements single-level inheritance. |

### Day 7 – Friend and Static Functions
| Program | Description |
|---|---|
| `Friend function.cpp` | Uses a friend function to access class data and calculate a sum. |
| `Friend function_2.cpp` | Demonstrates another friend-function example. |
| `Friend function_3.cpp` | Uses a common friend function to access data from two classes. |
| `Static Function.cpp` | Demonstrates a static member function and static data. |

### Day 8 – Multilevel Inheritance
| Program | Description |
|---|---|
| `Multi-level.cpp` | Models vehicle, car and sports-car classes using multilevel inheritance. |

### Day 9 – Constructor Initializer Lists and Inheritance
| Program | Description |
|---|---|
| `Constructor Initializer List (MLI).cpp` | Demonstrates constructor initialization in multilevel inheritance. |
| `Constructor Initializer List (SLI).cpp` | Demonstrates constructor initialization in single-level inheritance. |
| `Parameterized_Constructors.cpp` | Uses parameterized constructors with multiple inheritance. |
| `Student_Result_3_Subjects.cpp` | Uses student, test and result classes to calculate/display a result for three subjects. |
| `Student_Result_5_Subjects.cpp` | Uses inheritance to calculate total marks and percentage for five subjects. |

### Day 10 – Constructor Initialization and Multiple Inheritance
| Program | Description |
|---|---|
| `Intermediate Contructor.cpp` | Demonstrates parameterized constructors and initializer lists across inherited classes. |
| `Multiple Inheritance.cpp` | Implements multiple inheritance using `Liquid`, `Fuel` and `Petrol` classes. |

### Day 11 – Virtual Functions and the Diamond Problem
| Program | Description |
|---|---|
| `Diamond Problem.cpp` | Demonstrates the diamond inheritance structure and ambiguity of inherited members. |
| `Runtime polymorphism.cpp` | Demonstrates runtime polymorphism using virtual functions and a base-class pointer. |
| `Virtual Base class.cpp` | Resolves diamond inheritance ambiguity using a virtual base class. |
| `virtual function Override.cpp` | Demonstrates virtual function overriding. |

### Day 12 – Operator Overloading and Abstract Classes
| Program | Description |
|---|---|
| `Operator Overloading.cpp` | Demonstrates operator overloading for complex-number operations. |
| `Unary operator.cpp` | Demonstrates unary operator overloading. |
| `array of pointer objects.cpp` | Demonstrates an array of base-class pointers referring to derived objects. |
| `pure virtual function,.cpp` | Demonstrates a pure virtual function and an abstract class. |

### Day 13 – Exception Handling
| Program | Description |
|---|---|
| `Basic_Exception_Handling.cpp` | Demonstrates `try`, `throw` and `catch` using an integer exception. |
| `Division_By_Zero.cpp` | Handles division-by-zero using exception handling. |
| `Division_Exception_Order.cpp` | Demonstrates how the order of operations affects exception handling for division by zero. |
| `Exception_Int_Zero_Check.cpp` | Checks for zero values and demonstrates integer exception handling. |
| `Exception_Type_Matching.cpp` | Demonstrates exception handling with different thrown data types. |
| `String_Operator_Overloading.cpp` | Demonstrates the intended use of binary `+` operator overloading for string concatenation. |

## Concepts Covered

- C++ fundamentals and data types
- Functions and parameter passing
- Strings and arrays
- Classes and objects
- Member functions
- Constructors: default, parameterized and copy
- Constructor initializer lists
- Static data members and static member functions
- Friend functions
- Access specifiers and inheritance
- Single, multilevel and multiple inheritance
- Diamond problem and virtual base classes
- Function overriding and runtime polymorphism
- Operator overloading
- Pure virtual functions and abstract classes
- Exception handling using `try`, `throw` and `catch`

## Programming Language and Tools

- **Language:** C++
- **Compiler:** GCC / G++ (`g++`)
- **Editor:** Visual Studio Code
- **Version Control:** Git and GitHub

## How to Compile and Run

Make sure a C++ compiler such as `g++` is installed.

1. Open a terminal in the folder containing the program.
2. Compile the source file:

   ```bash
   g++ "filename.cpp" -o program
   ```

3. Run the executable.

   **Windows:**
   ```bash
   .\program.exe
   ```

   **Linux / macOS:**
   ```bash
   ./program
   ```

Replace `filename.cpp` with the name of the program you want to run. Use quotation marks for filenames containing spaces.

## Notes

- Programs are organized by day/session for easier navigation.
- Some files are coursework examples intended to demonstrate a particular concept; they may require review or modification before use in other projects.
- Filenames are preserved as present in the repository.

---

This repository serves as a learning record of C++ and OOPS concepts practiced during the elective.
