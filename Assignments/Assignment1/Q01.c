/*
1. What is the difference between a code and an executable file? Describe the steps used to convert a C code to an 
executable file. (Write the necessary gcc command to show the working of the intermediate steps)
*/

/*
    Code : Blocks of instructions written by a programmer in any high level human readable language.
    Executable file : This is a file that contains the compiled version of code that can be executed by machine.

    ways to convert a C code into executable file
        (i) gcc -E source.c -o source.i
            -E: Runs the preprocessor only, generating an expanded source file.
            source.c: The original C source code file.
            -o source.i: Specifies the output file for the preprocessed code.

       (ii) gcc -S source.i -o source.s
            -S: Compiles the source code to assembly language.
            source.i: The preprocessed source file.
            -o source.s: Specifies the output file for the assembly code.

      (iii) gcc -c source.s -o source.o
            -c: Compiles the assembly code to an object file (machine code).
            source.s: The assembly code file.
            -o source.o: Specifies the output file for the object code.

       (iv) gcc source.o -o executable_file
            source.o: The object file to link.
            -o executable: Specifies the name of the final executable file.
            
*/
