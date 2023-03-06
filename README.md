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

### 5) Persistent Bugger
Write a function, `persistence`, that takes in a positive parameter `num` and returns its multiplicative persistence, which is the number of times you must multiply the digits in `num` until you reach a single digit.  
  
For example (Input --> Output):

```
39 --> 3 (because 3*9 = 27, 2*7 = 14, 1*4 = 4 and 4 has only one digit)
999 --> 4 (because 9*9*9 = 729, 7*2*9 = 126, 1*2*6 = 12, and finally 1*2 = 2)
4 --> 0 (because 4 is already a one-digit number)

```

### 6) Sort the Odd
You will be given an array of numbers. You have to sort the odd numbers in ascending order while leaving the even numbers at their original positions.  
Examples:  
```
[7, 1]  =>  [1, 7]
[5, 8, 6, 3, 4]  =>  [3, 8, 6, 5, 4]
[9, 8, 7, 6, 5, 4, 3, 2, 1, 0]  =>  [1, 8, 3, 6, 5, 4, 7, 2, 9, 0]
```

### 7) Roman Numerals Decoder
Create a function that takes a Roman numeral as its argument and returns its value as a numeric decimal integer. You don't need to validate the form of the Roman numeral.  

Modern Roman numerals are written by expressing each decimal digit of the number to be encoded separately, starting with the leftmost digit and skipping any 0s. So 1990 is rendered "MCMXC" (1000 = M, 900 = CM, 90 = XC) and 2008 is rendered "MMVIII" (2000 = MM, 8 = VIII). The Roman numeral for 1666, "MDCLXVI", uses each letter in descending order.  

Example:  

`solution("XXI"); // => 21`

### 8) Sum Strings as Numbers
https://www.codewars.com/kata/5324945e2ece5e1f32000370/cpp  
TODO: This one is still in progress.  

### 9) Digital Roots
Digital root is the recursive sum of all the digits in a number.  
  
Given `n`, take the sum of the digits of `n`. If that value has more than one digit, continue reducing in this way until a single-digit number is produced. The input will be a non-negative integer.  

Examples:  
```
    16  -->  1 + 6 = 7
   942  -->  9 + 4 + 2 = 15  -->  1 + 5 = 6
132189  -->  1 + 3 + 2 + 1 + 8 + 9 = 24  -->  2 + 4 = 6
493193  -->  4 + 9 + 3 + 1 + 9 + 3 = 29  -->  2 + 9 = 11  -->  1 + 1 = 2
```

