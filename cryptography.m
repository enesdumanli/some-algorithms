clc;
clear all;

x = randi([0000,9999]);
digits = input("student number last five digit");

text = str2double(sprintf('%d%d',x,digits));
textarray = num2str(text)-'0';
a = randi([2,3]);
b = randi([2,3]);
c = randi([2,3]);
d = randi([2,3]);
key = str2double(sprintf('%d%d%d%d', a, b, c,d));
keyarray = num2str(key)-'0';

o = 1;
for i=1:4
    if(sum(keyarray)~=9)
        disp("the key and encrypted text are not compatible and cannot be resolved.");
        break;
    end
    k = keyarray(i);
    if(k==2)
        a = textarray(o);
        b = textarray(o+1);
        aa = num2str(a);
        bb = num2str(b);
        ccc = strcat(aa,bb);
        ccc = str2num(ccc);
        disp(char(ccc));
        o = o+k;
    elseif(k==3)
        a = textarray(o);
        b = textarray(o+1);
        d = textarray(o+2);
        aa = num2str(a);
        bb = num2str(b);
        dd = num2str(d);
        ccc = strcat(aa,bb,dd);
        ccc = str2num(ccc);
        disp(char(ccc));
        o = o+k;
    end
end
