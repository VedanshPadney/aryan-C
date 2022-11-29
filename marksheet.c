/*

                percentage :
                
                 1) marks obtained / total marks * 100
                 2) total marks / toal subjects


                200/300 * 100 



                Percentage >= 90% : Grade A
                Percentage >= 80% : Grade B
                Percentage >= 70% : Grade C
                Percentage >= 60% : Grade D
                Percentage >= 40% : Grade E
                Percentage < 40% : Grade F



    50
    60
    90
    ----
    200

    

                100
                100
                100
        -----------------
                300  

*/
#include<stdio.h>
void main(){

        float english,hindi,maths,sum,per;
        printf("Enter marks for english,hindi and maths");
        scanf("%f%f%f",&english,&hindi,&maths);


        sum = english+hindi+maths;
        // printf("sum = %.2f",sum);
        per = sum / 300 * 100;
       
        
        if(per>=90){

                 printf("Percentage  =  %.2f",per);
                 printf("\nGrade = A");


        }else if(per>=80){

                 printf("Percentage  =  %.2f",per);
                 printf("\nGrade = B");


        }else if(per>=70){

                 printf("Percentage  =  %.2f",per);
                 printf("\nGrade = C");


        }else if(per>=60){

                 printf("Percentage  =  %.2f",per);
                 printf("\nGrade = D");


        }else if(per>=40){

                 printf("Percentage  =  %.2f",per);
                 printf("\nGrade = E");


        }else {

                 printf("Sorry You are Fail better luck next time!");


        }


}