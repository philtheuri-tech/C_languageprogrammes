#include <stdio.h>   //preprocessor directive.
#include <string.h>  //for string manipulation functions like strcspn() used to remove the newline character from the name input.
#include <math.h>    //for mathematical functions like pow() used to calculate the power of a number in the calculator program.
#include <stdbool.h> // for boolean values
#include <ctype.h>   // to convert the lowercase to uppercase
#include <windows.h> // to be used when we want the computer to dispaly a sleeping mode like launching a new year.
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

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
/*void happyBirthday(char name[], int yearsOld) // you need to call the parameters that will be replaced
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
*/
// return = returns a value back to where you all a function
/*double square(double num)
{
    return num * num;
}
int main()
{
    double x = square(2.1);
    double y = square(3.56);
    double z = square(4.7);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);*/
/*bool ageCheck(int age)
{
    if (age >= 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int age = 12;
    if (ageCheck(age))
    {
        printf("You may sign pup\n");
    }
    else
    {
        printf("You must be 18+ old");
    }*/
/*variable scope- refers to where a variable is recognized and accessible. Variables can share the same name if they're in different scopes.*/
// you can define global scopes such as constant pi which can't be changed at any given point
/*double pi = 3.142;//it is easy for it to be modified throughout the code hence not advisable to use it.
int add(int x, int y)
{
    int result = x + y;
    return result;
}
int subtract(int x, int y)//we have declared two functions with almost the same name
{//but a function can't see inside another function which helps us to call our function at any given time.
    int result = x - y;
    return result;
}
int main()
{

    int result = subtract(3, 4);

    printf("%d", result);
*/
/*a function propototype== provides the compiler with information about a function(s) such as name return type and parametres before its actual definition.
it enables type checking and allows functions to be used before they're defined.
it also improves readability, organization and helps prevent errors.*/
/*void hello(char name[], int age); // function prototype
bool ageCheck(int age);
int main()
{
    hello("philip", 30);

    if (ageCheck(30))
    {
        printf("You are old enough to vote!");
    }
    else
    {
        printf("You must be 18+ to vote");
    }
    return 0;
}
void hello(char name[], int age)
{
    printf("hello %s\n", name);
    printf("You are %d years old!\n", age);
}
bool ageCheck(int age)
{
    return age >= 19;
}*/
// while loops in c

// int main()
//{
/* int number = 0;
 do
 {
     printf("Enter a number greater than 0:");
     scanf("%d", &number);
 } while (number <= 0);*/

/* char name[50] = "";
 printf("Enter your name: ");
 fgets(name, sizeof(name), stdin);
 name[strcspn(name, "\n")] = '\0';

 while (strlen(name) == 0)
 {
     printf("Name cannot be empty,please enter your name: ");
     fgets(name, sizeof(name), stdin);
     name[strcspn(name, "\n")] = '\0';
 }
 printf("Hello %s", name);*/

/*bool isRunning = true;
char response = '\0';
do
{
    printf("You are playing a game!\n");
    printf("Would you like to continoue?(Y = Yes, N = No):");
    scanf(" %c", &response);
    if (response != 'Y' && response != 'y')
    {
        isRunning = false;
    }
} while (isRunning);
printf("You've exited the game!");*/

// for loops- repeat a code for a limited no of times.

/*for (int i = 10; i >= 0; i--)
{
    Sleep(1000);//this statement is to display ina sleep mode...we used miliseconds not seconds
    //for a linux user/macOs it is sleep(100)/small s and in seconds not miliseconds as well as unitsd.h header file
    printf("%d\n", i);
}
printf("HAPPY NEW YEAR!\n");*/
// break- break out of a loop(STOP)
// continue- skip current cycle of a loop(SKIP)

/* for (int i = 1; i <= 10; i++)
 {
     if (i == 4)
     {
         continue;
     }
     printf("%d\n", i);
 }
*/

/*for (int i = 1; i < 7; i++)
{
    for (int j = 1; j < 10; j++)
    {
        printf("%d ", j);
    }
    printf("\n");
}
*/
// MULTIPLICATION TABLE
/* printf("\n      MULTIPLICATION TABLE      \n");
 for (int i = 1; i <= 10; i++)
 {
     for (int j = 1; j <= 10; j++)
     {
         printf("%3d ", i * j);
     }
     printf("\n");
 }*/

