//Alejandra Bonilla
//diagrama de flujo
#include <iostream>

using namespace std;

int main()
{
    int x=1;
    

    for(x=1; x<=5; x+=2)
        if(x<=5)
            if(x%3==0)
            x=x+2;
            else{
            cout<<"x="<<x<<endl;
            x=x+2;
	    //Tu programa imprime dos veces dentro de la misma operación, esto hace que no haga lo que el diagrama pide. Sí lo comentas, el programa corre como se espera. 
            //cout<<"x="<<x<<endl;
            }
  

    return 0;
}
