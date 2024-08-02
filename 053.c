//C PROGRAM TO ACCEPT MARKS OF C,CPP,JAVA AND CALCULATE TOTAL,AVERAGE,CLASS ONLY IF THE STUDENT PASSES IN ALL THE 3 SUBJECTS DISPLAY THE SUBJECT IN WHICH HE IS FAILED AND MESSAGE AS “NO GRADE”
#include <stdio.h>
 main() 
 { int c, cpp, java, mark, tot;
    float avg;
  
  printf("Enter the C marks: ");
    scanf("%d", &c);

   printf("Enter the CPP marks: ");
    scanf("%d", &cpp);

    printf("Enter the JAVA marks: ");
    scanf("%d", &java);

   printf("Enter the pass marks: ");
    scanf("%d", &mark);

    tot = c + cpp + java;
    avg = tot / 3.0;

    printf("Total is %d", tot);
    printf("\nAverage is %.2f", avg);

    if (c < mark && cpp >= mark && java >= mark) 
        {
        printf("\nHe failed in C");
        printf("\nNo grade");
        }
      else
          if (c >= mark && cpp < mark && java >= mark) 
            {
             printf("\nHe failed in CPP");
             printf("\nNo grade");
            }
             else  
                 if (c >= mark && cpp >= mark && java < mark) 
                 {
                  printf("\nHe failed in JAVA");
                  printf("\nNo grade");
                 }
                    else 
                        if (c < mark && cpp < mark && java >= mark) 
                        {
                          printf("\nHe failed in C and CPP");
                          printf("\nNo grade");
                        } 
                          else 
                               if (c < mark && cpp >= mark && java < mark) 
                                {
                                printf("\nHe failed in C and JAVA");
                                printf("\nNo grade");
                                } 
                                  else 
                                      if (c >= mark && cpp < mark && java < mark) 
                                      {
                                       printf("\nHe failed in CPP and JAVA");
                                       printf("\nNo grade");
                                      }
                                        else 
                                            if (c < mark && cpp < mark && java < mark) 
                                            {
                                            printf("\nHe failed in all subjects");
                                            printf("\nNo grade");
                                            }
                                               else
                                                {
                                                    printf("\nHe passed in all");
                                                }
    
}

