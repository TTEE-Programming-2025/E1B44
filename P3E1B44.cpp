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
	printf("      (  �����v  )   \n");
	printf("       \\________/  �s \n");
	printf("       /        \\ / / \n");
	printf("      ( �{�]�@�~ )/ /  \n");
	printf("       \\_________/_/  \n");/*�H�W�O�ӤH����e��*/ 
	system("pause");/*�����e�e��*/ 
	system("cls");/*�M����e�e��*/ 
  int password,n=0;
  do{
  printf("��J�K�X:");
  scanf("%d",&password);
  n++;
  if(password==2025)
  break;
  if(n<=2)
  printf("�ٳѾl%d��\n",(3-n));
  if(n==3){
  printf("���~�T�������J�F");
  return 0;}
  }while(n<3);
  system("cls");/*�M����e�e��*/
  	int  number=0,h;
	char seat[9][9],m;
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
	printf("�п�J�ӭ^��r��:");
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
	printf("�ݭn�X�Ӯy��]1~4):");
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
	}																	
		printf("\\123456789\n");
	for(int i=0;i<9;i++){
		printf("%d",9-i);
		for(int j=0;j<9;j++){
		printf("%c",seat[i][j]);
	}
	printf("\n");
}	 
	}	
		
	}
}
		
}
