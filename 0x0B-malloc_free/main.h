char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int char_seen(char, char);
int count_chars(char *, int);
int word_len(char *);
char *get_substring(char *, int, int);
