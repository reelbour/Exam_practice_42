#include <unistd.h>

int   main(int ac, char **av)
{
  if (ac == 2)
  {
    int i = 0;
    int j = 0;


    while (av[1][i] && (av[1][i] == '\t' && av[1][i] == ' '))
      i++;

    j = i; //j is index of first word

    while (av[1][i])
    {

      while (av[1][i] && (av[1][i] != '\t' && av[1][i] != ' '))
        i++; //finish the first word
      while (av[1][i] && (av[1][i] == '\t' || av[1][i] == ' '))
        i++; //moving until next word

      while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t') && (av[1][i - 1] == ' ' || av[1][i - 1] == '\t')) // print the word till it reaches last.
			{
				while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
				{
					write (1, &av[1][i], 1); // write the word
					i++;
				}
				write (1, " ", 1); //put a space
				i++;
			}
    }
    // now i have to print the word

    while (av[1][j] && (av[1][j] != '\t' && av[1][j] != ' '))
    {
      write (1, &av[1][j], 1);
      j++;
    }
  }
  write (1, "\n", 1);
  return 0;
}
