object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1056#1072#1089#1087#1080#1089#1072#1085#1080#1077'-'#1079#1072#1085#1103#1090#1080#1081
  ClientHeight = 282
  ClientWidth = 472
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object ComboBox1: TComboBox
    Left = 48
    Top = 24
    Width = 145
    Height = 21
    ItemIndex = 0
    TabOrder = 0
    Text = #1055#1086#1085#1077#1076#1077#1083#1100#1085#1080#1082
    Items.Strings = (
      #1055#1086#1085#1077#1076#1077#1083#1100#1085#1080#1082
      #1042#1090#1086#1088#1085#1080#1082
      #1057#1088#1077#1076#1072
      #1063#1077#1090#1074#1077#1088#1075
      #1055#1103#1090#1085#1080#1094#1072
      #1057#1091#1073#1073#1086#1090#1072)
  end
  object Button1: TButton
    Left = 232
    Top = 24
    Width = 75
    Height = 25
    Caption = #1054#1082
    TabOrder = 1
    OnClick = Button1Click
  end
  object StringGrid1: TStringGrid
    Left = 48
    Top = 80
    Width = 289
    Height = 161
    ColCount = 3
    RowCount = 4
    TabOrder = 2
    ColWidths = (
      64
      64
      64)
    RowHeights = (
      24
      24
      24
      24)
  end
end
