#include <stdio.h>
#include <stdlib.h>
struct students{
char name[50];
int num;
int age;
int degree;
int section;
}s[5];
int main()
{
  int i;
  printf("Enter information of student\n");
  for(i=0;i<5;i++){
    s[i].num=i+1;
    printf("For student number:%d\n",s[i].num);
    printf("Enter student name name:");
    scanf("%s",s[i].name);
    printf("Enter student age:");
    scanf("%f",&s[i].age);
    printf("Enter student degree:");
    scanf("%f",&s[i].degree);
    printf("Enter student section:");
    scanf("%f",&s[i].section);

  }
  printf("Displaying information\n");
  printf ("Student number:");
  scanf("%d",&i);/*from 0 to 4 */
    printf ("student number:%d\n",i);
    printf("student name:%s\n",s[i].name);
    printf("student age:%f\n",s[i].age);
    printf("student degree:%f\n",s[i].degree);
    printf("student section:%f\n",s[i].section);

printf("\n");

}
