#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void welcome_screen();
void getlevel1_symptoms();
void getlevel2_symptoms();
void getlevel3_symptoms();

int analysis(int);
char display_message(int,int);
char s[10];
int main()
{
	char ch,choice,cho;
	int n=1;float m;
	welcome_screen();

	 getlevel1_symptoms();
	 m=analysis(n);
	choice=display_message(n,m);
	choice=toupper(choice);
	if(choice=='Y')
     {
      ++n;
      getlevel2_symptoms();
      m=analysis(n);
      choice=display_message(n,m);
      choice=toupper(choice);
      if(choice=='Y')
      {
       ++n;
       getlevel3_symptoms();
       m=analysis(n);
       cho=display_message(n,m);
       cho=toupper(cho);
       if(cho=='Y')
       {
        ++n;
        getlevel3_symptoms();
        m=analysis(n);
        choice=display_message(n,m);
       }
      }
  }
     printf("%c",display_message(n,m));
     fflush(stdin);
}
void welcome_screen()
{
       printf("\t\t\t\t******************** W E L C O M E ********************" );
      printf(" \n\t\t\t\t M E D I C A L   D I A G N O S I S   S O F T W A R E \n ");
      int x;
      
    int age;
    float ht;
    int wt;
    char name[40];
    char sex;
    printf(" \n \tP E R S O N A L   I N F O R M A T I O N");
     printf("\n\tA G E   :");
     scanf("%d",&age);
     printf("\n\tN A M E :");
     scanf("%s",&name);
     printf("\n\tW E I G H T    :");
	 scanf("%d",&wt);
     printf("\n\tH E I G H T    :");
     scanf("%f",&ht);
     printf("\n\tS E X (M/F)    :");    
	 scanf("%d",&sex);
	 printf(" \n\t\t\t*************** D I A G N O S I S   W I N D O W ***************   ");
     printf("\n\n\n");
     printf(" \tLet's have a look at  symptoms.........");
     printf("\n\n\n\n\n\n ");
    
     
 }
     void getlevel1_symptoms()
     {
     	char str[10];
     	
     
     int i=0;
      fflush(stdin);
	 printf("\tAPPETITE (H(HIGH),/L(LOW),/N(NORMAL):") ;
   	 scanf("%c",&s[i]);
     i++;
      fflush(stdin);
     printf("\tFREQUENCY OF THIRST(H(HIGH),/L(LOW)/N(NORMAL):");
     scanf("%c",&s[i]);
     i++;
      fflush(stdin);
   printf("\tFREQUENCY OF URINATION(H(HIGH),/L(LOW),/N(NORMAL):");
    scanf("%c",&s[i]);
     i++;
      fflush(stdin);
     printf("\tVISION (I(IMPAIRMENT),/N(NORMAL)");
     scanf("%c",&s[i]);
     i++;
      fflush(stdin);
   printf("\tURINE SUGAR(P(PASSIVE)/A(ACTIVE);");
    scanf("%c",&s[i]);
     i++;
      fflush(stdin);
     printf("\tKETONUREA(P(PASSIVE)/A(ACTIVE)");
     scanf("%c",&s[i]);
     i++;
      fflush(stdin);
     printf("\tFASTING BLOOD SUGAR(H(HIGH)/L(LOW)/N(NOMAL)");
scanf("%c",&s[i]);
     i++;
      fflush(stdin);
     printf("\tR B S (H(HIGH)/L(LOW)/N(NORMAL)");
    scanf("%c",&s[i]);
     i++;
      fflush(stdin);
    printf("\tFAMILY HISTORY OF DIABETES(P(PASSIVE)/A(ACTIVE)");
    scanf("%c",&s[i]);
     i++;
      fflush(stdin);
     printf("\tOGTT(D/N)");
     scanf("%c",&s[i]);
      fflush(stdin);
      char *temp = strupr(s);
      strcpy(s,temp);
}
void getlevel2_symptoms()
    {
        int j=0;
        printf("PANCREATITIS(P/A)  :");
        scanf("%c",&s[j]);
    	 j++;
      fflush(stdin);
        printf("CARCINOMA(P/A)  :");
        scanf("%c",&s[j]);
    	 ++j;
      fflush(stdin);
        printf("CIRHHOSIS(P/A)     :");
        scanf("%c",&s[j]);
    	 ++j;
      fflush(stdin);
        printf(" HCTS  (H/L/N)     :");
        scanf("%c",&s[j]);
    	 ++j;
      fflush(stdin);
        printf("HEPATITIS(P/A)    :");
        scanf("%c",&s[j]);
    	 ++j;
      fflush(stdin);
        printf(" HORMONAL DISORDER(P/A):");
        scanf("%c",&s[j]);
    	 ++j;
      fflush(stdin);
        printf(" PANCREATECTOMY(P/A) :");
        scanf("%c",&s[j]);
    	
      fflush(stdin);
            return;
    }
