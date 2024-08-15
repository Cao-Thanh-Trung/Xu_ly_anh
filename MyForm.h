#pragma once
#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

namespace xulyanhopencv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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
	private: System::Windows::Forms::PictureBox^ picture_main;
	protected:
	private: System::Windows::Forms::TextBox^ text_path;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ open;
	private: System::Windows::Forms::Button^ Scan;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ result;

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
			this->picture_main = (gcnew System::Windows::Forms::PictureBox());
			this->text_path = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->open = (gcnew System::Windows::Forms::Button());
			this->Scan = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_main))->BeginInit();
			this->SuspendLayout();
			// 
			// picture_main
			// 
			this->picture_main->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picture_main->Location = System::Drawing::Point(16, 15);
			this->picture_main->Margin = System::Windows::Forms::Padding(4);
			this->picture_main->Name = L"picture_main";
			this->picture_main->Size = System::Drawing::Size(799, 486);
			this->picture_main->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picture_main->TabIndex = 0;
			this->picture_main->TabStop = false;
			// 
			// text_path
			// 
			this->text_path->Location = System::Drawing::Point(100, 528);
			this->text_path->Margin = System::Windows::Forms::Padding(4);
			this->text_path->Name = L"text_path";
			this->text_path->Size = System::Drawing::Size(715, 22);
			this->text_path->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 533);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Path:";
			// 
			// open
			// 
			this->open->Location = System::Drawing::Point(892, 526);
			this->open->Margin = System::Windows::Forms::Padding(4);
			this->open->Name = L"open";
			this->open->Size = System::Drawing::Size(100, 28);
			this->open->TabIndex = 5;
			this->open->Text = L"Browse...";
			this->open->UseVisualStyleBackColor = true;
			this->open->Click += gcnew System::EventHandler(this, &MyForm::open_Click);
			// 
			// Scan
			// 
			this->Scan->Location = System::Drawing::Point(1077, 524);
			this->Scan->Margin = System::Windows::Forms::Padding(4);
			this->Scan->Name = L"Scan";
			this->Scan->Size = System::Drawing::Size(100, 28);
			this->Scan->TabIndex = 6;
			this->Scan->Text = L"Scan";
			this->Scan->UseVisualStyleBackColor = true;
			this->Scan->Click += gcnew System::EventHandler(this, &MyForm::Scan_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(889, 15);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 32);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Result:";
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->result->Location = System::Drawing::Point(889, 72);
			this->result->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(83, 32);
			this->result->TabIndex = 9;
			this->result->Text = L"None";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1231, 580);
			this->Controls->Add(this->result);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Scan);
			this->Controls->Add(this->open);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->text_path);
			this->Controls->Add(this->picture_main);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Danisa Classification";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_main))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/* Ham lay duong vien */
		void getContours(Mat imgDil, Mat img) {
			result->Text = L"None";

			vector<vector<cv::Point>> contours;
			vector<Vec4i> hierarchy;
			findContours(imgDil, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);

			/* Loai bo nhung vat gay nhieu (chi nhung vat dam bao kich thuoc moi duoc ve contour */
			for (int i = 0; i < contours.size(); i++) {
				int area = contourArea(contours[i]);
				cout << "Area of cookie:" << area << endl;

				// conPoly tuong tu contour nhung chi gom vector noi cac dinh cua da giac thay vi toan bo cac diem nhu contours
				vector<vector<cv::Point>> conPoly(contours.size());
				vector<cv::Rect> boundRect(contours.size());
				string objectType;

				if (area > 1000) {  //chi nhung hinh > 1000 moi ve contour

					/* conPoly la xap xi hinh dang duong bao thanh hinh dang khac co so duong it hon tuy do chinh xac  */
					float peri = arcLength(contours[i], true);  //do dai cua dg vien, true la duong vien dong
					approxPolyDP(contours[i], conPoly[i], 0.02 * peri, true);

					/* drawContours: img, contours, so luong contour (-1 la ve tat ca), color, do day */
					drawContours(img, conPoly, i, Scalar(255, 0, 255), 5);

					/* cout ra so luong dinh */
					cout << conPoly[i].size() << endl;

					/* Bound box */
					boundRect[i] = boundingRect(conPoly[i]);
					rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 2);  //ve hinh chu nhat bao

					int objCorner = (int)conPoly[i].size();
					if (objCorner == 4) {
						/* Phan biet hinh vuong va hinh chu nhat
						bang cach so sanh width va heuight cua boundRect (Vien bao cua hinh)
						*/
						objectType = "Rect";
						result->Text = L"Banh chu nhat";
					}
					else if (objCorner == 5) { objectType = "Rect"; result->Text = L"Banh chu nhat";}
					else if (objCorner == 6) { objectType = "Lock like Rect"; result->Text = L"Banh chu nhat";}
					else if (objCorner == 7) {
						vector<vector<cv::Point>>  contoursList;
						vector<Vec4i> hierarchyList;
						findContours(imgDil, contoursList, hierarchyList, RETR_LIST, CHAIN_APPROX_SIMPLE);

						if ((contoursList.size() / 2) == 1) { objectType = "Circle"; result->Text = L"Banh tron";}  //neu chi co 1 duong vien
						else if ((contoursList.size() / 2) == 2) { objectType = "C"; result->Text = L"Banh chu C";}
						else if ((contoursList.size() / 2) > 2) { objectType = "Circle Grape"; result->Text = L"Banh nho";}  //neu co lon hon 2 duong vien tro len
					}
					else if (objCorner == 8) {
						vector<vector<cv::Point>>  contoursList;
						vector<Vec4i> hierarchyList;
						findContours(imgDil, contoursList, hierarchyList, RETR_LIST, CHAIN_APPROX_SIMPLE);
						if ((contoursList.size() / 2) == 1) { objectType = "Circle"; result->Text = L"Banh tron";}  //neu chi co 1 duong vien
						else if ((contoursList.size() / 2) == 2) {
							/* Trong truong hop banh nho chi co 1 qua nho */
							for (int i = 0; i < contoursList.size(); i++) {
								cout << area << endl;
								int area = contourArea(contoursList[i]);
								if ((area >= 100) && (area < 700)) {
									objectType = "Circle Grape";
									result->Text = L"Banh nho";
								}
								else if ((area >= 1000) && (area < 2000)) { objectType = "C"; result->Text = L"Banh chu C"; }
							}
						}
						else if ((contoursList.size() / 2) > 2) { objectType = "Circle Grape"; result->Text = L"Banh nho";}  //neu chi co lon hon 2 duong vien tro len
					}
					else if (objCorner == 9) {
						vector<vector<cv::Point>>  contoursList;
						vector<Vec4i> hierarchyList;
						findContours(imgDil, contoursList, hierarchyList, RETR_LIST, CHAIN_APPROX_SIMPLE);
						if ((contoursList.size() / 2) == 2) { objectType = "C"; result->Text = L"Banh chu C";}
						else if ((contoursList.size() / 2) >= 3) { objectType = "Heart"; result->Text = L"Banh trai tim";}
					}
					else if (objCorner == 10) {
						vector<vector<cv::Point>>  contoursList;
						vector<Vec4i> hierarchyList;
						findContours(imgDil, contoursList, hierarchyList, RETR_LIST, CHAIN_APPROX_SIMPLE);
						if ((contoursList.size() / 2) == 2) { objectType = "C"; result->Text = L"Banh chu C";}
					}
					putText(img, objectType + "-" + to_string(objCorner), { boundRect[i].x,boundRect[i].y - 3 }, FONT_HERSHEY_DUPLEX, 0.75, Scalar(0, 69, 255), 1);
				}
			}
		}
		Mat bitmapconvertmat(Bitmap^ img) {
			System::Drawing::Rectangle blank = System::Drawing::Rectangle(0, 0, img->Width / 100, img->Height / 100);
			System::Drawing::Imaging::BitmapData^ bmpdata = img->LockBits(blank, System::Drawing::Imaging::ImageLockMode::ReadWrite, System::Drawing::Imaging::PixelFormat::Format24bppRgb);
			int wb = ((img->Width * 24 + 31) / 32) * 4;
			Mat cv_img(cv::Size(img->Width, img->Height),
				CV_8UC3, bmpdata->Scan0.ToPointer(), wb);
			return cv_img;
		}
		/*Bitmap GetBitMap(Mat inputImage)
		{
			cv::Size size = inputImage.size();
			Bitmap ^bitmap(size.width, size.height, inputImage.step1(), PixelFormat24bppRGB, inputImage.data);
			return bitmap;
		}*/
		Bitmap^ ConvertMatToBitmap(cv::Mat matToConvert) {
			//imshow("Window", matToConvert);
			Bitmap^ test = gcnew Bitmap(matToConvert.rows, matToConvert.cols,  4*matToConvert.rows, System::Drawing::Imaging::PixelFormat::Format4bppIndexed, IntPtr(matToConvert.data));

			return test;
		}
