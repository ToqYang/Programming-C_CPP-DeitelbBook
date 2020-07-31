#include <stdio.h>

#define STUDENTS 3
#define EXAMS 4


void minimum(const int grades[][EXAMS], size_t pupils, size_t tests);
void maximum(const int grades[][EXAMS], size_t pupils, size_t tests);
void average(const int setOfGrades[][EXAMS], size_t pupils, size_t tests);
void printArray(const int grades[][EXAMS], size_t pupils, size_t tests);



/**
 * main - (Arrays of Pointers to Functions)
 *         Make Menu
 *
 * Return: 0 if is success
 */
int main(void)
{
        // initialize student grades for three students (rows)
        const int studentGrades[STUDENTS][EXAMS] = {{77, 68, 86, 73},
                                                    {96, 87, 89, 78},
                                                    {70, 90, 86, 81}};

        void (*processGrades[4])(const int grades[][EXAMS], size_t pupils, size_t tests) = {printArray, minimum, maximum, average};

        int opt = 0;

        while (opt != 4) {
                puts("\n\nEnter a choice:");
                puts("0  Print the array of grades");
                puts("1  Find the minimum grade");
                puts("2  Find the maximum grade");
                puts("3  Print the average on all tests for each student");
                puts("4  End program");

                scanf("%d", &opt);

                if (opt != 4)
                        (*processGrades[opt])(studentGrades, STUDENTS, EXAMS);
        }

        return (0);
}



/**
 * minimum - Find the min
 * @grades: (const int [][]) Store the students
 * @pupils: (size_t) Size of the pupils
 * @tests: (size_t) Size of the tests
 *
*/
void minimum(const int grades[][EXAMS], size_t pupils, size_t tests)
{
        int lowGrade = 100; // initialize to highest possible grade

        // loop through rows of grades
        for (size_t i = 0; i < pupils; ++i) {
                // loop through columns of grades
                for (size_t j = 0; j < tests; ++j) {
                        if (grades[i][j] < lowGrade)
                                lowGrade = grades[i][j];
                }
        }
        printf("\nLowest grade: %d\n", lowGrade);
}


/**
 * maximum - Find the maximum grade
 * @grades: (const int [][]) Store the students
 * @pupils: (size_t) Size of the pupils
 * @tests: (size_t) Size of the tests
 *
 */
void maximum(const int grades[][EXAMS], size_t pupils, size_t tests)
{
        int highGrade = 0; // initialize to lowest possible grade
        // loop through rows of grades
        for (size_t i = 0; i < pupils; ++i) {
                // loop through columns of grades
                for (size_t j = 0; j < tests; ++j) {
                        if (grades[i][j] > highGrade)
                                highGrade = grades[i][j];
                }
        }
        printf("\nHighest grade: %d\n", highGrade);
}


/**
 * average - Determine the average grade for a particular student
 * @grades: (const int [][]) Store the students
 * @pupils: (size_t) Size of the pupils
 * @tests: (size_t) Size of the tests
 *
 */
void average(const int setOfGrades[][EXAMS], size_t pupils, size_t tests)
{
        int total = 0; // sum of test grades
        double avg = 0;
        // total all grades for one student
        for (size_t i = 0; i < pupils; ++i) {
                for (size_t j = 0; j < tests; ++j)
                        total += setOfGrades[i][j];
                avg = (double)total / tests; // average
                printf("The average grade for student %lu is %.2f\n", i, avg);
                total = 0;
        }
}


/**
 * printArray - Print the array
 * @grades: (const int [][]) Store the students
 * @pupils: (size_t) Size of the pupils
 * @tests: (size_t) Size of the tests
 *
 */
void printArray(const int grades[][EXAMS], size_t pupils, size_t tests)
{
        // output column heads
        printf("%s", "                 [0]  [1]  [2]  [3]");
        // output grades in tabular format
        for (size_t i = 0; i < pupils; ++i) {
                // output label for row
                printf("\nstudentGrades[%lu] ", i);
                // output grades for one student
                for (size_t j = 0; j < tests; ++j) {
                        printf("%-5d", grades[i][j]);
                }
        }
}
