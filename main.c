#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi, i, array[999], index = 0, sonuc, ort;

    ort = 0;

    for (;;)
    {
        printf("sayi girin");
        scanf("%d", &sayi);

        if (sayi == -1)
        {
            break;
        }
        if (sayi > 0)
        {
            array[index] = sayi;
            index++;
        }
    }
    for (i = 0; i < index; i++)
    {
        ort += array[i];
    }
    sonuc = ort / index;
    printf("sonuc: %d", sonuc);

    return 0;
}
