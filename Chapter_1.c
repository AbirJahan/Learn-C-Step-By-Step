//Every single C program is built out of functions and variables.
//The starting point of a C program is the main function or main()
//Without the main function, there would be no way to start executing
int main() {
    //the flow starts  from here or in simple words top to bottom
    return 0;//Every individual statement should be terminated by a semicolon. It acts as a full stop in English Language.
    }
    //return 0; ****Signals successful termination to the OS [cite: 137]

int main() {
    int age = 25;
}


// *****

//!    🛑2. Data Types & Arithmetic Mechanics

// *****


//int: Used for whole integers (such as int age = 25;)

//float: Used for floating-point numbers with decimals (such as float price = 19.99;).

//double: Used for double-precision floating-point numbers. 

//char: Used for a single-byte character enclosed in single quotes (such as char grade = 'A';)



// When performing calculations, compiler follows two strict arithmetic rules: 

// 1. The result of an operation is always rounded for instance the result of dividing two integers like 5 and 2 in this expression (5/2) should have been 2.5 but it will be rounded to 2. This is called **** Integer Division Truncation ****. 

//2. If an arithmetic operator has one floating-point operand and one integer operand, the compiler automatically promotes the integer to a floating-point value before running the calculation to maintain accuracy . For example, 5.0 / 2 triggers a promotion to 5.0 / 2.0, resulting in 2.5. This is called **** Implicit Type Conversion ****.



//?   Excercise 2

//Question: int result = 7 / 2; What exact numerical value will be stored inside the result variable, and why?

//!    Answer:

int main() {
    int result = 7/2;
}

// result will be 3 based on Integer Division Truncation. As it says if we Divide two integers such as this one 7/2 the result will be rounded to 3 and truncates the decimal. If one part was decimal let's say 7.0 then 2 will be converted to decimal or 2.0 and then the result will be 3.5. This is known as Implicit Type conversion. 

//****C doesn't actually round the number to the nearest integer; it completely throws away (truncates) the fractional part toward zero. So even if an operation resulted in 3.99, an integer division would still chop it down to exactly 3




// *****

//!    🛑3. Control Flow Basics

// *****


//  Building a condition -------- 

//  To establish a condition we use ***Relational operators***. The compiler evaluates the comparison as either true or false. In C, 0 represents false, and a non-zero value (usually 1) represents true. 

//  Here are the standard comparison operators you can use:

//_______________________________________________________________
//  Operators   ||            Meaning             ||   Example   |
//---------------------------------------------------------------|
//      >       ||          Greater than          ||    x > 5    |
//---------------------------------------------------------------|
//      <       ||          Less than             ||    x < 5    |
//---------------------------------------------------------------|
//      ==      ||     Equal to (double equals)   ||    x == 5   |
//---------------------------------------------------------------|
//      >=      ||     Greater than or equal to   ||    x >= 5   |
//---------------------------------------------------------------|
//      <=      ||      Less than or equal to     ||    x <= 5   |
//---------------------------------------------------------------|
//      !=      ||          Not equal to          ||    x != 5   |
//_______________________________________________________________|



// *****

//!   🛑The If...else Decision : 

// *****



//  An if...else structure makes a one-time choice. If the condition inside the parentheses is true, it runs the code inside the first block; otherwise, it skips to the else block.

int main () {

int score = 85;

if (score>=50) {
    
    printf("pass\n");    //this code only runs once if the condition inside the parenthesis beside ** if ** is true

}
else {

    printf("Fail\n");   //this code only runs once if the condition inside the parenthesis beside ** if ** is false

}

}



// *****

//!    🛑The While loop : 

// *****


int main() {

    int i = 1; //  Intialization = Sets up the loop control variable with a starting value before the loop begins.

    while ( i<= 3 ) {    //  Here i<=3 is known as -  Loop Condition (or test expression) = The logical test checked at the top of each iteration; the loop only runs if this is true. 
        
        printf("%d\n", i); //  this is known as -  Loop body = The actual instruction or block of code that you want to repeat.

        i++; //  This is known as -  Update Expression (or Increment/Decrement) = Modifies the loop control variable so the condition eventually becomes false.
    }
    

}

//Example Output : 

int main() {

    int i = 1;

    while ( i<= 3 ) {
        
        printf("%d\n", i);

        i++;
    }
    
}

//  Now just like HTML, C also has its own set of mandatory wrappers. Here is what a complete, runnable C file looks like when you want to use standard tools like printf(): 

#include <stdio.h> // This is called a Header Include. This line includes the standard input/output library, which allows us to use functions like printf(). It acts like a plugin that teaches your program how to talk to the screen using functions like printf(). It must always go at the very top of the file.

