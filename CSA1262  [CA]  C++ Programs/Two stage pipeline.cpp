#include <stdio.h>
#define STAGE_IF 0
#define STAGE_EX 1
typedef struct 
{
    int opcode;
    int operand1;
    int operand2;
    int result;
} Instruction;
void instructionFetch(Instruction* instr) 
{
    
    printf("Instruction fetched: Opcode = %d, Operand1 = %d, Operand2 = %d\n", instr->opcode, instr->operand1, instr->operand2);
}
void instructionExecute(Instruction* instr) {
    instr->result = instr->operand1 + instr->operand2;
    printf("Instruction executed: Result = %d\n", instr->result);
}
int main() 
{
    Instruction instr1 = {1, 10, 20, 0};
    Instruction instr2 = {2, 30, 40, 0}; 
    printf("Instruction 1:\n");
    instructionFetch(&instr1);
    instructionExecute(&instr1);
    printf("\nInstruction 2:\n");
    instructionFetch(&instr2);
    instructionExecute(&instr2);
    return 0;
}
