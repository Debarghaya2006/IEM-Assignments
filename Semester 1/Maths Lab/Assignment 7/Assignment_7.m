close all;
x = -6:0.0000001:6;
y1 = floor(x);
y2 = ceil(x);
y3 = x - floor(x);
plot(x,y1,'r.');
hold on;
plot(x,y2,'g.');
hold on;
plot(x,y3,'b.');
xlabel('x');
ylabel('y');
legend('floor(x)','ceil(x)','x - floor(x)');
title('Plotting floor(x), ceil(x) and x - floor(x) graph');