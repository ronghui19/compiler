#include <stdio.h>
#include <stdlib.h>

// void GetChar() {

// }

int main(int argc, char const *argv[])
{

    int len;
    int n = 0;//源程序指针
    FILE *fp;

    if ((fp = fopen("util.c", "r")) == NULL)
    {//打开源程序
        perror ("file open error");
        exit(0);
    }
    
    fseek(fp, 0, SEEK_END);
    len = ftell(fp);

    char *buffer = malloc(sizeof(char)*len+1);
    buffer[n] = fgetc(fp);

    while((buffer[n] = fgetc(fp)) != EOF){
        n++;
        if(n + 1 >= len){
            break;
        }
    }
    
    buffer[n] = '\0';
    printf("util.c 的总大小 = %d 字节\n", len);
    printf("%s\n", buffer);
    fclose(fp);
    free(buffer);

    return 0;
}
