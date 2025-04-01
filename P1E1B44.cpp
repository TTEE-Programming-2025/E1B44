#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
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
	int password;
    printf("請輸入四位數密碼:");
    scanf("%d",&password);
    if(password==2025){
	
    printf("歡迎\n");/*輸入正確輸出這個*/ 
	system("pause");
    system("cls");
}
    else{
    printf("輸入錯誤");/*輸入錯誤輸出這個*/ 
    return 0;
}
    printf("----------------------------------------------\n");
    printf("\\                                            /\n");
    printf("\\             當輸入A-Z:Uppercase            /\n");
    printf("\\                                            /\n");
    printf("\\             當輸入a-z:Lowercase            /\n");
    printf("\\                                            /\n");
    printf("\\             當輸入0-9:Dight                /\n");
    printf("\\                                            /\n");
    printf("\\             當輸入其他:李仁瀚              /\n");
    printf("\\                                            /\n");
    printf("----------------------------------------------\n");/*主選單*/ 
    {
    	char m;{
    printf("請輸入一個字元:\n");
    getchar();/*清除上個留在緩衝區的enter*/
    scanf(" %c",&m);
}
    
    if(m>='A'&&m<='Z'){/*條件判斷*/ 
    printf("Uppercase");
}
    else if(m>='a'&&m<='z'){
    printf("Lowercase");
}
    else if(m>='0'&&m<='9'){
    printf("Dight");
}
    else{
    printf("李仁瀚");
}
    return 0;
}
    
             	
}
//寫這次的程式讓我學到了一些新的東西，像是如何清除當前畫面，getchar除了輸出字元還有其他用途
//，在這個程式碼中它代替了fflush(stdin)清除緩衝區的用途，清除了原本留在緩衝區的換行符，除了
//上述兩種方法，在scanf的%c前面加空格也可解決這個問題。 
 
