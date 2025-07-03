#include<stdio.h>
struct student
{
    int sno;
    char sname[20];
    int eng,hindi;
};
int main()
{
    struct student s1={1,"roy",45,30};
    struct student s2={2,"joy",55,35};
    struct student s3={3,"loy",22,70}; 
    int total1,total2,total3;

    total1=s1.eng+s1.hindi;
    total2=s2.eng+s2.hindi;
    total3=s3.eng+s3.hindi;
    

    if(total1>total2 && total1>total3)
    {
        printf("\nstudent1 got highest marks");
    }
    else if(total2>total1 && total2>total3)
    {
        printf("\nstudent2 is got highest marks");
    }
    else if(total3>total1 && total3>total2)
    {
        printf("\nstudent3 is got highest marks");
    }  
}