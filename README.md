# C++ Algos
These are mostly random algos from CodeWars.  

### 1) Bleep
* Write a function that takes in a word and a paragraph. 
* Every instance of this word should be replaced with asterisks (it "bleeps" the word). 
* Use a reference to the paragraph input variable to alter it from within the function without a return.git 

### 2) Hanoi  
Towers of Hanoi is a simple game consisting of three rods, and a number of disks of different sizes which can slide onto any rod. The puzzle starts with the disks in a neat stack in ascending order of size on one rod, the smallest at the top, thus making a conical shape.  
  
The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules:  
  
* Only one disk can be moved at a time.
* Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
* No disk may be placed on top of a smaller disk.

### 3) Narcissistic Number
A Narcissistic Number (or Armstrong Number) is a positive number which is the sum of its own digits, each raised to the power of the number of digits in a given base. In this Kata, we will restrict ourselves to decimal (base 10).

* Your code must return true or false depending upon whether the given number is a Narcissistic number in base 10.

### 4) Who likes it?
You probably know the "like" system from Facebook and other pages. People can "like" blog posts, pictures or other items. We want to create the text that should be displayed next to such an item.  
  
Implement the function which takes an array containing the names of people that like an item. It must return the display text as shown in the examples:  
```
[]                                -->  "no one likes this"
["Peter"]                         -->  "Peter likes this"
["Jacob", "Alex"]                 -->  "Jacob and Alex like this"
["Max", "John", "Mark"]           -->  "Max, John and Mark like this"
["Alex", "Jacob", "Mark", "Max"]  -->  "Alex, Jacob and 2 others like this"
```  
Note: For 4 or more names, the number in "and 2 others" simply increases.