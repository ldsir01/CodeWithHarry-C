#include<stdio.h>
#define PI 3.14

float Convert_C_into_F(int c)
{
    return (((9/5)*c) + 32);
}


int main()
{
    float Celcious_temprate,FerenhiteTemprate;
    printf("Enter Celcious Temperature ");
    scanf("%f",&Celcious_temprate);

    FerenhiteTemprate = Convert_C_into_F(Celcious_temprate);

    printf("FerenhiteTemprate is %f",FerenhiteTemprate);


}