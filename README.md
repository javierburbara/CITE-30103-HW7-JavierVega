# CITE-30103-HW7-JavierVega
C Programming Exercises — Lecture Practice (Questions 1–24)
This repository contains 24 C programs based on lecture material for CITE-30103.
Each question practices a different programming concept, including functions, arrays, pointers, strings, structs, recursion, and dynamic memory.

Every section below includes:
Description of what the program does
Sample Input for testing

How to Compile & Run

Use the gcc compiler:

gcc q1.c -o q1
./q1


Replace q1.c and q1 with the correct question number (q2.c, q3.c, ..., q24.c).

QUESTION-BY-QUESTION DETAILS
QUESTION 1 — Fahrenheit to Celsius

Description: Converts a temperature from Fahrenheit to Celsius using a function. Takes user input and prints the Celsius result.
Sample Input:
98.6

QUESTION 2 — Maximum of Three Numbers

Description: Reads three integers and determines the largest. Uses a function to compare values.
Sample Input:
5 9 3

QUESTION 3 — Prime Number Check

Description: Checks whether an input number is prime by testing divisibility.
Sample Input:
17

QUESTION 4 — Swap Two Integers

Description: Swaps two integers using pointers. Shows values before and after the swap.
Sample Input:
10 25

QUESTION 5 — Recursive Factorial

Description: Computes factorial using a recursive function. Prints an error for negative numbers.
Sample Input:
6

QUESTION 6 — Sum and Average

Description: Reads n integers, computes their sum, and calculates the average.
Sample Input:
5
10 20 30 40 50

QUESTION 7 — Largest and Smallest in Array

Description: Reads 10 integers and finds the maximum and minimum values.
Sample Input:
12 7 45 -3 0 8 99 23 17 5

QUESTION 8 — Count Even and Odd

Description: Reads integers and counts how many are even vs. odd.
Sample Input:
7
3 4 10 11 0 -2 7

QUESTION 9 — Reverse Array of 5 Integers

Description: Reads 5 integers and reverses their order using element swapping.
Sample Input:
1 2 3 4 5

QUESTION 10 — Matrix Addition (3×3)

Description: Reads two 3×3 matrices and produces a third matrix containing their sum.
Sample Input:
1 2 3
4 5 6
7 8 9
9 8 7
6 5 4
3 2 1

QUESTION 11 — Manual String Length

Description: Reads a word and counts its characters manually without using strlen.
Sample Input:
helloWorld

QUESTION 12 — Palindrome Checker

Description: Checks if a word reads the same forward and backward.
Sample Input:
racecar

QUESTION 13 — Count Characters in a Line

Description: Counts vowels, consonants, and digits in a line of text.
Sample Input:
Hello C 2025!

QUESTION 14 — String Concatenation

Description: Appends one string to another manually (without string library functions).
Sample Input:
hello
world

QUESTION 15 — Word Counter

Description: Counts the number of words in a sentence using space transitions.
Sample Input:
C programming is fun

QUESTION 16 — Struct: Single Student

Description: Reads and prints a single student's name, roll, and marks using a struct.
Sample Input:
Alice Johnson
10
88.5

QUESTION 17 — Array of Students

Description: Reads and displays details for 5 students using an array of structs.
Sample Input (partial):
Alice
1
90
Bob
2
85
...

QUESTION 18 — Highest Marks Among Students

Description: Reads 5 students and prints the one with the highest marks.
Sample Input (partial):
Bob
2
95

QUESTION 19 — Struct with Nested Date

Description: Stores student info along with birth date using a nested struct.
Sample Input:
Alice Johnson
10
88.5
15 3 2005

QUESTION 20 — Print Student with Function

Description: Reads a student and prints it using a separate display function.
Sample Input:
Alice Johnson
10
88.5

QUESTION 21 — Pointer Basics

Description: Prints the value, address, and dereferenced pointer value of an integer.
Sample Input:
10

QUESTION 22 — Pointer Arithmetic

Description: Reads 5 integers and prints them using pointer arithmetic.
Sample Input:
5 10 15 20 25

QUESTION 23 — Dynamic Memory (malloc)

Description: Dynamically allocates memory for n integers, reads them, and computes average.
Sample Input:
4
10 20 30 40

QUESTION 24 — Function Pointer

Description: Uses a function pointer to call a square function.
Sample Input:
7
