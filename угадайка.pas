var a,b,n:integer;

begin
n:=0;
a:=random(99)+1;
writeln('угадайте число от 1 до 100, у вас есть 6 попыток');

begin

while n<6 do
begin
readln(b);
if b=a then
writeln('вы угадали число!')
else 
begin 
n:=n+1;
if a>b then writeln('попробуйте ввести число побольше')
else writeln('попробуйте ввести число поменьше');
end;
end;
end;
writeln('вы проиграли',', загаданное число - ', a);

end.