/*int rows = 0;
int columns = 0;
char symbol = '\0';
printf("Enter the number of rows: ");
scanf("%d", &rows);
printf("Enter the number of columns: ");
scanf("%d", &columns);
printf("Enter the symbol: ");
scanf(" %c", &symbol);

for (int i = 0; i < rows; i++)
{
    for (int i = 0; i < columns; i++)
    {
        printf("%c", symbol);
    }
    printf("\n");
}*/

// pseudo-random= appear random but determined by a mathematical formual
// that uses a seed value to generate a predictable sequence of numbers
// advanced: Mersenne Twister or /dev/random
// in this case we include the stdlib and time.h headerfiles.
// srand(time(NULL)); // called the seed random function as well as the time function and declaring it to be null(or 0 which can perfom the same task.)
// printf("%d\n", rand()); this is the basic way of calling random numbers

/*srand(time(NULL));
int min = 50;
int max = 100;
int randomNum1 = (rand() % (max - min + 1)) + min;
int randomNum2 = (rand() % (max - min + 1)) + min;
int randomNum3 = (rand() % (max - min + 1)) + min; /*without the curly brackets we get a one and two random numbers
   but if we add the curly brackets and add 1 then we get random no between 1 and 2*/
// printf("%d %d %d", randomNum1, randomNum2, randomNum3);

/* printf("**** NUMBER GUESSING GAME ****\n");
 srand(time(NULL));
 int guess = 0;
 int tries = 0;
 int min = 10;
 int max = 100;
 int answer = (rand() % (max - min + 1)) + min;
 do{
printf("Guess a number between %d-%d: ", min, max);
scanf("%d", &guess);
tries++;
if(guess< answer ){
 printf("TOO LOW!\n");
}
else if(guess > answer){
 printf("TOO HIGH\n");
}
else {
 printf("CORRECT\n");
}
 } while(guess != answer);
 printf("%d", answer);
 printf("It took you %d tries", tries);*/

/*int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);
int main()
{
    printf("**** ROCK PAPER SCISSORS GAME ****\n");
    srand(time(NULL));

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch (userChoice)
    {
    case 1:
        printf("You chose ROCK\n");
        break;
    case 2:
        printf("You chose PAPER\n");
        break;
    case 3:
        printf("You chose SCISSORS\n");
        break;
    }
    switch (computerChoice)
    {
    case 1:
        printf("The computer chose ROCK\n");
        break;
    case 2:
        printf("The computer chose PAPER\n");
        break;
    case 3:
        printf("The computer chose SCISSORS\n");
        break;
    }
    checkWinner(userChoice, computerChoice);

    return 0;
}
int getComputerChoice()
{
    return (rand() % 3) + 1;
}
int getUserChoice()
{
    int choice = 0;
    do
    {
        printf("Choose an option\n");
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3.SCISSORS\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);

    return choice;
}
void checkWinner(int userChoice, int computerChoice)
{
    if (userChoice == computerChoice)
    {
        printf("Its a Tie!");
    }
    else if((userChoice == 1 && computerChoice == 3)||
    (userChoice == 2 && computerChoice == 1)||
    (userChoice == 3 && computerChoice == 2)){
        printf("You WIN!");
    }

    else {
    printf("You loose!");
}
}*/
/*void checkBalance(float balance);
float deposit();
float withdraw(float balance);
int main()
{
    printf("*****WELCOME TO THE ATM PHILIP*****\n");
    int choice = 0;
    float balance = 0.0f;
    do
    {
        printf("Select an option:\n");
        printf("1.Check Balance\n");
        printf("2.Deposit Money\n");
        printf("3.Withdraw Money\n");
        printf("4.Exit the program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            printf("\nThankyou for Banking with us!");
            break;
        default:
            printf("\nInvalid choice please select 1-4\n");
        }

    } while (choice != 4);
    return 0;
}
void checkBalance(float balance)
{
    printf("\n YOUR CURRENT BALANCE IS: Kshs%.2f\n", balance);
}
float deposit()
{
    float amount = 0.0f;
    printf("Enter the amount you wanna deposit: ");
    scanf("%f", &amount);
    if (amount < 0)
    {
        printf("Invalid amount\n");
        return 0.0f;
    }
    else
    {
        printf("Succesfuly deposited kshs%.2f\n", amount);
    }
    return amount;
}
float withdraw(float balance)
{
    float amount = 0.0f;
    printf("\nEnter the amount you want to withdraw: ");
    scanf("%f", &amount);
    if (amount < 0){
        printf("Invalid amount!\n");
        return 0.0f;
    }
    else if(amount > balance){
        printf("Insufficient funds! Your balnce is kshs%.2f\n", balance);
        return 0.0f;
    }
    else{
        printf("Succesfully withdrawn %.2f\n", amount);
    }
    return amount;
}*/

