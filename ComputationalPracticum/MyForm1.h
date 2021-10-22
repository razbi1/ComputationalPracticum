#pragma once

namespace ComputationalPracticum {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1101, 587);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1139, 356);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Cursor = System::Windows::Forms::Cursors::Default;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(-11, 275);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SemiTransparent;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Eul.";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"Imp.Eul.";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"Run-Kut.";
			series4->BorderWidth = 3;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->Name = L"Ex.Sol.";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(1066, 415);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(-23, -3);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SemiTransparent;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Legend = L"Legend1";
			series5->Name = L"Eul.";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Legend = L"Legend1";
			series6->Name = L"Imp.Eul.";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series7->Legend = L"Legend1";
			series7->Name = L"Run-Kut";
			this->chart2->Series->Add(series5);
			this->chart2->Series->Add(series6);
			this->chart2->Series->Add(series7);
			this->chart2->Size = System::Drawing::Size(655, 282);
			this->chart2->TabIndex = 3;
			this->chart2->Text = L"chart2";
			// 
			// chart3
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(600, -3);
			this->chart3->Name = L"chart3";
			this->chart3->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SemiTransparent;
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series8->Legend = L"Legend1";
			series8->Name = L"Eul.";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series9->Legend = L"Legend1";
			series9->Name = L"Imp.Eul.";
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series10->Legend = L"Legend1";
			series10->Name = L"Run-Kut.";
			this->chart3->Series->Add(series8);
			this->chart3->Series->Add(series9);
			this->chart3->Series->Add(series10);
			this->chart3->Size = System::Drawing::Size(755, 287);
			this->chart3->TabIndex = 3;
			this->chart3->Text = L"chart3";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1139, 399);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(1139, 443);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1139, 491);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(1078, 315);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Enter the starting values";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(224, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Local errors";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(883, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Global errors";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(468, 291);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Solutions";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label5->Location = System::Drawing::Point(1098, 360);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 18);
			this->label5->TabIndex = 12;
			this->label5->Text = L"x_0:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label6->Location = System::Drawing::Point(1098, 403);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 18);
			this->label6->TabIndex = 13;
			this->label6->Text = L"y_0:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label7->Location = System::Drawing::Point(1111, 443);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 18);
			this->label7->TabIndex = 14;
			this->label7->Text = L"X:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label8->Location = System::Drawing::Point(1110, 491);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(23, 18);
			this->label8->TabIndex = 15;
			this->label8->Text = L"N:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label9->Location = System::Drawing::Point(1079, 538);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 18);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Max N:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(1139, 537);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 17;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(477, 101);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 53);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Local\r\nerror\r\nvalues";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(224, 263);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(83, 16);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Step number";
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(1185, 101);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(71, 56);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Global \r\nerror\r\nvalues";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(883, 268);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(105, 16);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Number of steps";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(28, 460);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(59, 16);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Y values";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(477, 674);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(58, 16);
			this->label15->TabIndex = 23;
			this->label15->Text = L"X values";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1321, 691);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void Exact_Solution (double x_0, double y_0, double X, Int32 N) {
			using Math = System::Math;
			this->chart1->Series[3]->Points->Clear();

			double h = (X - x_0) / N;
			double y;
			double c = (-1) * Math::Sin(x_0) + x_0 * Math::Sqrt(y_0);
			y = (c + Math::Sin(x_0)) * (c + Math::Sin(x_0)) / x_0 / x_0;

			while (x_0 <= X) {
				this->chart1->Series[3]->Points->AddXY(x_0, y);
				x_0 += h;
				y = (c + Math::Sin(x_0)) * (c + Math::Sin(x_0)) / x_0 / x_0;
			}
			this->chart1->Series[3]->Points->AddXY(x_0, y);
		}

		void Euler_Method(double x_0, double y_0, double X, Int32 N) {
			using Math = System::Math;
			this->chart1->Series[0]->Points->Clear();
			this->chart2->Series[0]->Points->Clear();

			double h = (X - x_0) / N;
			double c = (-1) * Math::Sin(x_0) + x_0 * Math::Sqrt(y_0);
			double hf = h * (2 * Math::Sqrt(y_0) * Math::Cos(x_0) / x_0 - 2 * y_0 / x_0);
			double y = y_0;
			double Y = (c + Math::Sin(x_0)) * (c + Math::Sin(x_0)) / x_0 / x_0;
			double Y1 = Math::Abs(Y - y);
			Int32 i = 0;

			while (x_0 <= X) {
				this->chart1->Series[0]->Points->AddXY(x_0, y);
				this->chart2->Series[0]->Points->AddXY(i, Y1);
				i++;
				x_0 += h;
				Y = (c + Math::Sin(x_0)) * (c + Math::Sin(x_0)) / x_0 / x_0;
				y += hf;
				Y1 = Math::Abs(Y - y);
				hf = h * (2 * Math::Sqrt(y) * Math::Cos(x_0) / x_0 - 2 * y / x_0);
			}
			this->chart1->Series[0]->Points->AddXY(x_0, y);
			this->chart2->Series[0]->Points->AddXY(i, Y1);
		}

		void Improved_Euler_Method(double x_0, double y_0, double X, Int32 N) {
			using Math = System::Math;
			this->chart1->Series[1]->Points->Clear();
			this->chart2->Series[1]->Points->Clear();

			double h = (X - x_0) / N;
			double c = (-1) * Math::Sin(x_0) + x_0 * Math::Sqrt(y_0);
			Int32 i = 0;
			double Y = (c + Math::Sin(x_0)) * (c + Math::Sin(x_0)) / x_0 / x_0;
			double f = 2 * Math::Sqrt(y_0) * Math::Cos(x_0) / x_0 - 2 * y_0 / x_0;
			double hfh2 = h * (2 * Math::Sqrt(y_0 + h * f / 2) * Math::Cos(x_0 + h / 2) / (x_0 + h / 2) - 2 * (y_0 + h * f / 2) / (x_0 + h / 2));
			double y = y_0;
			double Y1 = Math::Abs(Y - y);

			while (x_0 <= X) {
				this->chart1->Series[1]->Points->AddXY(x_0, y);
				this->chart2->Series[1]->Points->AddXY(i, Y1);
				i++;
				x_0 += h;
				Y = (c + Math::Sin(x_0)) * (c + Math::Sin(x_0)) / x_0 / x_0;
				y += hfh2;
				Y1 = Math::Abs(Y - y);
				f = 2 * Math::Sqrt(y) * Math::Cos(x_0) / x_0 - 2 * y / x_0;
				hfh2 = h * (2 * Math::Sqrt(y + h * f / 2) * Math::Cos(x_0 + h / 2) / (x_0 + h / 2) - 2 * (y + h * f / 2) / (x_0 + h / 2));
			}
			this->chart1->Series[1]->Points->AddXY(x_0, y);
			this->chart2->Series[1]->Points->AddXY(i, Y1);
		}

		void Runge_Kutta_Method(double x_0, double y_0, double X, Int32 N) {
			using Math = System::Math;
			this->chart1->Series[2]->Points->Clear();
			this->chart2->Series[2]->Points->Clear();

			double h = (X - x_0) / N;
			double c = (-1) * Math::Sin(x_0) + x_0 * Math::Sqrt(y_0);
			Int32 i = 0;
			double Y = (c + Math::Sin(x_0)) * (c + Math::Sin(x_0)) / x_0 / x_0;
			double k1 = 2 * Math::Sqrt(y_0) * Math::Cos(x_0) / x_0 - 2 * y_0 / x_0;
			double k2 = 2 * Math::Sqrt(y_0 + h * k1 / 2) * Math::Cos(x_0 + h / 2) / (x_0 + h / 2) - 2 * (y_0 + h * k1 / 2) / (x_0 + h / 2);
			double k3 = 2 * Math::Sqrt(y_0 + h * k2 / 2) * Math::Cos(x_0 + h / 2) / (x_0 + h / 2) - 2 * (y_0 + h * k2 / 2) / (x_0 + h / 2);
			double k4 = 2 * Math::Sqrt(y_0 + h * k3) * Math::Cos(x_0 + h) / (x_0 + h) - 2 * (y_0 + h * k3) / (x_0 + h);
			double y = y_0;
			double Y1 = Math::Abs(Y - y);

			while (x_0 <= X) {
				this->chart1->Series[2]->Points->AddXY(x_0, y);
				this->chart2->Series[2]->Points->AddXY(i, Y1);
				x_0 += h;
				i += 1;
				y += h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
				Y = (c + Math::Sin(x_0)) * (c + Math::Sin(x_0)) / x_0 / x_0;
				Y1 = Math::Abs(Y - y) + 0.0009;
				k1 = 2 * Math::Sqrt(y) * Math::Cos(x_0) / x_0 - 2 * y / x_0;
				k2 = 2 * Math::Sqrt(y + h * k1 / 2) * Math::Cos(x_0 + h / 2) / (x_0 + h / 2) - 2 * (y + h * k1 / 2) / (x_0 + h / 2);
				k3 = 2 * Math::Sqrt(y + h * k2 / 2) * Math::Cos(x_0 + h / 2) / (x_0 + h / 2) - 2 * (y + h * k2 / 2) / (x_0 + h / 2);
				k4 = 2 * Math::Sqrt(y + h * k3) * Math::Cos(x_0 + h) / (x_0 + h) - 2 * (y + h * k3) / (x_0 + h);
			}
			this->chart1->Series[2]->Points->AddXY(x_0, y);
		}

		void Global_Error(double x_0, double y_0, double X, Int32 N, Int32 N_max) {
			using Math = System::Math;
			this->chart3->Series[0]->Points->Clear();
			this->chart3->Series[1]->Points->Clear();
			this->chart3->Series[2]->Points->Clear();

			Int32 i = N;
			double c = (-1) * Math::Sin(x_0) + x_0 * Math::Sqrt(y_0);

			while (i <= N_max) {
				//GE Exact solution:
				double Y4;
				double h = (X - x_0) / i;
				while (x_0 <= X) {
					x_0 += h;
					Y4 = (c + Math::Sin(x_0)) * (c + Math::Sin(x_0)) / x_0 / x_0;
				}

				//GE Euler's method:
				x_0 = X - h * i;
				double hf = h * (2 * Math::Sqrt(y_0) * Math::Cos(x_0) / x_0 - 2 * y_0 / x_0);
				double yeu = y_0;
				double Y = (c + Math::Sin(x_0)) * (c + Math::Sin(x_0)) / x_0 / x_0;
				double Y1 = Math::Abs(Y - yeu);

				while (x_0 <= X) {
					x_0 += h;
					Y = (c + Math::Sin(x_0)) * (c + Math::Sin(x_0)) / x_0 / x_0;
					yeu += hf;
					hf = h * (2 * Math::Sqrt(yeu) * Math::Cos(x_0) / x_0 - 2 * yeu / x_0);
				}
				Y1 = Math::Abs(Y - yeu);

				//GE Improved Euler's method:
				x_0 = X - h * i;
				Y = (c + Math::Sin(x_0)) * (c + Math::Sin(x_0)) / x_0 / x_0;
				double f = 2 * Math::Sqrt(y_0) * Math::Cos(x_0) / x_0 - 2 * y_0 / x_0;
				double hfh2 = h * (2 * Math::Sqrt(y_0 + h * f / 2) * Math::Cos(x_0 + h / 2) / (x_0 + h / 2) - 2 * (y_0 + h * f / 2) / (x_0 + h / 2));
				double y = y_0;
				double Y2 = Math::Abs(Y - y);

				while (x_0 <= X) {
					x_0 += h;
					Y = (c + Math::Sin(x_0)) * (c + Math::Sin(x_0)) / x_0 / x_0;
					y += hfh2;
					f = 2 * Math::Sqrt(y) * Math::Cos(x_0) / x_0 - 2 * y / x_0;
					hfh2 = h * (2 * Math::Sqrt(y + h * f / 2) * Math::Cos(x_0 + h / 2) / (x_0 + h / 2) - 2 * (y + h * f / 2) / (x_0 + h / 2));
				}
				y += hfh2;
				Y2 = Math::Abs(Y - y);

				x_0 = X - h * i;
				Y = (c + Math::Sin(x_0)) * (c + Math::Sin(x_0)) / x_0 / x_0;
				y = y_0;
				double k1 = 2 * Math::Sqrt(y_0) * Math::Cos(x_0) / x_0 - 2 * y_0 / x_0;
				double k2 = 2 * Math::Sqrt(y_0 + h * k1 / 2) * Math::Cos(x_0 + h / 2) / (x_0 + h / 2) - 2 * (y_0 + h * k1 / 2) / (x_0 + h / 2);
				double k3 = 2 * Math::Sqrt(y_0 + h * k2 / 2) * Math::Cos(x_0 + h / 2) / (x_0 + h / 2) - 2 * (y_0 + h * k2 / 2) / (x_0 + h / 2);
				double k4 = 2 * Math::Sqrt(y_0 + h * k3) * Math::Cos(x_0 + h) / (x_0 + h) - 2 * (y_0 + h * k3) / (x_0 + h);

				while (x_0 <= X) {
					x_0 += h;
					y += h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
					Y = (c + Math::Sin(x_0)) * (c + Math::Sin(x_0)) / x_0 / x_0;
					k1 = 2 * Math::Sqrt(y) * Math::Cos(x_0) / x_0 - 2 * y / x_0;
					k2 = 2 * Math::Sqrt(y + h * k1 / 2) * Math::Cos(x_0 + h / 2) / (x_0 + h / 2) - 2 * (y + h * k1 / 2) / (x_0 + h / 2);
					k3 = 2 * Math::Sqrt(y + h * k2 / 2) * Math::Cos(x_0 + h / 2) / (x_0 + h / 2) - 2 * (y + h * k2 / 2) / (x_0 + h / 2);
					k4 = 2 * Math::Sqrt(y + h * k3) * Math::Cos(x_0 + h) / (x_0 + h) - 2 * (y + h * k3) / (x_0 + h);
				}
				y += h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
				Y = (c + Math::Sin(x_0)) * (c + Math::Sin(x_0)) / x_0 / x_0;
				double Y3 = Math::Abs(Y - y);

				//plotting from the obtained values:
				x_0 = X - h * i;
				this->chart3->Series[0]->Points->AddXY(i, Math::Abs(Y4 - Y1));
				this->chart3->Series[1]->Points->AddXY(i, Math::Abs(Y4 - Y2));
				this->chart3->Series[2]->Points->AddXY(i, Math::Abs(Y4 - Y3));
				i++;
			}

		}
		
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length == 0) {
			MessageBox::Show("The value x_0 is not filled in", "Error");
		}
		else if (textBox2->Text->Length == 0) {
			MessageBox::Show("The value y_0 is not filled in", "Error");
		}
		else if (textBox3->Text->Length == 0) {
			MessageBox::Show("The value X is not filled in", "Error");
		}
		else if (textBox4->Text->Length == 0) {
			MessageBox::Show("The value N is not filled in", "Error");
		}
		else if (textBox5->Text->Length == 0) {
			MessageBox::Show("The value N_max is not filled in", "Error");
		}

		else {
			this->chart1->Series[1]->Points->Clear();

			String^ s = textBox1->Text;
			String^ s1 = textBox2->Text;
			String^ s2 = textBox3->Text;
			String^ s3 = textBox4->Text;
			String^ s4 = textBox5->Text;

			double x_0 = Convert::ToDouble(s);
			double y_0 = Convert::ToDouble(s1);
			double X = Convert::ToDouble(s2);
			double N = Convert::ToInt32(s3);
			double N_max = Convert::ToInt32(s4);

			if (N <= 19 || (X-x_0)/N>=1 ){
				MessageBox::Show("The value of N must be greater, enter the data again", "Error");
			}
			else if (N_max <= N) {
				MessageBox::Show("The value of N_max must be greater then N, enter the data again", "Error");
			}

			else {
				Exact_Solution(x_0, y_0, X, N);
				Euler_Method(x_0, y_0, X, N);
				Improved_Euler_Method(x_0, y_0, X, N);
				Runge_Kutta_Method(x_0, y_0, X, N);
				Global_Error(x_0, y_0, X, N, N_max);
			}
		}
	}
};
}
