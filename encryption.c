int main(){
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int len = strlen(s);
    int rows = floor(sqrt(len));
    int cols = ceil(sqrt(len));

    if (rows * cols < len) {
        rows = cols;
    }

    for (int c = 0; c < cols; c++) {
        for (int r = 0; r < rows; r++) {
            int idx =  c + r * cols;
            if (idx < len) {
                printf("%c", s[idx]);
            }
        }
        printf(" ");
    }
    return 0;
}
