#include <stdio.h>
int f2=0;
void sleep(int t);
void ad2();
void home();
void level3();
void lev2loss();
int ZHSDGFGF()
{
    int k;
    FILE* ifile = fopen("t.txt", "r");
    fscanf(ifile,"%d",&k);  
    fclose(ifile);
    int n=1;
    n=n*3+11;
    int a[]={1,2,1,3,2,1,3,2,1,2,1,2,3,1,3,1,3,3,2,3,1,2,3,1,3,2,1,3,2,1,3,2,1,2,3,1,3,1,2,3,2,3,2,1,2,3,1,3,3,1,1,2,3,1,2,3,3,2,1,2,1,3,3,1,2,3,1,2,3,1,1,3,2,3};
    for(int i=0;i<=n;i++)
    {
        if(k==73)
        {k=0;}
        else
        k++;
    }
    FILE *ofile = fopen("t.txt", "w");
    fprintf(ofile, "%d",k);
    fclose(ofile);
    return a[k];
}
void
drawtank1 ()
{
  printf("\033[32;7m");    
  printf ("                     ");
  printf("\033[30;1m");printf ("|*|");printf("\033[32;7m");printf ("                                                                                                             \n");
  printf ("                 ");
  printf("\033[30;1m");printf ("***********");printf("\033[32;1m");printf("                                                                                                         \n");
  printf ("                 ");
  printf("\033[30;1m");printf ("***********");printf("\033[32;1m");printf("                                                                                                         \n");
  printf ("                 ");
  printf("\033[30;1m");printf ("**MOGAMBO**");printf("\033[32;1m");printf("                                                                                                         \n");
  printf ("                 ");
  printf("\033[30;1m");printf ("**       **");printf("\033[32;1m");printf("                                                                                                         \n");
  printf ("                 ");
  printf("\033[30;1m");printf ("**       **");printf("\033[32;1m");printf("                                                                                                         \n");
  printf ("                 ");
  printf("\033[30;1m");printf ("***********");printf("\033[32;1m");printf("                                                                                                         \n");
  printf ("                 ");
  
  printf ("    ");printf("\033[30;1m");printf("* *");printf("\033[32;1m");printf("                                                                                                             \n");
  printf ("                 ");
  printf ("    ");printf("\033[30;1m");printf("* *");printf("\033[32;1m");printf("                                                                                                             \n");
  printf ("                 ");
  printf ("    ");printf("\033[30;1m");printf("* *");printf("\033[32;1m");printf("                                                                                                             \n");
  printf ("                 ");
  printf ("    ");printf("\033[30;1m");printf("***");printf("\033[32;1m");printf("                                                                                                             \n");
  printf ("                 ");
  printf ("     ");printf("\033[33;1m");printf("O");printf("\033[32;1m");printf("                                                                                                              \n");
  printf ("                 ");
  printf ("     ");printf("\033[33;1m");printf("o");printf("\033[32;1m");printf("                                                                                                              \n");
  printf ("                 ");
  printf ("     ");printf("\033[33;1m");printf("o");printf("\033[32;1m");printf("                                                                                                              \n");
  

}

void
drawtank2 ()
{

  printf("\033[32;7m");    
  printf ("                                                             ");
  printf("\033[30;1m");printf ("|*|");printf("\033[32;7m");printf ("                                                                     \n");
  printf ("                                                         ");
  printf("\033[30;1m");printf ("***********");printf("\033[32;1m");printf("                                                                 \n");
  printf ("                                                         ");
  printf("\033[30;1m");printf ("***********");printf("\033[32;1m");printf("                                                                 \n");
  printf ("                                                         ");
  printf("\033[30;1m");printf ("**MOGAMBO**");printf("\033[32;1m");printf("                                                                 \n");
  printf ("                                                         ");
  printf("\033[30;1m");printf ("**       **");printf("\033[32;1m");printf("                                                                 \n");
  printf ("                                                         ");
  printf("\033[30;1m");printf ("**       **");printf("\033[32;1m");printf("                                                                 \n");
  printf ("                                                         ");
  printf("\033[30;1m");printf ("***********");printf("\033[32;1m");printf("                                                                 \n");
  printf ("                                                         ");
  
  printf ("    ");printf("\033[30;1m");printf("* *");printf("\033[32;1m");printf("                                                                     \n");
  printf ("                                                         ");
  printf ("    ");printf("\033[30;1m");printf("* *");printf("\033[32;1m");printf("                                                                     \n");
  printf ("                                                         ");
  printf ("    ");printf("\033[30;1m");printf("* *");printf("\033[32;1m");printf("                                                                     \n");
  printf ("                                                         ");
  printf ("    ");printf("\033[30;1m");printf("***");printf("\033[32;1m");printf("                                                                     \n");
  printf ("                                                         ");
  printf ("     ");printf("\033[33;1m");printf("O");printf("\033[32;1m");printf("                                                                      \n");
  printf ("                                                         ");
  printf ("     ");printf("\033[33;1m");printf("o");printf("\033[32;1m");printf("                                                                      \n");
  printf ("                                                         ");
  printf ("     ");printf("\033[33;1m");printf("o");printf("\033[32;1m");printf("                                                                      \n");
  
}

