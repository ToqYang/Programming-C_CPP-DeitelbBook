#include <stdio.h>

#define READ 10
#define WRITE 11

#define LOAD 20
#define STORE 21

#define ADD 30
#define SUBSTRACT 31
#define DIVIDE 32
#define MULTIPLY 33

#define BRANCH 40
#define BRANCHNEG 41
#define BRANCHZERO 42
#define HALT 43

#define SMEMORY 1000

void load_program(int *instruction_register, int *instruction_counter, int *memory);

int exec_program(int *operation_code, int *memory, int *operand, int *instruction_register,
		 int *instruction_counter, int *accumulator);

void dump_program(int *operation_code, int *memory, int *operand, int *instruction_register,
		  int *instruction_counter, int *accumulator);


/**
 * main - (A Computer Simulator) "Simpletron Machine Language"
 *
 * Return: 0 if is success
 */
int main(void)
{
	int memory[SMEMORY] = {0};
	int accumulator = 0, instruction_counter = 0, instruction_register = 0;
	int operation_code = 0, operand = 0, terminated = 1;


	load_program(&instruction_register, &instruction_counter, memory);
	instruction_counter = 0;


	while (terminated && terminated != -1) {
		/* Dump Actual Instruction */
		dump_program(&operation_code, memory, &operand, &instruction_register,
			     &instruction_counter, &accumulator);

		/* Execute */
		terminated = exec_program(&operation_code, memory,
					  &operand, &instruction_register,
					  &instruction_counter, &accumulator);

		printf("Status Program: %d\n", terminated);
	}

	return (0);
}


/**
 * initial_message - Print the message about the state program
 * @welend: (short int) State of the load of the program. 0: Start 1: End
 *
 */
void initial_message(short int welend)
{
	if (welend == 0)  {
		puts("*** Welcome to Simpletron! ***");
		puts("*** Please enter your program one instruction ***");
		puts("*** (or data word) at a time. I will type the ***");
		puts("*** location number and a question mark (?).  ***");
		puts("*** You then type the word for that location. ***");
		puts("*** Type the sentinel -99999 to stop entering ***");
		puts("*** your program. ***");
	} else if (welend == 1) {
		puts("*** Program loading completed ***");
		puts("*** Program execution begins  ***");
	}
}


/**
 * exec_program - Execute the program previously loaded
 * @operation_code: (int *) Left word, Operation currently performed
 * @memory: (int *) RAM with the instructions to be done
 * @operand: (int *) Right word, Store where it's going to be perfomed the operation
 * @instruction_register: (int *) Word with the operand and the code
 * @operation_counter: (int *) Number where is the current instruction
 * @accumulator: (int *) Temporal space where is store a result
 *
 * Return: 1: Runtime program, 0: Finished program, -1: Happened a bug
 */