// arrays-fixed collection of elements of the same data type
//(similar to a variable but it holds more than one value)
/*int numbers[] = {10,02,30, 40, 50,58, 98,450, 234};
char grades[5]={'A', 'B', 'C', 'D','E'};
char name[6] = "philip";
numbers[0] = 100;//you can change any element of the array but you have to access it first
numbers[1] = 4;
numbers[2] = 70;
numbers[3] = 50;
numbers[4] = 400;
//printf("%d\n", sizeof(numbers));
// printf("%d\n", sizeof(numbers[0]));
// int size= sizeof(numbers)/sizeof(numbers[0]);
for (int i=0; i<sizeof(numbers)/sizeof(numbers[0]); i++){
    printf("%d ", numbers[i]);
}*/
// multi-dimensional arrays
// single dimensional array
/*int scores[5] ={0} ;
for (int i=0;i<5; i++){
printf("Enter a score: ");
scanf("%d", &scores[i]);}
for (int i =0; i<5; i++){
    printf("%d ",scores[i]);
}*/

/*double numbers[4][6]={{10.1, 20.34, 57.6, 71.8, 49.3, 56},
                      {20, 30, 40, 50, 60, 70},
                      {28, 39, 36, 59, 60, 77},
                       {23,21, 48,10,15, 18}};
for (int i=0; i <4; i++){
    for (int j=0; j<6; j++){
printf("%.f ", numbers[i][j]);
    }
    printf("\n");
}
*/
// arrays for characters
/*char numpad[][3] ={{'1', '2', '3'},{'4', '5', '6'},{'7', '8', '9'}, {'*', '+', '#'}};
for (int i = 0; i<4; i++){
    for(int j= 0; j < 3; j++){
        printf(" %c", numpad[i][j]);
    }
    printf("\n");
}*/

// array of strings
/*char fruits [][10]= {"Apple", "Banana", "Avocado", "Coconut"};

fruits[0][0] = 'L';//for switching letters;
fruits[2][3] ='B';//for switching letters;
for(int i = 0; i < sizeof(fruits)/sizeof(fruits[0]); i++){
    printf("%s  ", fruits[i]);
}*/
/*char names[5][23] ={0};

for (int i =0; i<5; i++){
printf("Enter name %d: ", i+1);
fgets(names[i], sizeof(names[i]), stdin);
names[i][strcspn(names[i], "\n")] = '\0';
//names[i][0] = toupper(names[i][0]);//to capitalize the first letter of each word.
for(int j = 0; names[i][j] !='\0'; j++){ //this line executes for as long as our character is a non null terminator
    if(j == 0 || names[i][j-1] == ' '){// if our characters are j =o and second name j-1(if our letters are five, then capitalize the last storage space), then the names are capitalized.
        names[i][j] =toupper(names[i][j]);
    }
}
}
printf("\nNAMES ENTERED:\n");
for (int i =0; i<5; i++)
{
printf("Name %d: %s\n", i+1, names[i]);
}*/

