close all
Days = [1 2 3 4 5]
MaxTemp = [36 35 32 28 40]
plot(Days, MaxTemp, '*-')
MinTemp = [35 33 30 26 31]
hold on
plot(Days, MinTemp, 'o-')
legend('MaxTemp', 'MinTemp')
xlabel('Days')
ylabel('Temperature')
title('Days vs Maximum and Minimum Temperature')