void
drawtank3 ()
{
    printf("\033[32;7m");
    printf
    ("                                                                                                                ");
  printf("\033[30;1m");printf ("|*|");printf("\033[32;7m");printf ("                  \n");
  printf ("                                                                                                            ");
  printf("\033[30;1m");printf ("***********");printf("\033[32;1m");printf("              \n");
  printf ("                                                                                                            ");
  printf("\033[30;1m");printf ("***********");printf("\033[32;1m");printf("              \n");
  printf ("                                                                                                            ");
  printf("\033[30;1m");printf ("**MOGAMBO**");printf("\033[32;1m");printf("              \n");
  printf ("                                                                                                            ");
  printf("\033[30;1m");printf ("**       **");printf("\033[32;1m");printf("              \n");
  printf ("                                                                                                            ");
  printf("\033[30;1m");printf ("**       **");printf("\033[32;1m");printf("              \n");
  printf ("                                                                                                            ");
  printf("\033[30;1m");printf ("***********");printf("\033[32;1m");printf("              \n");
  printf ("                                                                                                            ");
  
  printf ("    ");printf("\033[30;1m");printf("* *");printf("\033[32;1m");printf("                  \n");
  printf ("                                                                                                            ");
  printf ("    ");printf("\033[30;1m");printf("* *");printf("\033[32;1m");printf("                  \n");
  printf ("                                                                                                            ");
  printf ("    ");printf("\033[30;1m");printf("* *");printf("\033[32;1m");printf("                  \n");
  printf ("                                                                                                            ");
  printf ("    ");printf("\033[30;1m");printf("***");printf("\033[32;1m");printf("                  \n");
  printf ("                                                                                                            ");
  printf ("     ");printf("\033[33;1m");printf("O");printf("\033[32;1m");printf("                   \n");
  printf ("                                                                                                            ");
  printf ("     ");printf("\033[33;1m");printf("o");printf("\033[32;1m");printf("                   \n");
  printf ("                                                                                                            ");
  printf ("     ");printf("\033[33;1m");printf("o");printf("\033[32;1m");printf("                   \n");
  
}
void
drawjet1 ()
{
  printf("\033[32;7m");    
  printf ("                      ");printf("\033[31;1m");printf("*");printf("\033[32;7m");printf("                                                                                                              \n");
  printf ("                      ");printf("\033[31;1m");printf("*");printf("\033[32;7m");printf("                                                                                                              \n");
  printf ("                      ");printf("\033[31;1m");printf("*");printf("\033[32;7m");printf("                                                                                                              \n");
  printf ("                    ");printf("\033[31;1m");printf("*   *");printf("\033[32;7m");printf("                                                                                                            \n");
  printf ("                   ");printf("\033[31;1m");printf("*******");printf("\033[32;7m");printf("                                                                                                           \n");
  printf ("                  ");printf("\033[31;1m");printf("*********");printf("\033[32;7m");printf("                                                                                                          \n");
  printf (" ^           ");printf("\033[33;1m");printf("..");printf("\033[32;1m");printf("   ");printf("\033[31;1m");printf("*       *");printf("\033[32;1m");printf("   ");printf("\033[33;1m");printf("..");printf("\033[32;7m");printf("           ^                                                                                         \n");
  printf (" |          ");printf("\033[33;1m");printf("|  |");printf("\033[32;1m");printf("  ");printf("\033[31;1m");printf("*");printf("\033[36;1m");printf(" SBI'S ");printf("\033[31;1m");printf("*");printf("\033[32;1m");printf("  ");printf("\033[33;1m");printf("|  |");printf("\033[32;7m");printf("          |                                                                                         \n");
  printf("\033[33;1m");
  printf ("*|*");printf("\033[32;7m");printf("    ");printf("\033[31;1m");printf("******");printf("\033[33;1m");printf("  ");printf("\033[31;1m");printf("****");printf("\033[31;1m");printf("       ****");printf("\033[33;1m");printf("  ");printf("\033[31;1m");printf("******");printf("\033[32;1m");printf("    ");printf("\033[33;1m");printf("*|*");printf("\033[32;1m");printf("                                                                                        \n");
  printf (" ");printf("\033[31;1m");printf("*******|");printf("\033[36;1m");printf("         KINGFISHER        ");printf("\033[31;1m");printf("*******|");printf("\033[32;1m");printf("                                                                                         \n");
  printf ("         ");printf("\033[31;1m");printf("**********       **********");printf("\033[32;1m");printf("                                                                                                 \n");
  printf ("                  ");printf("\033[31;1m");printf("*       *");printf("\033[32;7m");printf("                                                                                                          \n");
  printf ("                  ");printf("\033[31;1m");printf("*       *");printf("\033[32;7m");printf("                                                                                                          \n");
  printf ("                 ");printf("\033[31;1m");printf("***********");printf("\033[32;7m");printf("                                                                                                         \n");   
  printf ("                ");printf("\033[31;1m");printf("|           |");printf("\033[32;7m");printf("                                                                                                        \n");
  printf ("                ");printf("\033[31;1m");printf("*************");printf("\033[32;7m");printf("                                                                                                        \n");
  
 

}

