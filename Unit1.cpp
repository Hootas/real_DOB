//---------------------------------------------------------------------------

#include <vcl.h>
#include <vcl.h>
#pragma hdrstop
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<iomanip.h>
#include<stdlib.h>
#include<fstream.h>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include <iostream.h>
#pragma hdrstop
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
  TPicture *Lev2;
  TPicture *Gziraf2;
  TPicture *Slon2;
  TPicture *Cyplenok2;
  TPicture *Lev1;
  TPicture *Gziraf1;
  TPicture *Slon1;
  TPicture *Cyplenok1;
  TPicture *Kurica;
  TPicture *Kurica1;
  int vstavka=0;
  int LX=1,LY=3,L1X=1,L1Y=0;
  int ZLX=-10,ZLY=-10,ZL1X=-10,ZL1Y=-10;



  int Cx=1,Cy=2,C1x=1,C1y=1;
  int Chx=-10,Chy=-10,Ch1x=-10,Ch1y=-10;
  int ZCx=-10,ZCy=-10,ZC1x=-10,ZC1y=-10;
  int ZChx=-10,ZChy=-10,ZCh1x=-10,ZCh1y=-10;


  int Sx=0,Sy=3,S1x=2,S1y=0;
  int ZSx=-10,ZSy=-10,ZS1x=-10,ZS1y=-10;

  int Gx=2,Gy=3,G1x=0,G1y=0;
  int ZGx=-10,ZGy=-10,ZG1x=-10,ZG1y=-10;

  int K1,K2,K3,K4,khod=2;
  int R1,R2,R3,R4;
  int sost=1;
  int vslon=0,zvslon=0, vslon1=0,zvslon1=0;
  int vgiraf=0,zvgiraf=0,vgiraf1=0,zvgiraf1=0;
  int vlev=0,zvlev=0,vlev1=0,zvlev1=0;
  int vcyplenok=0,zvcyplenok=0, vcyplenok1=0,zvcyplenok1=0;
  int vkurica=0,zvkurica=0, vkurica1=0,zvkurica1=0;


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::StringGrid1DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
		  TGridDrawState State)
{  //===========================================================

  if (ACol==LX && ARow==LY)
 StringGrid1->Canvas->StretchDraw (Rect, Lev2->Graphic);

   if (ACol==Gx && ARow==Gy)
 StringGrid1->Canvas->StretchDraw (Rect, Gziraf2->Graphic);
 if (ACol==Sx && ARow==Sy)
 StringGrid1->Canvas->StretchDraw (Rect, Slon2->Graphic);

  if (ACol==Cx && ARow==Cy)
 StringGrid1->Canvas->StretchDraw (Rect, Cyplenok2->Graphic);
  if (ACol==Chx && ARow==Chy)
 StringGrid1->Canvas->StretchDraw (Rect, Kurica1->Graphic);
					   //===========================================================

   if (ACol==ZLX && ARow==ZLY)
 StringGrid1->Canvas->StretchDraw (Rect, Lev2->Graphic);

   if (ACol==ZGx && ARow==ZGy)
 StringGrid1->Canvas->StretchDraw (Rect, Gziraf2->Graphic);
 if (ACol==ZSx && ARow==ZSy)
 StringGrid1->Canvas->StretchDraw (Rect, Slon2->Graphic);

  if (ACol==ZCx && ARow==ZCy)
 StringGrid1->Canvas->StretchDraw (Rect, Cyplenok2->Graphic);
  if (ACol==ZChx && ARow==ZChy)
 StringGrid1->Canvas->StretchDraw (Rect, Kurica1->Graphic);
 //===========================================================


  if (ACol==L1X && ARow==L1Y)
 StringGrid1->Canvas->StretchDraw (Rect, Lev1->Graphic);
   if (ACol==G1x && ARow==G1y)
 StringGrid1->Canvas->StretchDraw (Rect, Gziraf1->Graphic);
 if ((ACol==S1x && ARow==S1y))
 StringGrid1->Canvas->StretchDraw (Rect, Slon1->Graphic);

  if (ACol==C1x&& ARow==C1y)
 StringGrid1->Canvas->StretchDraw (Rect, Cyplenok1->Graphic);
  if (ACol==Ch1x&& ARow==Ch1y)
 StringGrid1->Canvas->StretchDraw (Rect, Kurica->Graphic);
							  //=================================
  if (ACol==ZL1X && ARow==ZL1Y)
  StringGrid1->Canvas->StretchDraw (Rect, Lev1->Graphic);
   if (ACol==ZG1x && ARow==ZG1y)
 StringGrid1->Canvas->StretchDraw (Rect, Gziraf1->Graphic);
 if ((ACol==ZS1x && ARow==ZS1y))
 StringGrid1->Canvas->StretchDraw (Rect, Slon1->Graphic);

  if (ACol==ZC1x&& ARow==ZC1y)
 StringGrid1->Canvas->StretchDraw (Rect, Cyplenok1->Graphic);
   if (ACol==ZCh1x&& ARow==ZCh1y)
 StringGrid1->Canvas->StretchDraw (Rect, Kurica->Graphic);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
Lev2 = new TPicture ();
Lev2->LoadFromFile("\граф. Ёлементы\\кнопки\\¬торой игрок\\lion.bmp");
StringGrid1->ColWidths[1]=Lev2->Width;
StringGrid1->RowHeights[1]=Lev2->Height;
Gziraf2 = new TPicture ();
Gziraf2->LoadFromFile("\граф. Ёлементы\\кнопки\\¬торой игрок\\Gir.bmp");
StringGrid1->ColWidths[0]=Gziraf2->Width;
StringGrid1->RowHeights[0]=Gziraf2->Height;
Slon2 = new TPicture ();
Slon2->LoadFromFile("\граф. Ёлементы\\кнопки\\¬торой игрок\\el.bmp");
StringGrid1->ColWidths[2]=Slon2->Width;
StringGrid1->RowHeights[0]=Slon2->Height;
Cyplenok2 = new TPicture ();
Cyplenok2->LoadFromFile("\граф. Ёлементы\\кнопки\\¬торой игрок\\ch.bmp");
StringGrid1->ColWidths[1]=Cyplenok2->Width;
StringGrid1->RowHeights[1]=Cyplenok2->Height;
Kurica1 = new TPicture ();
Kurica1->LoadFromFile("\граф. Ёлементы\\кнопки\\¬торой игрок\\1ch.bmp");
StringGrid1->ColWidths[1]=Cyplenok2->Width;
StringGrid1->RowHeights[1]=Cyplenok2->Height;

Lev1 = new TPicture ();
Lev1->LoadFromFile("\граф. Ёлементы\\кнопки\\первый игрок\\lion.bmp");
StringGrid1->ColWidths[1]=Lev1->Width;
StringGrid1->RowHeights[1]=Lev1->Height;
Gziraf1 = new TPicture ();
Gziraf1->LoadFromFile("\граф. Ёлементы\\кнопки\\первый игрок\\Gir.bmp");
StringGrid1->ColWidths[0]=Gziraf1->Width;
StringGrid1->RowHeights[0]=Gziraf1->Height;
Slon1 = new TPicture ();
Slon1->LoadFromFile("\граф. Ёлементы\\кнопки\\первый игрок\\el.bmp");
StringGrid1->ColWidths[2]=Slon1->Width;
StringGrid1->RowHeights[0]=Slon1->Height;
Cyplenok1 = new TPicture ();
Cyplenok1->LoadFromFile("\граф. Ёлементы\\кнопки\\первый игрок\\ch.bmp");
StringGrid1->ColWidths[1]=Cyplenok1->Width;
StringGrid1->RowHeights[1]=Cyplenok1->Height;
Kurica = new TPicture ();
Kurica->LoadFromFile("\граф. Ёлементы\\кнопки\\первый игрок\\1ch.bmp");
StringGrid1->ColWidths[1]=Cyplenok1->Width;
StringGrid1->RowHeights[1]=Cyplenok1->Height;


}
//---------------------------------------------------------------------------