// quiz game
/*char questions[][100] ={"What is the largest planet in the solar system?: ",
                        "What is the hottest planet?: ",
                        "Who is the president of Kenya?"};
char options [][100]={"A.JUPITER\nB.MARS\nC.SATURN\nD.URANUS",
                      "A.MERCURY\nB.VENUS\nC.EARTH\nD.MARS",
                      "A.JOMO KENYATTA\nB.UHURU\nC.WANTAM"};
char answerKey[] = {'A', 'B', 'C'};

char guess = '\0';
int score = 0;
printf("Quiz Game!\n");
for (int i = 0; i<sizeof(questions)/sizeof(questions[i]); i++)
{
printf("\n%s\n", questions[i]);
printf("\n%s\n", options[i]);
printf("\nEnter your choice: ");
scanf(" %c", &guess);
guess = toupper(guess);
if (guess == answerKey[i])
{
    printf("CORRECT\n");
    score++;
}
else{
    printf("WRONG\n");
}
}
printf("Your score is %d out of %d", score, sizeof(questions)/sizeof(questions[0]));*/

// tenary operator-a (Shortcut)shorthand for if..else statements
//(condition)? value_if_true:else value_if_false
// example 1
/*int x = 10;
int y =11;
int max = x>y? x:y;
printf("%d", max);*/
// exmple 2
/*bool isOnline = false;
printf("%s", (isOnline)?"Online":"offline");*/
// Example 3
/*int number = 11;
printf("%d is %s", number, (number%2 == 0)? "even": "odd");*/
// Example 4
/*int age = 1;
printf("%s", (age >18)?"You are an adult": "you are a child");*/

// Example 5
/*int hours = 12;
int minutes = 3;
char *meridiem =(hours<12)? "AM": "PM";
printf("%02d:%02d %s", hours, minutes, meridiem);*/
// tyedef-reserved keyword that gives an existing datatype a 'nickname'
// helps simplify complex types and improve and code readability

// typedef existing_type new_name;
/*typedef int Number;
int main()
{
int x = 3;
int y = 4;
int  z = x + y;
printf("%d", z);


    return 0;
}
*/

// typedef char String[50];//while replacing a name you need to specify the max number
//      of characters that you want to be included. when we shall replace the
//      char variable with a string we can now lack to include the specified max characters.
// we can also use a pointer instead and eliminate the need for the character max specifications as shown

// Example 1
/*typedef char Number;
int main(){
Number name = "Philip theuri";
printf("%s", name);
return 0;
}*/
// Example 2;
/*typedef char String[50];
int main(void){
    int i= 0;

    String user[] ={ "Bc", "spongebob squarepants", "james", "john", "Bbb", "philip"};
 for (int i = 0; i<6; i++){
    for (int j =0; user[i][j] != 0; j++){
        if(j ==0 || user[i][j - 1] == ' '){
            user[i][j] = toupper(user[i][j]);
        }
    }
 }
for (int i =0; i <6; i++){

    printf("%s\n", user[i]);}
    return 0;

}*/

// Enum == A user-defined data type that consists of a set of named integer constants.
//  Benefit: replaces numbers with readable name
/*typedef enum
{
    SUNDAY = 1,
    MONDAY = 2,
    TUESDAY = 3 ,
    WEDNESDAY = 4 ,
    THURSDAY = 5 ,
    FRIDAY= 6 ,
    SATURDAY = 7
} Day;
// For the normal format; its enum datatype{};and the word enum when calling the function
// we can however change that as done below to remove the need of enum in the int main.
// we can c
int main()
{
    Day today = SATURDAY;
if (today == SUNDAY || today == SATURDAY ){
    printf("TODAY'S A WEEKEND");
}
else {
    printf("ITS A WEEKEDAY\n");
}
    return 0;
}*/
/*typedef enum {
    SUCCESS, FAILURE, PENDING
}Status;
void connectStatus(Status status );
int main(){
Status status = FAILURE;
connectStatus( status );
    return 0 ;
}
void connectStatus(Status status ){
    switch(status)
{
    case SUCCESS:
    printf("Connection was succesful\n");
    break;
    case FAILURE:
    printf("Connection failed!\n");
    break;
    case PENDING:
    printf("Connection pending...\n");
    break;
    default :
    printf("Error occured\n");
}

}*/
/*typedef struct {
    char name [50];
    int age;
    float Gpa;
    bool isFullTime;

}Student;
void printStudent(Student student[], int size);
// struct a custom container that holds multiple pieces of related information
// similar to objects in other languages.
int main(){
     Student student[] ={{"philip theuri", 21, 4.1,  true}
   ,{"james mwangi", 22, 5.3, true}
   , {"john mwangi", 48, 6, false}
   ,{"Marlon otieno", 67, 4.2, true}};
   int size = sizeof(student)/ sizeof(student[0]);
    //if you wanna assign values for a struct later then use this;
    //strncpystrcpy(student2.name, "james mwangi"); //or strncopy to save a certain amount of characters
//student2.age = 22;
//student2.Gpa = 5.3;
//student2.isFullTime = true;
for (int i =0; student[i].name[i] != '\0'; i++){
    for (int j = 0; student[i].name[j] != '\0'; j++){
        if(j ==0 || student[i].name[j - 1] == ' '){
            student[i].name[j] = toupper(student[i].name[j]);
        }
    }
 }
    printStudent(student, size);

return 0;
}
void printStudent(Student student[], int size){


for (int i = 0; i<size; i++){

  printf("Name:%s\n", student[i].name);//to access a name from a struct use the dot at the end and the name

  printf("Gpa: %.2f\n", student[i].Gpa);
  printf("Age: %d\n", student[i].age);
  printf("FullTime student:%s\n\n", (student[i].isFullTime)? "Yes":"No");
}
}*/
// Array of structs == array where each element contains a struct{} helps
//  organize and group together related data.
/*typedef struct {
    char model[25];
    int year;
    int price;
}Car;

int main(){
Car cars[] = {{"Porche", 2010, 1000000},
             {"coverte", 2026, 67000},
             {"Mustang", 2025, 700000}};
printf("CAR MODEL \tYear\tPrice");
for (int i= 0; i<sizeof(cars)/sizeof(cars[0]); i++){
    printf("\n%s\t\t", cars[i].model);
    printf("%d\t", cars[i].year);
    printf("%d$\t", cars[i].price);

}
    return 0;
}*/

