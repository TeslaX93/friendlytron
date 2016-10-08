object Form1: TForm1
  Left = 192
  Top = 107
  BorderStyle = bsDialog
  Caption = 'FriendlyTron by TeslaX93'
  ClientHeight = 320
  ClientWidth = 666
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label3: TLabel
    Left = 8
    Top = 304
    Width = 251
    Height = 13
    Caption = 'FriendlyTron BETA 2 for TronScript 8.6+ by TeslaX93'
  end
  object GroupBox1: TGroupBox
    Left = 472
    Top = 0
    Width = 185
    Height = 137
    Caption = 'Run TronScript'
    TabOrder = 0
    object CheckBatLB: TLabel
      Left = 8
      Top = 16
      Width = 152
      Height = 13
      Caption = '(Run inside Tron directory)'
      Color = clBtnFace
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentColor = False
      ParentFont = False
      OnMouseMove = CheckBatLBMouseMove
    end
    object CallTronBtn: TButton
      Left = 24
      Top = 40
      Width = 129
      Height = 33
      Caption = 'Run TronScript'
      TabOrder = 0
      OnClick = CallTronBtnClick
      OnMouseMove = CallTronBtnMouseMove
    end
    object CancelBtn: TButton
      Left = 24
      Top = 80
      Width = 129
      Height = 33
      Caption = 'Cancel'
      TabOrder = 1
      OnClick = CancelBtnClick
      OnMouseMove = CancelBtnMouseMove
    end
  end
  object GroupBox2: TGroupBox
    Left = 8
    Top = 0
    Width = 457
    Height = 297
    Caption = 'Custom Options (leave all unchecked for default TronScript run)'
    TabOrder = 1
    object Label2: TLabel
      Left = 224
      Top = 16
      Width = 64
      Height = 13
      Caption = 'Skip stages...'
    end
    object aCB: TCheckBox
      Left = 8
      Top = 16
      Width = 177
      Height = 17
      Caption = 'Automatic mode + Accept EULA'
      TabOrder = 0
      OnClick = aCBClick
      OnMouseMove = aCBMouseMove
    end
    object GroupBox3: TGroupBox
      Left = 8
      Top = 192
      Width = 209
      Height = 89
      Caption = 'Advanced'
      TabOrder = 1
      object cCB: TCheckBox
        Left = 8
        Top = 16
        Width = 81
        Height = 17
        Caption = 'Config dump'
        TabOrder = 0
        OnMouseMove = cCBMouseMove
      end
      object dCB: TCheckBox
        Left = 8
        Top = 32
        Width = 193
        Height = 17
        Caption = 'Dry run'
        TabOrder = 1
        OnMouseMove = dCBMouseMove
      end
      object devCB: TCheckBox
        Left = 8
        Top = 48
        Width = 129
        Height = 17
        Caption = 'Override OS detection'
        TabOrder = 2
        OnMouseMove = devCBMouseMove
      end
      object vCB: TCheckBox
        Left = 8
        Top = 64
        Width = 97
        Height = 17
        Caption = 'Verbose'
        TabOrder = 3
        OnMouseMove = vCBMouseMove
      end
    end
    object erCB: TCheckBox
      Left = 8
      Top = 48
      Width = 161
      Height = 17
      Caption = 'Email a report when finished'
      TabOrder = 2
      OnMouseMove = erCBMouseMove
    end
    object mCB: TCheckBox
      Left = 8
      Top = 64
      Width = 169
      Height = 17
      Caption = 'Preserve OEM ModernUI Apps'
      TabOrder = 3
      OnMouseMove = mCBMouseMove
    end
    object npCB: TCheckBox
      Left = 8
      Top = 80
      Width = 185
      Height = 17
      Caption = 'Skip the pause at the end of script'
      TabOrder = 4
      OnMouseMove = npCBMouseMove
    end
    object oCB: TCheckBox
      Left = 8
      Top = 96
      Width = 129
      Height = 17
      Caption = 'Power off after running'
      TabOrder = 5
      OnClick = oCBClick
      OnMouseMove = oCBMouseMove
    end
    object pCB: TCheckBox
      Left = 8
      Top = 112
      Width = 137
      Height = 17
      Caption = 'Preserve power settings'
      TabOrder = 6
      OnMouseMove = pCBMouseMove
    end
    object rCB: TCheckBox
      Left = 8
      Top = 128
      Width = 137
      Height = 17
      Caption = 'Reboot after completion'
      TabOrder = 7
      OnClick = rCBClick
      OnMouseMove = rCBMouseMove
    end
    object xCB: TCheckBox
      Left = 8
      Top = 144
      Width = 145
      Height = 17
      Caption = 'Self-destruct'
      TabOrder = 8
      OnMouseMove = xCBMouseMove
    end
    object saCB: TCheckBox
      Left = 224
      Top = 32
      Width = 137
      Height = 17
      Caption = 'ALL antivirus scans '
      TabOrder = 9
      OnClick = saCBClick
      OnMouseMove = saCBMouseMove
    end
    object sdbCB: TCheckBox
      Left = 224
      Top = 48
      Width = 97
      Height = 17
      Caption = 'OEM Bloatware'
      TabOrder = 10
      OnClick = sdbCBClick
      OnMouseMove = sdbCBMouseMove
    end
    object sdCB: TCheckBox
      Left = 224
      Top = 64
      Width = 105
      Height = 17
      Caption = 'Defragmentation'
      TabOrder = 11
      OnMouseMove = sdCBMouseMove
    end
    object seCB: TCheckBox
      Left = 224
      Top = 80
      Width = 113
      Height = 17
      Caption = 'Event Log clearing'
      TabOrder = 12
      OnMouseMove = seCBMouseMove
    end
    object sfrCB: TCheckBox
      Left = 224
      Top = 96
      Width = 161
      Height = 17
      Caption = 'Filesystem permissions reset'
      TabOrder = 13
      OnMouseMove = sfrCBMouseMove
    end
    object skCB: TCheckBox
      Left = 224
      Top = 112
      Width = 169
      Height = 17
      Caption = 'Kaspersky Virus Rescue Tool'
      TabOrder = 14
      OnMouseMove = skCBMouseMove
    end
    object smCB: TCheckBox
      Left = 224
      Top = 128
      Width = 153
      Height = 17
      Caption = 'MalwareBytes Anti-Malware'
      TabOrder = 15
      OnMouseMove = smCBMouseMove
    end
    object spCB: TCheckBox
      Left = 224
      Top = 144
      Width = 97
      Height = 17
      Caption = 'Patches'
      TabOrder = 16
      OnMouseMove = spCBMouseMove
    end
    object sprCB: TCheckBox
      Left = 224
      Top = 160
      Width = 129
      Height = 17
      Caption = 'Pagefile settings reset'
      TabOrder = 17
      OnMouseMove = sprCBMouseMove
    end
    object srrCB: TCheckBox
      Left = 224
      Top = 176
      Width = 153
      Height = 17
      Caption = 'Registry Permissions Reset'
      TabOrder = 18
      OnMouseMove = srrCBMouseMove
    end
    object ssCB: TCheckBox
      Left = 224
      Top = 192
      Width = 137
      Height = 17
      Caption = 'Sophos Anti-Virus Scan'
      TabOrder = 19
      OnMouseMove = ssCBMouseMove
    end
    object strCB: TCheckBox
      Left = 224
      Top = 208
      Width = 121
      Height = 17
      Caption = 'Telemetry Removal'
      TabOrder = 20
      OnMouseMove = strCBMouseMove
    end
    object swCB: TCheckBox
      Left = 224
      Top = 224
      Width = 105
      Height = 17
      Caption = 'Windows Update'
      TabOrder = 21
      OnMouseMove = swCBMouseMove
    end
    object eCB: TCheckBox
      Left = 8
      Top = 32
      Width = 97
      Height = 17
      Caption = 'Accept EULA'
      TabOrder = 22
      OnMouseMove = eCBMouseMove
    end
    object GroupBox4: TGroupBox
      Left = 224
      Top = 240
      Width = 161
      Height = 41
      Caption = 'Help'
      TabOrder = 23
      object hCB: TCheckBox
        Left = 8
        Top = 16
        Width = 145
        Height = 17
        Caption = 'Just show help (don'#39't run)'
        TabOrder = 0
        OnClick = hCBClick
        OnMouseMove = hCBMouseMove
      end
    end
  end
  object Memo1: TMemo
    Left = 472
    Top = 144
    Width = 185
    Height = 153
    ReadOnly = True
    TabOrder = 2
  end
end