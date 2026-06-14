#include <stdio.h>   //preprocessor directive.
#include <string.h>  //for string manipulation functions like strcspn() used to remove the newline character from the name input.
#include <math.h>    //for mathematical functions like pow() used to calculate the power of a number in the calculator program.
#include <stdbool.h> // for boolean values
#include <ctype.h>   // to convert the lowercase to uppercase
// int main()
//{
//  int age=30;
//  char grade='A';
//    double pi=3.14159;
//   char email[]="philtheuri@gmail.com";
//  char name[20]="PHILIP THEURI";
//  printf("%s\n", name);//for a string variables, use %s format specifiers
//  printf("%s\n", email);//same case as above.
//  printf("%d\n",age);// for a integer variables, use %d format specifiers
//  printf("%c\n",grade);// for a char variables, use %c format specifiers
//  printf("%lf\n",pi);// for a double variables, use %lf format specifiers or customize the number to suit your needs, for example %.2lf will print pi with 2 decimal places.

// width specifiers
// int num1=1, num2=10, num3=100;
// printf("%-04d\n", num1);//left justified with a width of 4
// printf("%02d\n", num1);//right justified with a width of 2

// printf("%d\n", num1);

// int x=3, y=4, z=5;
// or multiplication
// int result = x * y * z;
// for x,we can usex=x/2or x/=2 its the same operator; or x=x+2or x=+2, or x+=2; or x=x-2; or x=x*2;or x++ : x-- depending on the operation you want to perform on x.

// printf("%d\n", x);

// accept user input
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

// shopping cart program

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

/*printf("\n===  Mad Libs Game ===\n");
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
printf("\n======THE END======\n");*/

/* printf("\n=== Simple Calculator ===\n");
in this case we will require the math.h library to perform mathematical operations like power, square root, etc.
 float x = 90.0f;

 // x= sqrt(x);
 // x = pow(x, 2); : to raise x to the power of 2.
 // x = round(x); // rounds x to the nearest integer value.
 // x = ceil(x); // rounds x up to the nearest integer value.
 // x = floor(x); // rounds x down to the nearest integer value.
 // x= fabs(x); // returns the absolute value of x.
 // x = log(x); // returns the natural logarithm of x.
 // x = exp(x); // returns the exponential of x.
 // x = sin(x); // returns the sine of x (x is in radians).
 // x = cos(x); // returns the cosine of x (x is in radians).
 x = tan(x); // returns the tangent of x (x is in radians).
 printf("%.3f\n", x);
 printf("\n=== THE END ===\n");*/
/* printf("\n===caculating area, volume, and surface area.===\n");
 double radius = 0.0;
 double area = 0.0;
 double volume = 0.0;
 double surfaceArea = 0.0;
 const double PI = 3.14159;

 printf("Enter the radius: ");
 scanf("%lf", &radius);
 area = PI * pow(radius, 2);
 volume = (4.0 / 3.0) * PI * pow(radius, 3);
 surfaceArea = 4 * PI * pow(radius, 2);
 printf("\nThe area of the circle is: %.2lfcm^2\n", area);
 printf("The volume of the sphere is: %.2lfcm^3\n", volume);
 printf("The surface area of the sphere is: %.2lfcm^2\n", surfaceArea);
 printf("\n===THE END===\n");*/

/* printf("======Compound interest calculator======\n");
  double principal = 0.0;
  double rate = 0.0;
  int years = 0;
  int timescompounded = 0;
  double total = 0.0;

  printf("Enter the principal(P): \n");
  scanf("%lf", &principal);
  printf("Enter the interest rate %(r): ");
  scanf("%lf", &rate);

  rate = rate / 100;
  printf("Enter the number of years(t): ");
  scanf("%d", &years);

  printf("Enter the number of times compounded(n): \n");
  scanf("%d", &timescompounded);

  total = principal * pow(1 + rate / timescompounded, timescompounded * years);
  printf("The total amount is $ %.2lf\n:", total);
  printf("====the end====");*/

// if statement
/* int age = 0;
 printf("Enter your age: ");
 scanf(" %d", &age);
 if (age >= 65)
 {
     printf("you are a senior");
 }
 else if (age < 0)
 {
     printf("You Haven't been born yet");
 }
 else if (age == 0)
 {
     printf("You are a new born");
 }
 else if (age >= 18)
 {
     printf("You can vote");
 }
 else
 {
     printf("You are a child");
 }
     printf("the end");
     */
