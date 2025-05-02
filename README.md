# 🔬 MSP430G2553 Lab - Introduction to Assembly Programming 

## 🎯 Lab Objective

In this lab, we will be introduced to the fundamentals of assembly programming for the **MSP430G2553** microcontroller. The primary objective is to understand the basic syntax of assembly, how to perform arithmetic and logical operations, work with registers and memory, and implement basic control structures such as loops.

## 🛠️ Components and Materials

* Development board with **MSP430G2553** microcontroller (e.g., MSP430 LaunchPad)
* Development environment: **IAR Embedded Workbench**
* Programmer/Debugger for MSP430 (usually integrated into the LaunchPad - eZ-FET)

## ⚙️ Description of Lab 1 - Introduction to Assembly Programming

In this **first** lab, we focused on getting acquainted with the assembly language through a central exercise.

* **Exercise Description:** In this lab, an assembly program was written to compare two data arrays (`Id1` and `Id2`). For each index in the arrays, the program calculates the number of identical bits between the corresponding binary values. The result of this count is stored in a third array (`Identical_indices_amount`). The exercise demonstrates the use of data transfer instructions, logical and bitwise operations, as well as the use of loops and pointers to access memory.

## 💡 Conclusions and Insights

In this **first** lab, which served as an introduction to assembly programming for the MSP430G2553 microcontroller, we learned:

* The basic syntax of the assembly language.
* How to define data in memory (arrays).
* How to use the microcontroller's registers for temporary storage and performing operations.
* How to load and store data between memory and registers.
* How to implement loops (`BIGLOOP`, `SMALLLOOP`) to control program flow.
* How to perform basic bitwise operations such as XOR, shift (using RRA), and add with carry (ADC).
* How to use comparison and jump instructions (`CMP`, `JZ`, `JNZ`, `JMP`).

The exercise of comparing the arrays clearly demonstrated these principles and provided a foundation for a deeper understanding of microcontroller programming in assembly language for the subsequent labs.

## 📚 Additional Resources and Links

* **Texas Instruments MSP430G2553** Microcontroller Datasheet.
* Guides and learning materials on assembly programming for the MSP430 family, especially for the G2553 model.
* **IAR Embedded Workbench** Development Environment Documentation.
* The assembly code files attached to this **first** lab.

## ✍️ Student Names and Date of Execution

* Name 1: **Yair**
* Name 2: **Omer**
* Date of Execution: **February 2024**
