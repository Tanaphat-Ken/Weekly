#include<stdio.h>
//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 2)
int main()
{
    int a,i=0,j=0;
    scanf("%d",&a);
    while (i<a)
    {
        while (j<a)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++,j=0;
    }
    return 0;
}