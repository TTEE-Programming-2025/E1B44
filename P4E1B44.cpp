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
	system("cls");/*清除當前畫面*/
	do{
	printf("輸入 n（5~10）的整數:");
	scanf("%d",&n);
	if(n>=5&&n<=10){
		break;
	}
	else{
		printf("錯誤訊息\n"); 
	}
	
}while(n<5||n>10);
system("cls");/*清除當前畫面*/
for(int i=0;i<n;i++){
	printf("輸入第%d位學生姓名:",i+1);
	scanf("%s",stu[i].name);
	system("cls");/*清除當前畫面*/
	do{
	printf("輸入第%d位學生學號:",i+1);
	scanf("%d",&stu[i].id);
	if(stu[i].id>=100000&&stu[i].id<=999999){
		break;
	}
	else{
		printf("錯誤訊息\n"); 
	}
	
}while(stu[i].id<100000||stu[i].id>999999);
	system("cls");/*清除當前畫面*/
		do{
	printf("輸入第%d位學生數學成績:",i+1);
	scanf("%d",&stu[i].math);
	if(stu[i].math>=0&&stu[i].math<=100){
		break;
	}
	else{
		printf("錯誤訊息\n"); 
	}
	
}while(stu[i].math<0||stu[i].math>100);
system("cls");/*清除當前畫面*/
		do{
	printf("輸入第%d位學生物理成績:",i+1);
	scanf("%d",&stu[i].phy);
	if(stu[i].phy>=0&&stu[i].phy<=100){
		break;
	}
	else{
		printf("錯誤訊息\n"); 
	}
}while(stu[i].phy<0||stu[i].phy>100);
system("cls");/*清除當前畫面*/
		do{
	printf("輸入第%d位學生英文成績:",i+1);
	scanf("%d",&stu[i].eng);
	if(stu[i].eng>=0&&stu[i].eng<=100){
		break;
	}
	else{
		printf("錯誤訊息\n"); 
	}
	
}while(stu[i].eng<0||stu[i].eng>100);
system("cls");/*清除當前畫面*/		
}
}
void b(){
        for(int i=0;i<n;i++){
             stu[i].avg=stu[i].math+stu[i].phy+stu[i].eng;
             printf("姓名:%s學號:%d數學:%d物理:%d英文:%d平均:%.1f",stu[i].name,stu[i].id,stu[i].math,stu[i].phy,stu[i].eng,stu[i].avg/3.0);
             printf("\n");
        }
        system("pause");
		system("cls");/*清除當前畫面*/ 	        
}
void c(){
	char inputName[9];
    printf("輸入學生姓名:");
    scanf("%s", inputName);
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(stu[i].name, inputName) == 0) {
             stu[i].avg=stu[i].math+stu[i].phy+stu[i].eng;
             printf("姓名:%s學號:%d數學:%d物理:%d英文:%d平均:%.1f",stu[i].name,stu[i].id,stu[i].math,stu[i].phy,stu[i].eng,stu[i].avg/3.0);
            found = 1;
            break;
        }
    }
    if (found==0) {
        printf("查無此姓名。\n");
        system("pause");
		system("cls");/*清除當前畫面*/ 
        
    }
    system("pause");
	system("cls");/*清除當前畫面*/ 
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
	printf("      (  李仁瀚  )   \n");
	printf("       \\________/  ︿ \n");
	printf("       /        \\ / / \n");
	printf("      ( 程設作業 )/ /  \n");
	printf("       \\_________/_/  \n");/*以上是個人風格畫面*/ 
	system("pause");/*停止當前畫面*/ 
	system("cls");/*清除當前畫面*/ 
  int password,k=0;
  do{
  printf("輸入密碼:");
  scanf("%d",&password);
  k++;
  if(password==2025)
  break;
  if(k<=2)
  printf("還剩餘%d次\n",(3-k));
  if(k==3){
  printf("錯誤三次不能輸入了");
  return 0;}
  }while(k<3);
  system("cls");/*清除當前畫面*/ 
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
	printf("請輸入個英文字母:");
	scanf(" %c",&m);
	if(m=='a'||m=='A'){
    system("cls");/*清除當前畫面*/ 
     a();
}
	if(m=='b'||m=='B'){
    system("cls");/*清除當前畫面*/ 
     b();
}
if(m=='c'||m=='C'){
    system("cls");/*清除當前畫面*/ 
     c();
}
}
}