void
drawjet2 ()
{
  printf("\033[32;7m");    
  printf ("                                                              ");
  ;printf("\033[31;1m");printf("*");printf("\033[32;7m");printf("                                                                      \n");
  printf ("                                                              ");printf("\033[31;1m");printf("*");printf("\033[32;7m");printf("                                                                      \n");
  printf ("                                                              ");printf("\033[31;1m");printf("*");printf("\033[32;7m");printf("                                                                      \n");
  printf ("                                                            ");printf("\033[31;1m");printf("*   *");printf("\033[32;7m");printf("                                                                    \n");
  printf ("                                                           ");printf("\033[31;1m");printf("*******");printf("\033[32;7m");printf("                                                                   \n");
  printf ("                                                          ");printf("\033[31;1m");printf("*********");printf("\033[32;7m");printf("                                                                  \n");
  printf ("                                         ^           ");printf("\033[33;1m");printf("..");printf("\033[32;1m");printf("   ");printf("\033[31;1m");printf("*       *");printf("\033[32;1m");printf("   ");printf("\033[33;1m");printf("..");printf("\033[32;7m");printf("           ^                                                 \n");
  printf ("                                         |          ");printf("\033[33;1m");printf("|  |");printf("\033[32;1m");printf("  ");printf("\033[31;1m");printf("*");printf("\033[36;1m");printf(" SBI'S ");printf("\033[31;1m");printf("*");printf("\033[32;1m");printf("  ");printf("\033[33;1m");printf("|  |");printf("\033[32;7m");printf("          |                                                 \n");
  printf("\033[32;1m");
  printf ("                                        ");printf("\033[33;7m");printf("*|*");printf("\033[32;7m");printf("    ");printf("\033[31;1m");printf("******");printf("\033[33;1m");printf("  ");printf("\033[31;1m");printf("****");printf("\033[31;1m");printf("       ****");printf("\033[33;1m");printf("  ");printf("\033[31;1m");printf("******");printf("\033[32;1m");printf("    ");printf("\033[33;1m");printf("*|*");printf("\033[32;1m");printf("                                                \n");
  printf ("                                         ");printf("\033[31;1m");printf("*******|");printf("\033[36;1m");printf("         KINGFISHER        ");printf("\033[31;1m");printf("*******|");printf("\033[32;1m");printf("                                                 \n");
  printf ("                                                 ");printf("\033[31;1m");printf("**********       **********");printf("\033[32;1m");printf("                                                         \n");
  printf ("                                                          ");printf("\033[31;1m");printf("*       *");printf("\033[32;7m");printf("                                                                  \n");
  printf ("                                                          ");printf("\033[31;1m");printf("*       *");printf("\033[32;7m");printf("                                                                  \n");
  printf ("                                                         ");printf("\033[31;1m");printf("***********");printf("\033[32;7m");printf("                                                                 \n");   
  printf ("                                                        ");printf("\033[31;1m");printf("|           |");printf("\033[32;7m");printf("                                                                \n");
  printf ("                                                        ");printf("\033[31;1m");printf("*************");printf("\033[32;7m");printf("                                                                \n");
  
  
}

