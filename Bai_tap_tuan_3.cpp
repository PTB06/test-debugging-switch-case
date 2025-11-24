#include <stdio.h>
int main() {
	int c;
	scanf_s("%d", &c);	
	switch (c) {
	    case 1:printf("Cau truc du lieu & giai thuat"); break;
		case 2:printf("Lap trinh C & C++"); break;
		case 3:printf("Ma lop 163082"); break;
		case 4:printf("Chuc mung nam moi"); break;		
		default:printf("Khong co gi de in"); break;
	}
	return 0;
}
