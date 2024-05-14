#include<stdio.h>
#include<conio.h>
#define size 5
int x[size],front=-1,rear=-1;
void add()
{
	if((rear+1)%size==front)
	{
		printf("\n\tQueue Full...");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}

		if(rear==size-1)
		{
			rear=0;
		}
		else
		{
			rear++;
		}

		printf("\n\tEnter Value : ");
		scanf("%d",&x[rear]);
		printf("\n\tValue Inserted...");
	}
}
void disp()
{
	int i;

	if(front==-1)
	{
		printf("\n\tQueue is Empty...");
	}
	else
	{
		if(front <= rear)
		{
			for(i=front;i<=rear;i++)
			{
				printf("  %d",x[i]);
			}
		}
		else
		{
			for(i=front;i<size;i++)
			{
				printf("  %d",x[i]);
			}

			for(i=0;i<=rear;i++)
			{
				printf("  %d",x[i]);
			}
		}
	}
}

void del()
{
	if(front==-1)
	{
		printf("\n\tQueue is Emtpy...");
	}
	else
	{
		printf("\n\tValue %d is removed...",x[front]);

		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else if(front==size-1)
		{
			front=0;
		}
		else
		{
			front++;
		}
	}
}
void updt()
{
	int i,uv,flag=0;

	if(front==-1)
	{
		printf("\n\tQueue is Empty...");
	}
	else
	{
		disp();

		printf("\n\tEnter Value For Update : ");
		scanf("%d",&uv);

		if(front<=rear)
		{
			for(i=front;i<=rear;i++)
			{
				if(x[i]==uv)
				{
					flag=1;
					break;
				}
			}
		}
		else
		{
			for(i=front;i<size;i++)
			{
				if(x[i]==uv)
				{
					flag=1;
					break;
				}

				if(flag==0)
				{
					for(i=0;i>=rear;i++)
					{
						if(x[i]==uv)
						{
							flag=1;
							break;
						}
					}
				}
			}
			if(flag==1)
			{
				printf("\n\tEnter New Value : ");
				scanf("%d",&x[i]);

				printf("\n\tValue Inserted...");
			}
			else
			{
				printf("\n\tValue %d Not Found",uv);
			}
		}
	}
}
void main()
{
	int ch;

	while(1)
	{
		clrscr();
		printf("\n\n\t\t====CIR QUEUE====");
		printf("\n\t\t-----------------\n\n");
		printf("\n\t1). Add Data");
		printf("\n\t2). Display Data");
		printf("\n\t3). Delete Data");
		printf("\n\t4). Update Data");
		printf("\n\t5). Exit");

		printf("\n\tEnter Choice : ");
		scanf("%d",&ch);
		printf("\n\t------------------\n");
		switch(ch)
		{
			case 1:
				add();
				break;
			case 2:
				disp();
				break;
			case 3:
				del();
				break;
			case 4:
				updt();
				break;
			case 5:
				exit();
			default:
				printf("\n\tInvalid Choice..!!");
		}
		getch();
	}
}