void
drawjet3 ()
{
  printf("\033[32;7m");    
  printf ("                                                                                                             ");printf("\033[31;1m");printf("*");printf("\033[32;7m");printf("                       \n");
  printf ("                                                                                                             ");printf("\033[31;1m");printf("*");printf("\033[32;7m");printf("                       \n");
  printf ("                                                                                                             ");printf("\033[31;1m");printf("*");printf("\033[32;7m");printf("                       \n");
  printf ("                                                                                                           ");printf("\033[31;1m");printf("*   *");printf("\033[32;7m");printf("                     \n");
  printf ("                                                                                                          ");printf("\033[31;1m");printf("*******");printf("\033[32;7m");printf("                    \n");
  printf ("                                                                                                         ");printf("\033[31;1m");printf("*********");printf("\033[32;7m");printf("                   \n");
  printf ("                                                                                        ^           ");printf("\033[33;1m");printf("..");printf("\033[32;1m");printf("   ");printf("\033[31;1m");printf("*       *");printf("\033[32;1m");printf("   ");printf("\033[33;1m");printf("..");printf("\033[32;7m");printf("           ^  \n");
  printf ("                                                                                        |          ");printf("\033[33;1m");printf("|  |");printf("\033[32;1m");printf("  ");printf("\033[31;1m");printf("*");printf("\033[36;1m");printf(" SBI'S ");printf("\033[31;1m");printf("*");printf("\033[32;1m");printf("  ");printf("\033[33;1m");printf("|  |");printf("\033[32;7m");printf("          |  \n");
  printf("\033[32;1m");
  printf ("                                                                                       ");printf("\033[33;7m");printf("*|*");printf("\033[32;7m");printf("    ");printf("\033[31;1m");printf("******");printf("\033[33;1m");printf("  ");printf("\033[31;1m");printf("****");printf("\033[31;1m");printf("       ****");printf("\033[33;1m");printf("  ");printf("\033[31;1m");printf("******");printf("\033[32;1m");printf("    ");printf("\033[33;1m");printf("*|*");printf("\033[32;1m");printf(" \n");
  printf ("                                                                                        ");printf("\033[31;1m");printf("*******|");printf("\033[36;1m");printf("         KINGFISHER        ");printf("\033[31;1m");printf("*******|");printf("\033[32;1m");printf("  \n");
  printf ("                                                                                                ");printf("\033[31;1m");printf("**********       **********");printf("\033[32;1m");printf("          \n");
  printf ("                                                                                                         ");printf("\033[31;1m");printf("*       *");printf("\033[32;7m");printf("                   \n");
  printf ("                                                                                                         ");printf("\033[31;1m");printf("*       *");printf("\033[32;7m");printf("                   \n");
  printf ("                                                                                                        ");printf("\033[31;1m");printf("***********");printf("\033[32;7m");printf("                  \n");   
  printf ("                                                                                                       ");printf("\033[31;1m");printf("|           |");printf("\033[32;7m");printf("                 \n");
  printf ("                                                                                                       ");printf("\033[31;1m");printf("*************");printf("\033[32;7m");printf("                 \n");
  
  
}
void
fire1 ()
{
  printf("\033[32;7m");        
  printf ("                 ");printf("\033[32;1m");
  printf ("     ");printf("*|");printf("                                                                                                             \n");
  printf ("                 ");
  printf ("     ");printf("**");printf("    ");printf("*");printf("                                                                                                        \n");
  printf ("                 ");
  printf ("*");printf("    ");printf("**");printf(" ");printf("**");printf(" ");printf("*");printf("                                                                                                        \n");
  printf ("                 ");
  printf ("**M");printf("     ");printf("AMBO**");printf("                                                                                                      \n");
  printf ("                 ");
  printf ("**");printf("    ");printf("*");printf("  ");printf("**");printf("                                                                                                         \n");
  printf ("                 ");
  printf ("   ");printf("**");printf("      ");printf("**");printf("                                                                                                       \n");
  printf ("                 ");
  printf ("*");printf(" ");printf("**");printf(" ");printf("*");printf(" ");printf("*");printf("  ");printf("**");printf("                                                                                                        \n");
  printf ("                 ");
  printf ("      ");printf("*");printf("                                                                                                             \n");
  printf ("                 ");
  printf ("      ");printf("*");printf("                                                                                                             \n");
  printf ("                 ");
  printf ("  ");printf("*");printf("    ");printf("*");printf("                                                                                                            \n");
  printf ("                 ");
  printf ("    ");printf("*");printf(" ");printf("*");printf("                                                                                                             \n");
  printf ("                 ");
  printf (" ");printf("\033[33;1m");printf("BOOM BABY!!");printf("\033[32;7m");printf("                                                                                                        \n");
  printf ("                 ");
  printf ("     ");printf("O");printf("                                                                                                              \n");
  printf ("                 ");
  printf ("     ");printf("o");printf("                                                                                                              \n");
  printf ("                 ");
  printf ("     ");printf("o");printf("                                                                                                              \n");
  printf ("                      ");printf("O");printf("                                                                                                              \n");
  printf ("                      ");printf("O");printf("                                                                                                              \n");
  printf ("                      ");printf("o");printf("                                                                                                              \n");
  printf ("                      ");printf("O");printf("                                                                                                              \n");
  printf ("                      ");printf("o");printf("                                                                                                              \n");
  printf ("                      ");printf("O");printf("                                                                                                              \n");
  printf("\033[32;7m");    
  printf ("                      ");printf("\033[31;1m");printf("*");printf("\033[32;7m");printf("                                                                                                              \n");
  printf ("                      ");printf("\033[31;1m");printf("*");printf("\033[32;7m");printf("                                                                                                              \n");
  printf ("                      ");printf("\033[31;1m");printf("*");printf("\033[32;7m");printf("                                                                                                              \n");
  printf ("                    ");printf("\033[31;1m");printf("*   *");printf("\033[32;7m");printf("                                                                                                            \n");
  printf ("                   ");printf("\033[31;1m");printf("*******");printf("\033[32;7m");printf("                                                                                                           \n");
  printf ("                  ");printf("\033[31;1m");printf("*********");printf("\033[32;7m");printf("                                                                                                          \n");
  printf (" ^           ");printf("\033[33;1m");printf("..");printf("\033[32;1m");printf("   ");printf("\033[31;1m");printf("*       *");printf("\033[32;1m");printf("   ");printf("\033[33;1m");printf("..");printf("\033[32;7m");printf("           ^                                                                                         \n");
  printf (" |          ");printf("\033[33;1m");printf("|  |");printf("\033[32;1m");printf("  ");printf("\033[31;1m");printf("*");printf("\033[36;1m");printf(" SBI'S ");printf("\033[31;1m");printf("*");printf("\033[32;1m");printf("  ");printf("\033[33;1m");printf("|  |");printf("\033[32;7m");printf("          |                                                                                         \n");
  printf("\033[33;1m");
  printf ("*|*");printf("\033[32;7m");printf("    ");printf("\033[31;1m");printf("******");printf("\033[33;1m");printf("  ");printf("\033[31;1m");printf("****");printf("\033[31;1m");printf("       ****");printf("\033[33;1m");printf("  ");printf("\033[31;1m");printf("******");printf("\033[32;1m");printf("    ");printf("\033[33;1m");printf("*|*");printf("\033[32;1m");printf("                                                                                        \n");
  printf (" ");printf("\033[31;1m");printf("*******|");printf("\033[36;1m");printf("         KINGFISHER        ");printf("\033[31;1m");printf("*******|");printf("\033[32;1m");printf("                                                                                         \n");
  printf ("         ");printf("\033[31;1m");printf("**********       **********");printf("\033[32;1m");printf("                                                                                                 \n");
  printf ("                  ");printf("\033[31;1m");printf("*       *");printf("\033[32;7m");printf("                                                                                                          \n");
  printf ("                  ");printf("\033[31;1m");printf("*       *");printf("\033[32;7m");printf("                                                                                                          \n");
  printf ("                 ");printf("\033[31;1m");printf("***********");printf("\033[32;7m");printf("                                                                                                         \n");   
  printf ("                ");printf("\033[31;1m");printf("|           |");printf("\033[32;7m");printf("                                                                                                        \n");
  printf ("                ");printf("\033[31;1m");printf("*************");printf("\033[32;7m");printf("                                                                                                        \n");
  
 
}

