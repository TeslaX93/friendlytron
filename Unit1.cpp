//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
const char* TRONNAME = "tron.bat";
AnsiString parameters = "";
const AnsiString DESCDEFAULT = "Tron is a free and open-source script that automates the process of disinfecting and cleaning up Windows systems. It is built with heavy reliance on community input and updated regularly. Tron supports all versions of Windows from XP to 10 (server variants included).";
const AnsiString ACBHELP = "Automatic mode [-a]: no prompts; implies [-e]; reboots to Safe Mode";
const AnsiString CCBHELP = "Config dump [-c] (show config. Can be used with other flags to see what WOULD happen, but script will never execute if this flag is used)";
const AnsiString DCBHELP = "Dry run [-d] (run through script without executing any jobs)";
const AnsiString DEVCBHELP = "Override OS Detection [-dev] (allow running on unsupported Windows versions)";
const AnsiString ECBHELP = "Accept EULA [-e] (suppress disclaimer warning screen)";
const AnsiString ERCBHELP = "Email a report when finished [-er]. Requires you to configure SwithMailSettings.xml";
const AnsiString MCBHELP = "Preserve OEM ModernUI apps [-m]. Don't remove them (Windows 7 and up only)";
const AnsiString NPCBHELP = "Skip the pause at the end of script [-np]";
const AnsiString OCBHELP = "Power off after running [-o]. Overrides [-r]";
const AnsiString PCBHELP = "Preserve power settings [-p]. Don't reset to Windows default";
const AnsiString RCBHELP = "Reboot [-r] (auto-reboot 15 seconds after completion)";
const AnsiString SACBHELP = "Skip ALL antivirus scans [-sa] (KVRT, MBAM, SAV)";
const AnsiString SDBCBHELP = "Skip de-bloat [-sdb]. OEM bloatware removal; implies [-m]";
const AnsiString SDCBHELP = "Skip defrag [-sd]. Force TronScript to ALWAYS skip Stage 5: Defrag";

const AnsiString SDCCBHELP =  "Skip DISM Cleanup [-sdc] (SxS component store deflation)";
const AnsiString SDUCBHELP =  "Skip debloat update. Prevent Tron from auto-updating the S2 debloat lists";

