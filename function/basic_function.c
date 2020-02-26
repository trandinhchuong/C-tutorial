/*

void ten_ham()
{

cac dong lenh

}

*/


#include<stdio.h>

void tin_dien_tich();
void main( )
{
tin_dien_tich();


}


void tin_dien_tich()
{
int dai;
int rong;

printf("nhap chieu dai: ");
scanf("%d",&dai);

printf("nhap chieu rong: ");
scanf("%d",&rong);

printf("dien tich la: %d x %d = %f\n", dai , rong, (float)(dai*rong));
}