void
fire2 ()
{
  printf("\033[32;7m");    
  printf ("                                                         ");printf("\033[32;1m");
  printf ("     *|                                                                     \n");
  printf ("                                                         ");
  printf ("  **   * *                                                                  \n");
  printf ("                                                         ");
  printf ("*    *    *                                                                 \n");
  printf ("                                                         ");
  printf ("* M  AMBO**                                                                 \n");
  printf ("                                                         ");
  printf ("  *  *    *                                                                 \n");
  printf ("                                                         ");
  printf ("**       **                                                                 \n");
  printf ("                                                         ");
  printf ("*  *     * *                                                                \n");
  printf ("                                                         ");
  printf ("      *                                                                     \n");
  printf ("                                                         ");
  printf ("    * *                                                                     \n");
  printf ("                                                         ");
  printf ("    *                                                                       \n");
  printf ("                                                         ");
  printf ("    *                                                                       \n");
  printf ("                                                         ");
  printf("\033[33;1m");printf (" BOOM BABY!!");printf("\033[32;1m");printf("                                                                \n");
  printf ("                                                         ");
  printf ("     o                                                                      \n");
  printf ("                                                         ");
  printf ("     o                                                                      \n");
  printf ("                                                         ");
  printf ("     O                                                                      \n");
  printf ("                                                         ");
  printf ("     o                                                                      \n");
  printf ("                                                         ");
  printf ("     O                                                                      \n");
  printf ("                                                         ");
  printf ("     o                                                                      \n");
  printf ("                                                         ");
  printf ("     o                                                                      \n");
  printf ("                                                         ");
  printf ("     O                                                                      \n");
 printf("\033[32;7m");    
  printf ("                                                              ");
  ;printf("\033[31;1m");printf("*");printf("\033[32;7m");printf("                                                                      \n");
  printf ("                                                              ");printf("\033[31;1m");printf("*");printf("\033[32;7m");printf("                                                                      \n");
  printf ("                                                              ");printf("\033[31;1m");printf("*");printf("\033[32;7m");printf("                                                                      \n");
  printf ("                                                            ");printf("\033[31;1m");printf("*   *");printf("\033[32;7m");printf("                                                                    \n");
  printf ("                                                           ");printf("\033[31;1m");printf("*******");printf("\033[32;7m");printf("                                                                   \n");
  printf ("                                                          ");printf("\033[31;1m");printf("*********");printf("\033[32;7m");printf("                                                                  \n");
  printf ("                                         ^           ");printf("\033[33;1m");printf("..");printf("\033[32;1m");printf("   ");printf("\033[31;1m");printf("*       *");printf("\033[32;1m");printf("   ");printf("\033[33;1m");printf("..");printf("\033[32;7m");printf("           ^                                                 \n");
  printf ("                                         |          ");printf("\033[33;1m");printf("|  |");printf("\033[32;1m");printf("  ");printf("\033[31;1m");printf("*");printf("\033[36;1m");printf(" SBI'S ");printf("\033[31;1m");printf("*");printf("\033[32;1m");printf("  ");printf("\033[33;1m");printf("|  |");printf("\033[32;7m");printf("          |                                                 \n");
  printf("\033[32;1m");
  printf ("                                        ");printf("\033[33;7m");printf("*|*");printf("\033[32;7m");printf("    ");printf("\033[31;1m");printf("******");printf("\033[33;1m");printf("  ");printf("\033[31;1m");printf("****");printf("\033[31;1m");printf("       ****");printf("\033[33;1m");printf("  ");printf("\033[31;1m");printf("******");printf("\033[32;1m");printf("    ");printf("\033[33;1m");printf("*|*");printf("\033[32;1m");printf("                                                \n");
  printf ("                                         ");printf("\033[31;1m");printf("*******|");printf("\033[36;1m");printf("         KINGFISHER        ");printf("\033[31;1m");printf("*******|");printf("\033[32;1m");printf("                                                 \n");
  printf ("                                                 ");printf("\033[31;1m");printf("**********       **********");printf("\033[32;1m");printf("                                                         \n");
  printf ("                                                          ");printf("\033[31;1m");printf("*       *");printf("\033[32;7m");printf("                                                                  \n");
  printf ("                                                          ");printf("\033[31;1m");printf("*       *");printf("\033[32;7m");printf("                                                                  \n");
  printf ("                                                         ");printf("\033[31;1m");printf("***********");printf("\033[32;7m");printf("                                                                 \n");   
  printf ("                                                        ");printf("\033[31;1m");printf("|           |");printf("\033[32;7m");printf("                                                                \n");
  printf ("                                                        ");printf("\033[31;1m");printf("*************");printf("\033[32;7m");printf("                                                                \n");
  

}

