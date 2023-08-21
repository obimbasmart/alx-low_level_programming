# C - Dynamic Libraries
> In this project I learnt the difference between dynamic and static libraries; and how to create and use a dynamic libraries. Now I know what happens when we write `include <stdio.h>`, `include "main.h"`.

> The advanced task required creating a dynamic library that contains C functions that can be called from Python. At first I imagined how possible that would be. After a little research I realized Python has a module named `ctypes` that does the magic.


## Learnings

To create a dynamic library in C, take the following steps:
1. run the command `gcc -c -fPIC *.c` to generate object files `.o` from C files `.c`
    - the `-c` flag insures the linking stage is not done
    - the `-fPIC` flag ensures code generation is configured to produce shared library (position independent)
2. run the command `gcc -shared -o liball.so *.o` to put together those objects files into one library.
    - this would create a dynamic library name `liball.so`
3. Add the location of your library files into the environmental variable to allow compiler to find it
    - run `export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH` to add library to env path
4. To compile our program `main.c` with the dynamic libray, run the command:
    - `gcc -L . main.c -l all -o output`
    - `all` refers to the name of our dynmanic library
    -  use the `-L` option to tell the program where to find the library in this case `.` is used to denote the current working directory
    -  the `l` option tells the compiler to look for the library

### Using the Library in Python

With python one can call dynamic libraries created in C
- first import `ctypes` and use the `CDLL` function: see example below:

- ```python

        # call the _strlen() function from liball.so"""
        #!/usr/bin/python3
        import ctypes
        spam = ctypes.CDLL(`./liball.so')

        length = spam._strlen(str)
    ```

## Mandatory

0. Create the dynamic library libdynamic.so containing C functions

1. Create a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.

## Advanced

<details><code>100-operations.so</code><summary>
Create a dynamic library that contains C functions that can be called from Python. See example for more detail
</summary>

<code>
    julien@ubuntu:~/0x18$ cat 100-tests.py
import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
julien@ubuntu:~/0x16. Doubly linked lists$ python3 100-tests.py 
66 + -76 = -10
66 - -76 = 142
66 x -76 = -5016
66 / -76 = 0
66 % -76 = 66
julien@ubuntu:~/0x18$ python3 100-tests.py 
-34 + -57 = -91
-34 - -57 = 23
-34 x -57 = 1938
-34 / -57 = 0
-34 % -57 = -34
julien@ubuntu:~/0x18$ python3 100-tests.py 
-5 + -72 = -77
-5 - -72 = 67
-5 x -72 = 360
-5 / -72 = 0
-5 % -72 = -5
julien@ubuntu:~/0x18$ python3 100-tests.py 
39 + -62 = -23
39 - -62 = 101
39 x -62 = -2418
39 / -62 = 0
39 % -62 = 39
julien@ubuntu:~/0x18$ 
</code>
