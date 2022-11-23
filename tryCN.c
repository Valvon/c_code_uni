#include <stdio.h>
#include <stdlib.h>


/*
char testGrade = 'A';
char name[] = "Mike"; 

short age0 = 10;
int age1 = 20;
long age2 =  30;
long long age3 = 40;

flaot gpa0 = 2.5;
double gpa1 = 3.5;
long double gpa2 = 3.5;

int isTall;  // used as bool 0 false, else true

const int IS_TALL;  // non modifyable

printf("%s, your grade is %c \n", name, testGrade);
%s string
%c char
%f float
%i, %d int


    // Casting 
int a = (int)3.14;
long double = (double) 3/2;

    // Pointer
int num  = 10; // 
printf("%p \n", pNum); // 10

pointer
int * pNum = &num; // Reference to adress of num
printf("%p \n", pNum); // Adress of pNum
printf("%p \n", *pNum); // 10

    // Numbers 
int a = 2 * 3; mult
int b = 2 + 3; add
int c = 2 / 3; div
int d = 10 % 2;  mod
int e = 1 + 2 * 3;   = 7  beachtet also punkt vor strich
int f = (1 + 2) * 3;   = 9
int h = 10 / 3.0;       int / float = 3.3333; -> float  
                        int/ int = 3; -> int

int num = 10;
num += a; // num = 16;
num++; // num = 17;

    // Input
STRING
char name[10];
printf("Enter your name: ");
fgets(name, 10, stdin);     //(variableToWriteTo, maxSize, standardInput);
printf("Hello %s! \n", name);

INT
int age;
printf("Enter your age: ");
scanf("%d", &age);       //(type of information, adressToWriteTo)
printf("You are %d \n", age);

CHAR
char grade;
printf("Enter your grade: ";
scanf("%c", &grade);
printf("You got an %c on the test \n", grade);

DOUBLe
double gpa;
printf("Enter gpa: ");
scanf("%lf", &gpa);    // ! get a double via scanf with %lf but print with %f
printf("GPA is: %f", gpa)

    ARRAYS
int luckyNumbers[4] = {4, 8, 7, 3}  // specify size[4] at the Beginning!!
                //    0  1  2  3
luckyNumbers[0] = 90    // {90, 8, 7, 3}

int numberGrid[2][3] = { {1, 2, 3}, {4, 5, 6} }
numberGrid[1][1] = 55 // { {1, 2, 3}, {4, 55, 6} }

    FUNCTIONS
//returnType name (datatypeA a, datatypeB b) { -code- }
int addNumbers(int num1, int num2) {
    return num1 + num 2;
}

int addNumbers(int num1, int num2);  // used to declare functions earlier on in code even though they are not implemented

int main()
{
    int sum = addNumbers(4, 60);
    return 0
}

    // STATEMENTS
int isStudent = 0;
int isSmart = 0;

if(isStudent != 0 && isSmart != 0){
    do this;
} else if (isStudent != 0 && isSmart == 0) {
    do that;
} else {
    do nithing;
}

if (1 > 3) {
    do this;
}


if ("a" > "b") { // alphabetical comparison
    do this
}
SWITCH
char myGrade = "A";
switch (myGrade) {
    case "A":
        do this;
        break;
    case "B":
        do that;
        break;
    default:
        fuck you;
}

    // LOOP
 int index = 1;
 while (index <= 5) {
    do that;
    index++;
 }

do{
    do that;
    index--;
 } while (index >=0);

for(int i = 0; i < 10; i++) {
    do this and that;
}

    // STRUCTS !!!!!
//define structure of a Student
struct Student {
    int age;
    double gpa;
    char grade;
};

int main () {
// use struct of Student and call the variable student1
    struct Student student1;    
    student1.age = 19;

}

 // POINTERS
 int x = 4;     // integer named x is set to 4
 int *pX = &x;  // integer pointer named pX (pointer to x) is set to the adress of x
 int y = *pX;   // integer named y is set to the value pointed to by pX


*/


int plusIt(int *a, int *b);
int multIt(int *a, int *b);

    // *a here passes the adress
int plusIt(int *a, int *b) {
    // *a here gets what the adress is pointing to
    *a += 1;
    *b += 2;
    if (*a < 10)
    {
        printf("I am at 2 and A is %d and B is %d \n", *a, *b);
        multIt(a, b);
    }
    return 0;
}

int multIt(int *a, int *b) {
    if ((*a + *b) <= 35) 
    {
        *b *= *a;
        printf("I am at 3 and A is %d and B is %d \n", *a, *b);
        plusIt(a, b);
    }
    printf("I am at 4 and A is %d and B is %d \n", *a, *b);
    
    return 0;
}

#include <stdio.h>

typedef struct element *list;
struct element {
    int value;
    list next; 
    };

void append(list *lp, int n) {
    while (*lp != NULL) {
        lp = &(*lp)->next;
    }
    list newElement = malloc(sizeof(struct element));
    newElement->value = n;
    newElement->next = NULL;
    *lp = newElement;
}

void whatIsWhat(list *lp) {
    printf("%a\n", lp);
    printf("%s\n", *lp);
    printf("%d\n", ((*lp)->next)->value);
}

int main(){
    int a = 0;
    int b = 2;
    plusIt(&a, &b);
    printf("A is %d and B is %d \n", a ,b);
    
    list l = NULL;
    append(&l,5);
    append(&l,6);
    append(&l,7);
    append(&l,8);
    append(&l,1);

    whatIsWhat(&l);
    return 0;
}
