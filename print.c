#include<stdio.h>
#include<string.h>

char letters[26][5][6] = {
        // A
        { " ***", "*   *", "*****", "*   *", "*   *" },
        // B
        { "**** ", "*   *", "**** ", "*   *", "**** " },
        // C
        { " ***", "*    ", "*    ", "*    ", " ***" },
        // D
        { "**** ", "*   *", "*   *", "*   *", "**** " },
        // E
        { "*****", "*    ", "*****", "*    ", "*****" },
        // F
        { "*****", "*    ", "*****", "*    ", "*    " },
        // G
        { " ***", "*    ", "*  **", "*   *", " ***" },
        // H
        { "*   *", "*   *", "*****", "*   *", "*   *" },
        // I
        { "*****", "  *  ", "  *  ", "  *  ", "*****" },
        // J
        { "*****", "  *  ", "  *  ", "* *  ", " *   " },
        // K
        { "*   *", "*  * ", "***  ", "*  * ", "*   *" },
        // L
        { "*    ", "*    ", "*    ", "*    ", "*****" },
        // M
        { "*   *", "** **", "* * *", "*   *", "*   *" },
        // N
        { "*   *", "**  *", "* * *", "*  **", "*   *" },
        // O
        { " *** ", "*   *", "*   *", "*   *", " *** " },
        // P
        { "**** ", "*   *", "**** ", "*    ", "*    " },
        // Q
        { " **  ", "*  * ", "* ** ", "*  * ", " ** *" },
        // R
        { "**** ", "*   *", "**** ", "*  * ", "*   *" },
        // S
        { " ***", "*    ", " ***", "    *", " ***" },
        // T
        { "*****", "  *  ", "  *  ", "  *  ", "  *  " },
        // U
        { "*   *", "*   *", "*   *", "*   *", " ***" },
        // V
        { "*   *", "*   *", "*   *", " * * ", "  *  " },
        // W
        { "*   *", "*   *", "* * *", "** **", "*   *" },
        // X
        { "*   *", " * * ", "  *  ", " * * ", "*   *" },
        // Y
        { "*   *", " * * ", "  *  ", "  *  ", "  *  " },
        // Z
        { "*****", "   * ", "  *  ", " *   ", "*****" }
    };

char check_char(char *str, int len)
{
    int i=0;
    for(;i<len;i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A'&&str[i]<='Z')
            continue;
        else
            break;
    }
    if(i!=len)
        return 1;
    return 0;
}

void print_char(int index, int i)
{
    printf("%s\t", letters[index][i]);
}

void main(int argc, char*argv[])
{
    if(argc!=2)
    {
        printf("Invalid arguments...! It accepts only one word\n");
        return;
    }
    int len=strlen(argv[1]);
    if(check_char(argv[1], len))
    {
        printf("Argument should contain only alphabets\" \"\n");
        return;
    }
    char *str=argv[1];
    int i=0,j=0, index=0;
    for(;j<5;j++)
    {
        for(i=0;i<len;i++)
        {
            if(str[i]>='a' && str[i]<='z'){
                index=str[i]-'a';
                print_char(index,j);
            }
            else if(str[i]>='A' && str[i]<='Z'){
                index=str[i]-'A';
                print_char(index,j);
            }
        }
        printf("\n");
    }
}