void
fire3 ()
{
    printf("\033[32;7m");
  printf
    ("                                                                                                        ");
  printf("\033[32;1m");printf ("    *|                       \n");
  printf
    ("                                                                                                        ");
  printf ("* * *    * *                 \n");
  printf
    ("                                                                                                        ");
  printf ("  *     * *                  \n");
  printf
    ("                                                                                                        ");
  printf (" *M  AMBO**                  \n     ");
  printf
    ("                                                                                                        ");
  printf ("*    *    **            \n");
  printf
    ("                                                                                                        ");
  printf ("**       **                  \n");
  printf
    ("                                                                                                        ");
  printf ("*     *  *                   \n");
  printf
    ("                                                                                                        ");
  printf (" *   *                       \n");
  printf
    ("                                                                                                        ");
  printf ("      *                      \n");
  printf
    ("                                                                                                        ");
  printf ("    * *                      \n");
  printf
    ("                                                                                                        ");
  printf ("     *                       \n");
  printf
    ("                                                                                                        ");
  printf("\033[33;1m");printf (" BOOM BABY!!");printf("\033[32;1m");printf("                 \n");
  printf
    ("                                                                                                        ");
  printf ("     o                       \n");
  printf
    ("                                                                                                        ");
  printf ("     o                       \n");
  printf
    ("                                                                                                        ");
  printf ("     O                       \n");
  printf
    ("                                                                                                        ");
  printf ("     o                       \n");
  printf
    ("                                                                                                        ");
  printf ("     O                       \n");
  printf
    ("                                                                                                        ");
  printf ("     o                       \n");
  printf
    ("                                                                                                        ");
  printf ("     O                       \n");
  printf
    ("                                                                                                        ");
  printf ("     O                       \n");
  printf("\033[32;7m");    
  printf ("                                                                                                             ");printf("\033[31;1m");printf("*");printf("\033[32;7m");printf("                       \n");
  printf ("                                                                                                             ");printf("\033[31;1m");printf("*");printf("\033[32;7m");printf("                       \n");
  printf ("                                                                                                             ");printf("\033[31;1m");printf("*");printf("\033[32;7m");printf("                       \n");
  printf ("                                                                                                           ");printf("\033[31;1m");printf("*   *");printf("\033[32;7m");printf("                     \n");
  printf ("                                                                                                          ");printf("\033[31;1m");printf("*******");printf("\033[32;7m");printf("                    \n");
  printf ("                                                                                                         ");printf("\033[31;1m");printf("*********");printf("\033[32;7m");printf("                   \n");
  printf ("                                                                                        ^           ");printf("\033[33;1m");printf("..");printf("\033[32;1m");printf("   ");printf("\033[31;1m");printf("*       *");printf("\033[32;1m");printf("   ");printf("\033[33;1m");printf("..");printf("\033[32;7m");printf("           ^  \n");
  printf ("                                                                                        |          ");printf("\033[33;1m");printf("|  |");printf("\033[32;1m");printf("  ");printf("\033[31;1m");printf("*");printf("\033[36;1m");printf(" SBI'S ");printf("\033[31;1m");printf("*");printf("\033[32;1m");printf("  ");printf("\033[33;1m");printf("|  |");printf("\033[32;7m");printf("          |  \n");
  printf("\033[32;1m");
  printf ("                                                                                       ");printf("\033[33;7m");printf("*|*");printf("\033[32;7m");printf("    ");printf("\033[31;1m");printf("******");printf("\033[33;1m");printf("  ");printf("\033[31;1m");printf("****");printf("\033[31;1m");printf("       ****");printf("\033[33;1m");printf("  ");printf("\033[31;1m");printf("******");printf("\033[32;1m");printf("    ");printf("\033[33;1m");printf("*|*");printf("\033[32;1m");printf(" \n");
  printf ("                                                                                        ");printf("\033[31;1m");printf("*******|");printf("\033[36;1m");printf("         KINGFISHER        ");printf("\033[31;1m");printf("*******|");printf("\033[32;1m");printf("  \n");
  printf ("                                                                                                ");printf("\033[31;1m");printf("**********       **********");printf("\033[32;1m");printf("          \n");
  printf ("                                                                                                         ");printf("\033[31;1m");printf("*       *");printf("\033[32;7m");printf("                   \n");
  printf ("                                                                                                         ");printf("\033[31;1m");printf("*       *");printf("\033[32;7m");printf("                   \n");
  printf ("                                                                                                        ");printf("\033[31;1m");printf("***********");printf("\033[32;7m");printf("                  \n");   
  printf ("                                                                                                       ");printf("\033[31;1m");printf("|           |");printf("\033[32;7m");printf("                 \n");
  printf ("                                                                                                       ");printf("\033[31;1m");printf("*************");printf("\033[32;7m");printf("                 \n");
  
}
int
level2flow ()
{
  int c;
  f2 = 0;
  int ntank;
  int njet;
  do 
  {
  ntank = ZHSDGFGF();
  njet =  ZHSDGFGF();
  }while(ntank==njet);
  switch (ntank)
    {
    case 1:
      {
	drawtank1 ();
	printf ("                                                                                                                                     \n");
	printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	     
	break;
      }
    case 2:
      {
	drawtank2 ();
	printf ("                                                                                                                                     \n");
	printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	      
	break;
      }
    case 3:
      {
	drawtank3 ();
	printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	     
	break;
      }
    }
    switch (njet)
    {
    case 1:
      {
	drawjet1 ();
	scanf ("%d", &njet);
	break;
      }
    case 2:
      {
	drawjet2 ();
	scanf ("%d", &njet);
	break;
      }
    case 3:
      {
	drawjet3 ();
	scanf ("%d", &njet);
	break;
      }
    }
    if(njet>3||njet<0)
    lev2loss();
    while (njet != 0)
    {
      c = njet;
      switch (ntank)
	{
	case 1:
	  {
	    drawtank1 ();
	    printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	     break;
	  }
	case 2:
	  {
	    drawtank2 ();
	    printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	     break;
	  }
	case 3:
	  {
	    drawtank3 ();
	    printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	 printf ("                                                                                                                                     \n");
	      break;
	  }
	}
      switch (njet)
	{
	case 1:
	  {
	    drawjet1 ();
	    scanf ("%d", &njet);
	    break;
	  }
	case 2:
	  {
	    drawjet2 ();
	    scanf ("%d", &njet);
	    break;
	  }
	case 3:
	  {
	    drawjet3 ();
	    scanf ("%d", &njet);
	    break;
	  }
	}
    }
  if (njet == 0 && ntank == c)
    {
      f2++;
      switch (c)
	{
	case 1:
	  {
	    fire1 ();
	    sleep (1);
	    break;
	  }
	case 2:
	  {
	    fire2 ();
	    sleep (1);
	    break;
	  }
	case 3:
	  {
	    fire3 ();
	    sleep (1);
	    break;
	  }
	}
    }
}
void
lev2loss ()
{ int i;
printf("\033[32;7m");
  for (i = 0; i < 15; i++)
    printf ("                                                                                                                                    \n"); 
    printf("                                                                                                                                    \n");
    printf("                                                              ");printf("\033[31;1m");printf("loser!!");printf("\033[32;1m");printf("                                                               \n                                                                                                                                    \n");

    printf("                                                               ");printf("\033[31;1m");printf("Note:");printf("\033[32;1m");printf("                                                                \n");
    printf("                                      ");printf("\033[31;1m");printf("Don't try 'n' judge other's program ever because sometimes");printf("\033[32;1m");printf("                                    \n");
    printf("                                             ");printf("\033[31;1m");printf("you may lose in really stupid game like this.");printf("\033[32;1m");printf("                                          \n");
    printf("                                                                                                                                    \n");
    for (i = 0; i < 15; i++)
    printf ("                                                                                                                                    \n"); 
    printf ("                                                                                                                                    "); 
    sleep(7);
    ad2();
    home();
}

