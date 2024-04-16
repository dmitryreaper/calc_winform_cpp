#pragma once
#include <cmath>
#include <string>

namespace Lab20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->Activated += gcnew System::EventHandler(this, &MyForm::MyForm_Activated);
			textBoxInput->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxInput_TextChanged);
			textBoxInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBoxInput_KeyPress);
		}

	private: System::Void MyForm_Activated(System::Object^ sender, System::EventArgs^ e) {
		// Установить фокус на textBoxInput
		textBoxInput->Focus();
	}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: double firstNum;
	private: char currentOperation;


	private: System::Windows::Forms::Button^ buttonNum7;
	private: System::Windows::Forms::Button^ buttonNum3;
	private: System::Windows::Forms::Button^ buttonNum2;
	private: System::Windows::Forms::Button^ buttonNum1;
	private: System::Windows::Forms::Button^ buttonSubtract;
	private: System::Windows::Forms::Button^ buttonNum6;
	private: System::Windows::Forms::Button^ buttonNum5;
	private: System::Windows::Forms::Button^ buttonNum4;
	private: System::Windows::Forms::Button^ buttonNum0;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Button^ buttonNum9;
	private: System::Windows::Forms::Button^ buttonNum8;
	private: System::Windows::Forms::Button^ buttonEqual;
	private: System::Windows::Forms::Button^ buttonSquareRoot;
	private: System::Windows::Forms::Button^ buttonPower;
	private: System::Windows::Forms::Button^ buttonPoint;
	private: System::Windows::Forms::Label^ labelOutput;
	private: System::Windows::Forms::Button^ buttonMultiply;



	private: System::Windows::Forms::Button^ buttonDivide;
	private: System::Windows::Forms::Button^ buttonPercent;
	private: System::Windows::Forms::Button^ buttonNegative;
	private: System::Windows::Forms::Button^ buttonAllClear;





	private: System::Windows::Forms::TextBox^ textBoxInput;





	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TabPage^ tabPageDev;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ labelDev;
	private: System::Windows::Forms::TabPage^ tabPageCalc;
	private: System::Windows::Forms::TabControl^ tabControlLab;

	private: System::ComponentModel::IContainer^ components;




	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->buttonNum7 = (gcnew System::Windows::Forms::Button());
			this->buttonNum3 = (gcnew System::Windows::Forms::Button());
			this->buttonNum2 = (gcnew System::Windows::Forms::Button());
			this->buttonNum1 = (gcnew System::Windows::Forms::Button());
			this->buttonSubtract = (gcnew System::Windows::Forms::Button());
			this->buttonNum6 = (gcnew System::Windows::Forms::Button());
			this->buttonNum5 = (gcnew System::Windows::Forms::Button());
			this->buttonNum4 = (gcnew System::Windows::Forms::Button());
			this->buttonNum0 = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonMultiply = (gcnew System::Windows::Forms::Button());
			this->buttonNum9 = (gcnew System::Windows::Forms::Button());
			this->buttonNum8 = (gcnew System::Windows::Forms::Button());
			this->buttonEqual = (gcnew System::Windows::Forms::Button());
			this->buttonSquareRoot = (gcnew System::Windows::Forms::Button());
			this->buttonPower = (gcnew System::Windows::Forms::Button());
			this->buttonPoint = (gcnew System::Windows::Forms::Button());
			this->labelOutput = (gcnew System::Windows::Forms::Label());
			this->buttonDivide = (gcnew System::Windows::Forms::Button());
			this->buttonPercent = (gcnew System::Windows::Forms::Button());
			this->buttonNegative = (gcnew System::Windows::Forms::Button());
			this->buttonAllClear = (gcnew System::Windows::Forms::Button());
			this->textBoxInput = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->tabPageDev = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelDev = (gcnew System::Windows::Forms::Label());
			this->tabPageCalc = (gcnew System::Windows::Forms::TabPage());
			this->tabControlLab = (gcnew System::Windows::Forms::TabControl());
			this->tabPageDev->SuspendLayout();
			this->tabPageCalc->SuspendLayout();
			this->tabControlLab->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonNum7
			// 
			this->buttonNum7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonNum7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum7->Location = System::Drawing::Point(6, 171);
			this->buttonNum7->Name = L"buttonNum7";
			this->buttonNum7->Size = System::Drawing::Size(70, 60);
			this->buttonNum7->TabIndex = 0;
			this->buttonNum7->Text = L"7";
			this->buttonNum7->UseVisualStyleBackColor = false;
			this->buttonNum7->UseWaitCursor = true;
			this->buttonNum7->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// buttonNum3
			// 
			this->buttonNum3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonNum3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum3->Location = System::Drawing::Point(158, 303);
			this->buttonNum3->Name = L"buttonNum3";
			this->buttonNum3->Size = System::Drawing::Size(70, 60);
			this->buttonNum3->TabIndex = 1;
			this->buttonNum3->Text = L"3";
			this->buttonNum3->UseVisualStyleBackColor = false;
			this->buttonNum3->UseWaitCursor = true;
			this->buttonNum3->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// buttonNum2
			// 
			this->buttonNum2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonNum2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum2->Location = System::Drawing::Point(82, 303);
			this->buttonNum2->Name = L"buttonNum2";
			this->buttonNum2->Size = System::Drawing::Size(70, 60);
			this->buttonNum2->TabIndex = 2;
			this->buttonNum2->Text = L"2";
			this->buttonNum2->UseVisualStyleBackColor = false;
			this->buttonNum2->UseWaitCursor = true;
			this->buttonNum2->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// buttonNum1
			// 
			this->buttonNum1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonNum1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum1->Location = System::Drawing::Point(6, 303);
			this->buttonNum1->Name = L"buttonNum1";
			this->buttonNum1->Size = System::Drawing::Size(70, 60);
			this->buttonNum1->TabIndex = 3;
			this->buttonNum1->Text = L"1";
			this->buttonNum1->UseVisualStyleBackColor = false;
			this->buttonNum1->UseWaitCursor = true;
			this->buttonNum1->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// buttonSubtract
			// 
			this->buttonSubtract->BackColor = System::Drawing::Color::Beige;
			this->buttonSubtract->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSubtract->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSubtract->Location = System::Drawing::Point(233, 237);
			this->buttonSubtract->Name = L"buttonSubtract";
			this->buttonSubtract->Size = System::Drawing::Size(70, 60);
			this->buttonSubtract->TabIndex = 4;
			this->buttonSubtract->Text = L"-";
			this->buttonSubtract->UseVisualStyleBackColor = false;
			this->buttonSubtract->UseWaitCursor = true;
			this->buttonSubtract->Click += gcnew System::EventHandler(this, &MyForm::buttonSubstract_Click);
			// 
			// buttonNum6
			// 
			this->buttonNum6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonNum6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum6->Location = System::Drawing::Point(158, 237);
			this->buttonNum6->Name = L"buttonNum6";
			this->buttonNum6->Size = System::Drawing::Size(70, 60);
			this->buttonNum6->TabIndex = 5;
			this->buttonNum6->Text = L"6";
			this->buttonNum6->UseVisualStyleBackColor = false;
			this->buttonNum6->UseWaitCursor = true;
			this->buttonNum6->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// buttonNum5
			// 
			this->buttonNum5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonNum5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum5->Location = System::Drawing::Point(82, 237);
			this->buttonNum5->Name = L"buttonNum5";
			this->buttonNum5->Size = System::Drawing::Size(70, 60);
			this->buttonNum5->TabIndex = 6;
			this->buttonNum5->Text = L"5";
			this->buttonNum5->UseVisualStyleBackColor = false;
			this->buttonNum5->UseWaitCursor = true;
			this->buttonNum5->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// buttonNum4
			// 
			this->buttonNum4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonNum4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum4->Location = System::Drawing::Point(6, 237);
			this->buttonNum4->Name = L"buttonNum4";
			this->buttonNum4->Size = System::Drawing::Size(70, 60);
			this->buttonNum4->TabIndex = 7;
			this->buttonNum4->Text = L"4";
			this->buttonNum4->UseVisualStyleBackColor = false;
			this->buttonNum4->UseWaitCursor = true;
			this->buttonNum4->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// buttonNum0
			// 
			this->buttonNum0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonNum0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum0->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum0->Location = System::Drawing::Point(6, 369);
			this->buttonNum0->Name = L"buttonNum0";
			this->buttonNum0->Size = System::Drawing::Size(70, 60);
			this->buttonNum0->TabIndex = 8;
			this->buttonNum0->Text = L"0";
			this->buttonNum0->UseVisualStyleBackColor = false;
			this->buttonNum0->UseWaitCursor = true;
			this->buttonNum0->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::Beige;
			this->buttonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAdd->Location = System::Drawing::Point(233, 303);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(70, 60);
			this->buttonAdd->TabIndex = 9;
			this->buttonAdd->Text = L"+";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->UseWaitCursor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::buttonAdd_Click);
			// 
			// buttonMultiply
			// 
			this->buttonMultiply->BackColor = System::Drawing::Color::Beige;
			this->buttonMultiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMultiply->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMultiply->Location = System::Drawing::Point(233, 171);
			this->buttonMultiply->Name = L"buttonMultiply";
			this->buttonMultiply->Size = System::Drawing::Size(70, 60);
			this->buttonMultiply->TabIndex = 10;
			this->buttonMultiply->Text = L"*";
			this->buttonMultiply->UseVisualStyleBackColor = false;
			this->buttonMultiply->UseWaitCursor = true;
			this->buttonMultiply->Click += gcnew System::EventHandler(this, &MyForm::buttonMultiply_Click);
			// 
			// buttonNum9
			// 
			this->buttonNum9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonNum9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum9->Location = System::Drawing::Point(157, 171);
			this->buttonNum9->Name = L"buttonNum9";
			this->buttonNum9->Size = System::Drawing::Size(70, 60);
			this->buttonNum9->TabIndex = 11;
			this->buttonNum9->Text = L"9";
			this->buttonNum9->UseVisualStyleBackColor = false;
			this->buttonNum9->UseWaitCursor = true;
			this->buttonNum9->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// buttonNum8
			// 
			this->buttonNum8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonNum8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum8->Location = System::Drawing::Point(82, 171);
			this->buttonNum8->Name = L"buttonNum8";
			this->buttonNum8->Size = System::Drawing::Size(70, 60);
			this->buttonNum8->TabIndex = 12;
			this->buttonNum8->Text = L"8";
			this->buttonNum8->UseVisualStyleBackColor = false;
			this->buttonNum8->UseWaitCursor = true;
			this->buttonNum8->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// buttonEqual
			// 
			this->buttonEqual->BackColor = System::Drawing::Color::Beige;
			this->buttonEqual->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEqual->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonEqual->Location = System::Drawing::Point(233, 369);
			this->buttonEqual->Name = L"buttonEqual";
			this->buttonEqual->Size = System::Drawing::Size(70, 60);
			this->buttonEqual->TabIndex = 13;
			this->buttonEqual->Text = L"=";
			this->buttonEqual->UseVisualStyleBackColor = false;
			this->buttonEqual->UseWaitCursor = true;
			this->buttonEqual->Click += gcnew System::EventHandler(this, &MyForm::buttonEqual_Click);
			// 
			// buttonSquareRoot
			// 
			this->buttonSquareRoot->BackColor = System::Drawing::Color::Beige;
			this->buttonSquareRoot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSquareRoot->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSquareRoot->Location = System::Drawing::Point(157, 369);
			this->buttonSquareRoot->Name = L"buttonSquareRoot";
			this->buttonSquareRoot->Size = System::Drawing::Size(35, 60);
			this->buttonSquareRoot->TabIndex = 14;
			this->buttonSquareRoot->Text = L"√";
			this->buttonSquareRoot->UseVisualStyleBackColor = false;
			this->buttonSquareRoot->UseWaitCursor = true;
			this->buttonSquareRoot->Click += gcnew System::EventHandler(this, &MyForm::buttonSquareRoot_Click);
			// 
			// buttonPower
			// 
			this->buttonPower->BackColor = System::Drawing::Color::Beige;
			this->buttonPower->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPower->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPower->Location = System::Drawing::Point(193, 369);
			this->buttonPower->Name = L"buttonPower";
			this->buttonPower->Size = System::Drawing::Size(35, 60);
			this->buttonPower->TabIndex = 15;
			this->buttonPower->Text = L"^";
			this->buttonPower->UseVisualStyleBackColor = false;
			this->buttonPower->UseWaitCursor = true;
			this->buttonPower->Click += gcnew System::EventHandler(this, &MyForm::buttonPower_Click);
			// 
			// buttonPoint
			// 
			this->buttonPoint->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonPoint->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPoint->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPoint->Location = System::Drawing::Point(82, 369);
			this->buttonPoint->Name = L"buttonPoint";
			this->buttonPoint->Size = System::Drawing::Size(70, 60);
			this->buttonPoint->TabIndex = 16;
			this->buttonPoint->Text = L".";
			this->buttonPoint->UseVisualStyleBackColor = false;
			this->buttonPoint->UseWaitCursor = true;
			this->buttonPoint->Click += gcnew System::EventHandler(this, &MyForm::buttonPoint_Click);
			// 
			// labelOutput
			// 
			this->labelOutput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelOutput->AutoEllipsis = true;
			this->labelOutput->BackColor = System::Drawing::Color::DarkGray;
			this->labelOutput->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->labelOutput->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelOutput->Location = System::Drawing::Point(6, 24);
			this->labelOutput->MaximumSize = System::Drawing::Size(297, 73);
			this->labelOutput->MinimumSize = System::Drawing::Size(297, 73);
			this->labelOutput->Name = L"labelOutput";
			this->labelOutput->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->labelOutput->Size = System::Drawing::Size(297, 73);
			this->labelOutput->TabIndex = 17;
			this->labelOutput->Text = L"0";
			this->labelOutput->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->labelOutput->UseWaitCursor = true;
			// 
			// buttonDivide
			// 
			this->buttonDivide->BackColor = System::Drawing::Color::Beige;
			this->buttonDivide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDivide->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDivide->ForeColor = System::Drawing::SystemColors::ControlText;
			this->buttonDivide->Location = System::Drawing::Point(233, 105);
			this->buttonDivide->Name = L"buttonDivide";
			this->buttonDivide->Size = System::Drawing::Size(70, 60);
			this->buttonDivide->TabIndex = 21;
			this->buttonDivide->Text = L"/";
			this->buttonDivide->UseVisualStyleBackColor = false;
			this->buttonDivide->UseWaitCursor = true;
			this->buttonDivide->Click += gcnew System::EventHandler(this, &MyForm::buttonDivision_Click);
			// 
			// buttonPercent
			// 
			this->buttonPercent->BackColor = System::Drawing::Color::WhiteSmoke;
			this->buttonPercent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPercent->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPercent->Location = System::Drawing::Point(157, 105);
			this->buttonPercent->Name = L"buttonPercent";
			this->buttonPercent->Size = System::Drawing::Size(70, 60);
			this->buttonPercent->TabIndex = 18;
			this->buttonPercent->Text = L"%";
			this->buttonPercent->UseVisualStyleBackColor = false;
			this->buttonPercent->UseWaitCursor = true;
			this->buttonPercent->Click += gcnew System::EventHandler(this, &MyForm::buttonPercent_Click);
			// 
			// buttonNegative
			// 
			this->buttonNegative->BackColor = System::Drawing::Color::WhiteSmoke;
			this->buttonNegative->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNegative->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNegative->Location = System::Drawing::Point(82, 105);
			this->buttonNegative->Name = L"buttonNegative";
			this->buttonNegative->Size = System::Drawing::Size(70, 60);
			this->buttonNegative->TabIndex = 19;
			this->buttonNegative->Text = L"+/-";
			this->buttonNegative->UseVisualStyleBackColor = false;
			this->buttonNegative->UseWaitCursor = true;
			this->buttonNegative->Click += gcnew System::EventHandler(this, &MyForm::buttonNegative_Click);
			// 
			// buttonAllClear
			// 
			this->buttonAllClear->BackColor = System::Drawing::Color::WhiteSmoke;
			this->buttonAllClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAllClear->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAllClear->Location = System::Drawing::Point(6, 105);
			this->buttonAllClear->Name = L"buttonAllClear";
			this->buttonAllClear->Size = System::Drawing::Size(70, 60);
			this->buttonAllClear->TabIndex = 20;
			this->buttonAllClear->Text = L"AC";
			this->buttonAllClear->UseVisualStyleBackColor = false;
			this->buttonAllClear->UseWaitCursor = true;
			this->buttonAllClear->Click += gcnew System::EventHandler(this, &MyForm::buttonAllClear_Click);
			// 
			// textBoxInput
			// 
			this->textBoxInput->Location = System::Drawing::Point(8, 24);
			this->textBoxInput->Name = L"textBoxInput";
			this->textBoxInput->Size = System::Drawing::Size(220, 27);
			this->textBoxInput->TabIndex = 22;
			this->textBoxInput->UseWaitCursor = true;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// tabPageDev
			// 
			this->tabPageDev->BackColor = System::Drawing::Color::Gray;
			this->tabPageDev->Controls->Add(this->label2);
			this->tabPageDev->Controls->Add(this->labelDev);
			this->tabPageDev->Location = System::Drawing::Point(4, 29);
			this->tabPageDev->Name = L"tabPageDev";
			this->tabPageDev->Padding = System::Windows::Forms::Padding(3);
			this->tabPageDev->Size = System::Drawing::Size(309, 454);
			this->tabPageDev->TabIndex = 1;
			this->tabPageDev->Text = L"Разработчик";
			this->tabPageDev->UseWaitCursor = true;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(12, 385);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(305, 61);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Версия программы 1.0";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->UseWaitCursor = true;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// labelDev
			// 
			this->labelDev->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelDev->ForeColor = System::Drawing::Color::Black;
			this->labelDev->Location = System::Drawing::Point(17, 3);
			this->labelDev->Name = L"labelDev";
			this->labelDev->Size = System::Drawing::Size(289, 92);
			this->labelDev->TabIndex = 0;
			this->labelDev->Text = L"Эту программу написал Дубновицкий Д.И. ";
			this->labelDev->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelDev->UseWaitCursor = true;
			this->labelDev->Click += gcnew System::EventHandler(this, &MyForm::labelDev_Click);
			// 
			// tabPageCalc
			// 
			this->tabPageCalc->BackColor = System::Drawing::Color::Gray;
			this->tabPageCalc->Controls->Add(this->labelOutput);
			this->tabPageCalc->Controls->Add(this->buttonPoint);
			this->tabPageCalc->Controls->Add(this->buttonDivide);
			this->tabPageCalc->Controls->Add(this->buttonNum0);
			this->tabPageCalc->Controls->Add(this->buttonNum7);
			this->tabPageCalc->Controls->Add(this->buttonNum4);
			this->tabPageCalc->Controls->Add(this->buttonPower);
			this->tabPageCalc->Controls->Add(this->buttonAllClear);
			this->tabPageCalc->Controls->Add(this->buttonNum5);
			this->tabPageCalc->Controls->Add(this->buttonAdd);
			this->tabPageCalc->Controls->Add(this->buttonNum3);
			this->tabPageCalc->Controls->Add(this->buttonNum6);
			this->tabPageCalc->Controls->Add(this->textBoxInput);
			this->tabPageCalc->Controls->Add(this->buttonSquareRoot);
			this->tabPageCalc->Controls->Add(this->buttonNum2);
			this->tabPageCalc->Controls->Add(this->buttonPercent);
			this->tabPageCalc->Controls->Add(this->buttonNum8);
			this->tabPageCalc->Controls->Add(this->buttonMultiply);
			this->tabPageCalc->Controls->Add(this->buttonNegative);
			this->tabPageCalc->Controls->Add(this->buttonSubtract);
			this->tabPageCalc->Controls->Add(this->buttonNum9);
			this->tabPageCalc->Controls->Add(this->buttonEqual);
			this->tabPageCalc->Controls->Add(this->buttonNum1);
			this->tabPageCalc->Location = System::Drawing::Point(4, 29);
			this->tabPageCalc->Name = L"tabPageCalc";
			this->tabPageCalc->Padding = System::Windows::Forms::Padding(3);
			this->tabPageCalc->Size = System::Drawing::Size(309, 454);
			this->tabPageCalc->TabIndex = 0;
			this->tabPageCalc->Text = L"Калькулятор";
			this->tabPageCalc->UseWaitCursor = true;
			// 
			// tabControlLab
			// 
			this->tabControlLab->Controls->Add(this->tabPageCalc);
			this->tabControlLab->Controls->Add(this->tabPageDev);
			this->tabControlLab->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->tabControlLab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControlLab->Location = System::Drawing::Point(3, 9);
			this->tabControlLab->Multiline = true;
			this->tabControlLab->Name = L"tabControlLab";
			this->tabControlLab->SelectedIndex = 0;
			this->tabControlLab->Size = System::Drawing::Size(317, 487);
			this->tabControlLab->TabIndex = 22;
			this->tabControlLab->UseWaitCursor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(342, 506);
			this->Controls->Add(this->tabControlLab);
			this->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->UseWaitCursor = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			this->tabPageDev->ResumeLayout(false);
			this->tabPageCalc->ResumeLayout(false);
			this->tabPageCalc->PerformLayout();
			this->tabControlLab->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ButtonNum_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		if (this->labelOutput->Text == "0")
			this->labelOutput->Text = button->Text;
		else
			this->labelOutput->Text += button->Text;
		textBoxInput->Focus();
	}

	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		mathOperation('+');
		textBoxInput->Focus();
		textBoxInput->Text = "";
	}
	private: System::Void buttonSubstract_Click(System::Object^ sender, System::EventArgs^ e) {
		mathOperation('-');
		textBoxInput->Focus();
		textBoxInput->Text = "";
	}
	private: System::Void buttonMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
		mathOperation('*');
		textBoxInput->Focus();
		textBoxInput->Text = "";
	}
	private: System::Void buttonDivision_Click(System::Object^ sender, System::EventArgs^ e) {
		mathOperation('/');
		textBoxInput->Focus();
		textBoxInput->Text = "";
	}
	private: System::Void mathOperation(char action) {
		this->firstNum = System::Convert::ToDouble(this->labelOutput->Text);
		this->currentOperation = action;
		this->labelOutput->Text = "";
	}
	private: System::Void buttonEqual_Click(System::Object^ sender, System::EventArgs^ e) {
		double firstOperand = System::Convert::ToDouble(this->labelOutput->Text);
		float result;
		switch (this->currentOperation) {
		case '+':
			result = this->firstNum + firstOperand;
			break;
		case '-':
			result = this->firstNum - firstOperand;
			break;
		case '*':
			result = this->firstNum * firstOperand;
			break;
		case '%':
			result = this->firstNum * firstOperand / 100;
			break;
		case '^':
			result = Math::Pow(firstNum, firstOperand);
			break;
		case '/':
			if (firstOperand == 0) {
				result = 0;
				MessageBox::Show(this, "Попытка деления на ноль!", "Ошибка", MessageBoxButtons::OK);
			}
			else
				result = this->firstNum / firstOperand;
			break;

		}
		this->labelOutput->Text = System::Convert::ToString(result);
		textBoxInput->Focus();
	}
	private: System::Void buttonAllClear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->labelOutput->Text = "0";
		textBoxInput->Focus();
		textBoxInput->Text = "";
	}
	private: System::Void buttonNegative_Click(System::Object^ sender, System::EventArgs^ e) {
		double number;
		if (Double::TryParse(this->labelOutput->Text, number)) {
			if (number > 0) {
				this->labelOutput->Text = "-" + this->labelOutput->Text;
			}
			else if (number < 0) {
				this->labelOutput->Text = this->labelOutput->Text->Substring(1);
			}
		}
	}
	private: System::Void buttonPercent_Click(System::Object^ sender, System::EventArgs^ e) {
		mathOperation('%');
		textBoxInput->Focus();
		textBoxInput->Text = "";
	}
	private: System::Void buttonPoint_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->labelOutput->Text->Contains(","))
			this->labelOutput->Text = this->labelOutput->Text + ",";
		textBoxInput->Focus();
	}
	private: System::Void buttonPower_Click(System::Object^ sender, System::EventArgs^ e) {
		mathOperation('^');
		textBoxInput->Focus();
		textBoxInput->Text = "";
	}
	private: System::Void buttonSquareRoot_Click(System::Object^ sender, System::EventArgs^ e) {
		this->firstNum = System::Convert::ToDouble(this->labelOutput->Text); if (firstNum < 0) {
			this->firstNum = 0;  MessageBox::Show(this, "Попытка извлечь корень из отрицательного числа!", "Ошибка", MessageBoxButtons::OK);
		}
		else {
			float sqrtResult = std::sqrt(firstNum);
			labelOutput->Text = System::Convert::ToString(sqrtResult);
		}
		textBoxInput->Focus();
	}
	private: System::Void MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		Char keyPressed = e->KeyChar;
		if (Char::IsDigit(keyPressed)) {
			textBoxInput->Text += keyPressed;
		}
	}

	private: System::Void textBoxInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		labelOutput->Text = textBoxInput->Text;
	}
	private: System::Void textBoxInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		Char keyPressed = e->KeyChar;
		if (!Char::IsDigit(keyPressed) && keyPressed != '\b') {
			e->Handled = true;
		}
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelDev_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
