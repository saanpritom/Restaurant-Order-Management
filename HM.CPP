#include<stdio.h>
#include<conio.h>
void orderfulldelete()
{
	clrscr();
	printf("YOU HAVE NOTHING TO ORDER\n");
	printf("--------THANK YOU--------\n");
	getch();
}
void orderpurchase(int pbur,int ppiz,int psan)
{
	clrscr();
	int kd,tbur,tsan,tpiz,kp,cn,jk;
	float kk,cpay,vpay,vpay1,spay,spay1,tpay,fpay;
	printf("<-------PURCHASE SLIP------->\n");
	printf("\n\n");
	printf("PRODUCT------->PRICE------->QUANTITY\n");
	if(pbur>0)
		printf("BURGER------>50----->%d\n",pbur);
	if(ppiz>0)
		printf("PIZZA------->80----->%d\n",ppiz);
	if(psan>0)
		printf("SANDWICH---->25----->%d\n",psan);
	tbur=50*pbur;
	tpiz=80*ppiz;
	tsan=25*psan;
	kd=tbur+tpiz+tsan;
	kp=pbur+ppiz+psan;
	printf("--------------------------\n");
	printf("TOTAL PRODUCT %d",kp," PRICE %d",kd);
	printf("\n\n");
	printf("DO YOU WANT TO PAY IT BY: \n");
	printf("1.CARD<-------------->2.CASH\n");
	printf("press 1 or 2 to select\n");
	scanf("%d",&cn);
	if(cn==1)
	{
		clrscr();
		jk=kd*2;
		kk=jk/100.0f;
		cpay=kk+kd;
		printf("YOUR NET BILL IS= %d/-\n",kd);
		printf("DUE TO CARD PAY YOUR BILL IS= %f/-\n",cpay);
		vpay=cpay*4;
		vpay1=vpay/100;
		printf("VAT ON YOUR BILL= %f/-\n",vpay1);
		spay=cpay*5;
		spay1=spay/100;
		printf("SERVICE CHARGE ON YOUR BILL= %f/-\n",spay1);
		printf("------------------------------------------\n");
		tpay=spay1+vpay1+cpay;
		printf("YOUR TOTAL BILL IS=------------> %f/-\n",tpay);
		getch();
	}
	if(cn==2)
	{
		clrscr();
		fpay=kd*1.0f;
		vpay=fpay*4;
		vpay1=vpay/100;
		spay=fpay*5;
		spay1=spay/100;
		tpay=fpay+vpay1+spay1;
		printf("YOUR NET BILL IS= %d/-\n",kd);
		printf("VAT ON YOUR BILL IS= %f/-\n",vpay1);
		printf("SERVICE CHARGE ON YOUR BILL IS= %f/-\n",spay1);
		printf("-------------------------------------\n");
		printf("YOUR TOTAL BILL IS= %f/-",tpay);
		getch();
	}
}
void orderdelete(int de,int ef,int fd)
{
	clrscr();
	int dbur,dpiz,dsan,it,tk;
	for(it=0;it<=1;it++)
	{
		clrscr();
		printf("----WHAT YOU WANT TO DELETE----\n");
		if(de>0)
		{
			printf("just intialize 0 to delete BURGER or press 1 to skip\n=");
			scanf("%d",&dbur);
		}
		if(ef>0)
		{
			printf("just intialize 0 to delete PIZZA or press 1 to skip\n=");
			scanf("%d",&dpiz);
		}
		if(fd>0)
		{
			printf("just intialize 0 to delete SANDWICH or press 1 to skip\n=");
			scanf("%d",&dsan);
		}
		if(dbur==0)
		{
			de=0;
		}
		if(dpiz==0)
		{
			ef=0;
		}
		if(dsan==0)
		{
			fd=0;
		}
		printf("-----HERE IS YOUR ORDER------\n");
		printf("\n\n");
		printf("PRODUCT------->QUANTITY\n");
		if(dbur>0)
		printf("BURGER------->%d\n",de);
		if(dpiz>0)
		printf("PIZZA------->%d\n",ef);
		if(dsan>0)
		printf("SANDWICH---->%d\n",fd);
		printf("\n\n");
		printf("press 1 to delete a item\n");
		printf("press 2 to delete all of item\n");
		printf("press 3 to purchase item\n");
		scanf("%d",&tk);
		if(tk==1)
		{
			it=it-2;
			continue;
		}
		if(tk==2)
		orderfulldelete();
		if(tk==3)
		orderpurchase(dbur,dpiz,dsan);
	}
}

void orderedit(int ab,int bc,int ca)
{
	clrscr();
	int bur,piz,san,i,temp;
	for(i=0;i<=1;i++)
	{
		clrscr();
		printf("previous order BURGER=%d\n",ab);
		printf("new order BURGER=");
		scanf("%d",&bur);
		printf("previous order PIZZA=%d\n",bc);
		printf("new order PIZZA=");
		scanf("%d",&piz);
		printf("previous order SANDWICH=%d\n",ca);
		printf("new order SANDWICH=");
		scanf("%d",&san);
		clrscr();
		printf("-----HERE IS YOUR ORDER-----\n");
		printf("\n\n");
		printf("PRODUCT<------->QUANTITY\n");
		if(bur>0)
		printf("BURGER<------->%d\n",bur);
		if(piz>0)
		printf("PIZZA<------->%d\n",piz);
		if(san>0)
		printf("SANDWICH<---->%d\n",san);
		printf("\n\n");
		printf("press 1 to edit item\n");
		printf("press 2 to delete a particular item\n");
		printf("press 3 to delete all of the item\n");
		printf("press 4 to purchase the item\n");
		scanf("%d",&temp);
		if(temp==1)
		{
			i=i-2;
			continue;
		}
		if(temp==2)
		{
			orderdelete(bur,piz,san);
		}
		if(temp==3)
		orderfulldelete();
		if(temp==4)
		orderpurchase(bur,piz,san);
	   }
}
void ordershow(int a,int b,int c)
{
	clrscr();
	int d;
	printf("------HERE IS YOU ORDER------\n");
	printf("\n\n");
	printf("PRODUCT<------->QUANTITY\n");
	if(a>0)
	printf("BURGER<------->%d\n",a);
	if(b>0)
	printf("PIZZA<------->%d\n",b);
	if(c>0)
	printf("SANDWICH<------>%d\n",c);
	printf("\n\n");
	printf("press 1 to edit your item\n");
	printf("press 2 to delete a particular item\n");
	printf("press 3 to delete all of the item\n");
	printf("press 4 to purchase the item\n");
	scanf("%d",&d);
	if(d==1)
	{
	orderedit(a,b,c);
	}
	if(d==2)
	{
		orderdelete(a,b,c);
	}
	if(d==3)
	orderfulldelete();
	if(d==4)
	orderpurchase(a,b,c);
	}
void order()
{
	int j,g,h,xj,xg,xh;
	printf("----GIVE YOUR ORDER----\n");
	printf("give the quatity of the items below if you don't want a particular item so just press 0 there\n");
	printf("BURGER=");
	scanf("%d",&j);
	printf("PIZZA=");
	scanf("%d",&g);
	printf("SANDWICH=");
	scanf("%d",&h);
	ordershow(j,g,h);
 }
int main()
{
	clrscr();
	printf("HOTEL MANEGMENT\n");
	printf("1.BURGER--------->50/-\n");
	printf("2.PIZZA--------->80/-\n");
	printf("3.SANDWICH--------->25/-\n");
	printf("\n\n");
	order();
	return 0;
  }
