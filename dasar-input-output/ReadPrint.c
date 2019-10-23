#include <stdio.h>

int main()
{
    // char * untuk memuat kata di bahasa pemrograman C
    char *nama;
    int tahunLahir;
    float tinggiBadan;
    char butaWarnaOption;
    

    printf("Nama Anda: ");
    // Input String (kata)
    scanf("%s", nama);
    
    printf("Tahun Lahir: ");
    // Input Bilangan bulat desimal
    scanf("%d", &tahunLahir);

    printf("Tinggi Badan (cm): ");
    // Input Bilangan real (mengandung nilai desimal pecahan)
    scanf("%f", &tinggiBadan);

    printf("Buta Warna (y/n): ");
    // Input karakter tunggal
    scanf("%s", &butaWarnaOption);

    printf("%s lahir pada tahun %d, sekarang memiliki badan setinggi %f.\n", nama, tahunLahir, tinggiBadan);
    printf("Ketika ditanya mengenai buta warna, ia menjawab %c\n", butaWarnaOption);
    return 0;
}

// ## Output yang diinginkan
//    Nama Anda: Bondan
//    Tahun Lahir: 2000
//    Tinggi Badan (cm): 172
//    Buta Warna (y/n): n
//    Bondan lahir pada tahun 2000, sekarang memiliki badan setinggi 172.000000.
//    Ketika ditanya mengenai buta warna, ia menjawab n