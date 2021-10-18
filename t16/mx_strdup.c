int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str){
    char *new_string = mx_strnew(mx_strlen(str));
    mx_strcpy(new_string, str);
    return new_string;
}

