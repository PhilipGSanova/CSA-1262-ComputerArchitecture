#include <stdio.h>
#define STAGE_IF 0
#define STAGE_ID 1
#define STAGE_EX 2
#define STAGE_WB 3
typedef struct {
    int operand1;
    int operand2;
    int result;
} Instruction;
void instructionFetch(Instruction* instr) 
{
}
void instructionDecode(Instruction* instr) 
{
}
void instructionExecute(Instruction* instr) 
{
    instr->result = instr->operand1 & instr->operand2;
}
void instructionWriteBack(Instruction* instr)
{
}

int main() {
    Instruction instr = {5, 3, 0};

    printf("Instruction:\n");
    instructionFetch(&instr);
    instructionDecode(&instr);
    instructionExecute(&instr);
    instructionWriteBack(&instr);

    
    printf("Result of AND operation: %d\n", instr.result);

    return 0;
}
