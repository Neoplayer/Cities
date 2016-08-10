#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <windows.h>
#include <ctime>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string A[29][15] = { 
	{ "Архангельск", "Астрахань", "Амстердам", "Афины", "Алдан", "Аральск", "Артемовск", "Астана", "Ачинск", "Анадырь", "Амман", "Алофи", "Алжир", "Авила", "Абиджан" },
	{ "Багдад", "Баку", "Балтийск", "Банжул", "Барселона", "Белгород", "Белград", "Берлин", "Берн", "Благовещенск", "Бразилиа", "Будапешт", "Бухарест", "Будва", "Брянск" },
	{ "Вавилон", "Валдай", "Вашингтон", "Вена", "Венеция", "Вильнюс", "Вилюйск", "Винница", "Владивосток", "Владикавказ", "Волгоград", "Воронеж", "Выборг", "Вязьма", "Волжск" },
	{ "Гаага", "Гамбург", "Гангток", "Гиза", "Голливуд", "Грозный", "Гуанчжоу", "Гудым", "Горно-Алтайск", "Гонолулу", "Гагры", "Гавана", "Гиза", "Глазго", "Гонолулу" },
	{ "Даллас", "Дамаск", "Дербент", "Джорджтаун", "Дивногорск", "Дмитров", "Донецк", "Дубай", "Дубна", "Дюссельдорф", "Дублин", "Джуба", "Джезказган", "Джайпур", "Дейтон" },
	{ "Екатеринбург", "Евпатория", "Егорьевск", "Екабпилс", "Елабуга", "Елец", "Елизово", "Енакиево", "Енисейск", "Ереван", "Ерофей Павлович"},
	{ "Железногорск", "Женева", "Жлобино", "Жерона", "Жилинда", "Жуис-де-Фора", "Жуковский"},
	{ "Запорожье", "Зеленогорск", "Завидово", "Загреб", "Зальцбург", "Занзибар", "Заозерный", "Зарайск", "Звездный", "Зейла", "Зигиншор", "Златоуст", "Знаменск", "Зуэрат", "Зырянка" },
	{ "Ибица", "Иваново", "Иерусалим", "Ижевск", "Измаил", "Илулиссат", "Ингольштадт", "Инсбрук", "Иркутск", "Исиномаки", "Исламабад", "Иу", "Исфахан", "Иркутск", "Иркутск" },
	{ "Йорк", "Йоханнесбург", "Йошкар-Ола"},
	{ "Казань", "Каир", "Кайеркан", "Кабул", "Калининград", "Калуга", "Камышин", "Канары", "Караганда", "Каспийск", "Киев", "Кировск", "Кишинев", "Коломна", "Копенгаген" },
	{ "Лас Геел", "Лас-Вегас", "Лас-Медулас", "Лаутока", "Лахор", "Лесосибирск", "Ливерпуль", "Лимож", "Липецк", "Лондон", "Лос-Анджелес", "Луганск", "Луцк", "Львов", "Люксембург" },
	{ "Магадан", "Мадрид", "Мариинск", "Мариуполь", "Махачкала", "Медина", "Милан", "Минск", "Монреаль", "Москва", "Мурманск", "Мюнхен", "Мостар", "Мирный", "Мехико" },
	{ "Нагасаки", "Набережные Челны", "Нади", "Нальчик", "Нерюнгри", "Нижний Новгород", "Нижнеудинск", "Николаев", "Новгород Великий", "Новосибирск", "Норильск", "Нью-Йорк", "Новый Орлеан", "Ницца", "Николаевск" },
	{ "Одесса", "Оксфорд", "Омск", "Орёл", "Оренбург", "Осло", "Оттава", "Орша", "Олбери"},
	{ "Палермо", "Палех", "Панама-сити", "Париж", "Пекин", "Пермь", "Петрозаводск", "Петропавловск-Камчатский", "Плес", "Подольск", "Порту", "Прага", "Приморск", "Пятигорск" },
	{ "Рига", "Рим", "Рио-де-Жанейро", "Ровно", "Родригес", "Ростов-на-Дону", "Ростов", "Рыбинск", "Рязань", "Роттердам", "Ржев", "Рыльск", "Рославль", "Радужный", "Раменское" },
	{ "Сан-Диего", "Санкт-Петербург", "Сан-Франциско", "Сызрань", "Ставрополь", "Спрингс", "Спарта", "Сочи", "Сосновый Бор", "Сокольники", "Солнечногорск", "Светлогорск", "Сумы", "Суэц", "Сургут" },
	{ "Тверь", "Тбилиси", "Терек", "Токио", "Томск", "Тула", "Тусон", "Тюмень", "Тбилиси", "Тирасполь", "Тольятти", "Тосно", "Тунис", "Турку", "Тында" },
	{ "Углегорск", "Уральск", "Уфа", "Ухань", "Умань", "Ульяновск", "Узген", "Уагадугу", "Уварово"},
	{ "Фэрбенкс", "Фокино", "Фигерас", "Фролово", "Феррара", "Фамагуста", "Фатеж", "Фритаун", "Фрибур"},
	{ "Хабаровск", "Ханты-Мансийск", "Хартфорд ", "Херсон", "Химки", "Хошимин ", "Хониара", "Холм", "Хилок", "Хеб"},
	{ "Цивильск", "Цюрих", "Цимлянск ", "Цинциннати", "Цукуба", "Целле"},
	{ "Чайковский", "Черногорск", "Челябинск", "Чикаго", "Чита", "Чулым ", "Честер", "Чёрный Яр ", "Чермоз", "Череповец"},
	{ "Шанхай", "Шахтёрск", "Шэньян", "Штральзунд", "Шлиссельбург", "Шацк", "Шадринск", "Шагонар"},
	{ "Щёкино", "Щёлково ", "Щучье", "Щигры"},
	{ "Эдинбург", "Эссен", "Эрзурум", "Энгельс ", "Электрогорск", "Экибастуз ", "Эдинбург"},
	{ "Юрга", "Юджин", "Юрмала", "Южноуральск", "Южно-Сахалинск "},
	{ "Якутск", "Ялта", "Яранск", "Ярославль", "Яссы ", "Ясногорск"}
	};



	string Bukva;
	int i;
	int p = 1;
	int F[40];
	for (int Check = 0; Check < 40; Check++){
		F[Check] = 0;
	}
	srand(time(0));
	while (p == 1){
		int w = 1;
		cout << "             -=Города=-" << endl;
		cout << "   Введите букву или X для выхода." << endl << "     Для помощи напишите Help." << endl << endl;
		cin >> Bukva;
		if (Bukva == "Help"){
			cout << "Эта программа была создана для облегчения игры в Города." << endl << "Введите последнюю букву слова и вам будет предложен город." << endl << endl << endl;
			system("pause");
			system("cls");
		}
		else if (Bukva == "А" & F[1] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[0][i] != "qwerty") {
					cout << A[0][i] << endl << endl;
					A[0][i] = "qwerty";
					F[1]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "Б" & F[2] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[1][i] != "qwerty") {
					cout << A[1][i] << endl << endl;
					A[1][i] = "qwerty";
					F[2]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "В" & F[3] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[2][i] != "qwerty") {
					cout << A[2][i] << endl << endl;
					A[2][i] = "qwerty";
					F[3]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "Г" & F[4] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[3][i] != "qwerty") {
					cout << A[3][i] << endl << endl;
					A[3][i] = "qwerty";
					F[4]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "Д" & F[5] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[4][i] != "qwerty") {
					cout << A[4][i] << endl << endl;
					A[4][i] = "qwerty";
					F[5]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "Е" & F[6] != 11){
			while (w == 1) {
				i = rand() % 11;
				if (A[5][i] != "qwerty") {
					cout << A[5][i] << endl << endl;
					A[5][i] = "qwerty";
					F[6]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "Ж" & F[7] != 7){
			while (w == 1) {
				i = rand() % 7;
				if (A[6][i] != "qwerty") {
					cout << A[6][i] << endl << endl;
					A[6][i] = "qwerty";
					F[7]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "З" & F[8] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[7][i] != "qwerty") {
					cout << A[7][i] << endl << endl;
					A[7][i] = "qwerty";
					F[8]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "И" & F[9] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[8][i] != "qwerty") {
					cout << A[8][i] << endl << endl;
					A[8][i] = "qwerty";
					F[9]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "Й" & F[10] != 3){
			while (w == 1) {
				i = rand() % 3;
				if (A[9][i] != "qwerty") {
					cout << A[9][i] << endl << endl;
					A[9][i] = "qwerty";
					F[10]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "К" & F[11] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[10][i] != "qwerty") {
					cout << A[10][i] << endl << endl;
					A[10][i] = "qwerty";
					F[11]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "Л" & F[12] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[11][i] != "qwerty") {
					cout << A[11][i] << endl << endl;
					A[11][i] = "qwerty";
					F[13]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "М" & F[13] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[12][i] != "qwerty") {
					cout << A[12][i] << endl << endl;
					A[12][i] = "qwerty";
					F[14]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "Н" & F[14] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[13][i] != "qwerty") {
					cout << A[13][i] << endl << endl;
					A[13][i] = "qwerty";
					F[14]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "О" & F[15] != 9){
			while (w == 1) {
				i = rand() % 9;
				if (A[14][i] != "qwerty") {
					cout << A[14][i] << endl << endl;
					A[14][i] = "qwerty";
					F[15]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "П" & F[16] != 14){
			while (w == 1) {
				i = rand() % 14;
				if (A[15][i] != "qwerty") {
					cout << A[15][i] << endl << endl;
					A[15][i] = "qwerty";
					F[16]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "Р" & F[17] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[16][i] != "qwerty") {
					cout << A[16][i] << endl << endl;
					A[16][i] = "qwerty";
					F[17]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "С" & F[18] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[17][i] != "qwerty") {
					cout << A[17][i] << endl << endl;
					A[17][i] = "qwerty";
					F[18]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "Т" & F[19] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[18][i] != "qwerty") {
					cout << A[18][i] << endl << endl;
					A[18][i] = "qwerty";
					F[19]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "У" & F[20] != 9){
			while (w == 1) {
				i = rand() % 9;
				if (A[19][i] != "qwerty") {
					cout << A[19][i] << endl << endl;
					A[19][i] = "qwerty";
					F[20]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "Ф" & F[21] != 9){
			while (w == 1) {
				i = rand() % 9;
				if (A[20][i] != "qwerty") {
					cout << A[20][i] << endl << endl;
					A[20][i] = "qwerty";
					F[21]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "Х" & F[22] != 10){
			while (w == 1) {
				i = rand() % 10;
				if (A[21][i] != "qwerty") {
					cout << A[21][i] << endl << endl;
					A[21][i] = "qwerty";
					F[22]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "Ц" & F[23] != 6){
			while (w == 1) {
				i = rand() % 6;
				if (A[22][i] != "qwerty") {
					cout << A[22][i] << endl << endl;
					A[22][i] = "qwerty";
					F[23]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "Ч" & F[24] != 10){
			while (w == 1) {
				i = rand() % 10;
				if (A[23][i] != "qwerty") {
					cout << A[23][i] << endl << endl;
					A[23][i] = "qwerty";
					F[24]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "Ш" & F[25] != 8){
			while (w == 1) {
				i = rand() % 8;
				if (A[24][i] != "qwerty") {
					cout << A[24][i] << endl << endl;
					A[24][i] = "qwerty";
					F[25]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "Щ" & F[26] != 4){
			while (w == 1) {
				i = rand() % 4;
				if (A[25][i] != "qwerty") {
					cout << A[25][i] << endl << endl;
					A[25][i] = "qwerty";
					F[26]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "Э" & F[27] != 7){
			while (w == 1) {
				i = rand() % 7;
				if (A[26][i] != "qwerty") {
					cout << A[26][i] << endl << endl;
					A[26][i] = "qwerty";
					F[27]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "Ю" & F[28] != 5){
			while (w == 1) {
				i = rand() % 5;
				if (A[27][i] != "qwerty") {
					cout << A[27][i] << endl << endl;
					A[27][i] = "qwerty";
					F[28]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "Я" & F[29] != 6){
			while (w == 1) {
				i = rand() % 6;
				if (A[28][i] != "qwerty") {
					cout << A[28][i] << endl << endl;
					A[28][i] = "qwerty";
					F[29]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "X"){
			p = 0;
		}
		else {
			cout << "Повторите запрос" << endl << "(Вводить нужно русские, заглавные буквы.)" << endl << endl;
			system("pause");
			system("cls");
		}
	}

	return 0;
}
