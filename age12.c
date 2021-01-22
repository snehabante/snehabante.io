/*Use following table to print remarks on age
/*Age remark
<18 Jr. Kid
>=18 <25 Young one
>=25 <40 career age
>=40 <60 mid age
>=60 old age*/
#include <stdio.h>
#include <conio.h>
void main()
{
int age;
clrscr();
printf("Enter the age of person:\n");
scanf("%d",&age);
//Conditional branching using if...ladder
if(age<18.0)
printf("Jr. kid");
else if(age>=18 && age<25)
printf("Young one");
else if(age>=25 && age<40)
printf("Career age");
else if(age>=40 && age<60)
printf("mid age");
else if(age>=60)
printf("old age ");
getch();

 }
