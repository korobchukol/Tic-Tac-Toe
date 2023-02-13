#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int wp = 0, wai = 0;
	while (true)
	{
		char lt = 0, mt = 0, rt = 0, lm = 0, mm = 0, rm = 0, ld = 0, md = 0, rd = 0;
		cout << "Цифра на нумпаде соответствует клетке\n";
		srand(time(NULL));
		int turn = rand() % (2 - 1 + 1) + 1, f_turn = turn;
		char p_sym = NULL, ai_sym = NULL;
		switch (f_turn)
		{
		case 1:
			cout << "Вы крестик. Ходите первым!";
			cout << "\n " << lt << " | " << mt << " | " << rt << "\n-----------" << "\n " << lm << " | " << mm << " | " << rm << "\n-----------" << "\n " << ld << " | " << md << " | " << rd << "\n";
			p_sym = 'x';
			ai_sym = 'o';
			break;
		case 2:
			cout << "Вы нолик. Вы ходите вторым.";
			p_sym = 'o';
			ai_sym = 'x';
			break;
		default:
			cout << "Непредвиденная ошибка: 1";
			break;
		}
		
		while (true)
		{
			wr:
			if (lt == 'x' && mt == 'x' && rt == 'x' || lm == 'x' && mm == 'x' && rm == 'x' || ld == 'x' && md == 'x' && rd == 'x')
			{
				if (f_turn == 1)
				{
					cout << "Вы выиграли!!!";
					wp++;
					goto out;
				}
				if (f_turn == 2)
				{
					cout << "Вы проиграли.";
					wai++;
					goto out;
				}
			}
			if (lt == 'x' && lm == 'x' && ld == 'x' || mt == 'x' && mm == 'x' && md == 'x' || rt == 'x' && rm == 'x' && rd == 'x')
			{
				if (f_turn == 1)
				{
					cout << "Вы выиграли!!!";
					wp++;
					goto out;
				}
				if (f_turn == 2)
				{
					cout << "Вы проиграли.";
					wai++;
					goto out;
				}
			}
			if (lt == 'x' && mm == 'x' && rd == 'x' || rt == 'x' && mm == 'x' && ld == 'x')
			{
				if (f_turn == 1)
				{
					cout << "Вы выиграли!!!";
					wp++;
					goto out;
				}
				if (f_turn == 2)
				{
					cout << "Вы проиграли.";
					wai++;
					goto out;
				}
			}
			if (lt == 'o' && mt == 'o' && rt == 'o' || lm == 'o' && mm == 'o' && rm == 'o' || ld == 'o' && md == 'o' && rd == 'o')
			{
				if (f_turn == 2)
				{
					cout << "Вы выиграли!!!";
					wp++;
					goto out;
				}
				if (f_turn == 1)
				{
					cout << "Вы проиграли.";
					wai++;
					goto out;
				}
			}
			if (lt == 'o' && lm == 'o' && ld == 'o' || mt == 'o' && mm == 'o' && md == 'o' || rt == 'o' && rm == 'o' && rd == 'o')
			{
				if (f_turn == 2)
				{
					cout << "Вы выиграли!!!";
					wp++;
					goto out;
				}
				if (f_turn == 1)
				{
					cout << "Вы проиграли.";
					wai++;
					goto out;
				}
			}
			if (lt == 'o' && mm == 'o' && rd == 'o' || rt == 'o' && mm == 'o' && ld == 'o')
			{
				if (f_turn == 2)
				{
					cout << "Вы выиграли!!!";
					wp++;
					goto out;
				}
				if (f_turn == 1)
				{
					cout << "Вы проиграли.";
					wai++;
					goto out;
				}
			}
			if (lt != '\0' && mt != '\0' && rt != '\0' && lm != '\0' && mm != '\0' && rm != '\0' && ld != '\0' && md != '\0' && rd != '\0')
			{
				cout << "Ничья";
				goto out;
			}

			int p = 0, ai = 0;
			if (turn == 1)
			{
				p_turn:
				cin >> p;
				switch (p)
				{
				case 1:
					if (ld == 0)
					{
						ld = p_sym;
					}
					else
					{
						cout << "Эта клетка занята. Попробуйте другую.\n";
						goto p_turn;
					}
					break;
				case 2:
					if (md == 0)
					{
						md = p_sym;
					}
					else
					{
						cout << "Эта клетка занята. Попробуйте другую.\n";
						goto p_turn;
					}
					break;
				case 3:
					if (rd == 0)
					{
						rd = p_sym;
					}
					else
					{
						cout << "Эта клетка занята. Попробуйте другую.\n";
						goto p_turn;
					}
					break;
				case 4:
					if (lm == 0)
					{
						lm = p_sym;
					}
					else
					{
						cout << "Эта клетка занята. Попробуйте другую.\n";
						goto p_turn;
					}
					break;
				case 5:
					if (mm == 0)
					{
						mm = p_sym;
					}
					else
					{
						cout << "Эта клетка занята. Попробуйте другую.\n";
						goto p_turn;
					}
					break;
				case 6:
					if (rm == 0)
					{
						rm = p_sym;
					}
					else
					{
						cout << "Эта клетка занята. Попробуйте другую.\n";
						goto p_turn;
					}
					break;
				case 7:
					if (lt == 0)
					{
						lt = p_sym;
					}
					else
					{
						cout << "Эта клетка занята. Попробуйте другую.\n";
						goto p_turn;
					}
					break;
				case 8:
					if (mt == 0)
					{
						mt = p_sym;
					}
					else
					{
						cout << "Эта клетка занята. Попробуйте другую.\n";
						goto p_turn;
					}
					break;
				case 9:
					if (rt == 0)
					{
						rt = p_sym;
					}
					else
					{
						cout << "Эта клетка занята. Попробуйте другую.\n";
						goto p_turn;
					}
					break;
				default:
					cout << "Ошибка ввода. Попробуйте другую клетку.\n";
					goto p_turn;
					break;
				}
				//cout << "\n " << lt << " | " << mt << " | " << rt << "\n-----------" << "\n " << lm << " | " << mm << " | " << rm << "\n-----------" << "\n " << ld << " | " << md << " | " << rd << "\n";
				turn++;
				goto wr;
			}
			if (turn == 2)
			{
				ai_turn:
				ai = rand() % (9 - 1 + 1) + 1;
				switch (ai)
				{
				case 1:
					if (ld == 0)
					{
						ld = ai_sym;
					}
					else
					{
						goto ai_turn;
					}
					break;
				case 2:
					if (md == 0)
					{
						md = ai_sym;
					}
					else
					{
						goto ai_turn;
					}
					break;
				case 3:
					if (rd == 0)
					{
						rd = ai_sym;
					}
					else
					{
						goto ai_turn;
					}
					break;
				case 4:
					if (lm == 0)
					{
						lm = ai_sym;
					}
					else
					{
						goto ai_turn;
					}
					break;
				case 5:
					if (mm == 0)
					{
						mm = ai_sym;
					}
					else
					{
						goto ai_turn;
					}
					break;
				case 6:
					if (rm == 0)
					{
						rm = ai_sym;
					}
					else
					{
						goto ai_turn;
					}
					break;
				case 7:
					if (lt == 0)
					{
						lt = ai_sym;
					}
					else
					{
						goto ai_turn;
					}
					break;
				case 8:
					if (mt == 0)
					{
						mt = ai_sym;
					}
					else
					{
						goto ai_turn;
					}
					break;
				case 9:
					if (rt == 0)
					{
						rt = ai_sym;
					}
					else
					{
						goto ai_turn;
					}
					break;
				default:
					cout << "Ошибка ИИ";
					wp++;
					goto out;
					break;
				}
				cout << "\n " << lt << " | " << mt << " | " << rt << "\n-----------" << "\n " << lm << " | " << mm << " | " << rm << "\n-----------" << "\n " << ld << " | " << md << " | " << rd << "\n";
				turn--;
				goto wr;
			}
		}
		
		out:
		cout << "\nСчёт: " << wp << ":" << wai << "\n\n";
	}
}