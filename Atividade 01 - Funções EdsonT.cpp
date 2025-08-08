#include <iostream>
#include <cmath>

using namespace std;
//--------------------------------sem paramtro

/*
//Ex1
void multquatro(){
    int R;
    R = (4 % 4 == 0 ? true : false);
    cout << R;
}

int main(){
    multquatro();
}
*/

/*
//Ex2
void parimpar(){
    int R;
    R = (2 % 2 == 0 ? "par" : "impar");
    cout << R;
}

int main(){
    parimpar();
}
*/

/*
//Ex3
void somaintervalo(){
    int R = 4;
    for(int i=1; i<=(8 - 4); i++){
        R += 4 + i;
    }
    cout << R;
}


int main(){
    somaintervalo();
}
*/

/*
//Ex4
void Vesfera(){
    int R;
    R = ((4 * 3.14 * pow(1,3)) / 3);
    cout << R;
}

int main(){
    Vesfera();
}
*/

/*
//Ex5
void fatorial(){
    int R = 1;
    for(int i=1; i<=4; i++){
        R *= i;
    }
    cout << R;
}

int main(){
    fatorial();
}
*/

/*
//Ex6
void BaseExp(){
    int R = 1;
    for(int i=0; i<2; i++){
        R *= 2;
    }
    cout << R;
}

int main(){
    BaseExp();
}
*/

/*
//Ex7
void AreaCirc(){
    int R;
    R = 3.14 * pow(2,2);
    cout << R;
}

int main(){
    AreaCirc();
}
*/

/*
//Ex8
void anoB(){
    if((2024 % 4 == 0) && (2024 % 100 != 0) && (2024 % 400 ==0)){
        cout << "eh ano bissexto";
    }
    else{
        if((2024 % 4 == 0) && (2024 % 100 != 0)){
            cout << "eh ano bissexto";
        }
        else{
            cout << "nao eh ano bissexto";
        }
    }
}

int main(){
    anoB();
}
*/

/*
//Ex9
void CparaF(){
    int R;
    R = (20 * (9/5)) + 32;
    cout << R;
}

int main(){
    CparaF();
}
*/

//--------------------------------com parametro

/*
//Ex1
bool multquatro(int valor){
    return (valor % 4 == 0 ? true : false);
}

int main(){
    int x;
    
    cin >> x;
    
    if(multquatro(x)){
        cout << "É divisivel por 4";
    }
    else{
        cout << "Não é divisivel por 4";
    }
}
*/

/*
//Ex2
int parimpar(int valor){
    return (valor % 2 == 0 ? "par" : "impar"); 
}

int main(){
    int v1;

    cin >> v1;

    cout << parimpar(v1);
}
*/

/*
//Ex3
int somaintervalo(int x, int y){
    int R;
    if(x < y){
        R = x;
        for(int i=1; i<=(y - x); i++){
            R += x + i;
        }
        return R;
    }
    else{
        R = y;
        for(int i=1; i<=(x - y); i++){
            R += y + i;
        }
        return R;
    }
}


int main(){
    int v1, v2;

    cin >> v1 >> v2;

    cout << somaintervalo(v1,v2);
}
*/

/*
//Ex4
float Vesfera(int raio){
    return ((4 * 3.14 * pow(raio,3)) / 3);
}

int main(){
    int R;
    
    cin >> R;
    
    cout << Vesfera(R);
}
*/

/*
//Ex5
int fatorial(int x){
    int R;
    for(int i=1; i<=x; i++){
        R *= i;
    }
    return R;
}

int main(){
    int x;
    
    cin >> x;
    
    cout << fatorial(x);
}
*/

/*
//Ex6
int BaseExp(int b, int e){
    int R;
    R = b;
    for(int i=1; i<e; i++){
        R *= b;
    }
    return R;
}

int main(){
    int base, expoente;
    
    cin >> base >> expoente;
    
    cout << BaseExp(base, expoente);
}
*/

/*
//Ex7
float AreaCirc(int raio){
    return 3.14 * pow(raio,2);
}

int main(){
    int R;
    
    cin >> R;
    
    cout << AreaCirc(R);
}
*/

/*
//Ex8
int anoB(int ano){
    if((ano % 4 == 0) && (ano % 100 != 0) && (ano % 400 ==0)){
        return 1;
    }
    else{
        if((ano % 4 == 0) && (ano % 100 != 0)){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int main(){
    int x;
    
    cin >> x;
    
    if(anoB(x) == 1){
        cout << "eh ano bissexto";
    }
    else{
        cout << "nao eh ano bissexto";
    }
}
*/

/*
//Ex9
float CparaF(int celsius){
    return (celsius * (9/5)) + 32;
}

int main(){
    int C;
    
    cin >> C;
    
    cout << "Fahrenheit: " << CparaF(C);
}
*/

//Funções são partes de um códigos que se localizam no exterior do main, ous seja é independente, podendo ser chamada pelo nome e utilizada várias vezes reduzindo o tamanho do código e deixando ele mais fácil de compreender
//Argumentos/Parametros modificam uma função no sentido que torna ela generalizada podendo receber valores ao invés de valores já predefinidos
//Tipos de função são com parametros onde devolve um int, float, double etc, ou pode ser com retorno onde deve ser void
//Void indica que a função não possuí tipos de parametros ou de retorno, ou seja é uma função que sempre devolve o mesmo resultado
//Tipos de parametros como int, double, float, string