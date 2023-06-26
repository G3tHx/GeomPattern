#pragma once
#pragma warning(disable : 4996)
#include<iostream>
#include<string>
#include<fstream>
#include <cstdio>
#include <msclr/marshal.h>
#include <algorithm>
#include <msclr/marshal_cppstd.h>
using namespace System;
using namespace msclr::interop;


namespace lab2form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;


	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}



	protected:
		/// Освободить все используемые ресурсы.
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::ColorDialog^ colorDialog1;




	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button8;













	protected:











	protected:

	private:
		/// Обязательная переменная
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(76, 37);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(500, 500);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::YellowGreen;
			this->button1->Location = System::Drawing::Point(592, 474);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Старт";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 100;
			this->trackBar1->Location = System::Drawing::Point(635, 67);
			this->trackBar1->Maximum = 1000;
			this->trackBar1->Minimum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(191, 45);
			this->trackBar1->SmallChange = 100;
			this->trackBar1->TabIndex = 2;
			this->trackBar1->TickFrequency = 100;
			this->trackBar1->Value = 500;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(711, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"500";
			// 
			// colorDialog1
			// 
			this->colorDialog1->FullOpen = true;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Red;
			this->button7->Location = System::Drawing::Point(742, 474);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(129, 50);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Сохранить";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"png";
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::saveFileDialog1_FileOk);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(632, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 18);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Масштаб изображения:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DimGray;
			this->button2->Location = System::Drawing::Point(7, 35);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 62);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Цвет квадрата";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DimGray;
			this->button3->Location = System::Drawing::Point(102, 35);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 62);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Цвет лепестков";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DimGray;
			this->button4->Location = System::Drawing::Point(110, 38);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(82, 51);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Цвет\r\n круга\r\n";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DimGray;
			this->button5->Location = System::Drawing::Point(198, 35);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(87, 62);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Цвет\r\nкруга";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DimGray;
			this->button6->Location = System::Drawing::Point(7, 38);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(89, 51);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Цвет\r\n квадрата";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::LightGray;
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox1->Location = System::Drawing::Point(592, 118);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(296, 122);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Цвета линий";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::LightGray;
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox2->Location = System::Drawing::Point(592, 246);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(296, 122);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Цвета заливки";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::DimGray;
			this->button8->Location = System::Drawing::Point(195, 38);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(93, 51);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Цвет\r\n лепестков";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// trackBar2
			// 
			this->trackBar2->LargeChange = 1;
			this->trackBar2->Location = System::Drawing::Point(647, 412);
			this->trackBar2->Minimum = 1;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(191, 45);
			this->trackBar2->TabIndex = 14;
			this->trackBar2->Value = 1;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar2_Scroll);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(677, 391);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 18);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Толщина линий:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(802, 395);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 16;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(892, 606);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Color kvadratcolor = Color::Black;
		Color lepestkicolor = Color::Black;
		Color krugcolor = Color::Black;
		Color kvadratcolor1 = Color::Transparent;
		Color krugcolor1 = Color::Transparent;
		Color lepestkicolor1 = Color::Transparent;
		



	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		int pW = pictureBox1->Width, pH = pictureBox1->Height;
		Bitmap^ img = gcnew Bitmap(pW, pH);     //поверхность для рисования с размером PictureBox
		Graphics^ g = Graphics::FromImage(img); //graphics из bitmap

		//		Pen
		float lines;
		lines = trackBar2->Value;
		Pen^ kvadratpen = gcnew Pen(kvadratcolor, lines);
		Pen^ lepestkipen = gcnew Pen(lepestkicolor, lines);
		Pen^ krugpen = gcnew Pen(krugcolor, lines);
		

		//		Brush
		Brush^ kvadratbrush = gcnew SolidBrush(kvadratcolor1);
		Brush^ lepestkibrush = gcnew SolidBrush(lepestkicolor1);
		Brush^ krugbrush = gcnew SolidBrush(krugcolor1);
		


		
		//		квадрат
		Point point1 = Point(100, 100); //левый верх
		Point point2 = Point(400, 100);// правый верх
		Point point3 = Point(100, 400);// левый низ
		Point point4 = Point(400, 400);// правый низ 
		array<Point>^ kvadrat = { point1,point3,point4,point2 };

		g->DrawPolygon(kvadratpen, kvadrat);
		g->FillPolygon(kvadratbrush, kvadrat);

		//		круг
		g->DrawEllipse(krugpen, 100, 100, 300, 300);
		g->FillEllipse(krugbrush ,100, 100, 300, 300);

		//		лепестки
		float tension = 0.7F;
		Point center = Point(250, 250);

		Point leftcenter = Point(100, 250);
		Point kcenter = Point(175, 240);

		Point k2center = Point(175, 260);
		Point rightcenter = Point(400, 250);

		Point k3center = Point(325, 260);
		Point k4center = Point(325, 240);

		Point bottomleft = Point(148,360);
		Point bottomleftcenter1 = Point(199 - 16, 305 - 2);
		Point bottomleftcenter2 = Point(199 + 16, 305 + 2);

		Point bottomright = Point(352, 360);
		Point bottomrightcenter1 = Point(317, 305 - 2);
		Point bottomrightcenter2 = Point(285, 305 + 2);

		Point upperleft = Point(148, 140);
		Point upperleftcenter1 = Point(199 - 16, 197);
		Point upperleftcenter2 = Point(199 + 16, 201);

		Point upperright = Point( 500 - 148, 140);
		Point upperrightcenter1 = Point(500 - 199 - 16, 197);
		Point upperrightcenter2 = Point( 500 - 199 + 16, 201);		

		Point uppercenter = Point(250, 100);
		Point uppercenter1 = Point(260, 175);
		Point uppercenter2 = Point(240, 175);

		Point botttomcenter = Point(250, 400);
		Point botttomcenter1 = Point(240, 325);
		Point botttomcenter2 = Point(260, 325);


		array<Point>^ k1 = { center, kcenter , leftcenter };
		array<Point>^ k2 = { center, k2center , leftcenter };
		array<Point>^ k3 = { center, k3center , rightcenter };
		array<Point>^ k4 = { center, k4center , rightcenter };
		array<Point>^ bottomleft1 = { center,bottomleftcenter1, bottomleft };
		array<Point>^ bottomleft2 = { center,bottomleftcenter2, bottomleft };
		array<Point>^ bottomright1 = { center,bottomrightcenter1, bottomright };
		array<Point>^ bottomright2 = { center,bottomrightcenter2, bottomright };
		array<Point>^ upperleft1 = { center,upperleftcenter1, upperleft };
		array<Point>^ upperleft2 = { center,upperleftcenter2, upperleft };
		array<Point>^ upperright1 = { center,upperrightcenter1, upperright };
		array<Point>^ upperright2 = { center,upperrightcenter2, upperright };
		array<Point>^ uppercenter11 = { center,uppercenter1, uppercenter };
		array<Point>^ uppercenter22 = { center,uppercenter2, uppercenter };
		array<Point>^ bottomcenter11 = { center,botttomcenter1, botttomcenter };
		array<Point>^ bottomcenter12 = { center,botttomcenter2, botttomcenter };
		

		g->DrawCurve(lepestkipen, k1);
		g->DrawCurve(lepestkipen, k2, tension);
		g->DrawCurve(lepestkipen, k3, tension);
		g->DrawCurve(lepestkipen, k4, tension);
		g->DrawCurve(lepestkipen, bottomleft1, tension);
		g->DrawCurve(lepestkipen, bottomleft2, tension);
		g->DrawCurve(lepestkipen, bottomright1, tension);
		g->DrawCurve(lepestkipen, bottomright2, tension);
		g->DrawCurve(lepestkipen, upperleft1, tension);
		g->DrawCurve(lepestkipen, upperleft2, tension);
		g->DrawCurve(lepestkipen, upperright1, tension);
		g->DrawCurve(lepestkipen, upperright2, tension);
		g->DrawCurve(lepestkipen, uppercenter11, tension);
		g->DrawCurve(lepestkipen, uppercenter22, tension);
		g->DrawCurve(lepestkipen, bottomcenter11, tension);
		g->DrawCurve(lepestkipen, bottomcenter12, tension);

		
		FillMode newFillMode = FillMode::Winding; // FillMode::Alternate: задает режим заполнения с чередованием.
													// FillMode::Winding: 	задает режим заполнения с поворотом.
			
		g->FillClosedCurve(lepestkibrush, k1, newFillMode, tension);
		g->FillClosedCurve(lepestkibrush, k2, newFillMode, tension);
		g->FillClosedCurve(lepestkibrush, k3, newFillMode, tension);
		g->FillClosedCurve(lepestkibrush, k4, newFillMode, tension);
		g->FillClosedCurve(lepestkibrush, bottomleft1, newFillMode, tension);
		g->FillClosedCurve(lepestkibrush, bottomleft2, newFillMode, tension);
		g->FillClosedCurve(lepestkibrush, bottomright1, newFillMode, tension);
		g->FillClosedCurve(lepestkibrush, bottomright2, newFillMode, tension);
		g->FillClosedCurve(lepestkibrush, upperleft1, newFillMode, tension);
		g->FillClosedCurve(lepestkibrush, upperleft2, newFillMode, tension);
		g->FillClosedCurve(lepestkibrush, upperright1, newFillMode, tension);
		g->FillClosedCurve(lepestkibrush, upperright2, newFillMode, tension);
		g->FillClosedCurve(lepestkibrush, bottomcenter11, newFillMode, tension);
		g->FillClosedCurve(lepestkibrush, bottomcenter12, newFillMode, tension);
		
		//		Задание масштаба изображения
		int x, s; // координаты и масштаб рисунка 
		// нулевые значения рисунка - 0,0,500,500 
		s = trackBar1->Value;
		x = (500 - s) / 2;

		// Отрисовка изображения с масштабированием 
		Bitmap^ bitmap2 = gcnew Bitmap(img->Width, img->Height, g);
		Graphics^ Gr2 = Graphics::FromImage(bitmap2); //получили поверхность рисования из меньшего рисунка
		Gr2->DrawImage(img, x, x, s, s);
		this->pictureBox1->Image = bitmap2; // Отрисовка в PictureBox
		pictureBox1->Size = bitmap2->Size; //поставили размер компоненты по размерам нового рисунка

	}
		//		Применение цветов
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		int val = trackBar1->Value;
		label1->Text = val.ToString();

	}
		   
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		if (colorDialog1->ShowDialog() == ::System::Windows::Forms::DialogResult::OK) {
			kvadratcolor = colorDialog1->Color;
		}
		}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (colorDialog1->ShowDialog() == ::System::Windows::Forms::DialogResult::OK) {
			lepestkicolor = colorDialog1->Color;
		}

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (colorDialog1->ShowDialog() == ::System::Windows::Forms::DialogResult::OK) {
			krugcolor1 = colorDialog1->Color;
		}
	};
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (colorDialog1->ShowDialog() == ::System::Windows::Forms::DialogResult::OK) {
			krugcolor = colorDialog1->Color;
		}
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog1->ShowDialog() == ::System::Windows::Forms::DialogResult::OK) {
		kvadratcolor1 = colorDialog1->Color;
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->ShowDialog();

} 
	//		Сохранение изображения
private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	Image^ Bmp;
	Bmp = pictureBox1->Image;
	Bmp->Save(saveFileDialog1->FileName); 

}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
	float val = trackBar2->Value;
	label4->Text = val.ToString();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog1->ShowDialog() == ::System::Windows::Forms::DialogResult::OK) {
		lepestkicolor1 = colorDialog1->Color;
	}
}
};

};

	