void __fastcall TForm1::StringGrid1SelectCell(TObject *Sender, int ACol, int ARow,
		  bool &CanSelect)
{

if (sost==5) {
lbl4->Caption=IntToStr(sost)+"khod:"+IntToStr(khod);
	sost=1 ;
}
   if (sost==4)
{
lbl4->Caption=IntToStr(sost)+"khod:"+IntToStr(khod);
 K3=StringGrid1->Col ;
 K4=StringGrid1->Row ;
// lbl1->Caption=IntToStr(vslon);
// lbl2->Caption=IntToStr(zvslon);
  sost=5;



  /////////////////////////////////////
   /////////////////////////////////////
	/////////////////////////////////////
	 /////////////////////////////////////
	  /////////////////////////////////////
   //=======жираф==================================================
  if (K2==Gy && K1==Gx && khod==2 && ((K4==Gy-1 && K3==Gx)||(K4==Gy+1 && K3==Gx)||(K4==Gy && K3==Gx+1)||(K4==Gy&& K3==Gx-1))&& (!(K4==Sy && K3==Sx))&& (!(K4==LY && K3==LX))&& (!(K4==Cy && K3==Cx))&& (!(K4==ZSy && K3==ZSx))&& (!(K4==ZCy && K3==ZCx))&& (!(K4==ZGy && K3==ZGx))&& (!(K4==ZChy && K3==ZChx))&& (!(K4==Chy && K3==Chx))) {
	 if (K4==S1y && K3==S1x) {
	 S1y=-10 ;
	 S1x=-10;
	 zvslon=1;
	 btn2->Visible=true;
	 edt1->Visible=true;
	 edt2->Visible=true;

	 }
	 if (K4==Ch1y && K3==Ch1x) {
	 Ch1y=-10 ;
	 Ch1x=-10;
	 zvcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;

	 }
	  if (K4==ZCh1y  && K3==ZCh1x) {
	 ZCh1y=-10 ;
	 ZCh1x=-10;
	 vcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;
	 }

	  if (K4==G1y && K3==G1x) {
	 G1y=-10 ;
	 G1x=-10;
	 zvgiraf=1;
	 btn5->Visible=true;
	 edt5->Visible=true;
	 edt6->Visible=true;

	 }
	 if (K4==L1Y && K3==L1X) {
	 L1Y=-10 ;
	 L1X=-10;
	 zvlev=1;

	 }
	  if (K4==C1y && K3==C1x) {
	 C1y=-10 ;
	 C1x=-10;
	 zvcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;

	 }

	  if (K4==ZS1y && K3==ZS1x) {
	 ZS1y=-10 ;
	 ZS1x=-10;
	 vslon=1;
	 btn2->Visible=true;
	 edt1->Visible=true;
	 edt2->Visible=true;
	 }
	  if (K4==ZC1y && K3==ZC1x) {
	 ZC1y=-10 ;
	 ZC1x=-10;
	 vcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;
	 }
	 Gy=K4;
	 Gx=K3;
	 K1=-1;
	 K2=-1;
	khod=1;
 }  else{
  if (K2==G1y && K1==G1x && khod==1 && ((K4==G1y-1 && K3==G1x)||(K4==G1y+1 && K3==G1x)||(K4==G1y && K3==G1x+1)||(K4==G1y&& K3==G1x-1))&& (!(K4==S1y && K3==S1x))&& (!(K4==L1Y && K3==L1X))&& (!(K4==C1y && K3==C1x))&& (!(K4==ZS1y && K3==ZS1x))&& (!(K4==ZC1y && K3==ZC1x))&& (!(K4==ZG1y && K3==ZG1x))&& (!(K4==ZCh1y && K3==ZCh1x))&& (!(K4==Ch1y && K3==Ch1x))){
	 if (K4==Sy && K3==Sx) {
	 Sy=-10 ;
	 Sx=-10;
	 zvslon1=1;
	 btn3->Visible=true;
	 edt3->Visible=true;
	 edt4->Visible=true;

	 }

		 if (K4==Chy && K3==Chx) {
	 Chy=-10 ;
	 Chx=-10;
	 zvcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }
	  if (K4==ZChy  && K3==ZChx) {
	 ZChy=-10 ;
	 ZChx=-10;
	 vcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;
	 }

	  if (K4==Gy && K3==Gx) {
	 Gy=-10 ;
	 Gx=-10;
	 zvgiraf1=1;
	 btn6->Visible=true;
	 edt7->Visible=true;
	 edt8->Visible=true;

	 }
	 if (K4==LY && K3==LX) {
	 LY=-10 ;
	 LX=-10;


	 }
	  if (K4==Cy && K3==Cx) {
	 Cy=-10 ;
	 Cx=-10;
	 zvcyplenok1=1;
		 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }
	 if (K4==ZSy && K3==ZSx) {
	 ZSy=-10 ;
	 ZSx=-10;
	 vslon1=1;
	  btn3->Visible=true;
	 edt3->Visible=true;
	 edt4->Visible=true;
	 }

	  if (K4==ZCy && K3==ZCx) {
	 ZCy=-10 ;
	 ZCx=-10;
	  vcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }

	 G1y=K4;
	 G1x=K3;
	 K1=-1;
	 K2=-1;
	khod= 2;
 }
 }
 //========вз€тый жираф==================================================
  if (K2==ZGy && K1==ZGx && khod==2 && ((K4==ZGy-1 && K3==ZGx)||(K4==ZGy+1 && K3==ZGx)||(K4==ZGy && K3==ZGx+1)||(K4==ZGy&& K3==ZGx-1))&& (!(K4==Sy && K3==Sx))&& (!(K4==LY && K3==LX))&& (!(K4==Cy && K3==Cx))&& (!(K4==ZSy && K3==ZSx))&& (!(K4==ZCy && K3==ZCx))&& (!(K4==Gy && K3==Gx))&& (!(K4==ZChy && K3==ZChx))&& (!(K4==Chy && K3==Chx))) {
	 if (K4==S1y && K3==S1x) {
	 S1y=-10 ;
	 S1x=-10;
	 zvslon++;
	 btn2->Visible=true;
	 edt1->Visible=true;
	 edt2->Visible=true;

	 }
	 if (K4==Ch1y && K3==Ch1x) {
	 Ch1y=-10 ;
	 Ch1x=-10;
	 zvcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;

	 }
	  if (K4==ZCh1y  && K3==ZCh1x) {
	 ZCh1y=-10 ;
	 ZCh1x=-10;
	 vcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;
	 }
	  if (K4==ZG1y && K3==ZG1x) {
	 ZG1y=-10 ;
	 ZG1x=-10;
	 zvgiraf=1;
		 btn5->Visible=true;
	 edt5->Visible=true;
	 edt6->Visible=true;

	 }
	 if (K4==L1Y && K3==L1X) {
	 L1Y=-10 ;
	 L1X=-10;
	 zvlev=1;

	 }
	  if (K4==C1y && K3==C1x) {
	 C1y=-10 ;
	 C1x=-10;
	 zvcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;
	 }

	  if (K4==ZS1y && K3==ZS1x) {
	 ZS1y=-10 ;
	 ZS1x=-10;
	 vslon=1;
	 btn2->Visible=true;
	 edt1->Visible=true;
	 edt2->Visible=true;
	 }
	  if (K4==ZC1y && K3==ZC1x) {
	 ZC1y=-10 ;
	 ZC1x=-10;
	 vcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;

	 }
	 ZGy=K4;
	 ZGx=K3;
	 K1=-1;
	 K2=-1;
	khod=1;
 }  else{
  if (K2==ZG1y && K1==ZG1x && khod==1 && ((K4==ZG1y-1 && K3==ZG1x)||(K4==ZG1y+1 && K3==ZG1x)||(K4==ZG1y && K3==ZG1x+1)||(K4==ZG1y&& K3==ZG1x-1))&& (!(K4==S1y && K3==S1x))&& (!(K4==L1Y && K3==L1X))&& (!(K4==C1y && K3==C1x))&& (!(K4==ZS1y && K3==ZS1x))&& (!(K4==ZC1y && K3==ZC1x))&& (!(K4==G1y && K3==G1x))&& (!(K4==ZCh1y && K3==ZCh1x))&& (!(K4==Ch1y && K3==Ch1x))){
	 if (K4==Sy && K3==Sx) {
	 Sy=-10 ;
	 Sx=-10;
	 zvslon1=1;
	 btn3->Visible=true;
	 edt3->Visible=true;
	 edt4->Visible=true;

	 }
	  if (K4==Chy && K3==Chx) {
	 Chy=-10 ;
	 Chx=-10;
	 zvcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }
	  if (K4==ZChy  && K3==ZChx) {
	 ZChy=-10 ;
	 ZChx=-10;
	 vcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;
	 }
	  if (K4==Gy && K3==Gx) {
	 Gy=-10 ;
	 Gx=-10;
	 zvgiraf1=1;
	 btn6->Visible=true;
	 edt7->Visible=true;
	 edt8->Visible=true;

	 }
		  if (K4==ZGy && K3==ZGx) {
	 ZGy=-10 ;
	 ZGx=-10;
	 zvgiraf1=1;
	 btn6->Visible=true;
	 edt7->Visible=true;
	 edt8->Visible=true;
	 }
	 if (K4==LY && K3==LX) {
	 LY=-10 ;
	 LX=-10;


	 }
	  if (K4==Cy && K3==Cx) {
	 Cy=-10 ;
	 Cx=-10;
	 zvcyplenok=1;
	 btn8->Visible=true;
	 edt10->Visible=true;
	 edt11->Visible=true;


	 }
	 if (K4==ZSy && K3==ZSx) {
	 ZSy=-10 ;
	 ZSx=-10;
	 vslon1=1;
	  btn3->Visible=true;
	 edt3->Visible=true;
	 edt4->Visible=true;
	 }

	  if (K4==ZCy && K3==ZCx) {
	 ZCy=-10 ;
	 ZCx=-10;
	 vcyplenok=1;
	 btn8->Visible=true;
	 edt10->Visible=true;
	 edt11->Visible=true;


	 }

	 ZG1y=K4;
	 ZG1x=K3;
	 K1=-1;
	 K2=-1;
	khod= 2;
 }
 }
   /////////////////////////////////////
  /////////////////////////////////////
   /////////////////////////////////////
	/////////////////////////////////////
	 if (K2==Sy && K1==Sx && khod==2 && ((K4==Sy-1 && K3==Sx-1)||(K4==Sy+1 && K3==Sx+1)||(K4==Sy-1 && K3==Sx+1)||(K4==Sy+1 && K3==Sx-1))&& (!(K4==Gy && K3==Gx))&& (!(K4==LY && K3==LX))&& (!(K4==Cy && K3==Cx))&& (!(K4==ZSy && K3==ZSx))&& (!(K4==ZCy && K3==ZCx))&& (!(K4==ZGy && K3==ZGx))&& (!(K4==ZChy && K3==ZChx))&& (!(K4==Chy && K3==Chx))) {
	 if (K4==S1y && K3==S1x) {
	 S1y=-10 ;
	 S1x=-10;
	 zvslon=1;
	 btn2->Visible=true;
	 edt1->Visible=true;
	 edt2->Visible=true;

	 }
	 if (K4==Ch1y && K3==Ch1x) {
	 Ch1y=-10 ;
	 Ch1x=-10;
	 zvcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;

	 }
	  if (K4==ZCh1y  && K3==ZCh1x) {
	 ZCh1y=-10 ;
	 ZCh1x=-10;
	 vcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;
	 }

	  if (K4==G1y && K3==G1x) {
	 G1y=-10 ;
	 G1x=-10;
	 zvgiraf=1;
	 btn5->Visible=true;
	 edt5->Visible=true;
	 edt6->Visible=true;

	 }
		  if (K4==ZG1y && K3==ZG1x) {
	 ZG1y=-10 ;
	 ZG1x=-10;
	 vgiraf=1;
	 btn5->Visible=true;
	 edt5->Visible=true;
	 edt6->Visible=true;

	 }
	 if (K4==L1Y && K3==L1X) {
	 L1Y=-10 ;
	 L1X=-10;
	 zvlev=1;

	 }
	  if (K4==C1y && K3==C1x) {
	 C1y=-10 ;
	 C1x=-10;
	 zvcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;

	 }

	  if (K4==ZS1y && K3==ZS1x) {
	 ZS1y=-10 ;
	 ZS1x=-10;
	 vslon=1;
	 btn2->Visible=true;
	 edt1->Visible=true;
	 edt2->Visible=true;
	 }
	  if (K4==ZC1y && K3==ZC1x) {
	 ZC1y=-10 ;
	 ZC1x=-10;
	 vcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;
	 }
	 Sy=K4;
	 Sx=K3;
	 K1=-1;
	 K2=-1;
	khod=1;
 }  else{
  if (K2==S1y && K1==S1x && khod==1 && ((K4==S1y-1 && K3==S1x-1)||(K4==S1y+1 && K3==S1x+1)||(K4==S1y-1 && K3==S1x+1)||(K4==S1y+1 && K3==S1x-1))&& (!(K4==G1y && K3==G1x))&& (!(K4==L1Y && K3==L1X))&& (!(K4==C1y && K3==C1x))&& (!(K4==ZS1y && K3==ZS1x))&& (!(K4==ZC1y && K3==ZC1x))&& (!(K4==ZG1y && K3==ZG1x))&& (!(K4==ZCh1y && K3==ZCh1x))&& (!(K4==Ch1y && K3==Ch1x))){
	 if (K4==Sy && K3==Sx) {
	 Sy=-10 ;
	 Sx=-10;
	 zvslon1=1;
	 btn3->Visible=true;
	 edt3->Visible=true;
	 edt4->Visible=true;

	 }
	  if (K4==Chy && K3==Chx) {
	 Chy=-10 ;
	 Chx=-10;
	 zvcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }
	  if (K4==ZChy  && K3==ZChx) {
	 ZChy=-10 ;
	 ZChx=-10;
	 vcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;
	 }
	  if (K4==Gy && K3==Gx) {
	 Gy=-10 ;
	 Gx=-10;
	 zvgiraf1=1;
	 btn6->Visible=true;
	 edt7->Visible=true;
	 edt8->Visible=true;

	 }
	 if (K4==ZGy && K3==ZGx) {
	 ZGy=-10 ;
	 ZGx=-10;
	 vgiraf1=1;
	 btn6->Visible=true;
	 edt7->Visible=true;
	 edt8->Visible=true;

	 }
	 if (K4==LY && K3==LX) {
	 LY=-10 ;
	 LX=-10;


	 }
	  if (K4==Cy && K3==Cx) {
	 Cy=-10 ;
	 Cx=-10;
	 zvcyplenok1=1;
		 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }
	 if (K4==ZSy && K3==ZSx) {
	 ZSy=-10 ;
	 ZSx=-10;
	 vslon1=1;
	  btn3->Visible=true;
	 edt3->Visible=true;
	 edt4->Visible=true;
	 }

	  if (K4==ZCy && K3==ZCx) {
	 ZCy=-10 ;
	 ZCx=-10;
	  vcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }

	 S1y=K4;
	 S1x=K3;
	 K1=-1;
	 K2=-1;
	khod= 2;
 }
 }


  if (K2==ZSy && K1==ZSx && khod==2 && ((K4==ZSy-1 && K3==ZSx-1)||(K4==ZSy+1 && K3==ZSx+1)||(K4==ZSy-1 && K3==ZSx+1)||(K4==ZSy+1 && K3==ZSx-1))&& (!(K4==Gy && K3==Gx))&& (!(K4==LY && K3==LX))&& (!(K4==Cy && K3==Cx))&& (!(K4==ZSy && K3==ZSx))&& (!(K4==ZCy && K3==ZCx))&& (!(K4==ZGy && K3==ZGx))&& (!(K4==ZChy && K3==ZChx))&& (!(K4==Chy && K3==Chx))) {
	 if (K4==S1y && K3==S1x) {
	 S1y=-10 ;
	 S1x=-10;
	 zvslon=1;
	 btn2->Visible=true;
	 edt1->Visible=true;
	 edt2->Visible=true;

	 }
        if (K4==Ch1y && K3==Ch1x) {
	 Ch1y=-10 ;
	 Ch1x=-10;
	 zvcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;

	 }
	  if (K4==ZCh1y  && K3==ZCh1x) {
	 ZCh1y=-10 ;
	 ZCh1x=-10;
	 vcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;
	 }
	  if (K4==G1y && K3==G1x) {
	 G1y=-10 ;
	 G1x=-10;
	 zvgiraf=1;
	 btn5->Visible=true;
	 edt5->Visible=true;
	 edt6->Visible=true;

	 }
		  if (K4==ZG1y && K3==ZG1x) {
	 ZG1y=-10 ;
	 ZG1x=-10;
	 vgiraf=1;
	 btn5->Visible=true;
	 edt5->Visible=true;
	 edt6->Visible=true;

	 }
	 if (K4==L1Y && K3==L1X) {
	 L1Y=-10 ;
	 L1X=-10;
	 zvlev=1;

	 }
	  if (K4==C1y && K3==C1x) {
	 C1y=-10 ;
	 C1x=-10;
	 zvcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;

	 }

	  if (K4==ZS1y && K3==ZS1x) {
	 ZS1y=-10 ;
	 ZS1x=-10;
	 vslon=1;
	 btn2->Visible=true;
	 edt1->Visible=true;
	 edt2->Visible=true;
	 }
	  if (K4==ZC1y && K3==ZC1x) {
	 ZC1y=-10 ;
	 ZC1x=-10;
	 vcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;
	 }
	 ZSy=K4;
	 ZSx=K3;
	 K1=-1;
	 K2=-1;
	khod=1;
 }  else{
  if (K2==ZS1y && K1==ZS1x && khod==1 && ((K4==ZS1y-1 && K3==ZS1x-1)||(K4==ZS1y+1 && K3==ZS1x+1)||(K4==ZS1y-1 && K3==ZS1x+1)||(K4==ZS1y+1 && K3==ZS1x-1))&& (!(K4==G1y && K3==G1x))&& (!(K4==L1Y && K3==L1X))&& (!(K4==C1y && K3==C1x))&& (!(K4==ZS1y && K3==ZS1x))&& (!(K4==ZC1y && K3==ZC1x))&& (!(K4==ZG1y && K3==ZG1x))&& (!(K4==ZCh1y && K3==ZCh1x))&& (!(K4==Ch1y && K3==Ch1x))){
	 if (K4==Sy && K3==Sx) {
	 Sy=-10 ;
	 Sx=-10;
	 zvslon1=1;
	 btn3->Visible=true;
	 edt3->Visible=true;
	 edt4->Visible=true;

	 }
	  if (K4==Chy && K3==Chx) {
	 Chy=-10 ;
	 Chx=-10;
	 zvcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }
	  if (K4==ZChy  && K3==ZChx) {
	 ZChy=-10 ;
	 ZChx=-10;
	 vcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;
	 }
	  if (K4==Gy && K3==Gx) {
	 Gy=-10 ;
	 Gx=-10;
	 zvgiraf1=1;
	 btn6->Visible=true;
	 edt7->Visible=true;
	 edt8->Visible=true;

	 }
	 if (K4==ZGy && K3==ZGx) {
	 ZGy=-10 ;
	 ZGx=-10;
	 vgiraf1=1;
	 btn6->Visible=true;
	 edt7->Visible=true;
	 edt8->Visible=true;

	 }
	 if (K4==LY && K3==LX) {
	 LY=-10 ;
	 LX=-10;


	 }
	  if (K4==Cy && K3==Cx) {
	 Cy=-10 ;
	 Cx=-10;
	 zvcyplenok1=1;
		 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }
	 if (K4==ZSy && K3==ZSx) {
	 ZSy=-10 ;
	 ZSx=-10;
	 vslon1=1;
	  btn3->Visible=true;
	 edt3->Visible=true;
	 edt4->Visible=true;
	 }

	  if (K4==ZCy && K3==ZCx) {
	 ZCy=-10 ;
	 ZCx=-10;
	  vcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }

	 ZS1y=K4;
	 ZS1x=K3;
	 K1=-1;
	 K2=-1;
	khod= 2;
 }
 }
 /////
 ////
 if (K2==LY && K1==LX && khod==2 && ((K4==LY-1 && K3==LX-1)||(K4==LY+1 && K3==LX+1)||(K4==LY-1 && K3==LX+1)||(K4==LY+1 && K3==LX-1)||(K4==LY+1 && K3==LX)||(K4==LY-1 && K3==LX)||(K4==LY && K3==LX+1)||(K4==LY && K3==LX-1)) && (!(K4==Gy && K3==Gx))&& (!(K4==LY && K3==LX))&& (!(K4==Cy && K3==Cx))&& (!(K4==ZSy && K3==ZSx))&& (!(K4==Sy && K3==Sx))&& (!(K4==ZCy && K3==ZCx))&& (!(K4==ZGy && K3==ZGx))&& (!(K4==ZChy && K3==ZChx))&& (!(K4==Chy && K3==Chx))) {
	 if (K4==S1y && K3==S1x) {
	 S1y=-10 ;
	 S1x=-10;
	 zvslon=1;
	 btn2->Visible=true;
	 edt1->Visible=true;
	 edt2->Visible=true;

	 }
     if (K4==Ch1y && K3==Ch1x) {
	 Ch1y=-10 ;
	 Ch1x=-10;
	 zvcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;

	 }
	  if (K4==ZCh1y  && K3==ZCh1x) {
	 ZCh1y=-10 ;
	 ZCh1x=-10;
	 vcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;
	 }
	  if (K4==G1y && K3==G1x) {
	 G1y=-10 ;
	 G1x=-10;
	 zvgiraf=1;
	 btn5->Visible=true;
	 edt5->Visible=true;
	 edt6->Visible=true;

	 }
		  if (K4==ZG1y && K3==ZG1x) {
	 ZG1y=-10 ;
	 ZG1x=-10;
	 vgiraf=1;
	 btn5->Visible=true;
	 edt5->Visible=true;
	 edt6->Visible=true;

	 }
	 if (K4==L1Y && K3==L1X) {
	 L1Y=-10 ;
	 L1X=-10;
	 zvlev=1;

	 }
	  if (K4==C1y && K3==C1x) {
	 C1y=-10 ;
	 C1x=-10;
	 zvcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;

	 }

	  if (K4==ZS1y && K3==ZS1x) {
	 ZS1y=-10 ;
	 ZS1x=-10;
	 vslon=1;
	 btn2->Visible=true;
	 edt1->Visible=true;
	 edt2->Visible=true;
	 }
	  if (K4==ZC1y && K3==ZC1x) {
	 ZC1y=-10 ;
	 ZC1x=-10;
	 vcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;
	 }
	 LY=K4;
	 LX=K3;
	 K1=-1;
	 K2=-1;
	khod=1;
 }  else{
 if (K2==L1Y && K1==L1X && khod==1 && ((K4==L1Y-1 && K3==L1X-1)||(K4==L1Y+1 && K3==L1X+1)||(K4==L1Y-1 && K3==L1X+1)||(K4==L1Y+1 && K3==L1X-1)||(K4==L1Y+1 && K3==L1X)||(K4==L1Y-1 && K3==L1X)||(K4==L1Y && K3==L1X+1)||(K4==L1Y && K3==L1X-1))&& (!(K4==G1y && K3==G1x))&& (!(K4==C1y && K3==C1x))&& (!(K4==ZS1y && K3==ZS1x))&& (!(K4==S1y && K3==S1x))&& (!(K4==ZC1y && K3==ZC1x))&& (!(K4==ZG1y && K3==ZG1x))&& (!(K4==ZCh1y && K3==ZCh1x))&& (!(K4==Ch1y && K3==Ch1x))) {
	  if (K4==Sy && K3==Sx) {
	 Sy=-10 ;
	 Sx=-10;
	 zvslon1=1;
	 btn3->Visible=true;
	 edt3->Visible=true;
	 edt4->Visible=true;

	 }
	  if (K4==Chy && K3==Chx) {
	 Chy=-10 ;
	 Chx=-10;
	 zvcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }
	  if (K4==ZChy  && K3==ZChx) {
	 ZChy=-10 ;
	 ZChx=-10;
	 vcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;
	 }
	  if (K4==Gy && K3==Gx) {
	 Gy=-10 ;
	 Gx=-10;
	 zvgiraf1=1;
	 btn6->Visible=true;
	 edt7->Visible=true;
	 edt8->Visible=true;

	 }
	 if (K4==ZGy && K3==ZGx) {
	 ZGy=-10 ;
	 ZGx=-10;
	 vgiraf1=1;
	 btn6->Visible=true;
	 edt7->Visible=true;
	 edt8->Visible=true;

	 }
	 if (K4==LY && K3==LX) {
	 LY=-10 ;
	 LX=-10;


	 }
	  if (K4==Cy && K3==Cx) {
	 Cy=-10 ;
	 Cx=-10;
	 zvcyplenok1=1;
		 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }
	 if (K4==ZSy && K3==ZSx) {
	 ZSy=-10 ;
	 ZSx=-10;
	 vslon1=1;
	  btn3->Visible=true;
	 edt3->Visible=true;
	 edt4->Visible=true;
	 }

	  if (K4==ZCy && K3==ZCx) {
	 ZCy=-10 ;
	 ZCx=-10;
	  vcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }

	 L1Y=K4;
	 L1X=K3;
	 K1=-1;
	 K2=-1;
	khod= 2;
 }
 }

 ///
 ///
if (K2==Cy && K1==Cx && khod==2 && ((K4==Cy-1 && K3==Cx))&& (!(K4==Gy && K3==Gx))&& (!(K4==LY && K3==LX))&& (!(K4==Cy && K3==Cx))&& (!(K4==ZSy && K3==ZSx))&& (!(K4==ZCy && K3==ZCx))&& (!(K4==ZGy && K3==ZGx))&& (!(K4==ZChy && K3==ZChx))&& (!(K4==Chy && K3==Chx))) {
	 if (K4==S1y && K3==S1x) {
	 S1y=-10 ;
	 S1x=-10;
	 zvslon=1;
	 btn2->Visible=true;
	 edt1->Visible=true;
	 edt2->Visible=true;

	 }
	  if (K4==Ch1y && K3==Ch1x) {
	 Ch1y=-10 ;
	 Ch1x=-10;
	 zvcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;

	 }
	  if (K4==ZCh1y  && K3==ZCh1x) {
	 ZCh1y=-10 ;
	 ZCh1x=-10;
	 vcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;
	 }
	  if (K4==G1y && K3==G1x) {
	 G1y=-10 ;
	 G1x=-10;
	 zvgiraf=1;
	 btn5->Visible=true;
	 edt5->Visible=true;
	 edt6->Visible=true;

	 }
		  if (K4==ZG1y && K3==ZG1x) {
	 ZG1y=-10 ;
	 ZG1x=-10;
	 vgiraf=1;
	 btn5->Visible=true;
	 edt5->Visible=true;
	 edt6->Visible=true;

	 }
	 if (K4==L1Y && K3==L1X) {
	 L1Y=-10 ;
	 L1X=-10;
	 zvlev=1;

	 }
	  if (K4==C1y && K3==C1x) {
	 C1y=-10 ;
	 C1x=-10;
	 zvcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;

	 }

	  if (K4==ZS1y && K3==ZS1x) {
	 ZS1y=-10 ;
	 ZS1x=-10;
	 vslon=1;
	 btn2->Visible=true;
	 edt1->Visible=true;
	 edt2->Visible=true;
	 }
	  if (K4==ZC1y && K3==ZC1x) {
	 ZC1y=-10 ;
	 ZC1x=-10;
	 vcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;
	 }


	 Cy=K4;
	 Cx=K3;

		  if (Cy==0) {
	 Cy=-10 ;
	 Cx=-10;
	 Chy=K4 ;
	 Chx=K3;
	 }
	 K1=-1;
	 K2=-1;
	khod=1;
 }  else{
  if (K2==C1y && K1==C1x && khod==1 &&(K4==C1y+1 && K3==C1x)&& (!(K4==G1y && K3==G1x))&& (!(K4==L1Y && K3==L1X))&& (!(K4==C1y && K3==C1x))&& (!(K4==ZS1y && K3==ZS1x))&& (!(K4==ZC1y && K3==ZC1x))&& (!(K4==ZG1y && K3==ZG1x))&& (!(K4==ZCh1y && K3==ZCh1x))&& (!(K4==Ch1y && K3==Ch1x))){
	 if (K4==Sy && K3==Sx) {
	 Sy=-10 ;
	 Sx=-10;
	 zvslon1=1;
	 btn3->Visible=true;
	 edt3->Visible=true;
	 edt4->Visible=true;

	 }
	  if (K4==Gy && K3==Gx) {
	 Gy=-10 ;
	 Gx=-10;
	 zvgiraf1=1;
	 btn6->Visible=true;
	 edt7->Visible=true;
	 edt8->Visible=true;

	 }
	  if (K4==Chy && K3==Chx) {
	 Chy=-10 ;
	 Chx=-10;
	 zvcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }
	  if (K4==ZChy  && K3==ZChx) {
	 ZChy=-10 ;
	 ZChx=-10;
	 vcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;
	 }
	 if (K4==ZGy && K3==ZGx) {
	 ZGy=-10 ;
	 ZGx=-10;
	 vgiraf1=1;
	 btn6->Visible=true;
	 edt7->Visible=true;
	 edt8->Visible=true;

	 }
	 if (K4==LY && K3==LX) {
	 LY=-10 ;
	 LX=-10;


	 }
	  if (K4==Cy && K3==Cx) {
	 Cy=-10 ;
	 Cx=-10;
	 zvcyplenok1=1;
		 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }
	 if (K4==ZSy && K3==ZSx) {
	 ZSy=-10 ;
	 ZSx=-10;
	 vslon1=1;
	  btn3->Visible=true;
	 edt3->Visible=true;
	 edt4->Visible=true;
	 }

	  if (K4==ZCy && K3==ZCx) {
	 ZCy=-10 ;
	 ZCx=-10;
	  vcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }

	 C1y=K4;
	 C1x=K3;
			  if (C1y==3) {
	 C1y=-10 ;
	 C1x=-10;
	 Ch1y=K4 ;
	 Ch1x=K3;

	 }
	 K1=-1;
	 K2=-1;
	khod= 2;
 }
 }



 ///
 ///
if (K2==ZCy && K1==ZCx && khod==2 && ((K4==ZCy-1 && K3==ZCx))&& (!(K4==Gy && K3==Gx))&& (!(K4==LY && K3==LX))&& (!(K4==Cy && K3==Cx))&& (!(K4==ZSy && K3==ZSx))&& (!(K4==ZCy && K3==ZCx))&& (!(K4==ZGy && K3==ZGx))&& (!(K4==ZChy && K3==ZChx))&& (!(K4==Chy && K3==Chx))) {
	 if (K4==S1y && K3==S1x) {
	 S1y=-10 ;
	 S1x=-10;
	 zvslon=1;
	 btn2->Visible=true;
	 edt1->Visible=true;
	 edt2->Visible=true;

	 }
     if (K4==Ch1y && K3==Ch1x) {
	 Ch1y=-10 ;
	 Ch1x=-10;
	 zvcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;

	 }
	  if (K4==ZCh1y  && K3==ZCh1x) {
	 ZCh1y=-10 ;
	 ZCh1x=-10;
	 vcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;
	 }
	  if (K4==G1y && K3==G1x) {
	 G1y=-10 ;
	 G1x=-10;
	 zvgiraf=1;
	 btn5->Visible=true;
	 edt5->Visible=true;
	 edt6->Visible=true;

	 }
		  if (K4==ZG1y && K3==ZG1x) {
	 ZG1y=-10 ;
	 ZG1x=-10;
	 vgiraf=1;
	 btn5->Visible=true;
	 edt5->Visible=true;
	 edt6->Visible=true;

	 }
	 if (K4==L1Y && K3==L1X) {
	 L1Y=-10 ;
	 L1X=-10;
	 zvlev=1;

	 }
	  if (K4==C1y && K3==C1x) {
	 C1y=-10 ;
	 C1x=-10;
	 zvcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;

	 }

	  if (K4==ZS1y && K3==ZS1x) {
	 ZS1y=-10 ;
	 ZS1x=-10;
	 vslon=1;
	 btn2->Visible=true;
	 edt1->Visible=true;
	 edt2->Visible=true;
	 }
	  if (K4==ZC1y && K3==ZC1x) {
	 ZC1y=-10 ;
	 ZC1x=-10;
	 vcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;
	 }
	 ZCy=K4;
	 ZCx=K3;
			  if (ZCy==0) {
	 ZCy=-10 ;
	 ZCx=-10;
	 ZChy=K4 ;
	 ZChx=K3;
	 }
	 K1=-1;
	 K2=-1;
	khod=1;
 }  else{
  if (K2==ZC1y && K1==ZC1x && khod==1 &&(K4==ZC1y+1 && K3==ZC1x)&& (!(K4==G1y && K3==G1x))&& (!(K4==L1Y && K3==L1X))&& (!(K4==C1y && K3==C1x))&& (!(K4==ZS1y && K3==ZS1x))&& (!(K4==ZC1y && K3==ZC1x))&& (!(K4==ZG1y && K3==ZG1x))&& (!(K4==ZCh1y && K3==ZCh1x))&& (!(K4==Ch1y && K3==Ch1x))){
	 if (K4==Sy && K3==Sx) {
	 Sy=-10 ;
	 Sx=-10;
	 zvslon1=1;
	 btn3->Visible=true;
	 edt3->Visible=true;
	 edt4->Visible=true;

	 }
	  if (K4==Gy && K3==Gx) {
	 Gy=-10 ;
	 Gx=-10;
	 zvgiraf1=1;
	 btn6->Visible=true;
	 edt7->Visible=true;
	 edt8->Visible=true;

	 }
	 if (K4==ZGy && K3==ZGx) {
	 ZGy=-10 ;
	 ZGx=-10;
	 vgiraf1=1;
	 btn6->Visible=true;
	 edt7->Visible=true;
	 edt8->Visible=true;

	 }
	 if (K4==LY && K3==LX) {
	 LY=-10 ;
	 LX=-10;


	 }
	  if (K4==Cy && K3==Cx) {
	 Cy=-10 ;
	 Cx=-10;
	 zvcyplenok1=1;
		 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }
	 if (K4==ZSy && K3==ZSx) {
	 ZSy=-10 ;
	 ZSx=-10;
	 vslon1=1;
	  btn3->Visible=true;
	 edt3->Visible=true;
	 edt4->Visible=true;
	 }

	  if (K4==ZCy && K3==ZCx) {
	 ZCy=-10 ;
	 ZCx=-10;
	  vcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }

	 ZC1y=K4;
	 ZC1x=K3;
			  if (ZC1y==3) {
	 ZC1y=-10 ;
	 ZC1x=-10;
	 ZCh1y=K4 ;
	 ZCh1x=K3;
	 }
	 K1=-1;
	 K2=-1;
	khod= 2;
 }
 }
  //////
  //////////
  if (K2==Chy && K1==Chx && khod==2 && ((K4==Chy-1 && K3==Chx)|| (K4==Chy-1 && K3==Chx+1)|| (K4==Chy-1 && K3==Chx)|| (K4==Chy-1 && K3==Chx-1)|| (K4==Chy+1 && K3==Chx)|| (K4==Chy && K3==Chx-1) ||(K4==Chy && K3==Chx+1))&& (!(K4==Gy && K3==Gx))&& (!(K4==LY && K3==LX))&& (!(K4==Cy && K3==Cx))&& (!(K4==ZSy && K3==ZSx))&& (!(K4==ZCy && K3==ZCx))&& (!(K4==ZGy && K3==ZGx))&& (!(K4==ZChy && K3==ZChx))) {
	 if (K4==S1y && K3==S1x) {
	 S1y=-10 ;
	 S1x=-10;
	 zvslon=1;
	 btn2->Visible=true;
	 edt1->Visible=true;
	 edt2->Visible=true;

	 }
	  if (K4==Ch1y && K3==Ch1x) {
	 Ch1y=-10 ;
	 Ch1x=-10;
	 zvcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;

	 }
	  if (K4==ZCh1y  && K3==ZCh1x) {
	 ZCh1y=-10 ;
	 ZCh1x=-10;
	 vcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;
	 }
	  if (K4==G1y && K3==G1x) {
	 G1y=-10 ;
	 G1x=-10;
	 zvgiraf=1;
	 btn5->Visible=true;
	 edt5->Visible=true;
	 edt6->Visible=true;

	 }
		  if (K4==ZG1y && K3==ZG1x) {
	 ZG1y=-10 ;
	 ZG1x=-10;
	 vgiraf=1;
	 btn5->Visible=true;
	 edt5->Visible=true;
	 edt6->Visible=true;

	 }
	 if (K4==L1Y && K3==L1X) {
	 L1Y=-10 ;
	 L1X=-10;
	 zvlev=1;

	 }
	  if (K4==C1y && K3==C1x) {
	 C1y=-10 ;
	 C1x=-10;
	 zvcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;

	 }

	  if (K4==ZS1y && K3==ZS1x) {
	 ZS1y=-10 ;
	 ZS1x=-10;
	 vslon=1;
	 btn2->Visible=true;
	 edt1->Visible=true;
	 edt2->Visible=true;
	 }
	  if (K4==ZC1y && K3==ZC1x) {
	 ZC1y=-10 ;
	 ZC1x=-10;
	 vcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;
	 }


	 Chy=K4;
	 Chx=K3;
	 K1=-1;
	 K2=-1;
	khod=1;
 }  else{
  if (K2==Ch1y && K1==Ch1x && khod==1 && ((K4==Ch1y-1 && K3==Ch1x)|| (K4==Ch1y+1 && K3==Ch1x+1)|| (K4==Ch1y+1 && K3==Ch1x)|| (K4==Ch1y+1 && K3==Ch1x-1)|| (K4==Ch1y+1 && K3==Ch1x)|| (K4==Ch1y && K3==Ch1x-1) ||(K4==Ch1y && K3==Ch1x+1))&& (!(K4==C1y && K3==C1x))&& (!(K4==ZS1y && K3==ZS1x))&& (!(K4==ZC1y && K3==ZC1x))&& (!(K4==ZG1y && K3==ZG1x))&& (!(K4==ZCh1y && K3==ZCh1x))&& (!(K4==Ch1y && K3==Ch1x))){
	 if (K4==Sy && K3==Sx) {
	 Sy=-10 ;
	 Sx=-10;
	 zvslon1=1;
	 btn3->Visible=true;
	 edt3->Visible=true;
	 edt4->Visible=true;

	 }
	  if (K4==Gy && K3==Gx) {
	 Gy=-10 ;
	 Gx=-10;
	 zvgiraf1=1;
	 btn6->Visible=true;
	 edt7->Visible=true;
	 edt8->Visible=true;

	 }
	  if (K4==Chy && K3==Chx) {
	 Chy=-10 ;
	 Chx=-10;
	 zvcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }
	  if (K4==ZChy  && K3==ZChx) {
	 ZChy=-10 ;
	 ZChx=-10;
	 vcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;
	 }
	 if (K4==ZGy && K3==ZGx) {
	 ZGy=-10 ;
	 ZGx=-10;
	 vgiraf1=1;
	 btn6->Visible=true;
	 edt7->Visible=true;
	 edt8->Visible=true;

	 }
	 if (K4==LY && K3==LX) {
	 LY=-10 ;
	 LX=-10;


	 }
	  if (K4==Cy && K3==Cx) {
	 Cy=-10 ;
	 Cx=-10;
	 zvcyplenok1=1;
		 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }
	 if (K4==ZSy && K3==ZSx) {
	 ZSy=-10 ;
	 ZSx=-10;
	 vslon1=1;
	  btn3->Visible=true;
	 edt3->Visible=true;
	 edt4->Visible=true;
	 }

	  if (K4==ZCy && K3==ZCx) {
	 ZCy=-10 ;
	 ZCx=-10;
	  vcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }

	 Ch1y=K4;
	 Ch1x=K3;
	 K1=-1;
	 K2=-1;
	khod= 2;
 }
 }

//////
/////

  if (K2==ZChy && K1==ZChx && khod==2 && ((K4==ZChy-1 && K3==ZChx)|| (K4==ZChy+1 && K3==ZChx+1)|| (K4==ZChy+1 && K3==ZChx)|| (K4==ZChy+1 && K3==ZChx-1)|| (K4==ZChy+1 && K3==ZChx)|| (K4==ZChy && K3==ZChx-1) ||(K4==ZChy && K3==ZChx+1))&& (!(K4==Gy && K3==Gx))&& (!(K4==LY && K3==LX))&& (!(K4==Cy && K3==Cx))&& (!(K4==ZSy && K3==ZSx))&& (!(K4==ZCy && K3==ZCx))&& (!(K4==ZGy && K3==ZGx))&& (!(K4==ZChy && K3==ZChx))&& (!(K4==Chy && K3==Chx))) {
	 if (K4==S1y && K3==S1x) {
	 S1y=-10 ;
	 S1x=-10;
	 zvslon=1;
	 btn2->Visible=true;
	 edt1->Visible=true;
	 edt2->Visible=true;

	 }
	  if (K4==Ch1y && K3==Ch1x) {
	 Ch1y=-10 ;
	 Ch1x=-10;
	 zvcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;

	 }
	  if (K4==ZCh1y  && K3==ZCh1x) {
	 ZCh1y=-10 ;
	 ZCh1x=-10;
	 vcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;
	 }
	  if (K4==G1y && K3==G1x) {
	 G1y=-10 ;
	 G1x=-10;
	 zvgiraf=1;
	 btn5->Visible=true;
	 edt5->Visible=true;
	 edt6->Visible=true;

	 }
		  if (K4==ZG1y && K3==ZG1x) {
	 ZG1y=-10 ;
	 ZG1x=-10;
	 vgiraf=1;
	 btn5->Visible=true;
	 edt5->Visible=true;
	 edt6->Visible=true;

	 }
	 if (K4==L1Y && K3==L1X) {
	 L1Y=-10 ;
	 L1X=-10;
	 zvlev=1;

	 }
	  if (K4==C1y && K3==C1x) {
	 C1y=-10 ;
	 C1x=-10;
	 zvcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;

	 }

	  if (K4==ZS1y && K3==ZS1x) {
	 ZS1y=-10 ;
	 ZS1x=-10;
	 vslon=1;
	 btn2->Visible=true;
	 edt1->Visible=true;
	 edt2->Visible=true;
	 }
	  if (K4==ZC1y && K3==ZC1x) {
	 ZC1y=-10 ;
	 ZC1x=-10;
	 vcyplenok=1;
	 btn7->Visible=true;
	 edt9->Visible=true;
	 edt10->Visible=true;
	 }


	 ZChy=K4;
	 ZChx=K3;
	 K1=-1;
	 K2=-1;
	khod=1;
 }  else{
  if (K2==ZCh1y && K1==ZCh1x && khod==1 && ((K4==ZCh1y-1 && K3==ZCh1x)|| (K4==ZCh1y+1 && K3==ZCh1x+1)|| (K4==ZCh1y+1 && K3==ZCh1x)|| (K4==ZCh1y+1 && K3==ZCh1x-1)|| (K4==ZCh1y+1 && K3==ZCh1x)|| (K4==ZCh1y && K3==ZCh1x-1) ||(K4==ZCh1y && K3==ZCh1x+1))&& (!(K4==C1y && K3==C1x))&& (!(K4==ZS1y && K3==ZS1x))&& (!(K4==ZC1y && K3==ZC1x))&& (!(K4==ZG1y && K3==ZG1x))&& (!(K4==ZCh1y && K3==ZCh1x))&& (!(K4==Ch1y && K3==Ch1x))){
	 if (K4==Sy && K3==Sx) {
	 Sy=-10 ;
	 Sx=-10;
	 zvslon1=1;
	 btn3->Visible=true;
	 edt3->Visible=true;
	 edt4->Visible=true;

	 }
	  if (K4==Gy && K3==Gx) {
	 Gy=-10 ;
	 Gx=-10;
	 zvgiraf1=1;
	 btn6->Visible=true;
	 edt7->Visible=true;
	 edt8->Visible=true;

	 }
	  if (K4==Chy && K3==Chx) {
	 Chy=-10 ;
	 Chx=-10;
	 zvcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }
	  if (K4==ZChy  && K3==ZChx) {
	 ZChy=-10 ;
	 ZChx=-10;
	 vcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;
	 }
	 if (K4==ZGy && K3==ZGx) {
	 ZGy=-10 ;
	 ZGx=-10;
	 vgiraf1=1;
	 btn6->Visible=true;
	 edt7->Visible=true;
	 edt8->Visible=true;

	 }
	 if (K4==LY && K3==LX) {
	 LY=-10 ;
	 LX=-10;


	 }
	  if (K4==Cy && K3==Cx) {
	 Cy=-10 ;
	 Cx=-10;
	 zvcyplenok1=1;
		 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }
	 if (K4==ZSy && K3==ZSx) {
	 ZSy=-10 ;
	 ZSx=-10;
	 vslon1=1;
	  btn3->Visible=true;
	 edt3->Visible=true;
	 edt4->Visible=true;
	 }

	  if (K4==ZCy && K3==ZCx) {
	 ZCy=-10 ;
	 ZCx=-10;
	  vcyplenok1=1;
	 btn8->Visible=true;
	 edt11->Visible=true;
	 edt12->Visible=true;

	 }

	 ZCh1y=K4;
	 ZCh1x=K3;
	 K1=-1;
	 K2=-1;
	khod= 2;
 }
 }


	 StringGrid1->Refresh();
 ////
 ////



 }
 if (sost==3)
{
lbl4->Caption=IntToStr(sost)+"khod:"+IntToStr(khod);
sost=4;
 //lbl3->Caption="куда хотите походить";
 }
if (sost==2)
 {
   lbl4->Caption=IntToStr(sost)+"khod:"+IntToStr(khod);
   K1=StringGrid1->Col ;
   K2=StringGrid1->Row ;
  // lbl1->Caption=IntToStr(vslon);
   //lbl2->Caption=IntToStr(zvslon);

   sost=3;
 }

 if (sost==1) {
	lbl4->Caption=IntToStr(sost)+"khod:"+IntToStr(khod);
	sost=2 ;
   //	lbl3->Caption="выберите фигуру";

}
  if ((L1Y==-10)) {
 lbl6->Visible=true;
   StringGrid1->Enabled=false;

 }
 if ((LY==-10)) {
  StringGrid1->Enabled=false;
 lbl6->Visible=true;
  lbl6->Caption="¬ыиграл »грок неба";
 }
 if ((LY==0||L1Y==-10) &&( khod==2 && LY!=-10)) {
 lbl6->Visible=true;
   StringGrid1->Enabled=false;

 }
 if ((L1Y==3||LY==-10) && (khod==1 && L1Y!=-10)) {
  StringGrid1->Enabled=false;
 lbl6->Visible=true;
  lbl6->Caption="¬ыиграл »грок неба";
 }
 StringGrid1->Refresh();





}
//---------------------------------------------------------------------------

 //==================================================================
 //==================================================================
  //==================================================================
 //==================================================================







