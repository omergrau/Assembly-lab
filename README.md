# 🔬 MSP430G2553 Lab - Introduction to Assembly Programming

## 🎯 Lab Objective

This lab introduces the fundamentals of assembly programming for the **MSP430G2553** microcontroller. The main objective is to understand the basic syntax of assembly, how to perform arithmetic and logical operations, work with registers and memory, and implement basic control structures such as loops and functions.

## 🛠️ Components and Materials

* Development board with **MSP430G2553** microcontroller (e.g., MSP430 LaunchPad Development Kit)
* Development environment: **IAR Embedded Workbench**
* External switches connected to the microcontroller's input pins (e.g., P1 pin).
* LEDs connected to the microcontroller's output pins (e.g., P2 pins).

## ⚙️ Lab 1 - Introduction to Assembly Programming

* **Exercise Description:** In this lab, an assembly program was written to compare two data arrays (`Id1` and `Id2`). For each index in the arrays, the program calculates the number of identical bits between the corresponding binary values. The result of this count is stored in a third array (`Identical_indices_amount`). The exercise demonstrates the use of data transfer instructions, logical and bitwise operations, as well as the use of loops and pointers for memory access.

## ⚙️ Lab 2 - Parity Bit Calculation

* **Exercise Description:** In this lab, an assembly function named `ParityFunc` was implemented to calculate the parity bit for data arrays. The function receives as arguments a pointer to a data array, the size of the array, and a pointer to an array where the corresponding parity bits will be stored. The main program calls this function twice for two different arrays. The `ParityFunc` function iterates through each element in the input array, checks the parity of the number of '1' bits, and stores the result (0 for even, 1 for odd) in the appropriate output array. The lab demonstrated the use of the stack for passing arguments and function calls.

## ⚙️ Lab 3 - Responding to Switch Input and Controlling LEDs

* **Exercise Description:** This lab focused on responding to input from several switches (connected to the P1 pin of the microcontroller) and controlling LEDs (connected to the P2 pin) according to the state of the switches. The program reads the state of the switches connected to pin P1. Depending on the combination of pressed switches, the program performs different LED lighting patterns on the LEDs connected to pin P2. The program includes several functions (`First_SW`, `Second_SW`, `Third_SW`, `Fifth_SW`, `Else_SW`) that are activated based on the switch states:
    * `First_SW`: Lights the LEDs in ascending order (0 to 255) with a one-second delay between each value.
    * `Second_SW`: Lights the LEDs in descending order (255 to 0) with a one-second delay between each value.
    * `Third_SW`: Generates a PWM (Pulse Width Modulation) signal on one of the output pins, likely for controlling LED brightness or a similar purpose.
    * `Fifth_SW`: Turns an LED on and off with a real-time delay.
    * `Else_SW`: Turns off all LEDs.
    The main program executes an infinite loop, reads the switch states, and jumps to the appropriate function. Additionally, delay functions (`Delay1sec`, `DelayQuater`, `DelayRealTime`, `Delay100us`) are used to create time delays.

## ⚙️ Lab 4 - Finite State Machine (FSM) Implementation

* **Exercise Description:** This lab focused on implementing a Finite State Machine (FSM) in assembly language to control the behavior of the microcontroller. The program implements an FSM with several states (`state0`, `state1`, `state2`, `state3`, `state4`). The program starts in `state0` (idle state). Transitions between states occur based on events (the details of which will be clarified in the additional files or lab instructions). In each state, the program performs specific actions by calling external functions:
    * `state0`: Clears the LED output port and enters a low-power sleep mode until an event occurs.
    * `state1`: Calls the `DecLED` function, which likely decreases the output value of the LEDs (perhaps gradual dimming or a change to another pattern). Then returns to `state0`.
    * `state2`: Calls the `Shift_L` function, which likely performs a left bit shift on the LED port. Then returns to `state0`.
    * `state3`: Calls the `Scope_Gen` function, which likely generates a signal that can be observed with an oscilloscope (for testing or demonstration purposes). The program remains in this state in a loop.
    * `state4`: Pushes a value and a string onto the stack and calls the `PrintStr` function, which likely prints the string. Then returns to `state0`.
    The main program initializes the system and sets the default state of the FSM. It then enters an infinite loop that checks the current state and performs the appropriate actions.

## 💡 Conclusions and Insights

In this **first** lab, which served as an introduction to assembly programming for the MSP430G2553 microcontroller, we learned:

* The basic syntax of assembly language.
* How to define data in memory (arrays).
* How to use the microcontroller's registers for temporary storage and performing operations.
* How to load and store data between memory and registers.
* How to implement loops to control program flow.
* How to perform basic bitwise operations such as XOR, shift (using RRA), and add with carry (ADC).
* How to use comparison and jump instructions (`CMP`, `JZ`, `JNZ`, `JMP`).

In the **second** lab, we expanded our knowledge of assembly and learned:

* How to implement functions (subroutines) in assembly language.
* How to use the stack for passing arguments to and returning from functions.
* How to work with pointers to access data in memory.
* How to perform additional bitwise operations, such as right shift through the carry bit (RRA) and checking the carry bit (JC) to determine parity.
* The importance of dividing code into functions for organization and reusability.

In the **third** lab, we learned:

* How to read digital input from simple sensors like switches.
* How to control digital output devices like LEDs.
* How to use delay functions to create time delays.
* How to implement conditional logic based on external input (switch states).
* Basic principles of generating PWM signals for analog control using digital output.

In the **fourth** lab, we learned:

* The principles of designing and implementing a Finite State Machine (FSM) in assembly language.
* How to use a state variable to track the current state of the system.
* How to perform transitions between states based on conditions or events.
* How to use calls to external functions to perform specific tasks in each state.
* The benefits of using FSMs for organizing and controlling the complex behavior of embedded systems.

## 📚 Additional Sources and Links

* **Texas Instruments MSP430G2553** Microcontroller Datasheet: [https://github.com/omergrau/Assembly-lab/blob/main/MSP430G2553%20datasheet.pdf](https://github.com/omergrau/Assembly-lab/blob/main/MSP430G2553%20datasheet.pdf)
* **Texas Instruments MSP430x4xx Family User's Guide:** [https://github.com/omergrau/Assembly-lab/blob/main/MSP430x4xx%20family%20user%20guide.pdf](https://github.com/omergrau/Assembly-lab/blob/main/MSP430x4xx%20family%20user%20guide.pdf)
* Assembly code files attached for Lab **1**, **2**, **3**, and **4**.

## ✍️ Student Names and Completion Date

* Name 1: **Yair**
* Name 2: **Omer**
* Completion Date: **February 2024**
