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
  	int  number=0,h;
	char seat[9][9],m,l,e;
		for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
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
	printf("請輸入個英文字母:");
	scanf(" %c",&m);
	if(m=='a'||m=='A'){
	system("cls");
	printf("\\123456789\n");
	for(int i=0;i<9;i++){
		printf("%d",9-i);
		for(int j=0;j<9;j++){
		printf("%c",seat[i][j]);
	}
	printf("\n");
}
	system("pause");
	system("cls");  
}
	if(m=='b'||m=='B'){
	system("cls");
	printf("需要幾個座位（1~4):");
	scanf("%d",&h);
	if(h>=1&&h<=4){
	switch(h){
		case 1:
			while(1){
				int a=rand()%9;
				int n=rand()%9;
				if(seat[a][n]=='-'){
					seat[a][n]='@'; 
					break;
			}
				
			}
			break;
			case 2:
			while(1){
				int a=rand()%9;
				int n=rand()%8;
				if(seat[a][n]=='-'&&seat[a][n+1]=='-'){
					seat[a][n]='@'; 
					seat[a][n+1]='@'; 
					break;
			}
				
			}
			break;
			case 3:
			while(1){
				int a=rand()%9;
				int n=rand()%7;
				if(seat[a][n]=='-'&&seat[a][n+1]=='-'&&seat[a][n+2]=='-'){
					seat[a][n]='@'; 
					seat[a][n+1]='@';
					seat[a][n+2]='@'; 
					break;
			}	 
			}
			break;
	       case 4:
			int k=rand()%2;
			while(k==0){
				int a=rand()%9;
				int n=rand()%6;
				if(seat[a][n]=='-'&&seat[a][n+1]=='-'&&seat[a][n+2]=='-'&&seat[a][n+3]=='-'){
					seat[a][n]='@'; 
					seat[a][n+1]='@';
					seat[a][n+2]='@';
					seat[a][n+3]='@'; 
					break;
			}	 
			} 
				while(k==1){
				int a=rand()%8;
				int n=rand()%8;
				if(seat[a][n]=='-'&&seat[a][n+1]=='-'&&seat[a+1][n]=='-'&&seat[a+1][n+1]=='-'){
					seat[a][n]='@'; 
					seat[a][n+1]='@';
					seat[a+1][n]='@';
					seat[a+1][n+1]='@'; 
					break;
			}	 
			}
		break;
	}																	
		printf("\\123456789\n");
	for(int i=0;i<9;i++){
		printf("%d",9-i);
		for(int j=0;j<9;j++){
		printf("%c",seat[i][j]);
	}
	printf("\n");
}
   printf("是否滿意(y/n):");
   scanf(" %c",&l);
   if(l=='y')
   for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(seat[i][j]=='@')
			seat[i][j]='*';
		}
	} 
	if(l=='n')
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(seat[i][j]=='@')
			seat[i][j]='-';
		}
	} 
	system("pause");
	system("cls");  	 
	}	
		
	}
	 if(m=='c'||m=='C'){
    system("cls");
    char seats[7];
    int x, y;
    while (1) {
        printf("請輸入座位 (列-行)，輸入 0-0 結束選擇: ");
        scanf("%d-%d", &x, &y);
        if ( x < 0 || x > 9 || y < 0 || y > 9) {
            printf("格式錯誤，請重新輸入。\n");
            continue;
        }
        if (x == 0 && y == 0) break; 

        int a = 9 - x;
        int n = y - 1;
        if (seat[a][n] == '-') {
            seat[a][n] = '@';
        } else {
            printf("此座位已被選，請重新輸入。\n");
        }
    }
    printf("\\123456789\n");
    for (int i = 0; i < 9; i++) {
        printf("%d", 9 - i);
        for (int j = 0; j < 9; j++) {
            printf("%c", seat[i][j]);
        }
        printf("\n");
    }
   for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(seat[i][j]=='@')
			seat[i][j]='*';
		}
	} 
	system("pause");
	system("cls");
    } 
    }
	} 

