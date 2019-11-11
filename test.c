#include <stdio.h>
#include<windows.h>
void create_new_acc();
//void create_new_dir();
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
	//create_new_dir();
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
}




void login(){
	char * fname="F:\\ishaan\\sys_data\\ids.txt";
	char em[20]="";
	char psswd[20]="";
	
 	pubg:
 	printf("enter email");
 	scanf("%s",&em);
 	printf("enter password");
 	scanf("%s",&psswd);
	strcat(em,":");
	strcat(em,psswd);
	char * str=em;
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
	}int tp;
		printf("\n1:prediction tool\n");
		printf("\n2:view your medical record\n");
		printf("\n3:saved healthy facts\n");
		scanf("%d",&tp);
	
	//Close the file if still open.
	
}
}






/*void create_new_dir(){
	FILE * fp;
  char *fnam = "F:/ishaan/sys_data";
  char *fname = "F:\\ishaan\\sys_data\\ids.txt";
  CreateDirectory(fnam,NULL);
  fp=fopen(fname,"w");
  fclose(fp);
  
 }*/