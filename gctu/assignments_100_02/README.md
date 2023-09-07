## Question 1
#### a. The following are identifiers. Using them, do the following:

| Identifier            | Identify the wrong ones   | State the reason why they are wrong | Rewrite the wrong ones correctly |
|-----                  |-----                      |-----                                                      |-----|
| `TotalPayment`        | Correct                   | Correct                                                   | Correct |
| `CommitPayment!`      | Wrong                     | There is the use of exclamation mark                      | `CommitPayment` |
| `Total BalanceDue`    | Wrong                     | There can be no space in between the `Total` and `BalanceDue`    | `TotalBalanceDue` |
| `_Bank_Paybal`        | Correct                   | Correct | Correct |
| `2nd_Payment_Amount`  | Wrong                     | Identifiers can only begin with letters or underscore     | `Second_Payment_Amount` |
| `Total-Score_1`       | Wrong                     | There is a mathematical operator `-` between `Total` and `Score` | `Total_Score_1` |
| `Initial_?_Score`     | Wrong                     | A question mark `?` has been included                     | `Initial_Score` |
| `Amount_Due`          | Correct                   | Correct                                                   | Correct |
| `Stud_grade?`         | Wrong                     | Use of question mark `?`                                  | `Stud_grade` |
| `Makepayment_1`       | Correct                   | Correct                                                   | Correct |

#### b. Explain the following terms

1. Identifiers - Identifiers are names that represent unique objects or class of objects. They are a type of string of alphanumeric characters that always begins with either an alphabetic or underscore character.

2. Pseudocodes - A pseudocode is a notation, language-like solution resembling a simplified programming language, used in program design to create the outline or rough draft of a program. Pseudocodes summarize a program's flow, but excludes underlying details.
    - A pseudocode is not an actual programming language
    - A pseudocode cannot be compiled into an executable program
    - It uses short terms or simple English syntaxes to write code for programs before it is actuall converted into a specific programming language

    - Example of a pseudocode is shown below
>    ```sh
>    IF sum of two random dice numbers >= 18
>        THEN print "You win!"
>    ELSE print "You lose!"
>    ```

3. Comments: Comments are specially marked lines of text in the program that are not evaluated. Comments are programmer-readable explanation or annotation in the source code of a computer program. They are added for the purpose of making the source code easier for humans to understand, and are generally ignored by compilers and interpreters. There are usually two syntactic ways to comment.
    - The first is called a _single line comment_ and, as implied, only applies to a single line in the source code.
    - _Block comment_ refers usually to a paragraph of text. A block comment has a start symbol and an end symbol and everthing between is ignored by the computer.

4. Compiler: A compiler is a program that converts instructions of a source program written in some high-level programming language (such as JavaScript) into a machine code or lower-level form so that they can be read and executed by a computer. The machine code generated can be later executed many times against different data each time.

5. Algorithm: An algorithm is simply a set of steps used to complete a specific task. Alogorithms are the building blocks for computer programming. They are used to solve problems based on the understanding of available alternatives. Algorithms also serve as specifications for performing calculations, processing data, performing automated reasoning or making decisions.

6. Flowchart: A flowchart is a graphical representation of a computer program in relation to its sequence of functions ad distints from the data it processes. A flowchart depicts a process, system or computer algorithm. a flowchart

#### c. List and explain the components of the CPU

The central processing unit (CPU) contains the following major components:

- Control unit: The control unit is responsible for executing all the operations of the processor. It fetches and decodes instructions as well as control information flow in and out of main memory.
- Registers: Regiters provide internal storage for the CPU.
- Arithmetic and Logic Unit (ALU): The ALU performs the computer's data processing functions.

## Question 2
#### Given the problem of writing a program to convert US Dollar ($) to Ghana Cedis (GHC), assuming the current Dollar rate to Ghana Cedis is ($1 : GHC 3.9). Find the amount in GHC when a user enters an amount in Dollar(s), undertake the following:

##### 1. State the problem that the program is to solve
    - To convert US Dollar ($) to Ghana Cedis (GHC) at a given exchange rate

##### 2. Perform a Program analysis to determine the input, process and outputs
>    |           |                                                       |
>    |----       |   ----                                                |
>    | Input     | (a) Dollar to Cedi exchange rate (b) Dollar amount    |
>    | Process   | Multiply exchange rate by Dollar amount               |
>    | Output    | Ghana Cedi equivalent of US Dollar                    |

##### 3. Write the Algorithm for the program
> | __Algorithm__                                           |
> | ----------                                              |
> | Start                                                   |
> | Read Exchange Rate, R = 3.9                             |
> | Accept Dollar amount, USD                               |
> | Compute Ghana Cedi, GHC = Exchange Rate * Dollar amount`|
> | Output  Ghana Cedi, GHC                                 |
> | Stop                                                    |

##### 4. Write the Pseudocode for the program
> | __Pseudocode__              |
> | ----------                  |
> | Start                       |
> | Read `R = 3.9`              |
> | Accept `USD`                |
> | Compute `GHC = R * USD`     |
> | Display `GHC`               |
> | Stop                        |

##### 5. Draw the flow chart for the program

![flowchart](https://github.com/cnagyei/cpp/assets/125774357/5db39a0f-340c-40c6-8f51-bc22bc6aa56c)

#### b. Suppose p, q, n, and t are double variables. What value is assigned to each of these variables after the last statement executes

> ```sh
> Statement               Value assigned
> 
> p = 15.00;              p = 15.00
> q = 10.00;              q = 10.00
> n = p – 8;              n = 7.00
> t = p + 5 * q - n;      t = 58 
> n = t – p;              n = 43
> t++;                    t = 59
> ```


## Question 3

#### a. The area and perimeter of a rectangle can be determined using the following formula: Area = length * Width Perimeter = 2 (length + Width)
#### Assuming that a program was to be written to determine the Area and perimeter above perform the following:




## References
- https://users.cs.utah.edu/~germain/PPS/Topics/commenting.html
- https://lambda.uta.edu/cse5317/notes/node3.html
- https://www.iig.ch/en-en/blog/computer-science/algorithm-computer-science-definition-and-understanding Algorithms: their meaning in computer science
https://economictimes.indiatimes.com/definition/pseudocode What is 'Pseudocode'