/*
 bool isStudent = false;
 if (isStudent)
 {
     printf("you are a student");
 }
 else
 {
     printf("You are not a student!");
 }*/
/* char name[50] = "";
 printf("Enter your name: ");
 fgets(name, sizeof(name), stdin);
 name[strcspn(name, "\n")] = '\0';
 if (strlen(name) == 0)
 {
     printf("Your did not enter you name");
 }
 else
 {
     printf("Hello %s", name);
 }*/
// WEIGHT CONVERSION PROGRAMME

/* int choice = 0;
 float pounds = 0.0f;
 float kilograms = 0.0f;

 printf("Weight Conversion Calculator\n");
 printf("1.kilograms to pounds\n");
 printf("2.Pounds to kilograms\n");
 printf("Enter your choice(1 or 2):");
 scanf("%d", &choice);

 if (choice == 1)
 {
     printf("Enter the weight in kilograms: \n");
     scanf("%f", &kilograms);
     pounds = kilograms * 2.20462;
     printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
     // klograms to pounds
 }
 else if (choice == 2)
 {
     printf("Enter the weight in pounds: \n");
     // pounds to kilograms
     scanf("%f", &pounds);
     kilograms = pounds / 2.20462;
     printf("%.2f pounds is equal to %.2f kilograms", pounds, kilograms);
 }
 else
 {
     printf("Invalid choice! Please enter 1 or 2!\n");
 }*/

// TEMPERATURE CONVERSION PROGRAM
/* char choice = '\0';
 char again;
 do
 {
     float celsius = 0.0f;
     float fahrenheit = 0.0;
     do
     {
         printf("Temperature Conversion Program\n");
         printf("A.Celsius to Fahrenheit\n");
         printf("B. Fahrenheit to Celsius\n");
         printf("Enter your choice(A or B): ");
         scanf(" %c", &choice);
         choice = toupper(choice);
         if (choice != 'A' && choice != 'B')
         {
             printf("Invalid choice! Please select A or B!\n");
         }
     } while (choice != 'A' && choice != 'B');

     if (choice == 'A')
     {
         printf("Enter the Temperature in celsius: ");
         scanf("%f", &celsius);
         fahrenheit = (celsius * 9 / 5) + 32;
         printf("%.2f degrees celcius is equal to%.2f degrees fahrenheit\n", celsius, fahrenheit);
     }

    else if (choice == 'B')
     {
         printf("Enter the Temperature in Fahrenheit: ");
         scanf("%f", &fahrenheit);
         celsius = (fahrenheit - 32) * 5 / 9;
         printf("%.1f degrees fahrenheit is equal to %.2f degrees celcius ", fahrenheit, celsius);
     }
     printf("\nDo you want to perform another calculation?(Y/N): ");
     scanf(" %c", &again);
 } while (again == 'Y');
 printf("Goodbye!\n");

 */
/* double a, b, c, discriminant, root1, root2;

 printf("Enter value of a: ");
 scanf("%lf", &a);

 printf("Enter value of b: ");
 scanf("%lf", &b);

 printf("Enter value of c: ");
 scanf("%lf", &c);

 if (a == 0)
 {
     printf("Not a quadratic equation.\n");
     return 0;
 }

 discriminant = b * b - 4 * a * c;

 if (discriminant > 0)
 {
     root1 = (-b + sqrt(discriminant)) / (2 * a);
     root2 = (-b - sqrt(discriminant)) / (2 * a);
     printf("Roots are real and different:\n");
     printf("Root 1 = %.2lf\n", root1);
     printf("Root 2 = %.2lf\n", root2);
 }
 else if (discriminant == 0)
 {
     root1 = -b / (2 * a);
     printf("Roots are real and equal:\n");
     printf("Root = %.2lf\n", root1);
 }
 else
 {
     double realPart = -b / (2 * a);
     double imagPart = sqrt(-discriminant) / (2 * a);
     printf("Roots are complex:\n");
     printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
     printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
 }*/
// Function to check if a number is prime
/*int isprime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

int main{
    int number;

    // Prompt user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call function and display result
    if (isprime(number) == 1) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }*/

