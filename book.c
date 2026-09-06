#include <stdio.h>

struct book
{
    char book[20];
    int prize;
};

struct book purchase(void);
void sale(struct book b);

int main(void)
{
    struct book b[2];
    int i = 0;

    while (i < 2)
    {
        b[i] = purchase();
        i = i + 1;
    }

    i = 0;
    while (i < 2)
    {
        sale(b[i]);
        i = i + 1;
    }

    return 0;
}

struct book purchase(void)
{
    struct book bb;
    printf("book name: \n");
    scanf("%s", bb.book);
    printf("book prize: \n");
    scanf("%d", &bb.prize);
    return bb;
}

void sale(struct book bb)
{
    printf("%s\n", bb.book);
    printf("%d\n", bb.prize);
}
