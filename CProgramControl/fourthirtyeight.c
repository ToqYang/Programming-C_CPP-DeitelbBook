#include <stdio.h>


/**
 * main - (“The Twelve Days of Christmas” Song)
 *
 * Write a program that uses iteration and switch
 * statements to print the song “The Twelve Days of Christmas.”
 * One switch statement should be used to print the day
 * i.e., “first,” “second,” etc.). A separate switch statement should be used to
 * print the remainder of each verse.
 *
 * Return: 0 if is success
 */
int main(void)
{
        for (int song = 1; song <= 12; song++)
        {
                switch (song)
                {
                case 1:
                        puts("On the first day of Christmas\nmy true love \
                        sent to me:\nA Partridge in a Pear Tree\n");
                        break;

                case 2:
                        puts("On the second day of Christmas\nmy true love \
                        ent to me:\n2 Turtle Doves\nand a Partridge \
                        in a Pear Tree\n");
                        break;

                case 3:
                        puts("On the third day of Christmas\nmy true love \
                         sent to me:\n3 French Hens\n2 Turtle Doves\nand a\
                         Partridge in a Pear Tree\n");
                        break;

                case 4:
                        puts("On the fourth day of Christmas\nmy true love \
                        sent to me:\n4 Calling Birds\n3 French Hens\n2 Turtle \
                        Doves\nand a Partridge in a Pear Tree\n");
                        break;

                case 5:
                        puts("On the fifth day of Christmas\nmy true love \
                        sent to me:\n5Golden Rings\n4 Calling Birds\n3 French \
                        Hens\n2 Turtle Doves\nand a \
                        Partridge in a Pear Tree\n");
                        break;

                case 6:
                        puts("On the sixth day of Christmas\nmy true love \
                        sent to me:\n6 Geese a Laying\n5 Golden Rings\n4 \
                        Calling Birds\n3 French Hens\n2 Turtle Doves\nand a \
                        Partridge in a Pear Tree\n");
                        break;

                case 7:
                        puts("On the seventh day of Christmas\nmy true love \
                        sent to me:\n7 Swans a Swimming\n6 Geese a Laying\n5 \
                        Golden Rings\n4 Calling Birds\n3 French Hens\n2 Turtle \
                        Doves\nand a Partridge in a Pear Tree\n");
                        break;

                case 8:
                        puts("On the eighth day of Christmas\nmy true love\
                        sent to me:\n8 Maids a Milking\n7 Swans a Swimming\n6 \
                        Geese a Laying\n5 Golden Rings\n4 Calling Birds\n3 \
                        French Hens\n2 Turtle Doves\nand a \
                        Partridge in a Pear Tree\n");
                        break;

                case 9:
                        puts("On the ninth day of Christmas \nmy true love \
                        sent to me:\n9 Ladies Dancing\n8 Maids a \
                        Milking\n7wans a Swimming\n6 Geese a Laying\n5Golden \
                        Rings\n4 Calling Birds\n3French Hens\n2 Turtle \
                        Doves\nand a Partridge in a Pear Tree\n");
                        break;

                case 10:
                        puts("On the tenth day of Christmas\nmy true love \
                        sent to me:\n10 Lords a Leaping\n9 Ladies Dancing\n8 \
                        Maids a Milking\n7 Swans a Swimming\n6 Geese a \
                        Laying\n5 Golden Rings\n4 Calling Birds\n3 French \
                        Hens\n2 Turtle Doves\nand a \
                        Partridge in a Pear Tree\n");
                        break;

                case 11:
                        puts("On the eleventh day of Christmas\nmy true love \
                        sent to me:\n11 Pipers Piping\n10 Lords a Leaping\n9 \
                        Ladies Dancing\n8 Maids a Milking\n7 Swans a \
                        Swimming\n6 Geese a Laying\n5 Golden Rings\n4 Calling \
                        Birds\n3 French Hens\n2 Turtle Doves\nand a Partridge \
                        in a Pear Tree\n");
                        break;

                case 12:
                        puts("On the twelfth day of Christmas\nmy true love \
                        sent to me:\n12 Drummers Drumming\n11 Pipers \
                        Piping\n10 Lords a Leaping\n9 Ladies Dancing\n8 Maids \
                        a Milking\n7 Swans a Swimming\n6 Geese a Laying\n5 \
                        Golden Rings\n4 Calling Birds\n3 French Hens\n2 \
                        Turtle Doves\nand a Partridge in a Pear Tree\n");
                        break;
                }
        }
        return (0);
}