int exec_program(int *operation_code, int *memory, int *operand, int *instruction_register,
		 int *instruction_counter, int *accumulator)
{
	int pstatus = 1;
	*instruction_register = memory[*instruction_counter];
	*operation_code = *instruction_register / 100;
	*operand = *instruction_register % 100;

	switch (*operation_code)
	{
	case READ:
		puts("------------------------------------");
		printf("INPUT: ");
		scanf("%6d", &memory[*operand]);
		puts("------------------------------------");
		++(*instruction_counter);
		break;
	case WRITE:
		puts("------------------------------------");
		printf("\nOUTPUT: %d\n\n", memory[*operand]);
		puts("------------------------------------");
		++(*instruction_counter);
		break;
	case LOAD:
		*accumulator = memory[*operand];
		++(*instruction_counter);
		break;
	case STORE:
		memory[*operand] = *accumulator;
		++(*instruction_counter);
		break;
	case ADD:
		*accumulator += memory[*operand];

		if (*accumulator > 9999 || *accumulator < -9999) {
			puts("*** Overflow accumulator ***");
			puts("*** Simpletron execution abnormally terminated ***");
			pstatus = -1;
		}
		++(*instruction_counter);
		break;
	case SUBSTRACT:
		*accumulator -= memory[*operand];

		if (*accumulator >= 9999 || *accumulator <= -9999) {
			puts("*** Overflow accumulator ***");
			puts("*** Simpletron execution abnormally terminated ***");
			pstatus = -1;
		}
		++(*instruction_counter);
		break;
	case MULTIPLY:
		*accumulator *= memory[*operand];

		if (*accumulator >= 9999 || *accumulator <= -9999) {
			puts("*** Overflow accumulator ***");
			puts("*** Simpletron execution abnormally terminated ***");
			pstatus = -1;
		}
		++(*instruction_counter);
		break;
	case DIVIDE:
		if (*operand == 0) {
			puts("*** Attempt to divide by zero ***");
			puts("*** Simpletron execution abnormally terminated ***");
			pstatus = -1;
		}
		else {
			*accumulator /= memory[*operand];
			if (*accumulator >= 9999 || *accumulator <= -9999) {
				puts("*** Overflow accumulator ***");
				puts("*** Simpletron execution abnormally terminated ***");
				pstatus = -1;
			}
		}
		++(*instruction_counter);
		break;
	case BRANCH:
		*instruction_counter = *operand;
		break;
	case BRANCHNEG:
		if (*accumulator < 0)
			*instruction_counter = *operand;
		else
			++(*instruction_counter);
		break;
	case BRANCHZERO:
		if (*accumulator == 0)
			*instruction_counter = *operand;
		else
			++(*instruction_counter);
		break;
	case HALT:
		puts("*** Simpletron execution terminated ***");
		pstatus = 0;
		break;
	default:
		puts("*** Simpletron execution abnormally terminated ***");
		pstatus = -1;
		break;
	}
	return (pstatus);
}


/**
 * dump_program - Print the current state of the program
 * @operation_code: (int *) Left word, Operation currently performed
 * @memory: (int *) RAM with the instructions to be done
 * @operand: (int *) Right word, Store where it's going to be perfomed the operation
 * @instruction_register: (int *) Word with the operand and the code
 * @operation_counter: (int *) Number where is the current instruction
 * @accumulator: (int *) Temporal space where is store a result
 *
 */
void dump_program(int *operation_code, int *memory, int *operand, int *instruction_register,
		  int *instruction_counter, int *accumulator)
{
	puts("REGISTERS:");
	printf("accumulator\t\t%+05d\n", *accumulator);
	printf("InstructionCounter\t   %02d\n", *instruction_counter);
	printf("InstructionRegister\t%+05d\n", *instruction_register);
	printf("operationCode\t\t   %02d\n", *operation_code);
	printf("operand\t\t\t   %02d\n\n", *operand);

	puts("MEMORY:");
	printf("%9s %6s %6s %6s %6s %6s %6s %6s %6s %6s",
	       "0", "1", "2", "3", "4", "5", "6", "7", "8", "9");

	for (size_t i = 0; i < SMEMORY; ++i)
	{
		if (i % 10 == 0)
			printf("\n%2ld  %+05d", i, memory[i]);
		else
			printf("  %+05d", memory[i]);
	}
	putchar(10);
}


/**
 * load_program - Receive and store in memort all the instructions of the program
 * @instruction_register: (int *) Word with the operand and the code
 * @operation_counter: (int *) Number where is the current instruction
 * @memory: (int *) RAM with the instructions to be done
 *
 */
void load_program(int *instruction_register, int *instruction_counter, int *memory)
{
	void initial_message(short int welend);

	initial_message(0);
	while (*instruction_register != -99999) {
		printf("%.2d ? ", *instruction_counter);
		scanf("%6d", &memory[*instruction_counter]);

		*instruction_register = memory[*instruction_counter];

		++(*instruction_counter);
	}
	initial_message(1);
}
