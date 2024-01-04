A tetração é uma operação que envolve a exponencial de uma exponencial, por exemplo, se 4 for tetrado 3 vezes, é o mesmo que calcular (4^4)^4.
Essa operação matemática não possui aplicação prática, mas é interessante visualizar o quão rápido os valores "estouram" a ponto de o PC não ser mais capaz de 
representá-los (supera o limiar de overflow).
O código em C permite visualizar valores de 1 a 10 para valores de "expoentes" de 0 a 5. No caso, modifiquei o código para gerar os valores expressos em log10.
Para gerar o executável, basta fazer "gcc tetracao.c -o tetracao -lpthread -lm" (sem aspas). O programa roda no Linux e, fazendo as devidas correções, roda também
no Windows.
O arquivo .m roda no MATLAB ou Octave, com o objetivo de se visualizar graficamente os resultados (também em log10).

