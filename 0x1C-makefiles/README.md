0x1C-makefiles
Makefile consists of a set of rules used to determine what part
of a program needs to be recompiled, and issues a command to
recompile them.

- Create your first Makefile.
Requirements:
name of the executable: school
rules: all
The all rule builds your executable
variables: none.

- Requirements:
name of the executable: school
rules: all
The all rule builds your executable
variables: CC, SRC
CC: the compiler to be used
SRC: the .c files.

- Create your first useful Makefile.
Requirements:
name of the executable: school
rules: all
The all rule builds your executable
variables: CC, SRC, OBJ, NAME
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
The all rule should recompile only the updated source files
You are not allowed to have a list of all the .o files.

- 