int main() { // This is the main fuction where the execution of the program begins. 
    
    printf("Hello, My world!\n"); // This line uses the printf() function to print the text "Hello, My world!" followed by a newline character (\n) to the console. The semicolon at the end of the line indicates the end of this statement. ( In English language we can say it represents full stop or end of this line of code )

    return 0; // This line signals to the operating system that the program has finished successfully. The return value of 0 is a common convention to indicate success. 
}


// *****

//!    Exercise ----->

// *****


//?   Exercise 3: Using the while loop logic we just discussed , complete the code block below to create a loop that prints the numbers from 1 to 5.

#include <stdio.h>

int main() {
    int i = 1; 
    
    // Write your while loop here
    
    return 0;
}


//!   Answer: 


#include <stdio.h>

int main() {

    int i = 1;

    while (1<=5) { 

        printf("%d,", i);
        i++;
    }

}




//✏️ Your Turn: Exercise 4 & 5
//?Look closely at the while loop example above. If we accidentally deleted line 6 (i++;), what exactly would happen to the program when it runs?

#include <stdio.h>
int main() {
int i = 1; // 1. Start counter at 1 [cite: 189]

while (i <= 3) { // 2. Check if i is less than or equal to 3 [cite: 190]
    printf("%d\n", i); // 3. Print the current number [cite: 192]
    i++;               // 4. Add 1 to i so it goes to the next number [cite: 193]
}
}



//!   Answer: 



//  If we look at the code : 

#include <stdio.h>
int main() {
int i = 1; // 1. Start counter at 1 [cite: 189]

while (i <= 3) { // 2. Check if i is less than or equal to 3 [cite: 190]
    printf("%d\n", i); // 3. Print the current number [cite: 192]
    i++;               // 4. Add 1 to i so it goes to the next number [cite: 193]
}
}

//  the 6th line or the line with i++, is responsible for incrementing the value of i which 1. After each loop iteration, it adds 1 to i, allowing the loop to eventually reach the condition to the condition break point which is 3. After 3, i = 4 and the condition i <= 3 becomes false, so the loop stops. If we delete the line with i++, then i will always remain 1, and the condition i<=3 will always be true, which will cause the loop to run infinitely, printing 1 repeatedly without ever stopping. This is known as an infinite loop, and it can cause the program to become unresponsive or crash if not handled properly.



//?  Exercise 6: What is the formal entry point of every C program?   


//!   Answer: 


//The formal entry point of every C program is the main function. Execution begins exactly at int main() or int main(int argc, char *argv[]), making it mandatory starting block for your code. Even though #include appears first in our file, it is a preprocessor directive, not entry point. The "entry point" refers to where the execution (running) of a program begins, whereas #include is part of compilation (building) process. 



//  ****extra: Preprocessing vs. Execution: When you build your code, the preprocessor runs first. It literally copies the contents of the header file (like stdio.h) into your source file. No code is actually "running" yet; the computer is just preparing the text for the compiler.





// *****

//!    🛑4. Input/Output & The EOF Sentinel

// *****




//*     Step 1: C Thinks in Boxes of Memory



//   Let's Imagine our computer memory is just a bunch of labeled boxes. And Different variables are just different sized boxes. 

char letter; 
int number;

//   Think of them like this:


//!   char -> tiny box 

//   . meant for one character
//   . stores small numbers


// NOTE   whereas  -->


//!   int -> bigger box

//   . stores regular numbers
//   . can also hold negative values


//?    But why numbers ? Because: Computers do not understand letters. The computer does not store "A" rather it stores 65. This comes from a lookup system called ASCII. SO when we --> 
char grade = 'A';
//?    It actually puts the number 65 in a tiny character box. The computer later converts it back to 'A' when displaying it.  



//*     Step 2: What getchar() Actually does: 



//     Let's imagine our keyboard as a pipe where every key we enter goes in a queue : 

//?     H -> e -> l -> l -> o -> Enter

//Note:    so the function getchar() means give me the NEXT character waiting in the keyboard pipe. Example -->

//   I type: A
//   then  : getchar()
//  returns: 'A' (It secretly returns 65 which converts back to A when displaying)

//IDEA:   So if I typed 'Hello' in a repeated calls it will return: 
//?       H
//?       e
//?       l
//?       l
//?       o
//IDEA:   one character at a time.

//IDEA:   So what we learnt is getchar() does not read words it reads exactly one character per call.  




//
//*      So what the heck is putchar() ?
//




//   In simple words it's kind of like the opposite of getchar() .If getchar() takes one character, putchar() shows one character onto the screen at a time. (this is true in high level sense there is more to it.)

//_______________________________________________________
//      Function       ||             Job                |
//_____________________||________________________________|
//                     ||                                |
//      getchar()      || INPUT -> grabs one character   |
//_____________________||________________________________|
//                     ||                                |
//      putchar()      || Output -> Prints one character |
//_____________________||________________________________|

