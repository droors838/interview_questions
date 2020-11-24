# interview_questions

Assume the following source code is compiled as i386 binary. Please explain the expected behavior the code snippet will exhibit:

Follow-on questions:

1.) What would happen if the variable "i" were declared static? 
 
- Zero-initialized static data goes in .BSS (Block Started by Symbol), non-zero-initialized data goes in .DATA. 

2.) What might the compiler do to this code that eliminates the issue? 

- Since the variable "i" is accessed frequently, the compiler may choose to optimize the code such that "i" is maintained in a register.
