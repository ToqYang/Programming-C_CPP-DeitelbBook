#include <stdio.h>

void towerHanoi(int n, int peg_Ini, int peg_moved, int peg_tmp);

/**
 * main - Enter to resolve the game Towers of Hanoi
 * Return: 0 If is success
 */
int main(void)
{
	/* Disks: 4
	 * Towers:
	 * 1: Initial
	 * 2: Destine
	 * 3: Temporal
	 */
	towerHanoi(3, 1, 3, 2);

	return (0);
}

/**
 * towerHanoi - Print the resolution through recursion of the problem
 * of the hanoi tower.
 * @n: Number of disks initially
 * @peg_Ini: Tower initially where is the disks
 * @peg_Moved: Tower to leave the disks
 * @peg_Tmp: Tower temporal to move the disks
 */
void towerHanoi(int n, int peg_Ini, int peg_Moved, int peg_Tmp)
{
	/**
	 * When the disks == 1
	 * Move initial to last position
	 */
	if (n == 1)
	{
		printf("%d -> %d\n", peg_Ini, peg_Moved);
		return;
	}
	/* Use second position how temporal to carry to the destine */
	towerHanoi(n - 1, peg_Ini, peg_Tmp, peg_Moved);
	printf("%d -> %d\n", peg_Ini, peg_Moved);

	/* Use posiion initial how tmp */
	towerHanoi(n - 1, peg_Tmp, peg_Moved, peg_Ini);
}