//    Let's type CAT. SO let's see what happens: 

//    I type CAT
//    first call: getchar()
//    -> gets C
//    second call: getchar()
//    -> gets A
//    third call: getchar()
//     -> gets T

//    Now we are going to include putchar() in our this CAT minigame. First putchar() wants to say something: "Take whatever is inside c and show it on screen". Let's start:

//    I type CAT

//    first call: getchar()

//Note:    -> gets C -> char c = 'C'; -> putchar(c); -> Screen output: C

//    second call: getchar()

//Note:    -> gets A -> char c = 'A'; -> putchar(c); -> Screen output: A 

//    third call: getchar()

//Note:    -> gets T -> char c = 'T'; -> putchar(c); -> Screen output: T




//
//*      Step 3: What putchar() actually does ?
//


//Note:    remember: "Characters are secretly numbers." Example:

// 'A' = 65
// 'B' = 66
// 'a' = 97

//   So when we do:
        char c = 'A';
//   The computer secretly stores: 65
//   then: 
        putchar(c);
//   The computer says: "Oh, this number is 65."
//   Then it checks the ASCII table: 65 -> A
//!   Then prints: A

//Note:   so putchar(c); really means: “Look at the number inside c, convert it to a character, and display it.”



//!    Example 1 — Single Character



#include <stdio.h>

int main()
{
    char c = 'H';

    putchar(c);

    return 0;
}

//   Output  --> 

//!   H



//!    Example 2 — Printing directly



#include <stdio.h>

int main()
{
    putchar('X');

    return 0;
}

//   Output  --> 

//!   X

//Because 'X' already has an ASCII number



//!    Example 3 — Weird but legal




//Note: This actually proofs that putchar() secretly stores number in it: 

#include <stdio.h>

int main()
{
    putchar(65);

    return 0;
}

//!    Output: A , Why?

//     Because:    65 = 'A'
//     ASCII again. 




//
//*      Step 4: getchar() + putchar() Together
//



//   These two functions are often paired together like this :

#include <stdio.h>

int main()
{
    c = getchar();

    putchar(c);

    return 0;
}

//    Translation: Take one character from keyboard → immediately print it.

//   What will happen if I type "Q" ? : 

//    Beginning: I type: Q
//    Program starts,
//    1st step:  c = getchar();   stores: Q, inside c
//    2nd step:  putchar(c);      Looks inside c, Finds: Q, Prints: Q

//Idea:    So the program basically copies what you typed. Like and echo. 




//
//*      Step 5: Why char Seems like the right choice? 
//




//Note:    As we have seen so far getchar() returns a single character so It actually makes sense to use  char to save right ? 
//     Like I will use: 

#include <stdio.h>
    int main() {
    char c;
    c = getchar();
}
//!    but now the main problem is how will the computer know the input ended ? So we are done typing computer sends a special signal known as EOF which stands for "End of File" which basically means " No more input. Stop". It might sound like a word but it's actually a number which is -1. char can not store number so it will throw a error at us. So when we do this: 

#include <stdio.h>
    int main() {
    char c;
    c = getchar();
}

//!    It will eventually throw a error. So if it was in a loop it will fail which will lead to infinite loop or behave weirdly. So this is why we do this:

int c;

//Note:    Because an int box can safely hold:

//         . normal character numbers. 
//         . EOF (-1)




//
//*      Step 6: Scary loop
//




#include <stdio.h>
int main() {

    int c;

    while((c=getchar()) != EOF)
    {
        putchar(c);
    }

}

//     This is one of the high level loops. Let's Explain each and every line: 


//!    First line  --> 

int c;

//?    Why int? because of EOF = -1. And if we use char it will fail leading to infinite loop or weird behaviour. We create int c so that it can hold both numbers and characters. 


//!    Second line  -->

( c = getchar() )

//    this tells the code that take the next typed character on keyboard and then save it in c. Let's say I typed 'A', getchar() will take it -> as the code was like c = getchar(), after taking the input 'A' getchar() gets replaced so c = 'A' -> then computer secretly saves it as a number c = 65. While it's correct that 'A' is stored as the number 65, getchar() itself is designed to return an int to accommodate EOF. If I declare c as char c;, the int returned by getchar() is implicitly converted to a char.




//!     Second line second part -->



!= EOF

//    This means -> Is not EOF/End of File/-1

//Note:    If it's true the loop continues and if it's false the loop stops.


//!     Loop Body -->

// If the condition was true then this runs: 

putchar(c);

//?    Now computer looks for the value of c. It sees the value is A

//Note:     it then prints A


