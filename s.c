#include <stdio.h>
#define STOP 0

int main()
{
    int counter;
    int start;
    scanf("%i", &start);
    for (counter = start; counter >= STOP; counter --)
    {
        printf("%i\n", counter);
    }
}

//
#include <stdio.h>
void swap1(int i, int j)
{
    int temp;
    temp = i;
    i = j;
    j = temp;
}
int main()
{
    int a = 12, b = 13;
    printf("a = %i b = %i\n", a, b);
    swap1(a, b);
    printf("a = %i b = %i\n", a, b);
}

//
#include <stdio.h>
void swap2(int *i, int *j)
{
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}
int main()
{
    int a = 12, b = 13;
    printf("a = %i b = %i\n", a, b);
    swap2(&a, &b);
    printf("a = %i b = %i\n", a, b);
}

//
#include <stdio.h>
int main(void)
{
    printf("hi");
}

//
#include <stdio.h>
int main(void)
{
    char a[5];
    fgets(a, 5, stdin);
    printf("%s", a);
}

//
#include <stdio.h>
int main(void)
{
int a, b;
scanf("%i", &a);
scanf("%i", &b);
printf("%i", a + b);
}

//
#include <stdio.h>
int main(void)
{
long a, b;
scanf("%li", &a);
scanf("%li", &b);
printf("%li", a + b);
}

//
#include <stdio.h>
int main(void)
{
int a;
scanf("%i", &a);
if (a < 2)
{
printf("It is smaller than 2");
}
else if (a > 2)
{
printf("It is bigger than 2");
}
else
{
printf("It equals 2.");
}
}

//
#include <stdio.h>
int main(void)
{
const int I = 2;
int a;
scanf("%i", &a);
if (a < I)
{
printf("It is smaller than 2");
}
else if (a > I)
{
printf("It is bigger than 2");
}
else
{
printf("It equals 2.");
}
}

//
#include <stdio.h>
int main(void)
{
int a;
scanf("%i", &a);
if (a%2 == 0)
{
printf("Even");
}
else
{
printf("Odd");
}
}

//
#include <stdio.h>
int main(void)
{
char a;
scanf("%c", &a);
if (a == 'Y' || a == 'y')
{
printf("Yes");
}
else if (a == 'N' || a == 'n')
{
printf("No");
}
}

//
#include <stdio.h>
void speak(void)
{
printf("Hi");
}
int main(void)
{
for (int i = 0; i < 3; i++)
{
speak();
}
}

//
#include <stdio.h>
void speak(void);
int main(void)
{
for (int i = 0; i < 3; i++)
{
speak();
}
}
void speak(void)
{
printf("Hi");
}

//
#include <stdio.h>
void speak(int n);
int main(void)
{
speak(4);
}
void speak(int n)
{
for (int i = 0; i < n; i++)
{
printf("Hi");
}
}

//
#include <stdio.h>
int main(void)
{
int n;
do
{
scanf("%i", &n);
}
while (n < 1);
for (int i = 0; i < n; i++)
{
printf("?");
}
}

//
#include <stdio.h>
int main(void)
{
int n;
do
{
scanf("%i", &n);
}
while (n < 1);
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
printf("#");
}
printf("\n");
}
}

//
#include <stdio.h>
int main(void)
{
while (1)
{
int n;
scanf("%i", &n);
if (n > 0)
{
printf("n is larger than 0.");
break;
}
}
}

//
#include <stdio.h>
int main(void)
{
float a, b;
scanf("%f", &a);
scanf("%f", &b);
printf("%f", a / b);
}

//
#include <stdio.h>
int main(void)
{
float a, b;
scanf("%f", &a);
scanf("%f", &b);
printf("%.50f", a / b);
}

//
#include <stdio.h>
int main(void)
{
float a;
scanf("%f", &a);
int b = a * 100;
printf("%i", b);
}

//
// gcc 2.c -o 2 -lm
//Must add -lm
#include <stdio.h>
#include <math.h>
int main(void)
{
float a;
scanf("%f", &a);
printf("%.0lf", round(a * 100));
}

