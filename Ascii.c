#include<stdio.h> 
#include<time.h> 

int main() {
	clock_t t;
    
    char c; 

    printf("Enter a character: "); 

    scanf("%c", &c);   

     

    // %d displays the integer value of a character 

    // %c displays the actual character 
	t = clock();
    printf("ASCII value of %c = %d", c, c); 
	t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
 
    printf("fun() took %f seconds to execute \n", time_taken);
     

    return 0; 

} 
