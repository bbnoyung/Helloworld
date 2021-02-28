//Write a program for working with the results of football matches.
//The program should allow you to add the result
//And the program should have a search for the team
// when you output the command name from the search query, it must be the first one
//The program must save the database to disk and read it.

#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct ITEM
{
  char first_team[40], second_team[40];
  char game_score[40];
} ITEM;

ITEM Football[40];

int Number;

void Print( void )
{
  int i;

  printf(" N  First team           Second team          Game score\n");

  for (i = 0; i < Number ; i++)
    printf("%2i. %-20s %-20s %-20s\n", i + 1, Football[i].first_team,
           Football[i].second_team, Football[i].game_score);

}

void Add( void )
{
  if (Number == 39)
  {
    fprintf(stderr, "Elements can't be add\n");
    return;
  }

  printf("Enter first team > ");
  scanf("%s", Football[Number].first_team);
  printf("Enter second team > ");
  scanf("%s", Football[Number].second_team);
  printf("Enter result (example 0:0) > ");
  scanf("%s", Football[Number].game_score);

  Number ++;
}


void Del( void )
{
  int i;

  printf("Enter number for delete > ");
  scanf("%i", &i);
  if (i < 1 || i > Number)
  {
    fprintf(stderr, "Elements with number %i don't exist\n", i);
    return;
  }

  for (i --; i < Number - 1; i ++)
    Football[i] = Football[i + 1];

  Number --;
}


void Save( void )
{
  FILE *F = fopen("C:\\football.txt", "wt");
  int i;

  if (F == nullptr)
  {
    fprintf(stderr, "The file 'football.txt' cannot be opened for writing\n");
    return;
  }

  for (i = 0; i < Number; i++)
    fprintf(F, " %-20s %-20s %-20s\n", Football[i].first_team, Football[i].second_team, Football[i].game_score);

  printf ("Saved successfully\n\n");
  fclose(F);
}


void Read( void )
{
  FILE *F = fopen("C:\\football.txt", "rt");
  int i;

  if (F == nullptr)
  {
    fprintf(stderr, "The file 'football.txt' cannot be opened for reading\n");
    return;
  }

  fscanf(F, "%i", &Number);
  for (i = 0; i < Number; i++)
    fscanf(F, "%s%s%s\n", Football[i].first_team, Football[i].second_team, Football[i].game_score);

  fclose(F);
}


void Search( void )
{
  FILE *F = fopen("C:\\football.txt", "r");
  char find[50];
  char p[255];

  printf("Enter team for search > ");
  scanf("%s", find);

  if (F == nullptr)
  {
    fprintf(stderr, "The file 'football.txt' cannot be opened for reading\n");
    return;
  }

  for (int i = 0; i < Number ; i++)
    {
      fgets(p, 255, F);
      if ((strstr(p,find)) != nullptr)
      {
          printf("%s", p);
          continue;
      }
    }
  printf("\nThis is all that was found!\n\n");
  return;

  fclose(F);
}


int Menu( void )
{
  int c = 0;

  while ( (c < '0') || (c > '6') )
  {
    printf("0 : Exit\n"
           "1 : Add a game\n"
           "2 : Save a games to a file\n"
           "3 : Reading from a file\n"
           "4 : Show all games\n"
           "5 : Search a team (only after save)\n"
           "6 : Delete a game\n"
           ">");
    c = getch();
    printf("%c\n", c);
  }
  return c;
}


int main( void )
{
  int Selection;

  printf ("Welcome to the program for recording football matches!\n\n");
  Number = 0;
  while ((Selection = Menu()) != '0')
    switch (Selection)
    {
    case '1':
      Add();
      break;
    case '2':
      Save();
      break;
    case '3':
      Read();
      break;
    case '4':
      Print();
      break;
    case '5':
      Search();
      break;
    case '6':
      Del();
      break;
    }
}