// USE OF THE SWITCH STATEMENT
/* char dayoftheweek = 0;
 printf("Enter the day of the week(M, T, W, R, F, S, U): ");
 scanf("%c", &dayoftheweek);
 switch (dayoftheweek)
 {
 case 'M':
     printf("It is Monday\n");
     break; // it is important to add the break stt since if you don't include it then the compiler will print all the other cases
 case 'T':
     printf("It is Tuesday\n");
     break;
 case 'W':
     printf("It is Wednesday\n");
     break;
 case 'R':
     printf("It is Thursday\n");
 case 'F':
     printf("It is Friday\n");
     break;
 case 'S':
     printf("It is Saturday\n");
     break;
 case 'U':
     printf("It is Sunday");
     break;
 default:
     printf("Please enter a Valid character!(M, T, W, R, F, S,U)");
 }*/
/* float price = 10.00;
 bool isStudent = false; // 10% discount
 bool isSenior = false;  // 20 % discount
 // to avoid the compiler having wrong calculations we use the nested if stt
 if (isStudent)
 {
     if (isSenior)
     {
         printf("You get a student discount of 10%\n");
         printf("You get a senior discount of 20%\n");
         price *= 0.7;
     }
     else
     {
         printf("You get a student discount of 10%");
     }
 }
 else
 {
     if (isSenior)
     {
         printf("You get a senior discount of 10%\n");
         price *= 0.8;
     }
 }

 printf("The price of a ticket is: $%.2f\n", price);*/
// calculator program for both the nestes if statement as well as the switch statement

/* char operator = '\0';
 double num1 = 0.0, num2 = 0.0, result = 0.0;

 printf("Enter the first number: ");
 scanf("%lf", &num1);
 do
 {
     printf("Enter the arithmetic operator(+, -, *, /): ");
     scanf(" %c", &operator); // The space before%c is used to clear the \n in the input buffer
     if (operator != '+' && operator != '/' && operator != '-' && operator != '*')
     {
         printf("invalid operator!\n");
     }
 } while (operator != '+' && operator != '/' && operator != '-' && operator != '*');

 printf("Enter the second number: ");
 scanf("%lf", &num2);
 switch (operator)
 {
 case '+':
     result = num1 + num2;
     break;
 case '-':
     result = num1 - num2;
     break;
 case '/':
     do
     {
         if (num2 == 0)
         {
             printf("you can't divide by  zero!\n");
             printf("Enter the second number again: ");
             scanf("%lf", &num2);
         }
     } while (num2 == 0);
     result = num1 / num2;
     break;
 case '*':
     result = num1 * num2;
     break;
 default:
     printf("invalid! Enter an arithmetic operator('*', '+', '-', '/')\n");
 }
 printf("The result is: %.4lf", result);*/

// logical operators for boolean operations
// and logical operator -&& both must be tru
// OR logical operatoe - || atleast one must equate to true
// not-! if its false

/*int temp = -5;
if (temp <= 0 || temp >= 30)
{
    printf("The temperature is Bad!");
}
else
{
    printf("The temperature is Good!");
}*/
// booolean values for not
/*bool isSunny = false;
if (!isSunny)
{
    printf("It is Cloudy Today");
}
else
{
    printf("it is Sunny outside");
}*/

// FUNCTIONS- This is a reusable section of code that can be "invoked"
//              or called
// Arguments can be sent to a function so that it can use them
void happyBirthday(char name[], int yearsOld) // you need to call the parameters that will be replaced
{                                             // thats why we added the char name and age
    printf("\n Happy birthday to you!");
    printf("\n Happy birthday to you!");
    printf("\n Happy birthday dear %s!", name);
    printf("\n Happy birthday to you!");
    printf("\n You are now %d years old!\n", yearsOld);
}

int main()
{
    char name[50] = ""; // you can cusomize for the user to enter the age
    int yearsOld = 0;
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Enter your age: ");
    scanf("%d", &yearsOld);
    happyBirthday(name, yearsOld); // passing of the arguments
    happyBirthday(name, yearsOld);
    happyBirthday(name, yearsOld); // remember to follow the order as you had declared earlier in your function otherwise you will get errors

    return 0;
}