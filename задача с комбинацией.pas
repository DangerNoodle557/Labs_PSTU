var x,m,i,j,k,l :integer; a:array[1..3] of integer;

begin
writeln('введите трехзначное число');
readln(x);
if (x>99)and (x<1000) then
begin
a[1]:=x div 100;
a[2]:=(x div 10) mod 10;
a[3]:= x mod 10;
end
else writeln('вы ввели не трехзначное число');
 
m:=0;

for i:=1 to 3 do
for j:=1 to 3 do
for k:=1 to 3 do
if (i<>j) and (i<>k) and (j<>k) then
writeln (a[i],a[j],a[k]);

for i:=1 to 3 do
for j:=1 to 3 do
for k:=1 to 3 do
if (i<>j) and (i<>k) and (j<>k) then
begin
l:=a[i]*100 + a[j]*10 + a[k];
if l>m then
m:=l;
end;

writeln ('max = ',m);
end.