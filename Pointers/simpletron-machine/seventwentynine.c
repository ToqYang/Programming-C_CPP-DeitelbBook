#include "sml.h"


/**
 * main - (A Computer Simulator) "Simpletron Machine Language"
 *
 * Return: 0 if is success
 */
int main(void)
{
        double memory[SMEMORY], accumulator = 0.0;
        int instruction_counter = 0, instruction_register = 0;
        int operation_code = 0, terminated = 1, operand = 0;
        int instruction_str_count = 500;
        /* Put in y If You Want Look the dump memory */
        char debug = 'y';

        load_program(&instruction_register, &instruction_counter, memory);
	instruction_counter = 0;

        if (debug == 'y')
        {
                /* Dump Actual Instruction */
	        dump_program(&operation_code, memory, &operand,\
	        	&instruction_register, &instruction_counter,\
	        	&accumulator, &instruction_str_count);
        }

        while (terminated && terminated != -1) {
		/* Execute */
		terminated = exec_program(&operation_code, memory,\
					&operand, &instruction_register,\
					&instruction_counter, &accumulator,\
                                        &instruction_str_count);

                if (debug == 'y') {
                        /* Dump Actual Instruction */
	                dump_program(&operation_code, memory, &operand,\
	                	&instruction_register, &instruction_counter,\
	                	&accumulator, &instruction_str_count);
                }

                printf("Status Program: %d\n\n", terminated);
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
	if (welend == 0) {
		puts("*** Welcome to Simpletron! ***");
		puts("*** Please enter your program one instruction ***");
		puts("*** (or data word) at a time. I will type the ***");
		puts("*** location number and a question mark (?).  ***");
		puts("*** You then type the word for that location. ***");
		puts("*** Type the sentinel -99999 to stop entering ***");
		puts("*** your program. ***");
	} else if (welend) {
		puts("*** Program loading completed ***");
		puts("*** Program execution begins  ***");
	}
}

