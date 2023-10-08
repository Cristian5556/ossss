//comentarios para github
#include <iostream>
using namespace std;
main(){
	/*
	//numero es positivo > 0 negativo < 0
	int num=0;
	cout<<"Ingrese el numero:";
	cin>>num;
	if(num>0){
		//entra aca cuando la condicion es verdadera 
		cout<<"Positivo:"<<endl;
	}else{
		if(num==0){
			cout<<"Neutro:"<<endl;
		}else{
			cout<<"Negativo:"<<endl;
		}	
	}
	system("pause");

    string pais="";
    cout<<"Ingrese el pais:";
    cin>>pais;
    if(pais=="Guatemala"){
    	cout<<"Yo soy de "<<pais<<" mi pais"<<endl;	
	}else{
		cout<<pais<<endl;
	}

	int num=0;
	cout<<"Ingrese Numero:";
    cin>>num;
    if((num%2)==0){
    	cout<<"Par"<<endl;
	}else{
		cout<<"Impar"<<endl;
	}
	
	
	char lapiz,lapicero,cuaderno;
	cout<<"Trae Lapiz (s/n):";
	cin>>lapiz;
	cout<<"Trae Lapicero (s/n):";
	cin>>lapicero;
	cout<<"Trae Cuaderno (s/n):";
	cin>>cuaderno;
	
	 if((lapiz=='s'||lapicero== 's' ) && cuaderno== 's'){
	 	cout<<"Ingresa"<<endl;
	 }else{
	 	cout<<"Lo siento no puede ingresar"<<endl;
	 }
	
	
	int codigo=0;
	cout<<"Ingrese el codigo de area:";
	cin>>codigo;
	switch(codigo){
		case 501: cout<<"Belice";
		break;
		case 502: cout<<"Guatemala";
		break;
		case 503: cout<<"El Salvador";
		break;
		case 504: cout<<"Honduras";
		break;
		case 505: cout<<"Nicaragua";
		break;
		case 506: cout<<"Costa Rica";
		break;
		case 507: cout<<"Panama";
		break;
		default: cout<<"Este codigo no es de centroamerica"<<endl;
	}
	*/
	
	int n1=0, n2=0, n3=0, promedio=0;
	cout<<"Ingrese Nota 1:";
	cin>>n1;
	cout<<"Ingrese Nota 2:";
	cin>>n2;
	cout<<"Ingrese Nota 3:";
	cin>>n3;
	promedio = (n1+n2+n3) / 3;
	string mensaje="";
	mensaje = promedio>=61 ? "Aprobado" : "Reprobado";
	cout<<mensaje<<endl;
	
	if(promedio>=0 && promedio<61){
		cout<<"Mala nota";
	}
      if(promedio>=61 && promedio<81){
		cout<<"Buena nota";
	}
    if(promedio>81){
		cout<<"Excelente nota";
	}
	
	
	/*
	if(promedio>=61){
		cout<<"Aprobo"<<endl;
	}else{
		cout<<"Reprobo"<<endl;
	}
	*/
	
	
	
	
	
	
	
	
	
}
