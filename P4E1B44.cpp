#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*定義學生結構 struct p*/
struct p {
	char name[9];   /*學生姓名（最多 8 個字元)*/
	int id;         /*學號*/
	int math;       /*數學成績*/
	int phy;        /*物理成績*/
	int eng;        /*英文成績*/
	float avg;      /*平均分數*/
};

/*宣告學生陣列與暫存變數 temp*/
struct p stu[10],temp;
int n; /*學生人數*/

/*輸入學生資料函式*/
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
	/*輸入姓名*/
	printf("輸入第%d位學生姓名:",i+1);
	scanf("%s",stu[i].name);
	system("cls");/*清除當前畫面*/

	/*輸入學號（六位數)*/
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

	/*輸入數學成績（0~100)*/
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

	/*輸入物理成績（0~100）*/ 
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

	/*輸入英文成績（0~100）*/
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

/*顯示所有學生姓名學號成績與平均*/
void b(){
        for(int i=0;i<n;i++){
             stu[i].avg=stu[i].math+stu[i].phy+stu[i].eng; /*計算總分*/
             printf("姓名:%s學號:%d數學:%d物理:%d英文:%d平均:%.1f",stu[i].name,stu[i].id,stu[i].math,stu[i].phy,stu[i].eng,stu[i].avg/3.0);
             printf("\n");
        }
        system("pause");/*停止當前畫面*/ 
		system("cls");/*清除當前畫面*/ 	        
}

/*查詢某位學生成績*/
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
    }
    system("pause");/*停止當前畫面*/ 
	system("cls");/*清除當前畫面*/ 
}

/*按平均成績排序並顯示（由高至低）*/
void d(){
for(int i=0;i<n;i++){
	stu[i].avg=stu[i].math+stu[i].phy+stu[i].eng;
}
	/*冒泡排序法*/ 
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(stu[j+1].avg>stu[j].avg){
				temp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=temp;
			}
		}
	}
	 for(int i=0;i<n;i++){
             printf("姓名:%s學號:%d數學:%d物理:%d英文:%d平均:%.1f",stu[i].name,stu[i].id,stu[i].math,stu[i].phy,stu[i].eng,stu[i].avg/3.0);
             printf("\n");
        }
        system("pause");/*停止當前畫面*/ 
		system("cls");/*清除當前畫面*/ 
}

int main(void)
{
	/*啟動畫面（個人風格)*/
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
	printf("       \\_________/_/  \n");
	system("pause");/*停止當前畫面*/ 
	system("cls");/*清除當前畫面*/ 

  /*密碼驗證（最多輸入三次)*/
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
  /*主選單無限迴圈*/
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
	scanf(" %c",&m); /*加空格防止緩衝區殘留*/

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
if(m=='d'||m=='D'){
    system("cls");/*清除當前畫面*/ 
     d();
}
if(m=='e'||m=='E'){
    system("cls");/*清除當前畫面*/ 
	char l;
	printf("確定離開? (y/n):");
        	scanf(" %c",&l);
        	while(l!='Y'&&l!='y'&&l!='n'&&l!='N'){
        	printf("錯誤訊息重新輸入\n");
        	printf("continue? (y/n):");
        	scanf(" %c",&l);
        }
        if(l=='n'||l=='N'){
          system("cls");/*清除當前畫面*/ 
      }
      if(l=='y'||l=='Y')
      return 0;
}
}
}
/*這次的作業讓我對新學到的程式結構更加熟悉，實作的過程中也讓我有機會複習之前學過的內容
，例如，我再次使用了在程設實驗小考中使用的 strcmp 函式，這次的應用讓我更能掌握它的用法
與特性，另外，像是冒泡排序法這類在大考、小考中經常出現的基本用法，也在這次的題目中派上
用場，透過不斷重複練習，讓我對這些常用技巧更加熟練，也提升了解題效率。*/ 
