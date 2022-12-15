# GAAL 

## Espaço vetorial

Dado um conjunto V, com as operacoes de adicao e multiplicaçao por escalar bem difinidas, temos um espaço vetorial (V,+,*)

 Deve-se verificar as 8 propriedades dos vetores (comutatividade, associatividade, etc) para garantir que trata-se de um espaço vetorial. São 4 relacionados a soma e 4 relacionados a multiplicaçao por escalar

## Subespaço vetorial

Sendo o espaço vetorial (V,+,*), e um subconjunto W, W é subespaço de V se:

	- W != {}
	- Dado u,v vetores de W, entao u + v pertence a W.
	- Dado u um vetor de W e j um valor real, entao j*u pertence a W.

Todo subespaço tambem é espaço vetorial. Um subespaço é uma região dentro do espaço vetorial com as propriedades do espaço vetorial. 

<!--
### Exercicio pag 21:
{0} pertece a {0}, entao {0} enta contido em {0}
λ{0} = {0}, Logo, {0} c {0}
{0} + {0} = {0}, logo {0} + {0} c {0}

Logo, {0} é subespaço de V

Por V ser espaço vetorial, ele tem as mesmas caracteristicas necessarias para ser um subespaço, logo, ele é subespaço dele mesmo.

Exercicio 2:
(i) Como um espaço deve conter {0}, entao a reta deve passar por (1,0) e (0,0). Logo, o unico espaço que satisfaz (i) é a reta (x,0).

(ii) Nunca é espaço, pois para qualquer multiplicaçao por escalar, caimos num ponto fora da parabola.

(iii) Note que a reta esta contida no r², que é espaço vetorial. Logo, basta provar as propriedades de subespaço
O vetor (0) esta contido no subespaço. Logo, a primeira propriedade foi satisfeita. Como se trata de uma reta, e sabemos que toda reta é espaço vetorial, logo V é espaço vetorial
-->
## Intercessão de subespaços
Dado V um espaço vetorial e U e W subsespaços de V, os seguintes grupos estao contidos em V:

	- U intercessao W;
	- U uniao W;
	- U + W;


##  Combinacao linear

Combinar vetores para descobrir se são LI (linearmente independentes, ou seja, nenhum desses vetores é formado por combinaçao de um ou mais desses vetores) ou LD (linearmente dependente, ou seja, um ou mais desses vetores é formado por combinação de um ou mais desses vetores)

Sendo V um espaço vetorial, 

$$
\vec{v}_{1} , \vec{v}_{2} ,..., \vec{v}_{n}
$$ 

vetores de V e λ1,λ2,...λn numeros pertencentes a R, temos um vetor $\vec{v}$ obtido pela combinacao linear desses itens, ou seja,

$$ 
\vec{v}  = λ_{1}\vec{v}_{1} + λ_{2}\vec{v}_{2} + ... + λ_{n}\vec{v}_{n}
$$

O conjunto W formado por todas essas combinaçoes lineares é o subespaço vetorial gerado por V :

$$
W = [\vec{v}_{1},\vec{v}_{2},...,\vec{v}_{n}]
$$

### LI e LD:

Dado V um espaço vetorial. Dado n vetores de V, podemos afirmar que esses vetores são LI se:

$$
 \vec{0}  = λ_{1}\vec{v}_{1} + λ_{2}\vec{v}_{2} + ... + λ_{n}\vec{v}_{n}
 $$
 
Somente se os λ forem iguais a 0

Caso contrario, esses vetores sao LD

## Base

Dado um conjunto W tal que os vetores de W são LI e W é um subespaço vetorial gerado por esses vetores, entao esses vetores são uma base de W (os vetores formam o espaço W)

Se é possivel gerar V com n vetores, qualquer conjunto com mais de n vetores é  LD.

Qualquer base de um espaço V tem o mesmo numero de elementos

dim V = quantidade de elementos da base de V

Se dim V = n, qualquer conjunto LI de n vetores é base de V

Sendo U e W dois subespaços de V onde dim V = n e $dim V,W \leq n$. Temos:

dim(U + V) = dim U + dim V − dim(U ∩ V)

##  Bases e mudança de base

Dado um vetor, ele pode ser escrito como uma combinação linear de elementos de uma certa base.

Por exemplo: que combinação da base canonica do R² gera o vetor (2,3)?

a(1,0) + b(0,1) = (2,4)

(a,0) + (0,b) = (2,4)

(a,b) = (2,4)

Cada vetor $\vec{v}$ pertencente a uma base ∝ de V é escrito de forma unica como combinação dos elementos de ∝.

Pensemos agora no vetor (1,-2) na base canonica(OBS.: se não for especificada a base do vetor, considera-se a canonica). Como ele seria escrito na base {(2,1),(0,1)}:

(1,-2) = a(2,1) + b(0,1)
(1,-2) = (2a,a) + (0,b)
(1,-2) = (2a,a+b)

Montando o sistema:

$$
\left\{\begin{matrix}
1 = 2a \\
-2 = a + b \end{matrix}\right.
$$

Logo, temos que a = 1/2 e b = $\frac{-5}{2}$

Os valores para a e b que geram o vetor $\vec{v}$ em uma determinada base são chamados coordenadas do vetor $\vec{v}$ na base ∝ e são denotados por $[\vec{v}]_{∝}$.

## Transformaçoes lineares

Espécie de função. Ela transforma o elemento de um certo espaço em um elemento diferente.

Ex.: T:R² -> R³. Funcao que transforma itens do R² em itens do R³.

Uma transformacao só é considerada linear se:

$$
1 . T(\vec{v}_{1} + \vec{v}_{2}) = T(\vec{v}_{1}) + T(\vec{v}_{2});
$$

$$
2 . T(λ\vec{v}) = λT(\vec{v});
$$

### Matriz mudança de base

Dada uma transformação linear T, ela pode ser uma transnformação linear que gera uma mudança de base. Essa transformação pode ser escrita como uma <ins>matriz mudança de base</ins> e é denotada por \[T]. No caso de uma matriz que realiza a mudança da base $\alpha$ para uma base $\beta$ temos: $[T]_{\alpha }^{\beta }$.

Ex.: Se tivermos 

$$
[u]_{\alpha}
$$ 

e quisermos ele na base $\beta$, temos que

$$
[u]_{\beta} = [T]_{\beta }^{\alpha } * [u]_{\alpha}
$$

Ex.: Dada T: R² -> R² e as bases $\alpha$ ={(1,0),(2,2)} e $\beta$ = {(1,2),(3,4)} , encontre a matriz mudança de base.

Note que como as duas bases pertencem ao mesmo espaço vetorial, e sabendo como funcionam as combinações lineares, temos que cada vetor de $\alpha$ pode ser escrito como combinação da base $\beta$. Desta forma:

$\alpha_{1}$ => (1,0) = a(1,2) + b(3,4);
$\alpha_{2}$ => (2,2) = c(1,2) + d(3,4);

Logo 

$\alpha_{1}$ => (1,0) = (a,2a) + (3b,4b);
$\alpha_{2}$ => (2,2) = (c,2c) + (3d,4d);

Continuando

$\alpha_{1}$ => (1,0) = (a + 3b, 2a + 4b);
$\alpha_{2}$ => (2,2) = (c + 3d, 2c + 4d);

Caimos nos seguintes sistemas:

$$
\left\{\begin{matrix}
1 = a + 3b \\
0 = 2a + 4b\end{matrix}\right.
$$

$$
 \left\{\begin{matrix}
2 = c + 3d \\
2 = 2c + 4d\end{matrix}\right.
$$

resolvendo:

a = -2, b = 1; c = -1, d = 1;

Logo, \[(1,0)]<sub>$\beta$</sub> = (-2,1) e \[(2,2)]<sub>$\beta$</sub> = (-1,1)

Para gerar a matriz, basta preencher agora com os vetores da direita para esquerda: 

$$
\begin{bmatrix}
a & c \\
b & d \\
\end{bmatrix} =
\begin{bmatrix}
-2 & -1 \\
1 & 1 \\
\end{bmatrix} 
$$

### Inversa da matriz mudança de base

Se a matriz 

$$
[T]_{\beta }^{\alpha }
$$

transforma os elementos da base $\alpha$ para a base $\beta$, entao a inversa dessa matriz transforma os elementos da da base $\beta$ para a base $\alpha$, ou seja, 

$$
([T]_{\beta }^{\alpha })^{-1}
$$


## Diagonalização

Alguns problemas podem ser resolvidos por potencias de matriz. Porem, uma pontencia de matriz muitas vezes é dificil de ser encontrada. Usa-se portanto o conceito de matriz diagonalizavel. Basicamente se transforma a matriz numa matriz semelhante diagonal, pois a matriz diagonal é facil de se calcular potencias (simplesmente elevar os termos da diagonal à potencia pedida


Se A não é diagonal, porem existe P tal que A = PDP<sup>-1</sup>. Nesse caso, A<sup>n</sup> = P D<sup>n</sup> P<sup>-1</sup>.

<h2 id="diagonalizacao"> Passo a passo: </h2>
Seja o Anxn
Encontrar os λ que satisfaça: 
det(A - λ<sub>j</sub> I) = 0.

Como é uma matriz nxn, encontraremos um polinomio de grau n. Geralmente esse polinomio ja aparece com implificado.

Para cada λ, substituimos em 

$$
(A - λ_{j}I)\vec{v_{j}} = \vec{0} 
$$

(Note que $\vec{v_{j}}$ é uma matriz coluna de tamanho n e $\vec{0}$ é a matriz coluna do vetor nulo da nª dimensao)

Obs.: Se A for uma matriz triangular, os valores de λ são dados pelo elementos da diagonal principal

Substituindo os λ na formula acima, encontraremos n equaçoes que descrevem cada um dos autovetores.

A matriz diagonal será formada por cada um dos n lambdas encontrados. Por exemplo, para λ iguais a 1 e 2, temos D igual a:

$$\begin{bmatrix} 
1 & 0 \\
0 & 2\\
\end{bmatrix}
ou \begin{bmatrix}
2 & 0 \\
0 & 1 \\
\end{bmatrix} $$

Escolhe-se um autovetor de cada autoespaço e coloca-os como colunas em P, seguindo a ordem em que os λ foram colocados em D. Cada λ gera um autoespaço que gera autvetores. Se a coluna 1 de D contem λ<sub>1</sub>, a coluna 1 de P deve conter um autovetor do espaço gerado por λ<sub>1</sub> e assim sucessivamente.

## Como escolher os autovetores

Suponha que para um certo λ tenhamos encontrado a equaçao que descreva os autovetores (x = -y + z), onde y e z são livres. Temos: (-y+z,y,z). Separando em vetores de uma variavel só:

(-y,y,0) + (z,0,z) => y(-1,1,0) + z(1,0,1).

Logo, para um mesmo λ temos dois autovetores.

Obs.: Para escolher os valores dos autovetores de P, de preferencia a valores que tornem as coordenadas do vetor inteiras.

Inverte-se P e para achar P<sup>-1</sup>.

A matriz A nao é diagonalizavel se P nao existir. P nao existe se a sua dimensao for diferente da dimensao de A (Ex.: A = 2x2 e P = 2x1. A não é diagonalizavel).

Se forem encontrados n autovalores, ela será diagonalizavel. Senao, é necessario encontrar n autovetores

## Diagonalizar matriz transformação ```[T]```.

Dada a transformaçao T(x,y,z) e sua lei de formação, podemos separar seus autovetores. (Ver "como escolher os autovalores". O processo de separaçao dos autovetores de T é o mesmo.

Encontrado os autovetores, podemos gerar a matriz de ```[T]```. Tendo a matriz T, aplica-se o processo de de encontrar a matriz diagonal descrito <a href = "#diagonalizacao">aqui</a>.


## Aplicacao de  autovalores e autovetores à genetica

A aplicação é para a previsão de genótipos de gerações após n cruzamentos com um genotipo fixo (AA,Aa,aa).

### Como fazer:

Dada uma geração 1 e o genotipo fixado, calcula-se as equações dos novos genotipos após 1 geração.

seja a<sub>1</sub> a porcentagem de AA, b<sub>1</sub> a porcentagem de Aa e c<sub>1</sub> a quantidade de aa (sendo a<sub>0</sub>, b<sub>0</sub> e c<sub>0</sub> a porcentagem da geração anterior). Pela tabela, qual será a nova porcentagem? 

Usando exempplo feito em sala:

$$
\left\{\begin{matrix}
a_{n} = a_{n-1} + \frac{1}{2} b_{n-1}\\
b_{n} = c_{n-1} + \frac{1}{2}b_{n-1}\\
c_{n} = 0 \\
\end{matrix}\right.
$$

Como trata-se de um sistema, pode-se escrever como uma multiplicação de matrizes:

$$
\begin{bmatrix}
a_{n} \\
b_{n} \\
c_{n}\end{bmatrix} =
\begin{bmatrix}
1 & \frac{1}{2} & 0 \\
0 & \frac{1}{2} & 1 \\
0 & 0 & 0 \\
\end{bmatrix} 
\begin{bmatrix}
a_{n-1} \\
b_{n-1} \\
c_{n-1}\end{bmatrix} 
$$

Desta forma, temos uma especie de transformacao linear dada por essa matriz. Assim, se queremos descobri a nª geração, transformamos essa matriz na forma PDP<sup>-1</sup> e elevamos D a n.

Se houver uma população inicial, realizamos o processo de diagonalização descrito <a href = "#diagonalizacao">aqui</a>, encontrando assim P, D e P<sup>-1</sup>, Elevamos D a geraçao que queremos encontrar, encontramos a nova A<sup>k</sup> gerada e multiplicamos ela pelos valores iniciais(que seria a matriz coluna(a<sub>0</sub>,b<sub>0</sub>,c<sub>0</sub>)).

