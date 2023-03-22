#include "sml.h"


/**
 * exec_program - Execute the program previously loaded
 * @operation_code: (int *) Left word, Operation currently performed
 * @memory: (int *) RAM with the instructions to be done
 * @operand: (int *) Right word, Store where it's going to be perfomed the operation
 * @instruction_register: (int *) Word with the operand and the code
 * @operation_counter: (int *) Number where is the current instruction
 * @accumulator: (int *) Temporal space where is store a result
 *
 * Return: (int) 1: Runtime program, 0: Finished program, -1: Happened a bug
 */
int exec_program(int *operation_code, double *memory, int *operand,\
	int *instruction_register, int *instruction_counter,\
        double *accumulator, int *ins_str_count)
{
        int pstatus = 1;
        *instruction_register = memory[*instruction_counter];
	*operation_code = *instruction_register / 100;
	*operand = *instruction_register % 100;

	// Sanitize operation_code and operand pass hexadecimal
	// Function to convert

	switch (*operation_code)
	{
	case READ:
		puts("------------------------------------");
		printf("INPUT: ");
		scanf("%lf", &(memory[*operand]));
		puts("------------------------------------");

		++(*instruction_counter);
		break;
	case WRITE:
		puts("------------------------------------");
		printf("\nOUTPUT: %.0lf\n\n", memory[*operand]);
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

		pstatus = verify_overflow(accumulator);

		++(*instruction_counter);
		break;
	case SUBSTRACT:
		*accumulator -= memory[*operand];

		pstatus = verify_overflow(accumulator);

		++(*instruction_counter);
		break;
	case MULTIPLY:
		*accumulator *= memory[*operand];

		pstatus = verify_overflow(accumulator);

		++(*instruction_counter);
		break;
	case DIVIDE:
		if (divide_to_zero(&(memory[*operand]))) {
			pstatus = -1;
		} else {
			*accumulator /= memory[*operand];
			pstatus = verify_overflow(accumulator);
		}

		++(*instruction_counter);
		break;
	case REMAINDER:
		if (divide_to_zero(&(memory[*operand]))) {
			pstatus = -1;
		} else {
			*accumulator = fmod(*accumulator, memory[*operand]);
			pstatus = verify_overflow(accumulator);
		}

		++(*instruction_counter);
		break;
	case EXPONENTIATION:
		_pow(accumulator, &(memory[*operand]));
		pstatus = verify_overflow(accumulator);

		++(*instruction_counter);
		break;
	case READSTR:
		/* ONLY ALLOW 700-1000 TO STIRNGS */
                pstatus = read_str(memory, operand, ins_str_count);

                ++(*instruction_counter);
		break;
        case WRITESTR:
                pstatus = write_str(memory, operand);

                ++(*instruction_counter);
                break;
        case BRANCH:
                *instruction_counter = *operand;

		break;
	case BRANCHNEG:
		if ((*accumulator) < 0)
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
	case NEWLINE:
		putchar(10);

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
void dump_program(int *operation_code, double *memory, int *operand,\
	int *instruction_register, int *instruction_counter,\
        double *accumulator, int *ins_str_count)
{

	puts("\nREGISTERS:");
	printf("accumulator\t\t%+05.0lf\n", *accumulator);
	printf("InstructionCounter\t   %02d\n", *instruction_counter);
        printf("InstructionCounter\t+%d\n", *ins_str_count);
	printf("InstructionRegister\t%+05d\n", *instruction_register);
	printf("operationCode\t\t   %02d\n", *operation_code);
	printf("operand\t\t\t%+05d\n\n", *operand);

	puts("MEMORY:");
	printf("%9s %7s %7s %7s %7s %7s %7s %7s %7s %7s",
	       "0", "1", "2", "3", "4", "5", "6", "7", "8", "9");

	for (size_t i = 0; i < SMEMORY; ++i) {
		if (i % 10 == 0)
			printf("\n%4ld  %+05.0lf", i, memory[i]);
		else
			printf("  %+06.0lf", memory[i]);
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
void load_program(int *instruction_register, int *instruction_counter,
                  double *memory, char *namefile)
{
        unsigned int left = 0, right = 0;
        FILE *fp = fopen(namefile, "r");

        initial_message(0, fp);
        while (*instruction_register != 9999)
        {
                if (fp) {
                        printf("%.2d ? ", *instruction_counter);
                        fscanf(fp, "%2X", &left);
                        fscanf(fp, "%2X", &right);

                } else {
                        printf("%.2d ? ", *instruction_counter);
                        scanf("%2X", &left);
                        printf("%.2d ? ", *instruction_counter);
                        scanf("%2X", &right);
                }
                memory[*instruction_counter] = new_instruction(left, right);

                *instruction_register = memory[*instruction_counter];
                printf("%d\n", *instruction_register);

                ++(*instruction_counter);
        }
        initial_message(1, fp);
}