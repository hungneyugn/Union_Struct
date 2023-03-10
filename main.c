//Viet ham nhap vao uid và data, ket qua tra ve frame bao gom uid và data
#include<stdio.h>
#include<string.h>
typedef union 
{
    struct 
    {
        char uid[4];
        char data[8];
    }frame;
    char data_frame[13];
}frame_nfc;

void transmit(char* uid, char* data) 
{
    char result[12];
    frame_nfc nfc;                  //tao bien union nfc
    strcpy(nfc.frame.uid,uid);      // sao chep uid nhap vao, ghi vao uid cua nfc 
    strcpy(nfc.frame.data,data);    // sao chep data nhap vao, ghi vao data cua nfc
    strcpy(result,nfc.data_frame);  // sao chep gia tri cua data_frame của nfc, ghi vao bien ket qua 
    puts(result);                   // in ra ket qua
}
int main()
{
    printf("Data_frame: ");
    transmit((char*)"1001",(char*)"10110111");  // goi ham
    return 0;
}