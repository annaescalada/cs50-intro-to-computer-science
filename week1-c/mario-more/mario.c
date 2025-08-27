#include <cs50.h>
#include <stdio.h>

void print_row(int level, int max_level);
void print_consecutive_char(char el, int reps);

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");
    } while (height < 1 || height > 8);

    int current_level;

    if (height <= 0) return 0;

    for(int i = 0; i < height; i++)
    {
        current_level = i + 1;
        print_row(current_level, height);
        printf("\n");
    }
}

void print_row(int level, int max_level)
{
    print_consecutive_char(' ', max_level - level);
    print_consecutive_char('#', level);
    printf("  ");
    print_consecutive_char('#', level);
}

void print_consecutive_char(char el, int reps)
{
    for (int j = 0; j < reps; j++)
    {
        printf("%c", el);
    }
}
