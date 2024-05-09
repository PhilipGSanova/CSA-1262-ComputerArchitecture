#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void executeInstructions() 
{
    int result = 0;
    for (int i = 0; i < 1000000; i++) 
    {
        result += i * 2; 
    }
}
int main() {
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    executeInstructions();
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("CPU time used: %f seconds\n", cpu_time_used);
    return 0;
}