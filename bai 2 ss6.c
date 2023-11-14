#include<stdio.h>
#include<stdlib.h>
int main(){
	int m, n, total, signal, accumulation, love, surplus, common_convention, common_multiple, exit, gcd, gcm,i;
	printf("Moi b  nhap 1 so bat ki:\n");
	scanf("%d%d", &m, &n);
	do{
		printf("****************CACULATOR********************\n");
		printf("1.Tong 2 so\n:");
		printf("2.Hieu 2 so\n:");
		printf("3.Tich 2 so\n:");
		printf("4.Thuong 2 so\n:");
		printf("5.So du trong phep chia 2 so\n:");
		printf("6.Uoc chung lon nhat\n:");
		printf("7.Boi chung nho nhat\n:");
		printf("8.Thoat\n:");
		printf("Lua chon cua ban:");
		int choice; scanf("%d", &choice);
		switch(choice){
			case 1:
			    total = m + n;
				printf("Tong 2 so la: %d+%d=%d/n:", m, n, total);
				break;
			case 2:
			    signal = m - n;
				printf("Hieu 2 so la: %d-%d=%d\n:", m, n, signal);
				break;
			case 3:
				accumulation = m*n;
				printf("Tich 2 so la: %d*%d=%d\n", m, n, accumulation);
				break;
			case 4:
				love = m/n;
				printf("Thuong 2 so la: %d/%d=%d\n", m, n, love);
				break;
			case 5:
				surplus = m%n;
				printf("So du trong phep chia 2 so la: %d/%d=%d\n", m, n, surplus);
				break;
			case 6:
				for (i =1; i<=m || i<=n;i++){
					if (m % i==0 && n % i==0);
					gcd = i;
				}
				printf("Uoc chung lon nhat cua 2 so la: %d", gcd);
				break;
			case 7: 
			exit ;
			default:
				printf("Vui long chon tu 1-7\n");
		}
	}while("Vui long cho tu 1 - 7\n");
}
