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
  system("cls");/*清除當前畫面*/ 
  for(;;){
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("(                        )\n");
	printf("(      a.直角三角形      )\n");
	printf("(                        )\n");
	printf("(      b.顯示乘法表      )\n");
	printf("(                        )\n");
	printf("(      c.結束            )\n");
	printf("(                        )\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	int h,a,n; 
	char m,j,k,l;
	printf("請輸入個英文字母:");
	scanf(" %c",&m);
	if(m=='a'||m=='A'){
    system("cls");/*清除當前畫面*/ 
    printf("輸入a-n其中一個字母:");
    scanf(" %c",&k); 
    while(k<'a'||k>'n') {
    printf("請重新輸入\n");
    printf("輸入a-n其中一個字母:");
    scanf(" %c",&k);
}
     if(k>='a'&&k<='n'){
     for (int i = k; i >= 'a'; i--) {
     	for(int l=i-1;l>='a';l--){
     		printf(" ");
		 }
                    for (j = i; j <= k; j++) {
                        printf("%c", j);
                    }
                    printf("\n");
                }
                system("pause");
                system("cls");
            }
}
		if(m=='b'||m=='B'){
			system("cls");/*清除當前畫面*/ 
    printf("輸入1-9其中一個數字:");
    scanf(" %d",&h); 
    while(h>9||h<1) {
    printf("請重新輸入\n");
    printf("輸入1-9其中一個數字:");
    scanf(" %d",&h);
            }
            if(h<=9&&h>=1){
        	for(a=1;a<=h;a++){
        		for(n=1;n<=h;n++)
        	   printf(" %d*%d=%2d",n,a,n*a);{
        	   printf("\n");
			}	
        }
        	system("pause");
        	system("cls");
		}
        }
        if(m=='C'||m=='c'){
        	system("cls");
        	printf("continue? (y/n):");
        	scanf(" %C",&l);
        	while(l!='Y'&&l!='y'&&l!='n'&&l!='N'){
        	printf("錯誤訊息重新輸入\n");
        	printf("continue? (y/n):");
        	scanf(" %C",&l);
        }if(l=='y'||l=='Y'){
          system("cls");
      }
      if(l=='n'||l=='N')
      return 0;
        }
        
}

}

  
