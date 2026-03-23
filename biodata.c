#include <stdio.h>
#include <string.h>

int main() {
    char nama[50];
    int umur;
    char kota[50];
    char hobi[50];

    printf("=== INPUT BIODATA ===\n");
    printf("Nama: ");
    fgets(nama, 50, stdin);
    nama[strcspn(nama, "\n")] = 0;
    printf("Umur: ");
    scanf("%d", &umur);
    getchar();
    printf("Kota: ");
    fgets(kota, 50, stdin);
    kota[strcspn(kota, "\n")] = 0;
    printf("Hobi: ");
    fgets(hobi, 50, stdin);
    hobi[strcspn(hobi, "\n")] = 0;

    printf("\n=== BIODATA KAMU ===\n");
    printf("Nama  : %s\n", nama);
    printf("Umur  : %d tahun\n", umur);
    printf("Kota  : %s\n", kota);
    printf("Hobi  : %s\n", hobi);

    return 0; 
}