Bitmap^ imgBitMap;
private: System::Void open_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ open = gcnew OpenFileDialog();
		open->Filter = "|*.jpg";
		if (open->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			text_path->Text = open->FileName;
			imgBitMap = gcnew Bitmap(open->FileName);
			picture_main->Image = imgBitMap;
		}
	}
private: System::Void Scan_Click(System::Object^ sender, System::EventArgs^ e) {
	Mat test;
	Mat img = bitmapconvertmat(imgBitMap);
	resize(img, img, cv::Size(600, 400), INTER_LINEAR);
	test = 1 / img;
	img = img * test;
	Mat imgGray, imgMid, imgBlur, imgCanny, imgDil;
	Mat imgGrayResize, imgBlurResize, imgCannyRResize, imgDilResize;
	int screen_width = 600;
	int screen_height = 400;
	int threshold1 = 220;
	int threshold2 = 0;
	int sigmaX = 30;
	int sigmaY = 30;
	int sizeDil = 2;

	/* Preprocessing */

	/* Convert img to gray img */
	cvtColor(img, imgGray, COLOR_BGR2GRAY);

	/* Loc trung vi */
	medianBlur(img, imgMid, 5);

	/* Convert img to blur img */
	GaussianBlur(imgMid, imgBlur, cv::Size(3, 3), sigmaX, sigmaY);
	/* Ve duong bien */
	Canny(imgBlur, imgCanny, threshold1, threshold2);
	/* Dilation lam day duong bien */
	Mat kernel = getStructuringElement(MORPH_RECT, cv::Size(sizeDil, sizeDil));
	dilate(imgCanny, imgDil, kernel);

	/* END Preprocessing */

	/* Get contour */
	getContours(imgDil, img);

	/* hien thi */
	imshow("imgDil", imgDil);

	imshow("image", img);

	/* wait cho den khi nhan phim bat ki moi dong cua so */
	waitKey(0);

}
};
}
