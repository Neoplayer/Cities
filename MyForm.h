#pragma once
#include <iostream>
#include <string>  
#include <ctime>
#include <msclr/marshal_cppstd.h>

using namespace std;
using namespace msclr::interop;

namespace Cities_1_0 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(88, 83);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Генерация";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(88, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(75, 38);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(12, 120);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(224, 38);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(248, 170);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Города";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		string A[29][15] = {
			{ "Архангельск", "Астрахань", "Амстердам", "Афины", "Алдан", "Аральск", "Артемовск", "Астана", "Ачинск", "Анадырь", "Амман", "Алофи", "Алжир", "Авила", "Абиджан" },
			{ "Багдад", "Баку", "Балтийск", "Банжул", "Барселона", "Белгород", "Белград", "Берлин", "Берн", "Благовещенск", "Бразилиа", "Будапешт", "Бухарест", "Будва", "Брянск" },
			{ "Вавилон", "Валдай", "Вашингтон", "Вена", "Венеция", "Вильнюс", "Вилюйск", "Винница", "Владивосток", "Владикавказ", "Волгоград", "Воронеж", "Выборг", "Вязьма", "Волжск" },
			{ "Гаага", "Гамбург", "Гангток", "Гиза", "Голливуд", "Грозный", "Гуанчжоу", "Гудым", "Горно-Алтайск", "Гонолулу", "Гагры", "Гавана", "Гиза", "Глазго", "Гонолулу" },
			{ "Даллас", "Дамаск", "Дербент", "Джорджтаун", "Дивногорск", "Дмитров", "Донецк", "Дубай", "Дубна", "Дюссельдорф", "Дублин", "Джуба", "Джезказган", "Джайпур", "Дейтон" },
			{ "Екатеринбург", "Евпатория", "Егорьевск", "Екабпилс", "Елабуга", "Елец", "Елизово", "Енакиево", "Енисейск", "Ереван", "Ерофей Павлович" },
			{ "Железногорск", "Женева", "Жлобино", "Жерона", "Жилинда", "Жуис-де-Фора", "Жуковский" },
			{ "Запорожье", "Зеленогорск", "Завидово", "Загреб", "Зальцбург", "Занзибар", "Заозерный", "Зарайск", "Звездный", "Зейла", "Зигиншор", "Златоуст", "Знаменск", "Зуэрат", "Зырянка" },
			{ "Ибица", "Иваново", "Иерусалим", "Ижевск", "Измаил", "Илулиссат", "Ингольштадт", "Инсбрук", "Иркутск", "Исиномаки", "Исламабад", "Иу", "Исфахан", "Иркутск", "Иркутск" },
			{ "Йорк", "Йоханнесбург", "Йошкар-Ола" },
			{ "Казань", "Каир", "Кайеркан", "Кабул", "Калининград", "Калуга", "Камышин", "Канары", "Караганда", "Каспийск", "Киев", "Кировск", "Кишинев", "Коломна", "Копенгаген" },
			{ "Лас Геел", "Лас-Вегас", "Лас-Медулас", "Лаутока", "Лахор", "Лесосибирск", "Ливерпуль", "Лимож", "Липецк", "Лондон", "Лос-Анджелес", "Луганск", "Луцк", "Львов", "Люксембург" },
			{ "Магадан", "Мадрид", "Мариинск", "Мариуполь", "Махачкала", "Медина", "Милан", "Минск", "Монреаль", "Москва", "Мурманск", "Мюнхен", "Мостар", "Мирный", "Мехико" },
			{ "Нагасаки", "Набережные Челны", "Нади", "Нальчик", "Нерюнгри", "Нижний Новгород", "Нижнеудинск", "Николаев", "Новгород Великий", "Новосибирск", "Норильск", "Нью-Йорк", "Новый Орлеан", "Ницца", "Николаевск" },
			{ "Одесса", "Оксфорд", "Омск", "Орёл", "Оренбург", "Осло", "Оттава", "Орша", "Олбери" },
			{ "Палермо", "Палех", "Панама-сити", "Париж", "Пекин", "Пермь", "Петрозаводск", "Петропавловск-Камчатский", "Плес", "Подольск", "Порту", "Прага", "Приморск", "Пятигорск" },
			{ "Рига", "Рим", "Рио-де-Жанейро", "Ровно", "Родригес", "Ростов-на-Дону", "Ростов", "Рыбинск", "Рязань", "Роттердам", "Ржев", "Рыльск", "Рославль", "Радужный", "Раменское" },
			{ "Сан-Диего", "Санкт-Петербург", "Сан-Франциско", "Сызрань", "Ставрополь", "Спрингс", "Спарта", "Сочи", "Сосновый Бор", "Сокольники", "Солнечногорск", "Светлогорск", "Сумы", "Суэц", "Сургут" },
			{ "Тверь", "Тбилиси", "Терек", "Токио", "Томск", "Тула", "Тусон", "Тюмень", "Тбилиси", "Тирасполь", "Тольятти", "Тосно", "Тунис", "Турку", "Тында" },
			{ "Углегорск", "Уральск", "Уфа", "Ухань", "Умань", "Ульяновск", "Узген", "Уагадугу", "Уварово" },
			{ "Фэрбенкс", "Фокино", "Фигерас", "Фролово", "Феррара", "Фамагуста", "Фатеж", "Фритаун", "Фрибур" },
			{ "Хабаровск", "Ханты-Мансийск", "Хартфорд ", "Херсон", "Химки", "Хошимин ", "Хониара", "Холм", "Хилок", "Хеб" },
			{ "Цивильск", "Цюрих", "Цимлянск ", "Цинциннати", "Цукуба", "Целле" },
			{ "Чайковский", "Черногорск", "Челябинск", "Чикаго", "Чита", "Чулым ", "Честер", "Чёрный Яр ", "Чермоз", "Череповец" },
			{ "Шанхай", "Шахтёрск", "Шэньян", "Штральзунд", "Шлиссельбург", "Шацк", "Шадринск", "Шагонар" },
			{ "Щёкино", "Щёлково ", "Щучье", "Щигры" },
			{ "Эдинбург", "Эссен", "Эрзурум", "Энгельс ", "Электрогорск", "Экибастуз ", "Эдинбург" },
			{ "Юрга", "Юджин", "Юрмала", "Южноуральск", "Южно-Сахалинск " },
			{ "Якутск", "Ялта", "Яранск", "Ярославль", "Яссы ", "Ясногорск" }
		};

		String^ Bukva;
		int i;

		srand(time(0));

		Bukva = textBox1->Text;
		if (Bukva == "А") {
				i = rand() % 15;
				String^ text = marshal_as<String^>(A[0][i]);
				textBox2->Text = text;
			
		}
		else if (Bukva == "Б") {
			i = rand() % 15;
			String^ text = marshal_as<String^>(A[1][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "В") {
			i = rand() % 15;
			String^ text = marshal_as<String^>(A[2][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "Г") {
			i = rand() % 15;
			String^ text = marshal_as<String^>(A[3][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "Д") {
			i = rand() % 15;
			String^ text = marshal_as<String^>(A[4][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "Е") {
			i = rand() % 11;
			String^ text = marshal_as<String^>(A[5][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "Ж") {
			i = rand() % 7;
			String^ text = marshal_as<String^>(A[6][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "З") {
			i = rand() % 15;
			String^ text = marshal_as<String^>(A[7][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "И") {
			i = rand() % 15;
			String^ text = marshal_as<String^>(A[8][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "Й") {
			i = rand() % 3;
			String^ text = marshal_as<String^>(A[9][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "К") {
			i = rand() % 15;
			String^ text = marshal_as<String^>(A[10][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "Л") {
			i = rand() % 15;
			String^ text = marshal_as<String^>(A[11][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "М") {
			i = rand() % 15;
			String^ text = marshal_as<String^>(A[12][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "Н") {
			i = rand() % 15;
			String^ text = marshal_as<String^>(A[13][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "О") {
			i = rand() % 9;
			String^ text = marshal_as<String^>(A[14][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "П") {
			i = rand() % 14;
			String^ text = marshal_as<String^>(A[15][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "Р") {
			i = rand() % 15;
			String^ text = marshal_as<String^>(A[16][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "С") {
			i = rand() % 15;
			String^ text = marshal_as<String^>(A[17][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "Т") {
			i = rand() % 15;
			String^ text = marshal_as<String^>(A[18][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "У") {
			i = rand() % 9;
			String^ text = marshal_as<String^>(A[19][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "Ф") {
			i = rand() % 9;
			String^ text = marshal_as<String^>(A[20][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "Х") {
			i = rand() % 10;
			String^ text = marshal_as<String^>(A[21][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "Ц") {
			i = rand() % 6;
			String^ text = marshal_as<String^>(A[22][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "Ч") {
			i = rand() % 10;
			String^ text = marshal_as<String^>(A[23][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "Ш") {
			i = rand() % 8;
			String^ text = marshal_as<String^>(A[24][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "Щ") {
			i = rand() % 4;
			String^ text = marshal_as<String^>(A[25][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "Э") {
			i = rand() % 7;
			String^ text = marshal_as<String^>(A[26][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "Ю") {
			i = rand() % 5;
			String^ text = marshal_as<String^>(A[27][i]);
			textBox2->Text = text;
		}
		else if (Bukva == "Я") {
			i = rand() % 6;
			String^ text = marshal_as<String^>(A[28][i]);
			textBox2->Text = text;
		}
	
	}
	};
}
