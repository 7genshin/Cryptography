#include <stdio.h>

int main() {
    char m = 'B';
    char sm = 'U';
    int a, b,i, in;
    int diff = (m - sm + 26) % 26;
    for (i = 1; i < 26; i++) 
	{
        if ((i * diff) % 26 == 1) 
		{
            a = i;
            break;
        }
    }
    b = (m - 'A' - a * (sm - 'A') + 26) % 26;

    for (in = 1; in < 26; in++) 
	{
        if ((a * inverseA) % 26 == 1) 
        {
            break;
        }
    }
    printf("Affine cipher key: a = %d, b = %d\n", a, b);
    printf("Inverse of a: %d\n", in);
    return 0;
}
