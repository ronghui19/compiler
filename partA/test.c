#include <stdio.h>
#include <stdlib.h>

// void GetChar() {

// }

int main(int argc, char const *argv[])
{
    // char ch;
    // FILE *fp = fopen("util.c", "r");
    // ch = fgetc(fp);

    // while ( (ch = fgetc(fp)) != EOF )
    // {
    //     putchar(ch);
    //     putchar('\n');
    // }
    
    // fclose(fp);


    // FILE *fp;
    // int len;
    // int nProject = 0;

    // fp = fopen("util.c", "r");
    // if( fp == NULL )
    // {
    //     perror ("打开文件错误");
    //     return(-1);
    // }
    // fseek(fp, 0, SEEK_END);

    // len = ftell(fp);
    // // char *buffer = malloc(sizeof(char)*len+1);
    // char buffer[10000];
    // buffer[nProject] = fgetc(fp); // init
    // while (buffer[nProject] != '$') {
    //     nProject++;
    //     buffer[nProject] = fgetc(fp);
    // }

    // buffer[++nProject] = '\0';



    // fclose(fp);

    // printf("util.c 的总大小 = %d 字节\n", len);


    // char buffer[10000];
    int len;
    int n = 0;//源程序指针

    char *buffer = malloc(sizeof(char)*len+1);

    FILE *fp;
    if ((fp = fopen("util.c", "r")) == NULL)
    {//打开源程序
        perror ("file open error");
        exit(0);
    }
    buffer[n] = fgetc(fp);
    while((buffer[n] = fgetc(fp)) != EOF){
        n++;
        if(n + 1 >= 10000){
            break;
        }
    }
    buffer[n] = '\0';
    printf("%s\n", buffer);
    fclose(fp);
    free(buffer);

    return 0;
}
