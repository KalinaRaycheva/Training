/*
Задача 11*. Напишете програма, която да премахва всички коментари в
една С програма.
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp, *ft;
    char ch, nextc;
    if (argc < 3)
    {
        printf("No file name given");
    }
    fp = fopen(argv[1], "r");
    ft = fopen(argv[2], "w");
    if (fp == NULL)
        printf("Opening error");
    if (ft == NULL)
        printf("Opening error");
    nextc = fgetc(fp);
    while (nextc != EOF)
    {
        ch = nextc;
        nextc = fgetc(fp);

        if ((ch == '/') && (nextc == '*'))
        {
            ch = fgetc(fp);
            nextc = fgetc(fp);
            while (!((ch == '*') && (nextc == '/'))) /* unroll until the end of comment*/
            {
                ch = nextc;
                nextc = fgetc(fp);
            }
            nextc = fgetc(fp);
            continue;
        }
        else if ((ch == '/') && (nextc == '/')) // block to handle single line comment.
        {
            nextc = fgetc(fp);
            while (!(nextc == '\n'))
            {
                nextc = fgetc(fp);
            }
            nextc = fgetc(fp);
            continue;
        }
        putc(ch, ft);
    }
    fclose(fp);
    fclose(ft);
    return 0;
}

/*
//second way
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void removeComments(char *prgm , char * res)
{
    int n = strlen(prgm);
    
 
    // Flags to indicate that single line and multiple line comments
    // have started or not.
    bool s_cmt = false;
    bool m_cmt = false;
    int j = 0;
 
    // Traverse the given program
    for (int i=0; prgm[i]; i++)
    {
        // If single line comment flag is on, then check for end of it
        if (s_cmt == true && prgm[i] == '\n')
            s_cmt = false;
 
        // If multiple line comment is on, then check for end of it
        else if  (m_cmt == true && prgm[i] == '*' && prgm[i+1] == '/')
            m_cmt = false,  i++;
 
        // If this character is in a comment, ignore it
        else if (s_cmt || m_cmt)
            continue;
 
        // Check for beginning of comments and set the appropriate flags
        else if (prgm[i] == '/' && prgm[i+1] == '/')
            s_cmt = true, i++;
        else if (prgm[i] == '/' && prgm[i+1] == '*')
            m_cmt = true,  i++;
 
        // If current character is a non-comment character, append it to res
        else {
            *(res+j) += prgm[i];
            j++;
            }
        
    }
    *(res+j) = '\0';
    
}
 
// Driver program to test above functions
int main()
{
    char  prgm [] = "//Test program
                     \n"
                  "int main()  \n"
                  "{           \n"
                  "// variable declaration \n"
                  "      int a, b, c;    \n"
                  "      // This is a test  \n"
                  "      //    multiline     \n"
                  "       //   comment for   \n"
                  "       //   testing
                        \n"
                  "      a = b + c;       \n"
                  "   }\n";
    printf( "Given Program \n");
    printf("%s",prgm);
    printf( "Modified Program \n");
    char prgm1[100] = "";
    removeComments(prgm,prgm1);
    printf("%s",prgm1);
    return 0;
}
*/