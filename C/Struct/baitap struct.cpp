#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SinhVien {
    char ten[50];
    int tuoi;
};

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    struct SinhVien *danhSach = (struct SinhVien *)malloc(n * sizeof(struct SinhVien));

    for (int i = 0; i < n; i++) {
        printf("Nhap ten cua sinh vien thu %d: ", i + 1);
        scanf("%s", danhSach[i].ten);
        printf("Nhap tuoi cua sinh vien thu %d: ", i + 1);
        scanf("%d", &danhSach[i].tuoi);
    }

    int chon;
    printf("\nMoi chon :\n");
    printf("1. Tim sinh vien co tuoi lon nhat\n");
    printf("2. Tim sinh vien co ten dai nhat\n");
    printf("3. In danh sach sinh vien co tuoi lon hon 20\n");
    printf("4. Tim kiem thong tin sinh vien theo tuoi\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &chon);

    switch(chon) {
        case 1: {
            int maxTuoiIndex = 0;
            for (int i = 1; i < n; i++) {
                if (danhSach[i].tuoi > danhSach[maxTuoiIndex].tuoi) {
                    maxTuoiIndex = i;
                }
            }
            printf("Sinh vien co tuoi lon nhat: %s\n", danhSach[maxTuoiIndex].ten);
            break;
        }
        case 2: {
            int maxTenIndex = 0;
            for (int i = 1; i < n; i++) {
                if (strlen(danhSach[i].ten) > strlen(danhSach[maxTenIndex].ten)) {
                    maxTenIndex = i;
                }
            }
            printf("Sinh vien co ten dai nhat: %s\n", danhSach[maxTenIndex].ten);
            break;
        }
        case 3: {
            printf("Danh sach sinh vien co tuoi lon hon 20:\n");
            for (int i = 0; i < n; i++) {
                if (danhSach[i].tuoi > 20) {
                    printf("%s\n", danhSach[i].ten);
                }
            }
            break;
        }
        case 4: {
            int tuoiCanTim;
            printf("Nhap tuoi can tim: ");
            scanf("%d", &tuoiCanTim);

            printf("Thong tin sinh vien co tuoi %d:\n", tuoiCanTim);
            for (int i = 0; i < n; i++) {
                if (danhSach[i].tuoi == tuoiCanTim) {
                    printf("Ten: %s\n", danhSach[i].ten);
                    printf("Tuoi: %d\n", danhSach[i].tuoi);
                }
            }
            break;
        }
        default:
            printf("Lua chon khong hop le.\n");
    }
    return 0;
}

