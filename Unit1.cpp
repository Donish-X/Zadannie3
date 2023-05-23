//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	StringGrid1->Cells[0][0] = "Предмет";
	StringGrid1->Cells[1][0] = "Начало";
	StringGrid1->Cells[2][0] = "Конец";

	if(ComboBox1->ItemIndex % 2 == 0){
		StringGrid1->Cells[0][1] = "Dinshunoslik";
		StringGrid1->Cells[1][1] = "8:30";
		StringGrid1->Cells[2][1] = "9:50";
		StringGrid1->Cells[0][2] = "Xorijiy Til";
		StringGrid1->Cells[1][2] = "10:00";
		StringGrid1->Cells[2][2] = "11:20";
		StringGrid1->Cells[0][3] = "Dasturlash";
		StringGrid1->Cells[1][3] = "11:30";
		StringGrid1->Cells[2][3] = "12:50";
	}

	else{
		StringGrid1->Cells[0][1] = "Chiziqli Algebra";
		StringGrid1->Cells[1][1] = "8:30";
		StringGrid1->Cells[2][1] = "9:50";
		StringGrid1->Cells[0][2] = "Dasturlash";
		StringGrid1->Cells[1][2] = "10:00";
		StringGrid1->Cells[2][2] = "11:20";
		StringGrid1->Cells[0][3] = "Fizika";
		StringGrid1->Cells[1][3] = "11:30";
		StringGrid1->Cells[2][3] = "12:50";
		StringGrid1->Cells[0][4] = "Jismoniy Tarbiya";
		StringGrid1->Cells[1][4] = "13:30";
		StringGrid1->Cells[2][4] = "14:50";
	}
}
//---------------------------------------------------------------------------