const AnsiString SECBHELP = "Skip Event Log clearing [-se]";
const AnsiString SFRCBHELP = "Skip filesystem permissions reset [-sfr]. Saves time if you're in hurry";
const AnsiString SKCBHELP = "Skip Kaspersky Virus Rescue Tool [-sk] (KVRT) scan";
const AnsiString SMCBHELP = "Skip MalwareBytes Anti-Malware [-sm] (MBAM) installation";
const AnsiString SAPCBHELP = "Skip patches [-sap]. Do not patch 7zip, Java JRE, Adobe Flash Player, Adobe Reader";
const AnsiString SCSCBHELP = "Skip custom scripts [-scs] (has no effect if you haven't supplied custom scripts)";
const AnsiString SWOCBHELP = "Skip only bundled WSUS Offline updates [-swo] (online updates still attempted)";
const AnsiString SPRCBHELP = "Skip page file settings reset [-spr]. Don't set to 'Let Windows manage the page file'";
const AnsiString SRRCBHELP = "Skip registry permissions reset [-srr]. Saves time if you're in hurry";
const AnsiString SSCBHELP = "Skip Sophos Anti-Virus (SAV) scan [-ss]";
const AnsiString STRCBHELP = "Skip Telemetry Removal [-str] (don't remove Windows user tracking, Windows 7 and up only)";
const AnsiString SWUCBHELP = "Skip Windows Updates entirely [-swu] (ignore both WSUS Offline and online methods)";
const AnsiString VCBHELP = "Verbose [-v]. Show as much output as possible. NOTE: Significantly slower!";
const AnsiString XCBHELP = "Self destruct [-x]. TronScript deletes itself after running and leaves logs intact";
const AnsiString HCBHELP = "Don't run anything, just show all possible command-line options [-l]";
const AnsiString UPMCBHELP = "There is no [-upm] flag";
const AnsiString UDLCBHELP = "Upload debug logs [-udl]. Send tron.log and the system GUID dump to the Tron developer (Vocatus)";
const AnsiString CHECKLB = "If tron.bat was not found, check if you run FriendlyTron with administrator priviledges and you copied it to your unpacked tron directory, and restart FriendlyTron";
const AnsiString CANCELBTN = "Exit FriendlyTron.";
const AnsiString RUNBTN = "Run TronScript.";


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm1::FormCreate(TObject *Sender)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(DESCDEFAULT);
        fstream TronScript;
        TronScript.open("tron.bat");
        if(TronScript.good()==false) {
        CheckBatLB->Caption="File tron.bat not found!";
        CallTronBtn->Enabled=false;
         }
        else {
        CheckBatLB->Caption="File tron.bat found!";
        }


}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
void __fastcall TForm1::CancelBtnClick(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::aCBClick(TObject *Sender)
{
if(eCB->Enabled==true) {eCB->Checked=false; eCB->Enabled=false;} else
eCB->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DefaultOptClick(TObject *Sender)
{
CallTronBtn->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CustomOptClick(TObject *Sender)
{
CallTronBtn->Enabled=true;        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::helpOptClick(TObject *Sender)
{
CallTronBtn->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::oCBClick(TObject *Sender)
{
if(rCB->Enabled==true) {rCB->Checked=false; rCB->Enabled=false;} else
rCB->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::rCBClick(TObject *Sender)
{
if(oCB->Enabled==true) {oCB->Checked=false; oCB->Enabled=false;} else
oCB->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::aCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(ACBHELP);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::cCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(CCBHELP);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::saCBClick(TObject *Sender)
{
if(skCB->Enabled==true) {skCB->Checked=false; skCB->Enabled=false;} else
skCB->Enabled=true;
if(smCB->Enabled==true) {smCB->Checked=false; smCB->Enabled=false;} else
smCB->Enabled=true;
if(ssCB->Enabled==true) {ssCB->Checked=false; ssCB->Enabled=false;} else
ssCB->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(DCBHELP);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::devCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(DEVCBHELP);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::eCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(ECBHELP);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::erCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(ERCBHELP);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::mCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(MCBHELP);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::npCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(NPCBHELP);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::oCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(OCBHELP);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(PCBHELP);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::rCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(RCBHELP);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::xCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(XCBHELP);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::vCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(VCBHELP);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::saCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(SACBHELP);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::sdbCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(SDBCBHELP);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::sdCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(SDCBHELP);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::seCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(SECBHELP);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::sfrCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(SFRCBHELP);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::skCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(SKCBHELP);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::smCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(SMCBHELP);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::sapCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(SAPCBHELP);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::sprCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(SPRCBHELP);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::srrCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(SRRCBHELP);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ssCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(SSCBHELP);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::strCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(STRCBHELP);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::swuCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(SWUCBHELP);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::hCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(HCBHELP);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::sdbCBClick(TObject *Sender)
{
if(mCB->Enabled==true) {mCB->Checked=false; mCB->Enabled=false;} else
mCB->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CallTronBtnClick(TObject *Sender)
{
if(aCB->Checked==true)   parameters = parameters + " -a";
if(eCB->Checked==true)   parameters = parameters + " -e";
if(erCB->Checked==true)  parameters = parameters + " -er";
if(cCB->Checked==true)   parameters = parameters + " -c";
if(dCB->Checked==true)   parameters = parameters + " -d";
if(devCB->Checked==true) parameters = parameters + " -dev";
if(vCB->Checked==true)   parameters = parameters + " -v";
if(hCB->Checked==true)   parameters = parameters + " -h";
if(mCB->Checked==true)   parameters = parameters + " -m";
if(npCB->Checked==true)  parameters = parameters + " -np";
if(oCB->Checked==true)   parameters = parameters + " -o";
if(pCB->Checked==true)   parameters = parameters + " -p";
if(rCB->Checked==true)   parameters = parameters + " -r";
if(saCB->Checked==true)  parameters = parameters + " -sa";
if(sdbCB->Checked==true)  parameters = parameters + " -sdb";
if(sdCB->Checked==true)  parameters = parameters + " -sd";
if(sdcCB->Checked==true)  parameters = parameters + " -sdc";
if(scsCB->Checked==true)  parameters = parameters + " -scs";
if(sduCB->Checked==true)  parameters = parameters + " -sdu";
if(seCB->Checked==true)  parameters = parameters + " -se";
//if(sfrCB->Checked==true) parameters = parameters + " -sfr";
if(skCB->Checked==true)  parameters = parameters + " -sk";
if(smCB->Checked==true)  parameters = parameters + " -sm";
if(sapCB->Checked==true)  parameters = parameters + " -sap";
if(sprCB->Checked==true) parameters = parameters + " -spr";
//if(srrCB->Checked==true) parameters = parameters + " -srr";
if(ssCB->Checked==true)  parameters = parameters + " -ss";
if(strCB->Checked==true) parameters = parameters + " -str";
if(swoCB->Checked==true)  parameters = parameters + " -swo";
if(swuCB->Checked==true)  parameters = parameters + " -swu";
if(xCB->Checked==true)  parameters = parameters + " -x";
if(udlCB->Checked==true) parameters = parameters + " -udl";
Memo1->Lines->Clear();
//Memo1->Lines->Add("I'm trying to run TronScript...");
Memo1->Lines->Add(parameters);
const char* CPARAM = parameters.c_str();

ShellExecute(0,"open",TRONNAME,CPARAM,"", SW_SHOWNORMAL);
Application->ProcessMessages(); Sleep(397);
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::hCBClick(TObject *Sender)
{
if(aCB->Enabled==true) {aCB->Checked=false; aCB->Enabled=false;} else
aCB->Enabled=true;
if(eCB->Enabled==true) {eCB->Checked=false; eCB->Enabled=false;} else
eCB->Enabled=true;
if(erCB->Enabled==true) {erCB->Checked=false; erCB->Enabled=false;} else
erCB->Enabled=true;
if(cCB->Enabled==true) {cCB->Checked=false; cCB->Enabled=false;} else
cCB->Enabled=true;
if(dCB->Enabled==true) {dCB->Checked=false; dCB->Enabled=false;} else
dCB->Enabled=true;
if(devCB->Enabled==true) {devCB->Checked=false; devCB->Enabled=false;} else
devCB->Enabled=true;
if(vCB->Enabled==true) {vCB->Checked=false; vCB->Enabled=false;} else
vCB->Enabled=true;
if(mCB->Enabled==true) {mCB->Checked=false; mCB->Enabled=false;} else
mCB->Enabled=true;
if(npCB->Enabled==true) {npCB->Checked=false; npCB->Enabled=false;} else
npCB->Enabled=true;
if(oCB->Enabled==true) {oCB->Checked=false; oCB->Enabled=false;} else
oCB->Enabled=true;
if(pCB->Enabled==true) {pCB->Checked=false; pCB->Enabled=false;} else
pCB->Enabled=true;
if(rCB->Enabled==true) {rCB->Checked=false; rCB->Enabled=false;} else
rCB->Enabled=true;
if(saCB->Enabled==true) {saCB->Checked=false; saCB->Enabled=false;} else
saCB->Enabled=true;
if(sdbCB->Enabled==true) {sdbCB->Checked=false; sdbCB->Enabled=false;} else
sdbCB->Enabled=true;
if(sdCB->Enabled==true) {sdCB->Checked=false; sdCB->Enabled=false;} else
sdCB->Enabled=true;
if(sdcCB->Enabled==true){sdcCB->Checked=false; sdcCB->Enabled=false;} else
sdcCB->Enabled=true;
if(sduCB->Enabled==true){sduCB->Checked=false; sduCB->Enabled=false;} else
sduCB->Enabled=true;
if(seCB->Enabled==true) {seCB->Checked=false; seCB->Enabled=false;} else
seCB->Enabled=true;
//if(sfrCB->Enabled==true) {sfrCB->Checked=false; sfrCB->Enabled=false;} else
//sfrCB->Enabled=true;
if(skCB->Enabled==true) {skCB->Checked=false; skCB->Enabled=false;} else
skCB->Enabled=true;
if(smCB->Enabled==true) {smCB->Checked=false; smCB->Enabled=false;} else
smCB->Enabled=true;
if(sapCB->Enabled==true) {sapCB->Checked=false; sapCB->Enabled=false;} else
sapCB->Enabled=true;
if(sprCB->Enabled==true) {sprCB->Checked=false; sprCB->Enabled=false;} else
sprCB->Enabled=true;
//if(srrCB->Enabled==true) {srrCB->Checked=false; srrCB->Enabled=false;} else
//srrCB->Enabled=true;
if(ssCB->Enabled==true) {ssCB->Checked=false; ssCB->Enabled=false;} else
ssCB->Enabled=true;
if(scsCB->Enabled==true) {scsCB->Checked=false; scsCB->Enabled=false;} else
scsCB->Enabled=true;
if(strCB->Enabled==true) {strCB->Checked=false; strCB->Enabled=false;} else
strCB->Enabled=true;
if(swuCB->Enabled==true) {swuCB->Checked=false; swuCB->Enabled=false;} else
swuCB->Enabled=true;
if(swoCB->Enabled==true) {swoCB->Checked=false; swoCB->Enabled=false;} else
swoCB->Enabled=true;
if(udlCB->Enabled==true){udlCB->Checked=false; udlCB->Enabled=false;} else
udlCB->Enabled=true;
if(xCB->Enabled==true) {xCB->Checked=false; xCB->Enabled=false;} else
xCB->Enabled=true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBatLBMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(CHECKLB);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CancelBtnMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(CANCELBTN);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CallTronBtnMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(RUNBTN);
}
//---------------------------------------------------------------------------




void __fastcall TForm1::udlCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(UDLCBHELP);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::sdcCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(SDCCBHELP);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sduCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(SDUCBHELP);        
}
//---------------------------------------------------------------------------






void __fastcall TForm1::Label1DblClick(TObject *Sender)
{
 parameters = parameters + " -upm";
 Label1->Enabled = false;        
}
//---------------------------------------------------------------------------



void __fastcall TForm1::scsCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
  Memo1->Lines->Clear();
Memo1->Lines->Add(SCSCBHELP);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::swuCBClick(TObject *Sender)
{
if(swoCB->Enabled==true) {swoCB->Checked=false; swoCB->Enabled=false;} else
swoCB->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::swoCBMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Memo1->Lines->Clear();
Memo1->Lines->Add(SWOCBHELP);
}
//---------------------------------------------------------------------------

