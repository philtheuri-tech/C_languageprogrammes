#include <stdio.h>
int main()
{
int age;
printf("ENTER YOUR AGE:\n");
scanf(" %d",&age);
if(age>=18 && age<= 49)
{
printf ("YOU CAN VOTE");
}
else if(age>=50 && age<=59)
{
printf("YOU CAN VIE FOR A POSITION");
}
else if (age>=60)
{
printf("YOU CANNOT VIE FOR A POSITION" );
}
else if (age<18)
{
printf("YOU'RE A MINOR");
}
return 0
}