/*void birthday(int *age);
int main(){

 //pointer = a variablee that stores the memory address of another variable
 // they help in avoiding wasting memory by allowing you to pass the address
 //   if a larger data structure instead of copying the entire data.

 int age = 20;
// to print the memory address, use: printf("%p", &age);
int*pAge= &age;//the aesteric is a direfference operator.
//printf("%p\n", &age);
//printf("%p\n", pAge);
//passing a pointer to a function.
//there are two ways of passing a value to a function ie: pass by value and pass by refference
birthday(pAge);
printf("You are %d years old", age);
    return 0;
}
void birthday(int*age//passing by refference using the pointer
    ){//if we pass the int ageitself, it won't work as we're passing by value and no changes will take place.
        (*age)++;//we derreference the age then increase it by one.
    }
*/
// How to open a file in c and using a pointer.
int main()
{
    /* FILE *pFile= fopen("C:\\Users\\lenovo\\OneDrive\\Desktop\\Student.txt", "w");//w is for writting on the code
     // while if you use r it will be for reading the file
 char text[] = "First pointer and file";
     if (pFile == NULL){
         printf("Error opening file\n");
         return 1;
     }
     fprintf(pFile, "%s", text);
     printf("File was written succesfully");
     // its important to close your file after getting done with it.
     fclose(pFile);*/

    // READING FROM A POINTER
    /*FILE *pFile = fopen("C:\\Users\\lenovo\\OneDrive\\Desktop\\sstudent.txt", "r");
    char buffer[1024] = {0};
    if (pFile == NULL)
    {
        printf("Could not open the file\n");
        return 1;
    }
    while (fgets(buffer, sizeof(buffer), pFile) != NULL)
    {
        printf("%s", buffer);
    }*/

    // Malloc() = //MEMORY ALLOCATION: A function on C that dynamically allocates a specified numbers of bytes in memory.
    //  For an array,you need to specify the number of elements you want to store which may be a probles
    //   especially if you don't know the number of elements or tests you want to store.
    //  that's where a Malloc comes in to help you store a certain number of bites\storage
    //     that you will  pass down to a later time when you're sure of the number of elements you want to store
    /*int number = 0;
    // stdlib.h
    printf("Enter the number of grades: ");
    scanf("%d", &number);
        float *grades = malloc(number * sizeof(float));// this stt determines the amount of storage space that
        // will be set aside for the elemnts to be keyed in by the user.
    // A segmentation fault occurs when a program attempts to acces a memory location that is
    //      not allowed to acces or attempts to access a memory location that is not allowed
    // for example trying to write a read- only location, or to overwrite part of the operating system.
if (grades == NULL){
    printf("Memory allocation failed!\n");
    return 1;
    }

    for(int i = 0; i< number; i++)// by working with the size of arrays this won't work
    // that's why we're turning to using numbers instead of sizeof(numbers)
    {
       printf("Enter grade number %d: ", i+1);
       scanf(" %f", &grades[i]);// this prompts the user to enter the numbers as he/ she had indicated earlier in the array
    }
    for (int i =  0; i< number; i++){
        printf("%.0f ", grades[i]);
    }

        free(grades);// returning "rented" space back to the operating system.Freeing the space.
        grades = NULL; */
    // returning the key to avoid dangling pointer- resetting the pointer.
    // printf("THE END----------\n");





    // printf("Calloc:CONTIGIOUS ALLOCATION---\n");
    //  calloc---- CONTIGIOUS ALLOCATION
    //  Allocates memory and sets all allocated bytes to 0(zero)
    //     maloc is faster but caloc leads to less bugs
    //    caloc(#(byte), size)
    // include the stdlib.h
    /*int number = 0;
    printf("Enter the number of players: ");
    scanf("%d", &number);
    int *scores = calloc(number, sizeof(int));// if we used malloc and printf(scores[i]);
    // we get garbage values hence its prefferd to turn to using calloc and differentiate the two using a comma

    if (scores == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
    for(int i = 0; i< number; i++){
        printf("Enter score#%d: ", i+1);
        scanf(" %d", &scores[i]);
    }
    for(int i = 0; i<number; i++){
        printf("%d ", scores[i]);
    }
    free(scores);
    scores = NULL;*/
    // REALLOC FUCTIONS: Realocation.(Resize previously allocated memory)
    //  realloc(ptr, bytes)
    // for a store, we need to store an array for different products
    /*int number = 0;
    printf("Enter the number of prices: ");
    scanf("%d", &number);

     float *prices = calloc(number, sizeof(float));
     if(prices == NULL){
        printf("Memory allocation failed!\n");
        return 1;
     }
     for (int i = 0; i<number; i++){
        printf("Enter price #%d: ", i+1);
        scanf("%f", &prices[i]);

     }
     int newNumber= 0;
     printf("Enter a new number of prices: ");
     scanf("%d", &newNumber);
     float *temp = realloc(prices, newNumber*sizeof(float));//copy the previously entered numbers to a
     //  new memory and free up the old memory.
     if(temp == NULL){
        printf("Cold not allocate the memory!\n");
        // we don't wanna loose the previous data hence there is no need for using return 1 to exit the code
        }
        else{
            prices = temp;
            temp = NULL;// if you wanna use the numbers from temp again
        }
        for (int i = number; i<newNumber; i++){
        printf("Enter price #%d: ", i+1);
        scanf("%f", &prices[i]);

     }

    for (int i = 0; i< newNumber; i++){
        printf("%.2f\t", prices[i]);
    }

     free(prices);
     prices = NULL;*/

    printf("DIGITAL WORKING CLOCK   \n");
    // you require the time.h header file
    // bool.h and unistd(unixstandard) for a sleep mode.
    // and windows.h for the sleeping function/ delay for about a second

    time_t rawtime = 0; // int has a limit but for time_t and long can hold a very large number which is what we want to store
    // Ie: seconds. the time t ussually holds a unix epic of around jan 1 1970.(epich)
    struct tm *pTime = NULL; // Initialize pointer to NULL to avoid using an uninitialized pointer.Initialize to NULL until localtime() returns a valid struct tm pointer,
    bool isRunning = true;
    while (isRunning)
    {
        time(&rawtime); // passing our time by refference and not by value to update it
        // printf("%ld\n", rawtime); to show how many seconds have passed after the epic.
        pTime = localtime(&rawtime);
        // printf("%d:%d:%d", (*pTime).tm_hour);//access the timer,dereffernce it then access the hour min or sec
        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec); // both will work the same
        fflush(stdout);
        Sleep(1000);
        // this compiler has; provided both the sleep(1for seconds) and Sleep(1000for milliseconds so anycan work.)
    }

    return 0;
}
