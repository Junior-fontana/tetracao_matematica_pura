%Script para plotar gráficos das bases e seu valor tetrado (log10).

base = [1:10];
tetracao1 = [0 0.30  0.48 0.60 0.70 0.78 0.84 0.90 0.95 1];
tetracao2 = [0 0.60 4.43 2.41 3.50 4.67 5.92 7.2247 8.59 10];
tetracao3 = [0 1.20 4.29 9.63 17.47 28.01 41.41 57.80 77.29 100];
tetracao4 = [0 2.41 12.88 38.53 87.37 168.08 289.87 Inf Inf Inf];
tetracao5 = [0 4.82 38.65 154.13 Inf Inf Inf Inf Inf Inf];

plot(base,tetracao1);
hold on;
plot(base,tetracao2);
plot(base,tetracao3);
plot(base,tetracao4);
plot(base,tetracao5);
legend('tetracao1','tetracao2','tetracao3','tetracao4','tetracao5');
xlabel('Base');
ylabel('Valores tetrados em (log_1_0_)');