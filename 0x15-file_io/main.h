#ifndef main_h
#define main_h

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_content(int , int, int, char *, char *);
void print_to_stderr(char *, char *, unsigned int);
void print_to_stderr_int(char *msg, int fd, unsigned int exit_code);

#endif /* end of main_h */
