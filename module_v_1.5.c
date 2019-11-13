#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<unistd.h>
//#include<time.h>
//#include <sys/types.h>
//#include <sys/stat.h>

void date1();

void create_new_acc();
void fever();
int tp,et;
void call();
int random();

void create_new_dir();
void login();

int diab();

void welcome_screen();

void getlevel1_symptoms();

void getlevel2_symptoms();

void getlevel3_symptoms();



int analysis(int);

char display_message(int,int);

char s[10];

struct Details{
 char email[50];
 char psswd[10];
 char fname[50];
 char lname[50];
 int dd[2];
 int mm[2];
 int yy[4];
 
}ob;

void clrscr(){
	   system("@cls");
   }

void main(){
	create_new_dir();
	int temp;
   printf("Welcome");
   printf("\n1:Login\n");
   printf("\n2:new account\n");
  // printf("\n3:healthy facts\n");
  // printf("\n4:maintainence(not for users)\n");
   scanf("%d",&temp);
   clrscr();
   if(temp==1){
   	login();
   }
   else if(temp==2){
   	create_new_acc();
   }
}

void create_new_acc(){
	cod:
	printf("enter email  ");
	scanf("%s",&ob.email);
	
	//################################################searchpath
	char * fname="F:\\ishaan\\sys_data\\ids.txt";
	char * str=ob.email;
	FILE *fp;
	int line_num = 1;
	int find_result = 0;
	char temp[512];
	
	
	if((fp=fopen(fname, "r")) != NULL) {
		exit;
	}

	while(fgets(temp, 512, fp) != NULL) {
		if((strstr(temp, str)) != NULL) {
			printf("A match found on line: %d\n", line_num);
			printf("\n%s\n", temp);
			find_result++;
		}
		line_num++;
	}

	if(find_result == 0) {
		if(fp) {
		fclose(fp);
	}
		
	}
	else{int tl;
		clrscr();
		printf("\nemail exists\n");
		printf("\nenter 0 to login\n \nenter 1 to enter email again\n \nenter 2 to quit\n");
		scanf("%d",&tl);
		if(tl==0){
			clrscr();
			login();
		}
		else if(tl==1){
			clrscr();
		goto cod;
		}
		else if(tl==2){
			clrscr();
			exit(0);
		}
	}
	//Close the file if still open.
	if(fp) {
		fclose(fp);
	}
	
	printf("enter password  ");
	scanf("%s",&ob.psswd);
	printf("enter first name  ");
	scanf("%s",&ob.fname);
	printf("enter last name  ");
	scanf("%s",&ob.lname);
	void date1(){
	printf("enter dob  ");
	scanf("%d",&ob.dd);
	scanf("%d",&ob.mm);
	scanf("%d",&ob.yy);
	}
	date1();
	int c=*ob.dd;
	int b=*ob.mm;
	if(0<c && c<32 && 0<b && b<13){
	}
	else{
		printf("\ninvalid date formate\n");
		date1();
	}
		
	
	
	FILE * f;
   
   char* fill="F:\\ishaan\\sys_data\\ids.txt";
 
   f = fopen (fill,"a");
 
    fprintf (f,"\n");
	fprintf (f,ob.email);
    fprintf (f,":");
    fprintf(f,ob.psswd);
    
  
 
    
   fclose (f);
   
   
   //user file ........
   FILE * fpp;
   char a[20]="F:\\ishaan\\sys_data\\";
   
   
   
   strcat(a,ob.email); 
   strcat(a,".txt"); 
   //printf(" %s", a);
   char* filed=a;
 
   fpp = fopen (filed,"a");
 
    fprintf (fpp,"\n");
     
	
  
  fprintf (fpp,"email:");
       fprintf (fpp,ob.email);
    fprintf (fpp,"\n");
	fprintf(fpp,"first name:");
    fprintf(fpp,ob.fname);
	fprintf (fpp,"\n");
	fprintf(fpp,"last name:");
    fprintf(fpp,ob.lname);
	fprintf (fpp,"\n");
	fprintf(fpp,"dob:");
	int d=*ob.dd;
	int e=*ob.mm;
	int l=*ob.yy;
	//printf("%d",d);
    fprintf(fpp,"%d",d);
	fprintf(fpp,"/");
	fprintf(fpp,"%d",e);
	fprintf(fpp,"/");
	fprintf(fpp,"%d",l);
 
    
   fclose (fpp);
   printf("\nlogin\n");
   login();
}




