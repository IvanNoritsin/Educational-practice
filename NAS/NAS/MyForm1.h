#pragma once

#include "MyForm2.h"

namespace NAS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ infoLabel;
	protected:

	private: System::Windows::Forms::Button^ aboutButton;
	private: System::Windows::Forms::Button^ searchButton;
	private: System::Windows::Forms::Button^ makeButton;

	protected:


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
			this->infoLabel = (gcnew System::Windows::Forms::Label());
			this->aboutButton = (gcnew System::Windows::Forms::Button());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->makeButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// infoLabel
			// 
			this->infoLabel->BackColor = System::Drawing::Color::White;
			this->infoLabel->Location = System::Drawing::Point(12, 55);
			this->infoLabel->Name = L"infoLabel";
			this->infoLabel->Size = System::Drawing::Size(708, 328);
			this->infoLabel->TabIndex = 0;
			// 
			// aboutButton
			// 
			this->aboutButton->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->aboutButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->aboutButton->Location = System::Drawing::Point(12, 12);
			this->aboutButton->Name = L"aboutButton";
			this->aboutButton->Size = System::Drawing::Size(151, 28);
			this->aboutButton->TabIndex = 1;
			this->aboutButton->Text = L"О разработчике";
			this->aboutButton->UseVisualStyleBackColor = false;
			this->aboutButton->Click += gcnew System::EventHandler(this, &MyForm1::aboutButton_Click);
			// 
			// searchButton
			// 
			this->searchButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->searchButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->searchButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->searchButton->ForeColor = System::Drawing::Color::White;
			this->searchButton->Location = System::Drawing::Point(13, 410);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(707, 61);
			this->searchButton->TabIndex = 2;
			this->searchButton->Text = L"Поиск NAS с оперативной памятью больше или равно 1024 МБ\r\n";
			this->searchButton->UseVisualStyleBackColor = false;
			this->searchButton->Click += gcnew System::EventHandler(this, &MyForm1::searchButton_Click);
			// 
			// makeButton
			// 
			this->makeButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->makeButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->makeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->makeButton->ForeColor = System::Drawing::Color::White;
			this->makeButton->Location = System::Drawing::Point(12, 491);
			this->makeButton->Name = L"makeButton";
			this->makeButton->Size = System::Drawing::Size(707, 61);
			this->makeButton->TabIndex = 3;
			this->makeButton->Text = L"Создать файл";
			this->makeButton->UseVisualStyleBackColor = false;
			this->makeButton->Click += gcnew System::EventHandler(this, &MyForm1::makeButton_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->ClientSize = System::Drawing::Size(732, 583);
			this->Controls->Add(this->makeButton);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->aboutButton);
			this->Controls->Add(this->infoLabel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NAS";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void aboutButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(this, "Разработчик: Норицин Иван Алексеевич\nГруппа: ИА-232", "О разработчике", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void makeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm2^ form2 = gcnew MyForm2();
		form2->ShowDialog();
	}
	private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
};
}
