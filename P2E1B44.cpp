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
  for(;;){
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("(                        )\n");
	printf("(      a.�����T����      )\n");
	printf("(                        )\n");
	printf("(      b.��ܭ��k��      )\n");
	printf("(                        )\n");
	printf("(      c.����            )\n");
	printf("(                        )\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	int h,a,n; 
	char m,j,k,l;
	printf("�п�J�ӭ^��r��:");
	scanf(" %c",&m);
	if(m=='a'||m=='A'){
    system("cls");/*�M����e�e��*/ 
    printf("��Ja-n�䤤�@�Ӧr��:");
    scanf(" %c",&k); 
    while(k<'a'||k>'n') {
    printf("�Э��s��J\n");
    printf("��Ja-n�䤤�@�Ӧr��:");
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
			system("cls");/*�M����e�e��*/ 
    printf("��J1-9�䤤�@�ӼƦr:");
    scanf(" %d",&h); 
    while(h>9||h<1) {
    printf("�Э��s��J\n");
    printf("��J1-9�䤤�@�ӼƦr:");
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
        	printf("���~�T�����s��J\n");
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

  
