#include<stdio.h>
void rocket();
void male();
void female();
void circle();
void square();
void triangle();
void inverted();
main()
{


  rocket();
 male();
 female();


}
void circle()
{
    printf("   *****      \n");
    printf(" *       *      \n");
    printf("*         *      \n");
    printf(" *       *      \n");
    printf("   *****      \n");

}
void triangle()
{
    printf("     *     \n");
    printf("    * *      \n");
    printf("   *   *      \n");
    printf("  *     *      \n");
    printf("  *******      \n");
}
void inverted()
{
 printf("     *     \n");
    printf("    * *      \n");
    printf("   *   *      \n");
    printf("  *     *      \n");
    printf(" *       *      \n");
}
void square()
{
    printf("  *******      \n");
    printf("  *     *      \n");
    printf("  *     *      \n");
    printf("  *     *      \n");
    printf("  *     *      \n");
    printf("  *******      \n");
}
void rocket()
{
    triangle();
    square();
    inverted();
printf("\n\n\n");
}




void male()
{
  circle();
  square();
  inverted();
  printf("\n\n\n");
}




void female()
{
  circle();
  square();
  triangle();
}



