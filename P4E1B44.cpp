#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct p {
	char name[9];
	int id;
	int math;
	int phy;
	int eng;
	float avg;	
};
struct p stu[10];
int n;
void a(){
	system("cls");/*�M����e�e��*/
	do{
	printf("��J n�]5~10�^�����:");
	scanf("%d",&n);
	if(n>=5&&n<=10){
		break;
	}
	else{
		printf("���~�T��\n"); 
	}
	
}while(n<5||n>10);
system("cls");/*�M����e�e��*/
for(int i=0;i<n;i++){
	printf("��J��%d��ǥͩm�W:",i+1);
	scanf("%s",stu[i].name);
	system("cls");/*�M����e�e��*/
	do{
	printf("��J��%d��ǥ;Ǹ�:",i+1);
	scanf("%d",&stu[i].id);
	if(stu[i].id>=100000&&stu[i].id<=999999){
		break;
	}
	else{
		printf("���~�T��\n"); 
	}
	
}while(stu[i].id<100000||stu[i].id>999999);
	system("cls");/*�M����e�e��*/
		do{
	printf("��J��%d��ǥͼƾǦ��Z:",i+1);
	scanf("%d",&stu[i].math);
	if(stu[i].math>=0&&stu[i].math<=100){
		break;
	}
	else{
		printf("���~�T��\n"); 
	}
	
}while(stu[i].math<0||stu[i].math>100);
system("cls");/*�M����e�e��*/
		do{
	printf("��J��%d��ǥͪ��z���Z:",i+1);
	scanf("%d",&stu[i].phy);
	if(stu[i].phy>=0&&stu[i].phy<=100){
		break;
	}
	else{
		printf("���~�T��\n"); 
	}
}while(stu[i].phy<0||stu[i].phy>100);
system("cls");/*�M����e�e��*/
		do{
	printf("��J��%d��ǥͭ^�妨�Z:",i+1);
	scanf("%d",&stu[i].eng);
	if(stu[i].eng>=0&&stu[i].eng<=100){
		break;
	}
	else{
		printf("���~�T��\n"); 
	}
	
}while(stu[i].eng<0||stu[i].eng>100);
system("cls");/*�M����e�e��*/		
}
}
void b(){
        for(int i=0;i<n;i++){
             stu[i].avg=stu[i].math+stu[i].phy+stu[i].eng;
             printf("�m�W:%s�Ǹ�:%d�ƾ�:%d���z:%d�^��:%d����:%.1f",stu[i].name,stu[i].id,stu[i].math,stu[i].phy,stu[i].eng,stu[i].avg/3.0);
             printf("\n");
        }
        system("pause");
		system("cls");/*�M����e�e��*/ 	        
}
void c(){
	char inputName[9];
    printf("��J�ǥͩm�W:");
    scanf("%s", inputName);
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(stu[i].name, inputName) == 0) {
             stu[i].avg=stu[i].math+stu[i].phy+stu[i].eng;
             printf("�m�W:%s�Ǹ�:%d�ƾ�:%d���z:%d�^��:%d����:%.1f",stu[i].name,stu[i].id,stu[i].math,stu[i].phy,stu[i].eng,stu[i].avg/3.0);
            found = 1;
            break;
        }
    }
    if (found==0) {
        printf("�d�L���m�W�C\n");
        system("pause");
		system("cls");/*�M����e�e��*/ 
        
    }
    system("pause");
	system("cls");/*�M����e�e��*/ 
}


int main(void)
{
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("(                        )\n");
	printf("( ****     *     * * *   )\n");
	printf("( *       **     |     ) )\n");
	printf("( ****     *     | * *   )\n");
	printf("( *        *     |     ) )\n");
	printf("( ****    ***    * * *   )\n");
	printf("(                        )\n");
	printf("(     / |       / |      )\n");
	printf("(    /  |      /  |      )\n");
	printf("(   /_ _|_ _  /_ _|_ _   )\n");
	printf("(       |         |      )\n");
	printf("(                        )\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("        /_\\__/_\\   \n");
	printf("       /        \\   \n");
	printf("      (  �����v  )   \n");
	printf("       \\________/  �s \n");
	printf("       /        \\ / / \n");
	printf("      ( �{�]�@�~ )/ /  \n");
	printf("       \\_________/_/  \n");/*�H�W�O�ӤH����e��*/ 
	system("pause");/*�����e�e��*/ 
	system("cls");/*�M����e�e��*/ 
  int password,k=0;
  do{
  printf("��J�K�X:");
  scanf("%d",&password);
  k++;
  if(password==2025)
  break;
  if(k<=2)
  printf("�ٳѾl%d��\n",(3-k));
  if(k==3){
  printf("���~�T�������J�F");
  return 0;}
  }while(k<3);
  system("cls");/*�M����e�e��*/ 
  for(;;){
    printf("$$$$$$$$$$$$$$[Grade System]$$$$$$$$$$$$$$\n");
	printf("(                                        )\n");
	printf("(      a. Enter student grades           )\n");
	printf("(                                        )\n");
	printf("(      b. Display student grades         )\n");
	printf("(                                        )\n");
	printf("(      c. Search for student grades      )\n");
	printf("(                                        )\n");
	printf("(      d. Grade ranking                  )\n");
	printf("(                                        )\n");
	printf("(      e. Exit system                    )\n");
	printf("(                                        )\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	char m;
	printf("�п�J�ӭ^��r��:");
	scanf(" %c",&m);
	if(m=='a'||m=='A'){
    system("cls");/*�M����e�e��*/ 
     a();
}
	if(m=='b'||m=='B'){
    system("cls");/*�M����e�e��*/ 
     b();
}
if(m=='c'||m=='C'){
    system("cls");/*�M����e�e��*/ 
     c();
}
}
}
