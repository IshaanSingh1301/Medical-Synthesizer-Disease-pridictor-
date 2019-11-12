#include <stdio.h>
#include<windows.h>
#include<unistd.h>
void create_new_acc();
void fever();
int tp,et;
void call();

void create_new_dir();
void login();

struct Details{
 char email[50];
 char psswd[10];
 char name[50];
 char dob[10];
 
}ob;

void clrscr(){
	   system("@cls||clear");
   }

void main(){
	create_new_dir();
	int temp;
   printf("Welcome");
   printf("\n1:Login\n");
   printf("\n2:new account\n");
   printf("\n3:healthy facts\n");
   printf("\n3:maintainence(not for users)\n");
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
	printf("enter email");
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
	
	printf("enter password");
	scanf("%s",&ob.psswd);
	printf("enter name");
	scanf("%s",&ob.name);
	printf("enter dob");
	scanf("%s",&ob.dob);
	
	
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
       fprintf (fpp,ob.email);
    fprintf (fpp,":");
    fprintf(fpp,ob.psswd);
  
 
    
   fclose (fpp);
   printf("\nlogin\n");
   login();
}




void login(){
	
	char em[20]="";
	char psswd[20]="";
	
 	pubg:
 	printf("enter email");
 	scanf("%s",&em);
 	printf("enter password");
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
			printf("A match found on line: %d\n", line_num);
			printf("\n%s\n", temp);
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
		if(fp) {
		fclose(fp);
	}
	fflush(stdout);
	fflush(stdin);
	
		call();
		
	
	//Close the file if still open.
	
}
}






void fever(){
	 int a=0,a1=0,a2=0,a3=0,a4=0,a6=0,a7=0,a8=0,a9=0,a10=0,a11=0;
    double a5=0.0;
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
			    		  printf("You are having malaria due to Plasmodium malariae.");
	    			      printf("Conduct these test :");
	    			      printf("Blood smear");
			    	  }
			    	  if(a6==1 && a7==0 && a8==1 &&a9==1&& (a10==1||a10==0) && a3==1 && a4==1 && a2==1)
			    	  {
                        printf("You may have Dengue hemorraghic fever (DHF)");
                        printf("Conduct dengue test and then visit again");
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
}





void call(){
	
	printf("\n1:fever detection tool\n");
		printf("\n2:view your medical record\n");
		printf("\n3:saved healthy facts\n");
		scanf("%d",&tp);
		if(tp==1){
			fflush(stdout);
	fflush(stdin);
	
			
	
		
		fever();
		
	
		
	
		}
}



void create_new_dir(){
	FILE * fp;
  char *fnam = "F:/ishaan/sys_data";
  char *fname = "F:\\ishaan\\sys_data\\ids.txt";
  if(access(fname,F_OK)!= -1){
  }
  else{
  CreateDirectory(fnam,NULL);
  fp=fopen(fname,"w");
  fclose(fp);
  }
  
 }