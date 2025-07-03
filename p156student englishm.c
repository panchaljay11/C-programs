#include<stdio.h>
struct student
 {
   int student_id;
   char student_name[20];
   int english_mark,hindi_mark;
   
 };
 main()
 {
    struct student s1,s2,s3;

    printf("\nenter 1st studnet id =>");
    scanf("%d",&s1.student_id);
    fflush(stdin);
    printf("\nenter 1st student name=>");
    gets(s1.student_name);
    printf("\nenter 1st student english mark=>");
    scanf("%d",&s1.english_mark);
     printf("\nenter 1st student hindi mark=>");
    scanf("%d",&s1.hindi_mark);

    printf("\nenter 2nd studnet id =>");
    scanf("%d",&s2.student_id);
    fflush(stdin);
    printf("\nenter 2nd student name=>");
    gets(s2.student_name);
    printf("\nenter 2nd student english mark=>");
    scanf("%d",&s2.english_mark);
     printf("\nenter 2nd student hindi mark=>");
    scanf("%d",&s2.hindi_mark);

    printf("\nenter 3rd studnet id =>");
    scanf("%d",&s3.student_id);
    fflush(stdin);
    printf("\nenter 3rd student name=>");
    gets(s3.student_name);
    printf("\nenter 3rd student english mark=>");
    scanf("%d",&s3.english_mark);
    printf("\nenter 1st student hindi mark=>");
    scanf("%d",&s3.hindi_mark);
 
    printf("\n1st student id = %d studnet name = %s student english marks = %d hindi marks = %d",s1.student_id,s1.student_name,s1.english_mark,s1.hindi_mark);
    printf("\n2nd student id = %d student name = %s student english marks = %d hindi marks = %d",s2.student_id,s2.student_name,s2.english_mark,s2.hindi_mark);
    printf("\n3rd student id = %d student name = %s studnet english marks = %d hindi marks = %d",s3.student_id,s3.student_name,s3.english_mark,s3.hindi_mark);

} 