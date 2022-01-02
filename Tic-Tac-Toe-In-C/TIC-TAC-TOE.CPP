#include <conio.h>
#include <iostream.h>

char number[10] = {'0','1','2','3','4','5','6','7','8','9'};

int logic()
{
	if(number[1] == number[2] && number[2] == number[3])
	{
		return 1;
	}
	else if(number[4] == number[5] && number[5] == number[6])
	{
		return 1;
	}
	else if(number[7] == number[8] && number[8] == number[9])
	{
		return 1;
	}
	else if(number[1] == number[4] && number[4] == number[7])
	{
		return 1;
	}
	else if(number[2] == number[5] && number[5] == number[8])
	{
		return 1;
	}
	else if(number[3] == number[6] && number[6] == number[9])
	{
		return 1;
	}
	else if(number[1] == number[5] && number[5] == number[9])
	{
		return 1;
	}
	else if(number[3] == number[5] && number[5] == number[7])
	{
		return 1;
	}
	else if(number[1] != '1' && number[2] != '2' &&	 number[3] != '3'
	&& number[4] != '4' && number[5] != '5' && number[6] != '6' &&
	number[7] != '7' && number[8] != '8' && number[9] != '9')
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

void table()
{
	clrscr();
	cout<<"\n\n\tTic Tac Toe\n\n";
	cout<<"Player 1(X) - Player 2(O)"<<endl<<endl;
	cout<<"     |     |    "<<endl;
	cout<<"  "<<number[1]<<"  |  "<<number[2]<<"  |  "<<number[3]<<endl;
	cout<<"_____|_____|_____"<<endl;
	cout<<"     |     |"<<endl;
	cout<<"  "<<number[4]<<"  |  "<<number[5]<<"  |  "<<number[6]<<endl;
	cout<<"_____|_____|_____"<<endl;
	cout<<"     |     |"<<endl;
	cout<<"  "<<number[7]<<"  |  "<<number[8]<<"  |  "<<number[9]<<endl;
	cout<<"     |     |    "<<endl<<endl;
}

int main()
{
	int player = 1,i,choose;

	char mark;

	do
	{
		table();
		player = (player%2)?1:2;

		cout<<"Player "<<player<<" Enter a number: ";
		cin>>choose;
		mark=(player == 1) ? 'X': 'O';

		if(choose == 1 && number[1] == '1')
		{
			number[1] = mark;
		}
		else if (choose == 2 && number[2] == '2')
		{
			number[2] = mark;
		}
		else if (choose == 3 && number[3] == '3')
		{
			number[3] = mark;
		}
		else if (choose == 4 && number[4] == '4')
		{
			number[4] = mark;
		}
		else if (choose == 5 && number[5] == '5')
		{
			number[5] = mark;
		}
		else if (choose == 6 && number[6] == '6')
		{
			number[6] = mark;
		}
		else if (choose == 7 && number[7] == '7')
		{
			number[7] = mark;
		}
		else if (choose == 8 && number[8] == '8')
		{
			number[8] = mark;
		}
		else if (choose == 9 && number[9] == '9')
		{
			number[9] = mark;
		}
		else
		{
			cout<<"Invaild move";

			player--;
			cin.ignore();
			cin.get();
		}

		i = logic();
		player++;

	}
	while(i==-1);

	table();

	if(i==1)
	{
		cout<<"==> Player "<<--player<<" Won ";
		getch();
	}
	else
	{
		cout<<"==>\aGame Draw";

		cin.ignore();
		cin.get();
		return 0;
	}

	return 1;

}