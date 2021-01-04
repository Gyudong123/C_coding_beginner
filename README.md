# C_coding

Studying_C_base
It is for understanding basic words of computer science.(Ex. ASCII? IEEE 754? interpreter?)

The following are some of the characteristics of the C language that should be remembered.

1 byte = 8 bit

Negative numbers are the remuneration of two.

Use %.10lf to print very small decimal number(+.5e-09)

IEEE 754 includes 15 significant figures(Win32)

SPACE ' "'s ASCII is 32!

size of char : 1, short : 2, int : 4, long : 4, float : 4, double : 8, long double : 12

second scanf for char must involve whitespace! (scanf(" %c",&ch2);)

printf('blablabla') occurs an error. use ""!

to prevent dangling else problem, always use {}

An operator requiring one operand is higher in priority than an operator requiring two.

The backward type of the ++ operator is used when it is used again for other operations before it is increased. ex) a = b++

If the initialization value is less than the number of array elements, all remaining memory is filled with zero (more value raise an error).

Direct placement of string constants in an array is only possible if the array is initialized simultaneously with a declaration.

The actual start address of memory is called a pointer!
& is the address operator. Gets the starting address value of the memory to which the variable is assigned.
\* is a reference operator.
==>Use memory space (left) *&a = *&b ; Use the value of the memory space (right)
pointer : 4byte


ary[1] == *(ary+1) == *(1+ary) == 1[ary]!!

The string constant is a pointer!

String function (strcpy, strlen, strcmp, strcat) >> #include <string.h>!

auto variable = local variable

stack : Reclaim the last allocated memory space first

call by value Vs call by reference(pointer)

A variable that is not affected by the number of calls to a function is called a static variable.(static int sum;)

Variables that are not included in a specific function are called external variables. (extern variable)

Variables have hierarchical structures in the order of blocks, functions, and programs.

A two-dimensional array can only be omitted from a row subscript. (int nums[][4])

The pointer array acts like a two-dimensional array.

A function that receives the array name of the pointer array as a transfer factor must declare a double pointer variable as a parameter. char **app

A function that receives an array name as a transfer factor in a two-dimensional array must declare an array pointer variable as a parameter. int (*ap)[4]

The array name of the two-dimensional array is the array pointer that points to the first partial array.

Array pointers refer to the memory space of the entire array.

The function pointer variable that stores the function pointer is declared as follows. : int (*fp) (int, int);

A function pointer variable is useful when calling a function, allowing part of the function to be determined.

The first forwarding factor of the main function is the number of strings and the second forwarding factor is the array name of the pointer array. Remember that the array name of the double pointer array is Double Pointer.

Allocating memory as a calloc function automatically resets it to zero.

function for Memory Dynamic Allocation : malloc, atoi, calloc, realloc 함수 >include <stdlib.h>!

(*sp).kor == sp -> kor (indirect member access operator)

Application type : struct, union, enum

The arrangement is a collection of data types of the same type, but the structure can also group other types of variables.

A structure can be used to return multiple return values from a function.

A program is not an input/output by a keyboard or monitor, but rather an input/output by a stream file.

File opening is the creation of a stream file before I/O and the preparation for I/O.

character I/O : fgetc, fputc 
string I/O : fgets, fputs 
I/O (according to format) : fscanf, fprintf

The compiler overrides the structure _iobuf to FILE.

The way to verify that the stream file is finished entering the file on your hard disk is to compare the size of the disk file with the size of the data that has been read so far.

The function "fputc" outputs one character to the buffer each time it is called. When new line characters are entered in the buffer, all data is output to the hard disk file at once.

The <getchar> function uses a stream file just like the <fgetc> function.

Although the number of stream files that are opened by default to each operating system may vary, the three stream files, stdin (keyboard_standard input stream), stdout (monitor_standard output stream), and stderr (monitor_standard error stream), are commonly opened.

The function <fgets> is a function that receives a string by default, but before that is entered by line. When <fgetc> no longer has data to read, it returns EOF(-1). But <fgets> returns a
null pointer.

When a file pointer in an input stream file is given as a transfer factor of the function <flush>, it performs the function of deleting data in the buffer.
However, in the case of the output, the data in the buffer is outputted directly to the connected device.

**** Additional learning: Set encoding value in file input/output function ****

Split-compiled files are called modules.

When creating all header files, it is recommended that a macro constant similar to the name of the header file be defined in the lead. If the same header file is included more than once, it will only be processed once.

If you use <const> for a pointer variable, you cannot change the value of the memory space that is pointed through the pointer variable.

static int result; (Declaring external static variables) External static variables can be useful when protecting specific data because their scope of use is limited to one module.