#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*�w�q�ǥ͵��c struct p*/
struct p {
	char name[9];   /*�ǥͩm�W�]�̦h 8 �Ӧr��)*/
	int id;         /*�Ǹ�*/
	int math;       /*�ƾǦ��Z*/
	int phy;        /*���z���Z*/
	int eng;        /*�^�妨�Z*/
	float avg;      /*��������*/
};

/*�ŧi�ǥͰ}�C�P�Ȧs�ܼ� temp*/
struct p stu[10],temp;
int n; /*�ǥͤH��*/

/*��J�ǥ͸�ƨ禡*/
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
	/*��J�m�W*/
	printf("��J��%d��ǥͩm�W:",i+1);
	scanf("%s",stu[i].name);
	system("cls");/*�M����e�e��*/

	/*��J�Ǹ��]�����)*/
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

	/*��J�ƾǦ��Z�]0~100)*/
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

	/*��J���z���Z�]0~100�^*/ 
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

	/*��J�^�妨�Z�]0~100�^*/
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

/*��ܩҦ��ǥͩm�W�Ǹ����Z�P����*/
void b(){
        for(int i=0;i<n;i++){
             stu[i].avg=stu[i].math+stu[i].phy+stu[i].eng; /*�p���`��*/
             printf("�m�W:%s�Ǹ�:%d�ƾ�:%d���z:%d�^��:%d����:%.1f",stu[i].name,stu[i].id,stu[i].math,stu[i].phy,stu[i].eng,stu[i].avg/3.0);
             printf("\n");
        }
        system("pause");/*�����e�e��*/ 
		system("cls");/*�M����e�e��*/ 	        
}

/*�d�߬Y��ǥͦ��Z*/
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
    }
    system("pause");/*�����e�e��*/ 
	system("cls");/*�M����e�e��*/ 
}

/*���������Z�ƧǨ���ܡ]�Ѱ��ܧC�^*/
void d(){
for(int i=0;i<n;i++){
	stu[i].avg=stu[i].math+stu[i].phy+stu[i].eng;
}
	/*�_�w�ƧǪk*/ 
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
             printf("�m�W:%s�Ǹ�:%d�ƾ�:%d���z:%d�^��:%d����:%.1f",stu[i].name,stu[i].id,stu[i].math,stu[i].phy,stu[i].eng,stu[i].avg/3.0);
             printf("\n");
        }
        system("pause");/*�����e�e��*/ 
		system("cls");/*�M����e�e��*/ 
}

int main(void)
{
	/*�Ұʵe���]�ӤH����)*/
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
	printf("       \\_________/_/  \n");
	system("pause");/*�����e�e��*/ 
	system("cls");/*�M����e�e��*/ 

  /*�K�X���ҡ]�̦h��J�T��)*/
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
  /*�D���L���j��*/
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
	scanf(" %c",&m); /*�[�Ů樾��w�İϴݯd*/

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
if(m=='d'||m=='D'){
    system("cls");/*�M����e�e��*/ 
     d();
}
if(m=='e'||m=='E'){
    system("cls");/*�M����e�e��*/ 
	char l;
	printf("�T�w���}? (y/n):");
        	scanf(" %c",&l);
        	while(l!='Y'&&l!='y'&&l!='n'&&l!='N'){
        	printf("���~�T�����s��J\n");
        	printf("continue? (y/n):");
        	scanf(" %c",&l);
        }
        if(l=='n'||l=='N'){
          system("cls");/*�M����e�e��*/ 
      }
      if(l=='y'||l=='Y')
      return 0;
}
}
}
/*�o�����@�~���ڹ�s�Ǩ쪺�{�����c��[���x�A��@���L�{���]���ڦ����|�Ʋߤ��e�ǹL�����e
�A�Ҧp�A�ڦA���ϥΤF�b�{�]����p�Ҥ��ϥΪ� strcmp �禡�A�o�����������ڧ��x�������Ϊk
�P�S�ʡA�t�~�A���O�_�w�ƧǪk�o���b�j�ҡB�p�Ҥ��g�`�X�{���򥻥Ϊk�A�]�b�o�����D�ؤ����W
�γ��A�z�L���_���ƽm�ߡA���ڹ�o�Ǳ`�Χޥ���[���m�A�]���ɤF���D�Ĳv�C*/ 