//!   Now we know EOF is just -1 but how do we enter this in keyboard ? 
//    In windows it's  -->  Ctrl + Z
//    In Linux/Mac it's  -->  Ctrl + D

//    Now: getchar() -> returns: -1/EOF -> computer checks: -1 != -1 which is False. Loop ends. Program stops. 


//There is a more easier version to this hard loop: 

#include <stdio.h>

int main() {

    int c;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
    return 0;
}


// Easier version: 


#include <stdio.h>

int main()
{
    int c;

    c = getchar();

    while (c != EOF)
    {
        putchar(c);

        c = getchar();
    }

    return 0;
}

//Now a question might arise why again c = getchar() after putchar(c)
//Note:    Because if we don't give c = getchar() after putchar(c) the code is not going to wait a new input it will simply keep repeating it infinitely after the first input. So getchar() after putchar(c) is very important. 





// *****

//!    🛑 5. Arrays & Strings (Moving to Page 2)

// *****




//
//*     Part 1: What Even Is an Array?
//



//     I want to store 5 quiz scores without arrays:

int score1 = 90;
int score2 = 85;
int score3 = 70;
int score4 = 95;
int score5 = 80;

//     This is extremely painful when you are going to write 100 scores 

int score1 = 90;
int score2 = 85;
int score3 = 70;
int score4 = 95;
// ...
int score100 = 99;

//    This is going to be a nightmare. SO C gives us a better system, put many same type boxes together in one row. 

//Note:    That row is called Array. Which looks like this:

int scores[5] = {90, 85, 70, 95, 80};

//     This means:  “Create 5 connected boxes for integers.”

// Memory looks like this: 

//      +----+----+----+----+----+
//      | 90 | 85 | 70 | 95 | 80 |
//      +----+----+----+----+----+



//
//*     Part 2: Why The Hell Does C Start From 0?
//



//     As a human we naturally think:
//     First box = 1
//     makes sense. 

//     Humans count like: 
//     1
//     2
//     3
//     4
//     5

// but C says: 
//     0
//     1
//     2
//     3
//     4

//Note: Think of an Index as Distance. The index is NOT the box number but the index means: "How far from the beginning should I move?"

//     Imagine standing at the first box - 

//     +----+----+----+----+----+
//     | 90 | 85 | 70 | 95 | 80 |
//     +----+----+----+----+----+
//      ^
//      START

//     Now: scores[0] means -> Move 0 steps. I stay where I am. So I get: 90



scores[1];

//    means: Move 1 step. 

//     +----+----+----+----+----+
//     | 90 | 85 | 70 | 95 | 80 |
//     +----+----+----+----+----+
//            ^

//     Now: scores[1] means -> Move 1 steps. I move 1 step from where I am. So I get: 85



scores[2];

//    means: Move 2 steps.

//     +----+----+----+----+----+
//     | 90 | 85 | 70 | 95 | 80 |
//     +----+----+----+----+----+
//                  ^

//     Now: scores[2] means -> Move 2 steps. I move 2 step from where I am. So I get: 70

//!     This is why Arrays start from 0




//
//*     Part 3: Accessing Values
//



//      If you want one number:

#include <stdio.h>
int main() {

    int numbers[5] = {90, 55, 66, 77, 44};
    printf("%d", scores[0]);

    return 0;

}

//     Output: 90

#include <stdio.h>
int main() {

    int numbers[5] = {90, 55, 66, 77, 44};
    printf("%d", scores[2]);

    return 0;

}

//     Output: 66

//!    Because:
//     0 → 90
//     1 → 55
//     2 → 66
//     3 → 77
//     4 → 44




//
//*     Part 4: Changing Values
//



//     We can also overwrite boxes. 

#include <stdio.h>
int main() {

    int numbers[5] = {90, 55, 66, 77, 44};
    printf("%d", scores[2]);

    return 0;

}

//*     Example: 

scores[1] = 100;

//     Before:  90, 55, 66, 77, 44
//     after :  90, 100, 66, 77, 44




//
//*     Part 4: Changing Values
//



//     In other languages: 
//Note:     name = "CAT"     .... Boom a string. But for C, nope. C says: "A word is just many characters next to each other."

//     Meaning: 

char word[] = "CAT";

//     is secretly: 

char word[] = {'C', 'A', 'T'};




//
//*     Part 6: The Secret Extra Character
//



//    In CAT we can see 3 letters so surely there are 3 boxes, this is where C says nope. Because C secretly adds an :
//* '\0'

//     Memory really looks like: 

//     +-----+-----+-----+------+
//     | 'C' | 'A' | 'T' | '\0' |
//     +-----+-----+-----+------+

//     This is actually 4 boxes not 3. 




//
//*     Part 7: What The Hell Is '\0'?
//


//     Think of it as " END OF WORD "