#include<stdio.h>
#include<stdlib.h>
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
  system("pause");/*停止當前畫面*/ 
  system("cls");/*清除當前畫面*/ 
  
  
}
  
  
