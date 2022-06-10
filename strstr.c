#include<stdio.h>
 
int main()
{
    char s1[100], s2[10];
    int count1 = 0, count2 = 0, i, j, flag;
 
    printf("Enter first string:");
    gets(s1);
    printf("Enter second string:");
    gets(s2);
    while (s1[count1] != '\0')
        count1++;
    while (s2[count2] != '\0')
        count2++;
    for (i = 0; i <= count1 - count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            flag = 1;
            if (s1[j] != s2[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("s2 is present in s1");
    else
        printf("s2 is not present in s1");
 
    return 0;
}
