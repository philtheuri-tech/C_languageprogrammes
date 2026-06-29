#include <stdio.h>
//void increament(int *p);
//int main()
//{
     /*
int i, a[10];
for (i=0; i<10; i++);
{
printf("Enter array elements:-");
scanf("%d",&a[i]);
}
printf("The array is:-");
for(i=0; i<10; i++)
{
printf("%d\n",a[i]);
for (int i = 0; i < size(names)/sizeof(names[0]); i++)
{
for(int [i][j] != 0; j++)
{
if(j == 0 || [i][j-1] == ' '){
name[i][j] = toupper(name[i][j]);
     }
 }

}
return 0;
}
#include <stdio.h>

int isDivisibleBy9(int number) {
return number % 9 == 0;
}

int main() {
int number;
int result;

printf("=== Divisibility by 9 Checker ===\n");

while (1) {
printf("Enter an integer (or -1 to exit): ");

result = scanf("%d", &number);

// Check for invalid input
if (result != 1) {
   printf("Invalid input! Please enter a valid integer.\n");

   // Clear input buffer
   while (getchar() != '\n');
   continue;
}

// Exit condition
if (number == -1) {
   printf("Program ended. Goodbye!\n");
   break;
}

int remainder = number % 9;

if (isDivisibleBy9(number)) {
   printf("%d is divisible by 9.\n", number);
} else {
   printf("%d is NOT divisible by 9. Remainder = %d\n", number, remainder);
}

printf("\n"); // spacing
}

return 0;
}*/

    /* Creating a structure */
    /*struct Car
    {
        int number;
        char model[20];
        char brand[20];
        int year;
    };

    int main()
    {*/
    /* Creating a variable of structure type */
    // struct Car car1;

    // Assigning values using pointer
    // struct Car *ptr = &car1;

    // ptr->number = 101;

    // assigning strings character by character
    // sprintf(ptr->model, "Corolla");
    // sprintf(ptr->brand, "Toyota");

    // ptr->year = 2020;

    // Printing the values
    /*  int numbers[10]; // This creates space for 10 integers
     int i;

     printf("Enter 10 numbers:\n");

     // Loop 1: Getting user input
     for(int i = 0; i < 10; i++) {
         printf("Number %d: ", i + 1);
         scanf("%d", &numbers[i]);
     }

     printf("\nThe numbers in reverse order are:\n");

     // Loop 2: Printing in reverse
     // We start at index 9 (the last item) and go down to 0
     for(i = 9; i >= 0; i--) {
         printf("%d\t ", numbers[i]);
     }

     printf("\n");*/
     /*
     
     int a = 1025;
    int  *p ;
     p  = &a;
     *p= 21;
     int **q;
     q =&p;
    

     printf("the size of intergers is %d bytes, %d\n", sizeof(char), a);
     printf("address = %d, value = %d, third value = %d, variable address = %d\n", p, *p, *(*q), q);
      **q = 2380;
      printf("q=%d", **q);*/

      // pointers as function arguments-call refference.
      //passing by reference
      //int a= 12;
    
//increament (&a);
//printf("a =  %d", a);
    //return 0;
//}
/*void increament(int *p){
*p =(*p)+1;

}*/
//pointers in function call
int sumOfElements(int *A, int size){
    int i, sum= 0;
for (i= 0; i<size;i++){
    sum+= A[i];
}
return sum;
}
int main(){
    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/ sizeof(A[0]);
    int total = sumOfElements(A, size);
    printf("Sum of Elemnts  = %d\n", total);
    return 0;
}