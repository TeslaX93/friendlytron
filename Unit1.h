//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TLabel *CheckBatLB;
        TGroupBox *GroupBox2;
        TMemo *Memo1;
        TButton *CallTronBtn;
        TButton *CancelBtn;
        TCheckBox *aCB;
        TGroupBox *GroupBox3;
        TCheckBox *cCB;
        TCheckBox *dCB;
        TCheckBox *devCB;
        TCheckBox *eCB;
        TCheckBox *erCB;
        TCheckBox *mCB;
        TCheckBox *npCB;
        TCheckBox *oCB;
        TCheckBox *pCB;
        TCheckBox *rCB;
        TCheckBox *vCB;
        TCheckBox *xCB;
        TLabel *Label2;
        TCheckBox *saCB;
        TCheckBox *sdCB;
        TCheckBox *seCB;
        TCheckBox *skCB;
        TCheckBox *smCB;
        TCheckBox *sapCB;
        TCheckBox *sprCB;
        TCheckBox *ssCB;
        TCheckBox *strCB;
        TCheckBox *swuCB;
        TGroupBox *GroupBox4;
        TCheckBox *hCB;
        TLabel *Label3;
        TCheckBox *sdbCB;
        TCheckBox *udlCB;
        TCheckBox *sdcCB;
        TCheckBox *sduCB;
        TLabel *Label1;
        TLabel *Label4;
        TCheckBox *asmCB;
        TCheckBox *scsCB;
        TCheckBox *swoCB;
        TLabel *Label5;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall CancelBtnClick(TObject *Sender);
        void __fastcall aCBClick(TObject *Sender);
        void __fastcall DefaultOptClick(TObject *Sender);
        void __fastcall CustomOptClick(TObject *Sender);
        void __fastcall helpOptClick(TObject *Sender);
        void __fastcall oCBClick(TObject *Sender);
        void __fastcall rCBClick(TObject *Sender);
        void __fastcall aCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall cCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall saCBClick(TObject *Sender);
        void __fastcall dCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall devCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall eCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall erCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall mCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall npCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall oCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall pCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall rCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall xCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall vCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall saCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall sdbCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall sdCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall seCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall sfrCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall skCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall smCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall sapCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall sprCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall srrCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall ssCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall strCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall swuCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall hCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall sdbCBClick(TObject *Sender);
        void __fastcall CallTronBtnClick(TObject *Sender);
        void __fastcall hCBClick(TObject *Sender);
        void __fastcall CheckBatLBMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall CancelBtnMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall CallTronBtnMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall udlCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall sdcCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall sduCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Label1DblClick(TObject *Sender);
        void __fastcall asmCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall scsCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall swoCBMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall swuCBClick(TObject *Sender);
        void __fastcall Label5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
