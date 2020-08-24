#ifndef SIMPLETRON_MACHINE
#define SIMPLETRON_MACHINE

#include <stdio.h>
#include <math.h>

/* 10-11 */
#define READ 0xA
#define WRITE 0xB

/* 20-21 */
#define LOAD 0x14
#define STORE 0x15

/* 30-35 */
#define ADD 0x1E
#define SUBSTRACT 0x1F
#define DIVIDE 0x20
#define MULTIPLY 0x21
#define REMAINDER 0x22
#define EXPONENTIATION 0x23

/* 40-43 */
#define BRANCH 0x28
#define BRANCHNEG 0x29
#define BRANCHZERO 0x2A
#define HALT 0x2B

/* Characters */
#define NEWLINE 0x3C
#define READSTR 0x3D
#define WRITESTR 0x3E

/* 1000 */
#define SMEMORY 0x3E8

/* Function of help */
int verify_overflow(const double *acc);
void initial_message(short int welend);
void _pow(double *a, double *b);
int divide_to_zero(double const *num);
int cmp(double x, double y);

/* Functions to help Functions */
int new_instruction(double l, double r);
int len_num(double n);
int read_str(double *memor, const int *len, int *str_counter);
int write_str(double *memor, int *oper);

/* Status of the SIMPLETRON MACHINE */
void load_program(int *instruction_register, int *instruction_counter,
                  double *memory);

/* Execute the program */
int exec_program(int *operation_code, double *memory, int *operand,
                 int *instruction_register, int *instruction_counter, double *accumulator,
                 int *ins_str_count);

/* Show the debugging */
void dump_program(int *operation_code, double *memory, int *operand,
                  int *instruction_register, int *instruction_counter, double *accumulator,
                  int *ins_str_count);

#endif