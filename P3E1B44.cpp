#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
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
  int password,n=0;
  do{
  printf("輸入密碼:");
  scanf("%d",&password);
  n++;
  if(password==2025)
  break;
  if(n<=2)
  printf("還剩餘%d次\n",(3-n));
  if(n==3){
  printf("錯誤三次不能輸入了");
  return 0;}
  }while(n<3);
  system("cls");/*清除當前畫面*/ 
  for(;;){
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("(                                   )\n");
	printf("(        a.Available seats          )\n");
	printf("(                                   )\n");
	printf("(        b.Arrange for you          )\n");
	printf("(                                   )\n");
	printf("(        c. Choose by yourself      )\n");
	printf("(                                   )\n");
	printf("(        d. Exit                    )\n");
	printf("(                                   )\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	int  number=0;
	char seat[9][9],m;
	printf("請輸入個英文字母:");
	scanf(" %c",&m);
	if(m=='a'||m=='A'){
	system("cls");
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
		seat[i][j]='-';
	}	
}
	srand(time(NULL));
	while(number<=9){
		int i=rand()%9;
		int j=rand()%9;
		if(seat[i][j]=='-'){
			seat[i][j]='*';
			number++;	
		}
	}
	printf("\\123456789\n");
	for(int i=1;i<=9;i++){
		printf("%d",10-i);
		for(int j=1;j<=9;j++){
		printf("%c",seat[i][j]);
	}
	printf("\n");
}
	system("pause");
	system("cls");  
}
}
}
