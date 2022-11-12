#include <stdio.h>
#include<time.h>
int main() {
    char str[1000], ch;
    int count = 0;
    int i=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    clock_t t;
t = clock();

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (i=0; str[i] != '\0'; ++i) 
	{
        if (ch == str[i])
            ++count;
    }

    printf("Frequency of %c = %d", ch, count);
      t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
 
    printf("fun() took %f seconds to execute \n", time_taken);
    return 0;
}

