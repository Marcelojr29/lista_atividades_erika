algoritmo "SerieFettuccine"
var
   t1: inteiro
   t2: inteiro
   t3: inteiro
   i: inteiro
Inicio
t1 <- 0
t2 <- 1
escreva("Os 10 primeiros termos da série Fettuccine são: ")
escreval(t1)
escreval(t2)
para i de 3 ate 10 faca
t3 <- t1 - t2
escreval(t3)
t1 <- t2
t2 <- t3
fimPara
fimAlgoritmo