void login(){
	
	char em[20]="";
	char mail[20]="";
	char psswd[20]="";
	
 	pubg:
 	printf("enter email  ");
 	scanf("%s",&em);
	strcpy(mail,em);
 	printf("enter password  ");
 	scanf("%s",&psswd);
	
	FILE *fp;
	int line_num = 1;
	int find_result = 0;
	char temp[512];
	
	char * fname="F:\\ishaan\\sys_data\\ids.txt";
	strcat(em,":");
	strcat(em,psswd);
	char * str=em;
	
	
	if((fp=fopen(fname, "r")) != NULL) {
		
		//exit;
	}

	while(fgets(temp, 512, fp) != NULL) {
		if((strstr(temp, str)) != NULL) {
			//printf("A match found on line: %d\n", line_num);
			//printf("\n%s\n", temp);
			find_result++;
		}
		line_num++;
	}

	if(find_result == 0) {
		printf("\nlogin fail\n");
		
		int t;
		cd:
		printf("\nenter 0 tologin again\n");
		printf("\nenter 1 to create new account\n \nenter 2 to quit\n");
		scanf("%d",&t);
		if(t==0){
			clrscr();
			goto pubg;
			
		}
		else if(t==1){
			clrscr();
			create_new_acc();
			
		}
		else if(t==2){
			clrscr();
			exit(0);
			
		}
		else{
			clrscr();
			printf("\nwrong entry\n");
			
			goto cd;
		}
			
	}
	else{
		printf("login success");
		
		fclose(fp);
	}

	fflush(stdout);
	fflush(stdin);
	
	
	FILE *fptr;
    
    char ch;
 
     char a[20]="F:\\ishaan\\sys_data\\";
   strcat(a,mail); 
   strcat(a,".txt");
   
    char * filename=a;
    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf ("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
	
		call();
		
	
	//Close the file if still open.
	
}







void fever(){
	 int a=0,a1=0,a2=0,a3=0,a4=0,a6=0,a7=0,a8=0,a9=0,a10=0,a11=0;
    double a5=0.0;
	printf(" \n\t\t\t*************** D I A G N O S I S   W I N D O W ***************   ");
	printf(" \n\t\t\t\t M E D I C A L   D I A G N O S I S   S O F T W A R E \n ");
    printf("If you have fever press 1 or 0 \n");
    printf("Do you have fever? \n");
    scanf("%d",&a);
    if(a==1)
     {
    	 a11=1;
    	 a6=1;

     }
     if(a==0)
     {
    	 a11=2;
    	 a6=0;
        exit(1);
     }
    printf("From how many days are you suffering from fever? \n");
    scanf("%d",&a1);
    printf("Frequency of fever in a day?\n");
    scanf("%d",&a2);
    printf("Do you have Itching or Rashes?\n");
    scanf("%d",&a3);
    if(a3>1)
    {
        printf("Enter valid input i.e., 1 or 0\n");
        scanf("%d",&a3);
    }
    printf("Do you have Stomach ache?\n");
    scanf("%d",&a4);
    if(a4>1)
    {
        printf("Enter valid input i.e., 1 or 0\n");
        scanf("%d",&a4);
    }
    printf("Enter your fever temperature in Fahrenheit\n");
    scanf("%d",&a5);
    printf("Do you have chilling fever?\n");
    scanf("%d",&a6);
    if(a6>1)
    {
        printf("Enter valid input i.e., 1 or 0\n");
        scanf("%d",&a6);
    }
    printf("Do you have headache?\n");
    scanf("%d",&a7);
    if(a7>1)
    {
        printf("Enter valid input i.e., 1 or 0\n");
        scanf("%d",&a7);
    }
    printf("Are you suffering from convulsions? \n");
    scanf("%d",&a8);
    if(a8>1)
    {
        printf("Enter valid input i.e., 1 or 0 \n");
        scanf("%d",&a8);
    }
    printf("Do you have Anaemia? \n");
    scanf("%d",&a9);
    if(a9>1)
    {
        printf("Enter valid input i.e., 1 or 0 \n");
        scanf("%d",&a9);
    }
    printf("Do you have anxiety? \n");
    scanf("%d",&a10);
    if(a10>1)
    {
        printf("Enter valid input i.e., 1 or 0 \n");
        scanf("%d",&a10);
    }
     if(a6==0 && a==1 )
     {
    	 printf("Chilling fever is type of fever so select fever as 1.");
     }
     if(a6==1 && a==0) {
         printf("This type of fever is not in our database refer to doctor.");
     }
     if(a5>=100.5 && a5<=102.1)
     {
    	 printf("You have low grade fever.");
     }
     if(a5>102.1 && a5<=104)
     {
    	 printf("You have moderate fever.");
     }
     if(a5>104 && a5<=106)
     {
         printf("You have high fever");
     }
     if(a5>106)
     {
    	 printf("You have hyperpyrexia");
     }
     if(a2>5)
     {
    	 printf("You are having continuous fever");
     }
     if(a2==2)
     {
    	 printf("You are having Double Quotidian fever");
     }
     if(a2==4)
     {
    	 printf("You are having Quartan fever");
     }
     switch(a11)
     {
     case 1 :
                if(a6==1 && a7==1 && a8==1 &&a9==1&&a10==1 && a2==4 && a1>=10 && a2>=4 && a3==1 && a4==1)
			    	  {
			    		  printf("You are having malaria due to Plasmodium malariae.\n");
	    			      printf("Conduct these test :\n");
	    			      printf("Blood smear");
			    	  }
			    	  if(a6==1 && a7==0 && a8==1 &&a9==1&& (a10==1||a10==0) && a3==1 && a4==1 && a2==1)
			    	  {
                        printf("You may have Dengue hemorraghic fever (DHF)\n");
                        printf("Conduct dengue test and then visit again\n");
			    	  }
			    	  if(a6==1 && a7==0 && a8==0 &&a9==1&&(a10==1||a10==0))
			    	  {
                        printf("Remit Tent fever.");
			    	  }


			    	  if(a6==1 && a7==0 && a8==0 &&a9==0&&(a10==1||a10==0) )
			    	  {
                        printf("You have a viral fever");
			    	  }
			    	  if(a6==1 && a7==1 && a8==0 &&a9==1&&(a10==1||a10==0))
			    	  {
                        printf("You are suffering from febrile convulsions fever.");
			    	  }
			    	  if(a6==1 && a7==1 && a8==0 &&a9==0&&(a10==1||a10==0))
			    	  {
                        printf("You may have brain fever.Consult doctor immidiately.");
			    	  }
			    	  if(a6==1 && a7==0 && a8==1 &&a9==0&&(a10==1||a10==0))
			    	  {
                        printf("You may have malaria.");
                        printf("Conduct malaria test and show the reports.");
			    	  }

			    	  if(a6==1 && a7==1 && a8==1 &&a9==0&&(a10==1||a10==0))
			    	  {
                        printf("You are having fever due to season change. \n");
                        printf("Take these medicines: \n");
                        printf("DOLO 600mg ");
                        printf("Becausul");
			    	  }
			    	  if(a6==1 && a7==0 && a8==1 &&a9==0&&a10==0)
			    	  {
                        printf("You may have Intermittent fever");
			    	  }

		      break;

     case 2:
        if(a6==0 && a7==0 && a8==1 && a9==0 && (a10==1||a10==0))
   	  {
   		  printf("you have low blood pressure");
          printf("Consume lots of water.");
          printf("Drink beetroot juice");
   	  }
   	  if(a6==0 && a7==0 && a8==1 &&a9==1&&(a10==1||a10==0))
   	  {
           printf("You may be suffering from Aplastic Anaemia.");
           printf("Please refer to doctor as soon as possible");
   	  }
   	  if(a6==0 && a7==0 && a8==0 &&a9==1 &&a10==1)
   	  {
           printf("There may be iron deficiency.");
           printf("please conduct the test of haemoglobin");
   	  }
   	  if(a6==0 && a7==1 && a8==0 &&a9==0 &&(a10==1||a10==0))
   	  {
           printf("You may have normal headache due to tension.Take rest.");
   	  }
   	  if(a6==0 && a7==1 && a8==1 &&a9==1&&a10==1)
   	  {
           printf("You may have felty syndrome.Consult a specialist.");
   	  }
   	  if(a6==0 && a7==1 && a8==1 &&a9==0&&a10==1)
   	  {
           printf("You are suffering from anxiety hypertension.");
   	  }
   	  if(a6==0 && a7==1 && a8==0 &&a9==1&&(a10==1||a10==0))
   	  {
           printf("Conduct haemoglobin test ");
   	  }

   	  if(a6==0 && a7==0 && a8==0 &&a9==1&&a10==0)
   	  {
           printf("You are suffering from anaemia");
   	  }
   	if(a6==0 && a7==1 && a8==1 &&a9==1&&a10==0)
 	  {
         printf("You may have anaemia.Take a saridon for headache");
 	  }
   	if(a6==0 && a7==1 && a8==1 &&a9==0&&a10==0)
 	  {
   		printf("You may have lot of stress.Take rest and free your mind");
 	  }
   	if(a6==0 && a7==0 && a8==1 &&a9==1&&a10==1)
 	  {
         printf("You may have nerve disorder.Please visit specialist");
 	  }
   	if(a6==0 && a7==0 && a8==0 &&a9==0&&a10==1)
 	  {
         printf("You may have little pressure on you.Not much to worry.");
 	  }
   	if(a6==0 && a7==0 && a8==0 &&a9==0&&a10==0)
 	  {
         printf("You are fine");
 	  }
   	  break;
		 default:
			 printf("You have entered wrong inputs other than 0 and 1.");


     }
	 
	 call();
}





void call(){
	printf("\nmenu\n");
	printf("\n1:fever detection tool\n");
	printf("\n2:diabetes detection tool\n");
	printf("\n3:quit\n");
		//printf("\n3:view your medical record\n");
		//printf("\n4:saved healthy facts\n");
		scanf("%d",&tp);
		if(tp==1){
			fflush(stdout);
	fflush(stdin);
	
			
	
		
		fever();
		
	
		
	
		}
		else if(tp==2){
			diab();
		}
		else if(tp==3){
			exit(0);
		}
}



void create_new_dir(){
	FILE * fp;
	
	
	char *NewDir = "F:\\ishaan";
 
      CreateDirectory(NewDir,NULL);
	  char *NewDir1 = "F:\\ishaan\\sys_data";
 
      CreateDirectory(NewDir1,NULL);
  
  char *fname = "F:\\ishaan\\sys_data\\ids.txt";
  if(access(fname,F_OK)!= -1){
  }
  else{
  
  fp=fopen(fname,"w");
  fclose(fp);
  }
  
 }
 
 



int diab(){
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
	  
	  call();

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

                   printf("THE PERSON MIGHT NOT BE DIABETIC\n");

                   //printf("PRESS ANY KEY TO QUIT.\n" );

                   exit(0);



               case -1:

                   printf("THE PERSON MAY BE DIABETIC \n");

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

               

                   printf("IT MIGHT PRIMARY DIABETES.\n");

                   printf("Proceed(Y/N)?\n");

                    fflush(stdin);

                   scanf("%c",&ch);

                   break;

               case -1: 

                   printf("IT MAY BE SECONDARY DIABETES\n");

                  // printf("PRESS ANY KEY TO QUIT\n");

                 break;

                   }

            break;

        case 3:

		switch(m)

         	{

               case 0: 

                printf(" IT MAY BE INSULIN DEPENDENT DIABETES\n");

                //printf("press any key to quit\n");



                break;

  

               case -1: 

                   printf("IT MIGHT BE NON INSULIN DEPENDENT DIABETES\n");

                  //printf("PRESS ANY  KEY TO QUIT .\n");

                 break;

           }

    }

    fflush(stdin);

    return (ch);

         

 }