void
lev2win ()
{
    printf("\033[32;7m");
    printf("\033[32;1m");
  int i;
  for (i = 0; i < 17; i++)
    printf ("                                                                                                                                    \n"); 
  printf("                                                 ");printf("\033[33;1m");printf("BETE!!... BADE HEAVY PIL0T HO TM TO!!");printf("\033[32;1m");printf("                                              \n");
  printf("                                                                          ");printf("\033[33;1m");printf("-(YOU WON)");printf("\033[32;1m");printf("                                                \n");
  printf("                                                                          ");printf("\033[33;1m");printf("-Leveled up!!");printf("\033[32;1m");printf("                                             \n");
  for (i = 0; i < 17; i++)
    printf ("                                                                                                                                    \n"); 
     printf ("                                                                                                                                    "); 
    sleep(5);
     ad2();
     FILE *ofile = fopen("a.txt", "w");
    fprintf(ofile, "%d",3);
    fclose(ofile);
     level3();
}

void
level2 ()
{
    printf("\033[0m");
  int k;
  for(k=0;k<17;k++)
  printf("\n");
  printf("                                                           LEVEL 2\n");
  for(k=0;k<12;k++)
  printf("\n");
  printf("After intruding the server room you make your enemies feel your presence\n");
  printf("They are sending their best men at work\n");
  printf("Your task is to blast their tanks with you jet!\n\n");
  printf("* Enter 1/2/3 to enter a particular lane \n");
  printf("* Enter 0 to Fire\n");
  sleep(8);
  int i, j = 1;
  f2 = 1;
  for (i = 0; i < 5; i++)
    {
      j++;
      if (f2)
	level2flow ();
      else
	{
	  lev2loss ();
	  break;
	}
    }
  if (j == 6)
    lev2win ();
}
