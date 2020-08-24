# :book: Simpletron Machine Language

## Objectives

- Understand the behavior of a SML
- Make a software-based simulation to create a software model
- Use hexadecimal in C
- Know the ASCII
- Un

## Prerequisites

- Editors: vi, vim, emacs, VSCode, Atom
- Kernel Style
- Pointers
- How RAM, CPU works
- Understand concept of tokens-words, registers, accumulator
- Debugging

## Compile

- First version:<br>
  `gcc -Wall -Wextra -Werror -pedantic seventwentyeight.c -o SML`

- Last Version:<br>
  `gcc -Wall -Wextra -Werror -pedantic helps_func.c elevenseventeen.c simpletron_func.c helps_func_two.c -lm -o SML`

## Operation Codes

0. The SML contain 1000 Address

   1. 0-499 Normal Instructions
   1. 500-999 String Storing

1. Decimal in exercise **seventwentyeight.c**
2. Hexadecimal **seventwentynine.c**

| Decimal | Hexadecimal | Description        |
| ------- | ----------- | ------------------ |
| 10      | 0xA         | **READ**           |
| 11      | 0xB         | **WRITE**          |
| 20      | 0x14        | **LOAD**           |
| 21      | 0x15        | **STORE**          |
| 30      | 0x1E        | **ADD**            |
| 31      | 0x1F        | **SUBSTRACT**      |
| 32      | 0x20        | **DIVIDE**         |
| 33      | 0x21        | **MULTIPLY**       |
| 34      | 0x22        | **REMAINDER**      |
| 35      | 0x23        | **EXPONENTIATION** |
| 40      | 0x28        | **BRANCH**         |
| 41      | 0x29        | **BRANCHNEG**      |
| 42      | 0x2A        | **BRANCHZERO**     |
| 43      | 0x2B        | **HALT**           |
| 60      | 0x3C        | **NEWLINE**        |
| 61      | 0x3D        | **READSTR**        |
| 62      | 0x3E        | **WRITESTR**       |

### Instructions Of Use

1. Give instruction
2. Give Memory or Nothing in case of:

- (BRANCH, BRANCHNEG, BRANCHZERO, HALT, NEWLINE, INPUT VARIABLES)

3. The variables put at the end of the instructions how +0000 or hexa 0 0

### Example

**seventwentyeight.c**

```
00: +1009
01: +1010
02: +2009
03: +3110
04: +4107
05: +1109
06: +4300
07: +1110
08: +4300
09: -99999 Sentinel Stop
```

**seventwentynine.c**

```
- The instructions are divided in two:
  00: Left Half Word 63
  00: Right Half Word 63 = 9999 Sentinel Value
```

**programs/**

```
Look example in a folder
```

## Versioning

For my learning of about Low Level Programming.

## Authors

- Santiago Yanguas

## Files

| Files                  | Description                               |
| ---------------------- | ----------------------------------------- |
| **helps_func.c**       | Help functions to support functionalities |
| **helps_func_two.c**   | Help functions to SML                     |
| **seventwentyeight.c** | First version                             |
| **seventwentynine.c**  | Version Improved                          |
| **simpletron_func.c**  | Functions to Simpletron Machine Language  |
| **sml.h**              | Prototypes functions                      |
| **programs/**          | Programs of example in Hexadecimal        |
