#pragma once

namespace NAS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ newfileButton;
	private: System::Windows::Forms::Button^ addButton;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->newfileButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(478, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите данные о сетевом хранилище (NAS)\r\n";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(279, 85);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(142, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(14, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(241, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Кол-во отсеков для дисков";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(14, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(225, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Разъёмы (через запятую)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(14, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(246, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Производитель процессора";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(279, 130);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(142, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(279, 174);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(142, 22);
			this->textBox3->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(14, 219);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(178, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Модель процессора";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(14, 265);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(216, 20);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Кол-во ядер процессора";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(13, 312);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(247, 20);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Объём оперативной памяти";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(14, 360);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(221, 20);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Тип оперативной памяти";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(279, 217);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(142, 22);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(279, 263);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(142, 22);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(279, 310);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(142, 22);
			this->textBox6->TabIndex = 13;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(279, 358);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(142, 22);
			this->textBox7->TabIndex = 14;
			// 
			// newfileButton
			// 
			this->newfileButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->newfileButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->newfileButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->newfileButton->ForeColor = System::Drawing::Color::White;
			this->newfileButton->Location = System::Drawing::Point(12, 424);
			this->newfileButton->Name = L"newfileButton";
			this->newfileButton->Size = System::Drawing::Size(707, 61);
			this->newfileButton->TabIndex = 16;
			this->newfileButton->Text = L"Создать новый файл";
			this->newfileButton->UseVisualStyleBackColor = false;
			// 
			// addButton
			// 
			this->addButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->addButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->addButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addButton->ForeColor = System::Drawing::Color::White;
			this->addButton->Location = System::Drawing::Point(12, 501);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(707, 61);
			this->addButton->TabIndex = 17;
			this->addButton->Text = L"Добавить запись в файл";
			this->addButton->UseVisualStyleBackColor = false;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->ClientSize = System::Drawing::Size(732, 583);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->newfileButton);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm2";
			this->Text = L"Создать файл";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
