#include <stdio.h>
typedef struct 
{
    int operand1;
    int operand2;
    int result;
} Instruction;
void instructionExecute(Instruction* instr) 
{
    instr->result = instr->operand1 & instr->operand2;
}
int main() 
{
    Instruction instr = {5, 3, 0};
    instructionExecute(&instr);
    printf("Result of AND operation: %d\n", instr.result);
    return 0;
}
