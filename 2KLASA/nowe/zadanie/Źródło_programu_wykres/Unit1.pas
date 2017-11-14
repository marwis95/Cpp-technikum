unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, ExtCtrls, TeeProcs, TeEngine, Chart, StdCtrls, Buttons, Series;

type
  TForm1 = class(TForm)
    Chart1: TChart;
    Memo1: TMemo;
    Series1: TLineSeries;
    Memo2: TMemo;
    Series2: TLineSeries;
    Button1: TButton;
    procedure FormCreate(Sender: TObject);
    procedure Button1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;
  x:integer;
  i: integer;

implementation



{$R *.dfm}

function funkcja(x:integer):real;
begin
funkcja:= 1+(x*x)/100-x/200;
end;

function funkcja2(x:integer):real;
begin
funkcja2:= (x*x)/50;
end;

procedure TForm1.FormCreate(Sender: TObject);
begin


//showmessage(floattostr(funkcja(x)));
end;

procedure TForm1.Button1Click(Sender: TObject);
begin
x:=0;
for i:=1 to 11  do
begin
memo1.Lines.add(floattostr(funkcja(x)));
memo2.Lines.add('-'+floattostr(funkcja2(x)));
x:=x+1;
end;


for i:=1 to 11 do
begin
chart1.Series[0].Add(strtofloat(memo1.Lines[i-1]), inttostr(i-1) , clred);
chart1.Series[1].Add(strtofloat(memo2.Lines[i-1]), inttostr(i-1) , clred);
end;

end;

end.
