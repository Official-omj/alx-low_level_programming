#!/bin/bash
<<<<<<< HEAD
gcc -c ./*.c
ar -rc liball.a ./*.o
=======
gcc -wall -werror -wextra -pendatic -c *.c
ar - rc liball.a *.o
ranlib liball.a
>>>>>>> 54fbdfbc5ae94b30c7efc4c32f42934237edfe0c
