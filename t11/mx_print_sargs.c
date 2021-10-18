
void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1 , const char *s2);

void mx_sort(char **args, int size){
    int sorted = 0;
    while(!sorted){

        sorted = 1;

        for(int i = 1; i < size - 1; i++){
            if(mx_strcmp(args[i], args[i+1]) > 0){
                char *temp = args[i];
                args[i] = args[i + 1];
                args[i + 1] = temp;
                sorted = 0;
            }
        }
    }
}

int main(int argc, char *argv[]){
    mx_sort(argv, argc);

    for(int i = 1; i < argc; i++){
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}