void __fastcall TForm1::btn2Click(TObject *Sender)
{
if ((StrToInt(edt2->Text)>-1  && StrToInt(edt1->Text)>-1)&&(StrToInt(edt2->Text)<3 && StrToInt(edt1->Text)<4)&&(khod==2)&& (!(StrToInt(edt2->Text)==G1x && StrToInt(edt1->Text)==G1y))&& (!(StrToInt(edt2->Text)==L1X&& StrToInt(edt1->Text)==L1Y))&& (!(StrToInt(edt2->Text)==C1x && StrToInt(edt1->Text)==C1y))&& (!(StrToInt(edt2->Text)==ZS1x && StrToInt(edt1->Text)==ZS1y))&& (!(StrToInt(edt2->Text)==ZC1x && StrToInt(edt1->Text)==ZC1y))&& (!(StrToInt(edt2->Text)==ZG1x && StrToInt(edt1->Text)==ZG1y))&& (!(StrToInt(edt2->Text)==ZCh1x && StrToInt(edt1->Text)==ZCh1y))&& (!(StrToInt(edt2->Text)==Ch1x && StrToInt(edt1->Text)==Ch1y))&& (!(StrToInt(edt2->Text)==Gx && StrToInt(edt1->Text)==Gy))&& (!(StrToInt(edt2->Text)==LX && StrToInt(edt1->Text)==LY))&& (!(StrToInt(edt2->Text)==Cx && StrToInt(edt1->Text)==Cy))&& (!(StrToInt(edt2->Text)==ZSx && StrToInt(edt1->Text)==ZSy))&& (!(StrToInt(edt2->Text)==ZCx && StrToInt(edt1->Text)==ZCy))&& (!(StrToInt(edt2->Text)==ZGx && StrToInt(edt1->Text)==ZGy))&& (!(StrToInt(edt2->Text)==ZChx && StrToInt(edt1->Text)==ZChy))&& (!(StrToInt(edt2->Text)==Chx && StrToInt(edt1->Text)==Chy))&& (!(StrToInt(edt2->Text)==Sx && StrToInt(edt1->Text)==Sy))&& (!(StrToInt(edt2->Text)==S1x && StrToInt(edt1->Text)==S1y))) {
if ((vslon==1 && zvslon==0)){
Sx=StrToInt(edt2->Text);
Sy=StrToInt(edt1->Text);
vslon=1000;
}
if (vslon==0 && zvslon==1) {
ZSx=StrToInt(edt2->Text);
ZSy=StrToInt(edt1->Text);
zvslon=1000;
}
if (vslon==1 && zvslon==1) {
ZSx=StrToInt(edt2->Text);
ZSy=StrToInt(edt1->Text);
zvslon=1000;
}

if ((vslon!=1 && zvslon!=1)) {
		 btn2->Visible=false;
		 edt1->Visible=false;
		 edt2->Visible=false;

}
if (vslon==1000) {
	vslon=0;
}
if (zvslon==1000) {
	zvslon=0;
}
khod=1;
 StringGrid1->Refresh();
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::btn3Click(TObject *Sender)
{
if ((StrToInt(edt4->Text)>-1  && StrToInt(edt3->Text)>-1)&&(StrToInt(edt4->Text)<3 && StrToInt(edt3->Text)<4)&& khod==1 && (!(StrToInt(edt4->Text)==G1x && StrToInt(edt3->Text)==G1y))&& (!(StrToInt(edt4->Text)==L1X&& StrToInt(edt3->Text)==L1Y))&& (!(StrToInt(edt4->Text)==C1x && StrToInt(edt3->Text)==C1y))&& (!(StrToInt(edt4->Text)==ZS1x && StrToInt(edt3->Text)==ZS1y))&& (!(StrToInt(edt4->Text)==ZC1x && StrToInt(edt3->Text)==ZC1y))&& (!(StrToInt(edt4->Text)==ZG1x && StrToInt(edt3->Text)==ZG1y))&& (!(StrToInt(edt4->Text)==ZCh1x && StrToInt(edt3->Text)==ZCh1y))&& (!(StrToInt(edt4->Text)==Ch1x && StrToInt(edt3->Text)==Ch1y))&& (!(StrToInt(edt4->Text)==Gx && StrToInt(edt3->Text)==Gy))&& (!(StrToInt(edt4->Text)==LX && StrToInt(edt3->Text)==LY))&& (!(StrToInt(edt4->Text)==Cx && StrToInt(edt3->Text)==Cy))&& (!(StrToInt(edt4->Text)==ZSx && StrToInt(edt3->Text)==ZSy))&& (!(StrToInt(edt4->Text)==ZCx && StrToInt(edt3->Text)==ZCy))&& (!(StrToInt(edt4->Text)==ZGx && StrToInt(edt3->Text)==ZGy))&& (!(StrToInt(edt4->Text)==ZChx && StrToInt(edt3->Text)==ZChy))&& (!(StrToInt(edt4->Text)==Chx && StrToInt(edt3->Text)==Chy))&& (!(StrToInt(edt4->Text)==Sx && StrToInt(edt3->Text)==Sy))&& (!(StrToInt(edt4->Text)==S1x && StrToInt(edt3->Text)==S1y))) {

if (vslon1==1 && zvslon1==0) {
S1x=StrToInt(edt4->Text);
S1y=StrToInt(edt3->Text);
vslon1=1000;
}
if (vslon1==0 && zvslon1==1) {
ZS1x=StrToInt(edt4->Text);
ZS1y=StrToInt(edt3->Text);
zvslon1=1000;
}
if (vslon1==1 && zvslon1==1) {
ZS1x=StrToInt(edt4->Text);
ZS1y=StrToInt(edt3->Text);
zvslon1=1000;
}

if ((vslon1!=1 && zvslon1!=1)) {
		 btn3->Visible=false;
		 edt4->Visible=false;
		 edt3->Visible=false;

}
if (vslon1==1000) {
	vslon1=0;
}
if (zvslon1==1000) {
	zvslon1=0;
}
khod=2;
 StringGrid1->Refresh();
}
}
//---------------------------------------------------------------------------



void __fastcall TForm1::btn5Click(TObject *Sender)
{
   if ((StrToInt(edt6->Text)>-1  && StrToInt(edt5->Text)>-1)&&(StrToInt(edt6->Text)<3 && StrToInt(edt5->Text)<4)&& khod==2  && (!(StrToInt(edt6->Text)==G1x && StrToInt(edt5->Text)==G1y))&& (!(StrToInt(edt6->Text)==L1X&& StrToInt(edt5->Text)==L1Y))&& (!(StrToInt(edt6->Text)==C1x && StrToInt(edt5->Text)==C1y))&& (!(StrToInt(edt6->Text)==ZS1x && StrToInt(edt5->Text)==ZS1y))&& (!(StrToInt(edt6->Text)==ZC1x && StrToInt(edt5->Text)==ZC1y))&& (!(StrToInt(edt6->Text)==ZG1x && StrToInt(edt5->Text)==ZG1y))&& (!(StrToInt(edt6->Text)==ZCh1x && StrToInt(edt5->Text)==ZCh1y))&& (!(StrToInt(edt6->Text)==Ch1x && StrToInt(edt5->Text)==Ch1y))&& (!(StrToInt(edt6->Text)==Gx && StrToInt(edt5->Text)==Gy))&& (!(StrToInt(edt6->Text)==LX && StrToInt(edt5->Text)==LY))&& (!(StrToInt(edt6->Text)==Cx && StrToInt(edt5->Text)==Cy))&& (!(StrToInt(edt6->Text)==ZSx && StrToInt(edt5->Text)==ZSy))&& (!(StrToInt(edt6->Text)==ZCx && StrToInt(edt5->Text)==ZCy))&& (!(StrToInt(edt6->Text)==ZGx && StrToInt(edt5->Text)==ZGy))&& (!(StrToInt(edt6->Text)==ZChx && StrToInt(edt5->Text)==ZChy))&& (!(StrToInt(edt6->Text)==Chx && StrToInt(edt5->Text)==Chy))&& (!(StrToInt(edt6->Text)==Sx && StrToInt(edt5->Text)==Sy))&& (!(StrToInt(edt6->Text)==S1x && StrToInt(edt5->Text)==S1y))) {
if (vgiraf==1 && zvgiraf==0) {
Gx=StrToInt(edt6->Text);
Gy=StrToInt(edt5->Text);
vgiraf=1000;
}
if (vgiraf==0 && zvgiraf==1) {
ZGx=StrToInt(edt6->Text);
ZGy=StrToInt(edt5->Text);
zvgiraf=1000;
}
if (vgiraf==1 && zvgiraf==1) {
ZGx=StrToInt(edt6->Text);
ZGy=StrToInt(edt5->Text);
zvgiraf=1000;
}

if ((vgiraf!=1 && zvgiraf!=1)) {
		 btn5->Visible=false;
		 edt5->Visible=false;
		 edt6->Visible=false;

}
if (vgiraf==1000) {
	vgiraf=0;
}
if (zvgiraf==1000) {
	zvgiraf=0;
}
khod=1;
 StringGrid1->Refresh();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btn6Click(TObject *Sender)
{
	  if ((StrToInt(edt8->Text)>-1  && StrToInt(edt7->Text)>-1)&&(StrToInt(edt8->Text)<3 && StrToInt(edt7->Text)<4)&& khod==1&& (!(StrToInt(edt8->Text)==G1x && StrToInt(edt7->Text)==G1y))&& (!(StrToInt(edt8->Text)==L1X&& StrToInt(edt7->Text)==L1Y))&& (!(StrToInt(edt8->Text)==C1x && StrToInt(edt7->Text)==C1y))&& (!(StrToInt(edt8->Text)==ZS1x && StrToInt(edt7->Text)==ZS1y))&& (!(StrToInt(edt8->Text)==ZC1x && StrToInt(edt7->Text)==ZC1y))&& (!(StrToInt(edt8->Text)==ZG1x && StrToInt(edt7->Text)==ZG1y))&& (!(StrToInt(edt8->Text)==ZCh1x && StrToInt(edt7->Text)==ZCh1y))&& (!(StrToInt(edt8->Text)==Ch1x && StrToInt(edt7->Text)==Ch1y))&& (!(StrToInt(edt8->Text)==Gx && StrToInt(edt7->Text)==Gy))&& (!(StrToInt(edt8->Text)==LX && StrToInt(edt7->Text)==LY))&& (!(StrToInt(edt8->Text)==Cx && StrToInt(edt7->Text)==Cy))&& (!(StrToInt(edt8->Text)==ZSx && StrToInt(edt7->Text)==ZSy))&& (!(StrToInt(edt8->Text)==ZCx && StrToInt(edt7->Text)==ZCy))&& (!(StrToInt(edt8->Text)==ZGx && StrToInt(edt7->Text)==ZGy))&& (!(StrToInt(edt8->Text)==ZChx && StrToInt(edt7->Text)==ZChy))&& (!(StrToInt(edt8->Text)==Chx && StrToInt(edt7->Text)==Chy))&& (!(StrToInt(edt8->Text)==Sx && StrToInt(edt7->Text)==Sy))&& (!(StrToInt(edt8->Text)==S1x && StrToInt(edt7->Text)==S1y)) ) {
if (vgiraf1==1 && zvgiraf1==0) {
G1x=StrToInt(edt8->Text);
G1y=StrToInt(edt7->Text);
vgiraf1=1000;
}
if (vgiraf1==0 && zvgiraf1==1) {
ZG1x=StrToInt(edt8->Text);
ZG1y=StrToInt(edt7->Text);
zvgiraf1=1000;
}
if (vgiraf1==1 && zvgiraf1==1) {
ZG1x=StrToInt(edt8->Text);
ZG1y=StrToInt(edt7->Text);
zvgiraf1=1000;
}

if ((vgiraf1!=1 && zvgiraf1!=1)) {
		 btn6->Visible=false;
		 edt8->Visible=false;
		 edt7->Visible=false;

}
if (vgiraf1==1000) {
	vgiraf1=0;
}
if (zvgiraf1==1000) {
	zvgiraf1=0;
}
khod=2;
 StringGrid1->Refresh();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btn7Click(TObject *Sender)
{ if (StrToInt(edt9->Text)!=0) {


	 if ((StrToInt(edt10->Text)>-1  && StrToInt(edt9->Text)>-1)&&(StrToInt(edt10->Text)<3 && StrToInt(edt9->Text)<4)&& khod==2 && (!(StrToInt(edt10->Text)==G1x && StrToInt(edt9->Text)==G1y))&& (!(StrToInt(edt10->Text)==L1X&& StrToInt(edt9->Text)==L1Y))&& (!(StrToInt(edt10->Text)==C1x && StrToInt(edt9->Text)==C1y))&& (!(StrToInt(edt10->Text)==ZS1x && StrToInt(edt9->Text)==ZS1y))&& (!(StrToInt(edt10->Text)==ZC1x && StrToInt(edt9->Text)==ZC1y))&& (!(StrToInt(edt10->Text)==ZG1x && StrToInt(edt9->Text)==ZG1y))&& (!(StrToInt(edt10->Text)==ZCh1x && StrToInt(edt9->Text)==ZCh1y))&& (!(StrToInt(edt10->Text)==Ch1x && StrToInt(edt9->Text)==Ch1y))&& (!(StrToInt(edt10->Text)==Gx && StrToInt(edt9->Text)==Gy))&& (!(StrToInt(edt10->Text)==LX && StrToInt(edt9->Text)==LY))&& (!(StrToInt(edt10->Text)==Cx && StrToInt(edt9->Text)==Cy))&& (!(StrToInt(edt10->Text)==ZSx && StrToInt(edt9->Text)==ZSy))&& (!(StrToInt(edt10->Text)==ZCx && StrToInt(edt9->Text)==ZCy))&& (!(StrToInt(edt10->Text)==ZGx && StrToInt(edt9->Text)==ZGy))&& (!(StrToInt(edt10->Text)==ZChx && StrToInt(edt9->Text)==ZChy))&& (!(StrToInt(edt10->Text)==Chx && StrToInt(edt9->Text)==Chy))&& (!(StrToInt(edt10->Text)==Sx && StrToInt(edt9->Text)==Sy))&& (!(StrToInt(edt10->Text)==S1x && StrToInt(edt9->Text)==S1y))) {
if (vcyplenok==1 && zvcyplenok==0) {
Cx=StrToInt(edt10->Text);
Cy=StrToInt(edt9->Text);
vcyplenok=1000;
}
if (vcyplenok==0 && zvcyplenok==1) {
	ZCx=StrToInt(edt10->Text);
ZCy=StrToInt(edt9->Text);
zvcyplenok=1000;
}
if (vcyplenok==1 && zvcyplenok==1) {
ZCx=StrToInt(edt10->Text);
ZCy=StrToInt(edt9->Text);
zvcyplenok=1000;
}

if ((vcyplenok!=1 && zvcyplenok!=1)) {
		 btn7->Visible=false;
		 edt10->Visible=false;
		 edt9->Visible=false;

}
if (vcyplenok==1000) {
	vcyplenok=0;
}
if (zvcyplenok==1000) {
	zvcyplenok=0;
}
khod=1;
}
 StringGrid1->Refresh();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btn8Click(TObject *Sender)
{  if (C1y=StrToInt(edt11->Text)!=3) {


	 if ( (StrToInt(edt12->Text)>-1  && StrToInt(edt11->Text)>-1)&&(StrToInt(edt12->Text)<3 && StrToInt(edt11->Text)<4) && khod==1 && (StrToInt(edt12->Text)>-1  && StrToInt(edt11->Text)>-1)&&(StrToInt(edt12->Text)<11 && StrToInt(edt11->Text)<12) ) {
if (vcyplenok1==1 && zvcyplenok1==0) {
C1x=StrToInt(edt12->Text);
C1y=StrToInt(edt11->Text);
vcyplenok1=1000;
}
if (vcyplenok1==0 && zvcyplenok1==1) {
	ZC1x=StrToInt(edt12->Text);
ZC1y=StrToInt(edt11->Text);
zvcyplenok1=1000;
}
if (vcyplenok1==1 && zvcyplenok1==1) {
ZC1x=StrToInt(edt12->Text);
ZC1y=StrToInt(edt11->Text);
zvcyplenok1=1000;
}

if ((vcyplenok1!=1 && zvcyplenok1!=1)) {
		 btn8->Visible=false;
		 edt12->Visible=false;
		 edt11->Visible=false;

}
if (vcyplenok1==1000) {
	vcyplenok1=0;
}
if (zvcyplenok1==1000) {
	zvcyplenok1=0;
}
khod=2;
}
 StringGrid1->Refresh();
}
}
//---------------------------------------------------------------------------


