# ProcessControlDemo
Demonstrates basic process creation and management in Unix-like operating systems, including process forking, waiting for child processes to complete, and executing other programs from within a C program.





## Introduction
ProcessControlDemo is a demonstration project in C that showcases the concepts of process creation, inter-process communication, and basic countdown functionality in a Unix-like environment. The project consists of two main components: a process control program that forks a child process to execute the `ps` command and a countdown timer program.

## Code Explanation
**processcontrol.c:** This program demonstrates the forking of a parent process. The child process executes the ps command, and the parent process waits for the child to complete before executing the countdown timer. \
**countdown.c:** This program reads an integer greater than 0 as input and prints a countdown to the standard output. It demonstrates basic control flow and use of usleep for timing.

## Requirements
- A Unix-like operating system (e.g., Linux, macOS)
- GCC (GNU Compiler Collection) or any standard C compiler
- Basic understanding of command-line operations

## Installation
**Clone the repository to your local machine using:** 
- git clone https://github.com/ehh67855/Fork-Exec-Countdown.git \
**Navigate to the cloned directory:** 
- cd ProcessControlDemo

**Compile the programs**:
- gcc -o processcontrol lab11.c
- gcc -o countdown.out countdown.c \
**or** 
- make compile
- make run
  
## Usage
To run the process control program with the countdown timer, execute:

./lab11 [number]
