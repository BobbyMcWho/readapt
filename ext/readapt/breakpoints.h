void initialize_breakpoints(VALUE m_Readapt);

void breakpoints_set(char *file, long *lines);
void breakpoints_delete(char *file);
int breakpoints_match(char *file, long line);
