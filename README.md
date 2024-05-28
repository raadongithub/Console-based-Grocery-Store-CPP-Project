# C++ Store Repository

## Overview
C++ Store is a console-based shopping application developed using C++. The project simulates a real-world shopping experience through a command-line interface, allowing users to browse various product categories, add items to their cart, and capture delivery details. This repository contains the source code, a comprehensive project proposal, and an in-depth report detailing the application's design, implementation, and future improvements.

## Repository Contents
- **proposal.docx**: A detailed project proposal outlining the objectives, methodology, and expected outcomes of the C++ Store application.
- **report.docx**: An extensive report that covers the design, implementation, logic, and future work for the application.
  - **main.cpp**: The main program file with all the functions and implementation details.

## Project Proposal
### Objectives
- Develop a console-based shopping application using C++.
- Create various product categories and functionalities for adding items to the shopping cart.
- Implement exception handling to manage errors effectively.
- Utilize file handling for storing user delivery details.

### Methodology
The development of the C++ Store follows a structured methodology involving several key stages:
1. **Design**: Conceptualizing the application structure, including product categories, user interface, and flow of operations.
2. **Development**: Writing and integrating C++ code to bring the design to life, focusing on modular functions for each product category.
3. **Testing**: Rigorous testing to ensure the application handles user inputs and errors gracefully.
4. **Documentation**: Comprehensive documentation of the code, user guide, and a detailed report.

## Detailed Report
### Implementation Details
The implementation of the C++ Store consists of several functions and modules that work together to create a seamless shopping experience.

#### Loading Screen
The application begins with a loading screen to simulate the initialization of a shopping platform. This screen displays a progress bar to engage the user during the brief startup period.

#### Main Menu
The main menu presents the user with various product categories. Each category corresponds to a function that handles the selection and addition of items to the cart.

#### Product Category Functions
Each product category function prompts the user to select specific items and adds the selected items to the cart. Functions are modular, ensuring clean and maintainable code.

#### Exception Handling
Exception handling ensures that invalid inputs and file errors do not crash the program. The use of try-catch blocks helps manage exceptions effectively.

#### User Delivery Details
After the user completes their shopping, they are prompted to enter their delivery details, which are stored in a file to ensure data persistence for delivery purposes.

### Future Work
- **Object-Oriented Programming (OOP)**: Refactoring the application using OOP principles to create a more structured and scalable design.
- **Enhanced User Interface**: Improving the console-based interface to provide a more user-friendly experience.
- **Database Integration**: Integrating a database to manage products and user details more efficiently.
- **Additional Features**: Implementing features such as product search, discounts, user authentication, and order history.

## Source Code Structure
- **main.cpp**: This file contains the entire source code for the C++ Store application. It includes function definitions for loading screen, main menu, product categories, exception handling, and file handling.

### Code Flow
1. **Initialization**: The application starts with a loading screen.
2. **Main Menu**: Users are presented with a menu to select product categories.
3. **Product Selection**: Users choose products from various categories, which are added to the shopping cart.
4. **Billing**: The total bill is calculated and displayed.
5. **Delivery Details**: Users enter their delivery details, which are saved to a file.
6. **Completion**: The program confirms the order and exits.

## Conclusion
C++ Store serves as an educational tool, demonstrating key C++ programming concepts and the importance of robust software design. This repository provides a comprehensive look at the development process, from proposal to implementation and future improvements.

---

Please refer to `proposal.docx` and `report.docx` for more detailed information on the project's objectives, methodology, implementation, and future work.

