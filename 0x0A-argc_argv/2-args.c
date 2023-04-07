#include <stdio.h>
/**
 * main - print all arguments it receives
 * @argc: number of command lines arguments.
 * @argv: array that contains the program command line arguments
 */

int main(int argc, char *argv[])
{
int i;
for(i =0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
