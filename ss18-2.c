#include <stdio.h>
#include<string.h>

int main() {
	struct SinhVien {
    	int id;
		char fullName[100];
		int age;
		char Iphone[20];
    };
    
    struct SinhVien sv2;

    printf("Moi ban nhap thong tin cho sv2: \n");
    printf("-ID sinh vien : ");
    scanf("%d", &sv2.id);
    
    fflush(stdin);
    printf("-Ho va ten : ");
    fgets(sv2.fullName,sizeof(sv2.fullName),stdin);
    
    printf("-Tuoi : ");
    scanf("%d", &sv2.age);
    
    fflush(stdin);
    printf("-Nhap SDT : ");
    fgets(sv2.Iphone,sizeof(sv2.Iphone),stdin);
    
		// truy xuat 
	printf("\n");
	printf("In thong tin sinh vien:\n");
	printf(" - %d  \n", sv2.id);
	printf("  - %s  ", sv2.fullName);
	printf(" - %d  \n", sv2.age);
	printf(" - %s  \n", sv2.Iphone); 

    return 0;
}
