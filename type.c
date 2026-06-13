#include <stdio.h>//preprocessor directive.
#include <string.h>//for string manipulation functions like strcspn() used to remove the newline character from the name input.
int main()
{
//int age=30;
//char grade='A';
  //  double pi=3.14159;
   // char email[]="philtheuri@gmail.com";
    //char name[20]="PHILIP THEURI";
   // printf("%s\n", name);//for a string variables, use %s format specifiers
    //printf("%s\n", email);//same case as above.
//printf("%d\n",age);// for a integer variables, use %d format specifiers
//printf("%c\n",grade);// for a char variables, use %c format specifiers
//printf("%lf\n",pi);// for a double variables, use %lf format specifiers or customize the number to suit your needs, for example %.2lf will print pi with 2 decimal places.

//width specifiers
//int num1=1, num2=10, num3=100;
//printf("%-04d\n", num1);//left justified with a width of 4
//printf("%02d\n", num1);//right justified with a width of 2

//printf("%d\n", num1);

//int x=3, y=4, z=5;
//or multiplication
//int result = x * y * z;
//for x,we can usex=x/2or x/=2 its the same operator; or x=x+2or x=+2, or x+=2; or x=x-2; or x=x*2;or x++ : x-- depending on the operation you want to perform on x.

//printf("%d\n", x);

 //accept user input
/*int age;
float gpa;
char grade;
char name[50];
printf("Enter your age: ");
scanf("%d", &age);
printf("Enter your GPA: ");
scanf("%f", &gpa);
printf("Enter your grade: ");
scanf(" %c", &grade);
getchar(); // Clear the input buffer
printf("Enter your name:");
/*scanf(" %s", name);this will read a string input until the first whitespace character is encountered. If you want to read a full name with spaces, you can use fgets() instead of scanf().
fgets(name, sizeof(name), stdin);//this will read a string input including spaces until a newline character is encountered or the specified buffer size is reached. It also automatically adds a null terminator at the end of the string.
/*Note: When using fgets() after scanf(), you may need to clear the input buffer to avoid reading the leftover newline character from the previous input. You can do this by adding a getchar() after the scanf() calls before using fgets().
//name[strcspn(name, "\n")] = '\0'; // Remove the newline character added by fgets
// we can also use the following code to remove the newline character from the name input
int len = strlen(name);
if (len > 0 && name[len - 1] == '\n')
 {
    name[len - 1] = '\0'; / Remove the newline character
}/ this code checks if the last character in the name string is a newline character and replaces it with a null terminator if it is, effectively removing the newline from the input.
printf("Your age is:%d\n", age);
printf("Yout GPA is: %.3f\n", gpa);
printf("your grade is: %c\n", grade);
printf("your name is:%s\n", name);
printf("\n======the end======\n");*/

//shopping cart program

/*char item[50]="";
float price=0.0f;
int quantity=0;
char currency='$';
float total=0.0f;
printf("=== Shopping Cart Program ===\n");

printf("What item would you like to buy? ");
fgets(item, sizeof(item), stdin);
item[strcspn(item, "\n")] = '\0'; // Remove the newline character added by fgets

printf("What is the price for each item? ");
scanf("%f", &price);

printf("How many items would you like to buy? ");
scanf("%d", &quantity);

total =price * quantity;
printf("\n%.2f%c is the total cost for %d %s(s).\n", total, currency, quantity, item);
printf("\n=========the end=========\n");*/

printf("\n===  Mad Libs Game ===\n");
char noun[50]="";
char verb[50]="";
char adjective1[50]="", adjective2[50]="", adjective3[50]="";

printf("Enter a noun(animal, place, or thing): ");
fgets(noun, sizeof(noun), stdin);
noun[strcspn(noun, "\n")] = '\0'; // Remove the newline character added by fgets
printf("Enter a verb(action word with -ing): ");
fgets(verb, sizeof(verb), stdin);
verb[strcspn(verb, "\n")] = '\0';
printf("Enter an adjective(description): ");
fgets(adjective1, sizeof(adjective1), stdin);  
adjective1[strcspn(adjective1, "\n")] = '\0';
printf("Enter another adjective(description): ");
fgets(adjective2, sizeof(adjective2), stdin);
adjective2[strcspn(adjective2, "\n")] = '\0';
printf("Enter one more adjective(description): ");
fgets(adjective3, sizeof(adjective3), stdin);
adjective3[strcspn(adjective3, "\n")] = '\0';

printf("\n=== Your Mad Libs Story ===\n");
printf("This is the the list of your inputs:\n");
printf("Noun: %s\n", noun);
printf("Verb: %s\n", verb);
printf("Adjective 1: %s\n", adjective1);
printf("Adjective 2: %s\n", adjective2);
printf("Adjective 3: %s\n", adjective3);
printf("\n %s is %s %s, %s,and %s.\n", noun, verb, adjective1, adjective2, adjective3);
printf("\n======THE END======\n");
    return 0;
}