void getlevel3_symptoms()
    {
         int k=0;
         printf(" AGE(young(Y)/Middle aged(M)/Elderly(E))");
         scanf("%c",&s[k]);
    	 k++;
      fflush(stdin);
         printf("BODY WEIGHT(normal(N)/Above normal(A)/Below normal(B)/>/obese)");
         scanf("%c",&s[k]);
    	 ++k;
      fflush(stdin);
         printf(" DURATION (weeks(W)/Months(M)/Years(Y))");
         scanf("%c",&s[k]);
    	 ++k;
      fflush(stdin);
         printf("KETONUREA(P/A)");
         scanf("%c",&s[k]);
    	 ++k;
      fflush(stdin);
         printf("AUTO ANTIBODIES(P/A)");
        scanf("%c",&s[k]);
    	 
      fflush(stdin);
         return;
     }
int analysis(int n)
   {
   	
    int i=0;
    int count=0;
    int result=0;
     switch(n)
	 {
     case 1:    if(s[9]=='D' )
            result=-1;
            else
               if(s[5]=='P'&& s[6]=='P' && s[7]=='H')
              result=-1;
               else
              {
              for(i=0;i<10;i++)
                {
                  if(s[i]=='H'||s[i]=='P'||s[i]=='D'||s[i]=='I')
                count++;
               }
                 if(count>5)
                result=-1;
              }
               break;
     case 2: if((s[0]=='P')||(s[1]=='P')||(s[2]=='P')||(s[3]=='H')||(s[4]=='P')||(s[5]=='P')||(s[6]=='P'))
             result=-1;
         else
             result=0;
             break;
     case 3: if((s[0]=='Y')&&(s[1]=='N')&&(s[2]=='W')&&(s[3]=='P')&&(s[4]=='P')||(s[0]=='Y')&&(s[1]=='B')&&(s[2]=='W')&&(s[3]=='P')&&(s[4]=='P')||
	 (s[0]=='Y')&&(s[1]=='N')&&(s[2]=='M')&&(s[3]=='P')&&(s[4]=='P')||
     (s[0]=='Y')&&(s[1]=='N')&&(s[2]=='Y')&&(s[3]=='P')&&(s[4]=='P'))

          result=0;
        else
           result=-1;
         break;
     default:break;
    }
       return(result);   
}
char display_message(int n,int m)
{
    char ch = 0;
    switch(n)
    {
       case 1:
       switch(m)
              {
			  

               case 0: 
                   printf("THE PERSON IS NOT DIABETIC\n");
                   printf("PRESS ANY KEY TO QUIT.\n" );
                   exit(0);

               case -1:
                   printf("THE PERSON IS DIABETIC \n");
                   printf("PROCEED (Y/N)  ?\n");
                    fflush(stdin);
                   scanf("%c",&ch);
                   break;
              }
          break;
        case 2:
            switch(m)
            {
               case 0: 
               
                   printf("IT IS PRIMARY DIABETES.\n");
                   printf("Proceed(Y/N)?\n");
                    fflush(stdin);
                   scanf("%c",&ch);
                   break;
               case -1: 
                   printf("IT IS SECONDARY DIABETES\n");
                   printf("PRESS ANY KEY TO QUIT\n");
                 break;
                   }
            break;
        case 3:
		switch(m)
         	{
               case 0: 
                printf(" IT IS INSULIN DEPENDENT DIABETES\n");
                printf("press any key to quit\n");

                break;
  
               case -1: 
                   printf("IT IS NON INSULIN DEPENDENT DIABETES\n");
                  printf("PRESS ANY  KEY TO QUIT .\n");
                 break;
           }
    }
    fflush(stdin);
    return (ch);
         
 }
