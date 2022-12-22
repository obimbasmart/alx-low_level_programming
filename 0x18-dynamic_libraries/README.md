# C - Dynamic Libraries

## Mandatory

0. Create the dynamic library libdynamic.so containing C functions

1. Create a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.

## Advanced


## Learnings

To create a dynamic library in C, take the following steps:
1. run the command `gcc -c -fPIC *.c` to generate object files `.o` from C files `.c`
    - the `-c` flag insures the linking stage is not done
    - the `-fPIC` flag ensures code generation is configured to produce shared library (position independent)
2. run the command `gcc -shared -o liball.so *.o` to put together those objects files into one library.
    - this would create a dynamic library name `liball.so`
3. Add the location of your library files into the environmental variable to allow compiler to find it
    - run `export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH` to add library to env path

### Using the Library in Python

With python one can call dynamic libraries crated in C
- first import `ctypes` and use the `CDLL` function: see example below:

- ```
        """ call the strlen() function from liball.so"""
        #!/usr/bin/python3
        import ctypes
        spam = ctypes.CDLL(`./liball.so')

        span.strlen(str) ```
