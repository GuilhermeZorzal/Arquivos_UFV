# Funções de varias variaveis

Para f(x,y) temos um valor dado por x e y. 

Exemplo: f(x,y) = x+y²

Dada uma certa função, podemos encontrar seu dominio

Ex.: Dominio de
$$
f(x,y) = \frac{\sqrt{x+y+1}}{x-1}
$$

Para ser definida, a parte superior deve estar definida, ou seja, x+y+1 >= 0. Logo, y >= -x-1

## Curvas de nível

Como uma função de 2 variaveis representa um espaço 3D, podemos apresentar esse espaço utilizando curvas de nivel (da mesma forma que é feita em geografia)

As curvas de nível de uma função f de duas variáveis são aquelas com equação
f(x, y) = k, em que k é uma constante 

## Derivadas parciais

Para realizar derivadas parciais é necessario tratar uma das variaveis como constante e derivar a em relação a outra

fx(a, b) = derivada parcial em relaçao a x (y é constante)

Notação = fx(x,y) = ∂f/∂x 

Regra para determinar as derivadas parciais de z = f(x, y)
1. Para determinar fx, trate y como uma constante e derive f(x, y) em relação a x.
2. Para determinar fy, trate x como uma constante e derive f(x, y) em relação a y

### Derivaçao implicita .

Ex.: z² + x² = 0

regra da cadeia em z

2z(z') + 2x = 0

## Derivadas de ordem superior

(f<sub>x</sub>)<sub>y</sub> = f<sub>xy</sub>. Deriva-se em relação a x primeiro depois em relação a y.

equação do plano tangente no ponto P(x0,y0,z0) ==> z − z0 = fx(x0, y0)(x − x0) + fy(x0, y0)(y − y0)


Ex.: Ache o plano tangente em (2,3,1) para z = x² + y³

f<sub>x</sub> = 2x

f<sub>y</sub> = 3y²

z-1 = 2x<sub>0</sub>(x - 2) + 3y<sub>0</sub><sup>2</sup> = 

z-1 = 2 * 2(x-2) + 3 * 9(y-3) =

z-1 = 4x - 8 + 27y - 81 = 

z = 4x + 27y - 88

## Regra da cadeia

se temos uma função z = x + y, onde x e y dependem de uma variavel t, temos 

$$
z\left\{\begin{matrix}
x \to t \\
y\to t\end{matrix}\right.
$$

Logo, temos uma soma da derivadas do caminhos possiveis para t, ou seja,

$$
\frac{dz}{dt} = \frac{∂z}{∂x} * \frac{∂x}{∂t} + \frac{∂z}{∂y} * \frac{∂y}{∂t}
$$

No caso de uma função z dependente de x,y e x,y dependentes de s e t, temos:

$$
\frac{dz}{ds} = \frac{∂z}{∂x} * \frac{∂x}{∂s} + \frac{∂z}{∂y} * \frac{∂y}{∂s}
$$

$$
\frac{dz}{dt} = \frac{∂z}{∂x} * \frac{∂x}{∂t} + \frac{∂z}{∂y} * \frac{∂y}{∂t}
$$

Pensando numa arvore das funções e suas variaveis, a derivada seria a soma de todos os caminhos possiveis até uma certa variavel.

## Derivada implicita 

Dada uma equação F(x,y,z), onde z depende de x e y, e queremos a derivada de z em relação a x por exemplo, temos que :

$$
\frac{∂z}{∂x} = - \frac{F_{x}}{F_{z}}
$$