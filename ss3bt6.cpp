#include<stdio.h>
int main(){
	float electricity_bill, x, y;
	printf("moi nhap vao so dien dau thang : ");
	scanf("%f",&x);
 	printf("moi nhap vao so dien cuoi thang : ");
	scanf("%f",&y);
	electricity_bill=y-x;
	 if(0<electricity_bill<=50){
 		printf("tien dien ma phai tra : %.2f (VND)",electricity_bill*10000);
	 }
	 else if(50<electricity_bill<=100){
	 	printf("tien dien ma phai tra : %.2f (VND)",50*10000+(electricity_bill-50)*15000);
	 }
	 else if(100<electricity_bill<=150){
	 	printf("tien dien ma phai tra : %.2f (VND)",50*10000+50*15000+(electricity_bill-100)*20000);
	 }
	 else if(150<electricity_bill<=200){
	 	printf("tien dien ma phai tra : %.2f (VND)",50*10000+50*15000+50*20000+(electricity_bill-150)*25000);
	 }
	 else if(electricity_bill>200){
	 	printf("tien dien ma phai tra : %.2f (VND)",50*10000+50*15000+50*20000+50*25000+(electricity_bill-200)*30000);
	 }
	 else{
	 	printf("khong hop le!!!");
	 }
	 return 0;
}
