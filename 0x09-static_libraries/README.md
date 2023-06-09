# Learning
- A library is a file containing several object files, that can be used as a single entity in a linking phase of a program. Normally the library is indexed, so it is easy to find symbols (functions, variables and so on) in them.

- In order to create a static library, we can use a command like this:

	<code>ar rc libutil.a util_file.o util_net.o util_math.o</code>

- This command creates a static library named 'libutil.a' and puts copies of the object files "util_file.o", "util_net.o" and "util_math.o" in it. If the library file already exists, it has the object files added to it, or replaced, if they are newer than those inside the library. The 'c' flag tells ar to create the library if it doesn't already exist. The 'r' flag tells it to replace older object files in the library, with the new object files.

- After an archive is created, or modified, there is a need to index it. This index is later used by the compiler to speed up symbol-lookup inside the library. The command used to create or update the index is called 'ranlib', and is invoked as follows:

	<code>ranlib libutil.a</code>

# Mandatory

0. Create the static library libmy.a containing all the functions listed below: ....
