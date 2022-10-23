#include <iostream>
#include <math.h>
using namespace std;


void enunciado1();
void enunciado2();
void enunciado3();
void enunciado4();
void enunciado5();
void enunciado6();
void enunciado8();
void enunciado9();
void enunciado10();
void enunciado11();
void enunciado12();
void enunciado13();
void enunciado16();

main(){
	char res;
	do{
	int opcion;
	
	cout<<"  1. Suma, Resta, Multiplicacion y Division de dos numeros"<<endl;
	cout<<"  2. Determinar si un numero es par o impar"<<endl;
	cout<<"  3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
	cout<<"  4. Determinar si una palabra o un numero es palindromo."<<endl;
	cout<<"  5. Conversion de numeros arabigos a romanos (minimo 1,000)"<<endl;
	cout<<"  6. Conversion de numeros enteros a letras"<<endl;
	cout<<"  7. Conversion de numeros enteros con decimal a letras"<<endl;
	cout<<"  8. Una tabla de multiplicar"<<endl;
	cout<<"  9. Todas las tablas de multiplicar del 1 al 10"<<endl;
	cout<<"  10. Crear de forma gráfica la multiplicación manual (de 2 números enteros cuales sea)"<<endl;
	cout<<"  11. conversion de numeros decimales a binarios"<<endl;
	cout<<"  12. conversion de numeros decimales a hexadecimales"<<endl;
	cout<<"  13. simular un cajero automatico"<<endl;
	cout<<"  16. calcular la hipotenusa"<<endl;
	cout<<"               INGRESE EL NUMERO DEL ENUNCIADO QUE DESEE REALIZAR:  ";
	cin>>opcion;
	switch(opcion){
		case 1: enunciado1();
		system("cls");
		break;
		case 2: enunciado2();
		system("cls");
		break;
		case 3: enunciado3();
		system("cls");
		break;
		case 4: enunciado4();
		system("cls");
		break;
		case 5: enunciado5();
		system("cls");
		break;
		case 6: enunciado6();
		system("cls");
		break;		
		case 8: enunciado8();
		system("cls");
		break;
		case 9: enunciado9();
		system("cls");
		break;
		case 10: enunciado10();
		system("cls");
		break;
		case 11: enunciado11();
		system("cls");
		break;
		case 12: enunciado12();
		system("cls");
		break;
		case 13: enunciado13();
		system("cls");
		break;
		case 16: enunciado16();
		system("cls");
		break;
		
	}
		cout<<"  "<<endl;
		
	cout<<"               Desea realizar otra operacion:  ";
	cin>>res;
}while(res=='s'||res=='S');
 
 system("pause");

}
void enunciado1(){
	int num1, num2;
	cout<<"ingrese el primer numero ";
	cin>>num1;
	cout<<"ingrese el segundo numero numero ";
	cin>>num2;
	int suma =num1+num2;
	int resta=num1-num2;
	int mult=num1*num2;
	int div=num1/num2;
		
	cout<<"la suma de los numeros ingresados es:           "<<suma<<endl;
	cout<<"la resta de los numeros ingresados es:          "<<resta<<endl;
	cout<<"la multiplicacion de los numeros ingresados es: "<<mult<<endl;
	cout<<"la division de los numeros ingresados es:       "<<div<<endl;

}
void enunciado2(){
	int num, res;
	cout<<"ingresa el numero";
	cin>>num;
	res=num%2;
	if(num==0){
		cout<<"el numero ingresado es par ";
	}else{
		cout<<"el numero ingresado es impar";
	}
	
}
void enunciado3(){
	char res;
	do{
	int opcion;
	cout<<"1.  kilometros a millas"<<endl;
	cout<<"2.  metros a pulgadas"<<endl;
	cout<<"3.  libras a kilos"<<endl;
	cout<<"4.  millas a kilometros"<<endl;
	cout<<"5.  pulgadas a metros"<<endl;
	cout<<"6.  kilos a libras"<<endl;
	cout<<"      SELECCIONA EL NUMERO DE LA CONVERSION QUE DESEA REALIZAR:  ";
	cin>>opcion;
	switch(opcion){
		case 1: {
			int num;
			float res;
			cout<<"ingresa el numero de kilometros que desea convertir a millas:  ";
			cin>>num;
			res=num*0.621371;
			cout<<"el resultado es "<<res<<"  millas"<<endl;
			break;
		}
	
		case 2: {
			int num;
			float res;
			cout<<"ingresa el numero de metros que desea convertir a pulgadas:  ";
			cin>>num;
			res=num*39.370078;
			cout<<"el resultado es "<<res<<"  pulgadas"<<endl;
			break;
		}
		case 3: {
			int num;
			float res;
			cout<<"ingresa el numero de libras que desea convertir a kilos:  ";
			cin>>num;
			res=num*0.453592;
			cout<<"el resultado es "<<res<<"  kilos"<<endl;
			break;
		}
		case 4:{
			int num;
			float res;
			cout<<"ingresa el numero de millas que desea convertir a kilometros:  ";
			cin>>num;
			res=num*1.609344;
			cout<<"el resultado es "<<res<<"  kilometros"<<endl;
			break;
		}
		case 5:{
			int num;
			float res;
			cout<<"ingresa el numero de pulgadas que desea convertir a metros:  ";
			cin>>num;
			res=num*0.0254;
			cout<<"el resultado es "<<res<<"  metros"<<endl;	
			break;
		}
		case 6: {
			int num;
			float res;
			cout<<"ingresa el numero de kilos que desea convertir a libras:  ";
			cin>>num;
			res=num*2.204622;
			cout<<"el resultado es "<<res<<"  libras"<<endl;			
			break;
		}
		
	}
	cout<<"desea realizar otra conversion:  ";
	cin>>res;
}while(res=='s'||res=='S');
}
void enunciado4(){
	string palabra, res;
	char resp;
	do{
	cout<<"ingresa una palabra o un numero:  ";
	cin>>palabra;
	for (int i = palabra.size() - 1; i>=0;i--){
		res+=palabra[i];	
	}

	if(palabra==res){
		cout<<"la palabra o el numero  ingresado es un palindromo"<<endl;
		}else{
			cout<<"la palabra o el numero ingresado NO es un palindromo"<<endl;
		}
		cout<<"desea ingresar otra palabra o numero. s/n:  ";
		cin>>resp;
	}while (resp=='s'||resp=='S');
}
     void enunciado5() {
        int num,uni,dec,cen,mill;
        char res;
        do{
     	cout<<"ingresa el numero a convertir:   ";
     	cin>>num;
     
     	uni= num%10;
		 num /=10;
     	dec= num%10;
		 num /=10;
     	cen= num%10;
		 num /=10;
     	mill= num%10;
		 num /=10;
		 switch(mill){
		 	case 1: cout<<"M";break;
		 	case 2: cout<<"MM";break;
		 	case 3: cout<<"MMM";break;
		 }
		 switch(cen){
		 	case 1: cout<<"C";break;
		 	case 2: cout<<"CC";break;
		 	case 3: cout<<"CCC";break;
		 	case 4: cout<<"CD";break;
		 	case 5: cout<<"D";break;
		 	case 6: cout<<"DC";break;
		 	case 7: cout<<"DCC";break;
		 	case 8: cout<<"DCCC";break;
		 	case 9: cout<<"CM";break;	
		 }
		 switch(dec){
		 	case 1: cout<<"X";break;
		 	case 2: cout<<"XX";break;
		 	case 3: cout<<"XXX";break;
		 	case 4: cout<<"XL";break;
		 	case 5: cout<<"L";break;
		 	case 6: cout<<"LX";break;
		 	case 7: cout<<"LXX";break;
		 	case 8: cout<<"LXXX";break;
		 	case 9: cout<<"XC";break;	
		 }
		 switch(uni){
		 	case 1: cout<<"I";break;
		 	case 2: cout<<"II";break;
		 	case 3: cout<<"III";break;
		 	case 4: cout<<"IV";break;
		 	case 5: cout<<"V";break;
		 	case 6: cout<<"VI";break;
		 	case 7: cout<<"VII";break;
		 	case 8: cout<<"VIII";break;
		 	case 9: cout<<"IX";break;	
		 }
		 cout<<"  "<<endl;
		 cout<<"desea ingresar otro numero. s/n:  ";
		 cin>>res;
	}while(res=='s'||res=='S');
    
		 }
void enunciado6(){
	int num,uni,dec,cen,mill;
	char res;
	do{
	
	cout<<"ingresa un numero entero:  ";
	cin>>num;
	
	uni=num%10;
	num/=10;
	dec=num%10;
	num/=10;
	cen=num%10;
	num/=10;
	mill=num%10;
	num/=10;
	switch(mill){
		case 1: cout<<"mil "; break;
		case 2: cout<<"dos mil "; break;
		case 3: cout<<"tres mil "; break;
		case 4: cout<<"cuatro mil "; break;
		case 5: cout<<"cinco mil "; break;
		case 6: cout<<"seis mil "; break;
		case 7: cout<<"siete mil "; break;
		case 8: cout<<"ocho mil "; break;
		case 9: cout<<"nueve mil "; break;
		
    }
		switch(cen){
		case 1: if(dec==0&&uni==0){
			cout<<"cien ";
		}else{
			cout<<"ciento ";
		}break;
		case 2: cout<<"doscientos "; break;
		case 3: cout<<"trescientos "; break;
		case 4: cout<<"cuatroscientos "; break;
		case 5: cout<<"quinientos "; break;
		case 6: cout<<"seiscientos "; break;
		case 7: cout<<"setecientos "; break;
		case 8: cout<<"ochoscientos "; break;
		case 9: cout<<"novecientos "; break;
		
    }
		switch(dec){
		
		case 1:switch(uni){
			    case 0: cout<<"diez "; break;
				case 1: cout<<"once "; break;
		        case 2: cout<<"doce "; break;
	         	case 3: cout<<"trece "; break;
		        case 4: cout<<"catorce "; break;
        		case 5: cout<<"quince "; break;
	         	case 6: cout<<"dieciseis "; break;
		        case 7: cout<<"dieciete "; break;
	         	case 8: cout<<"dieciocho "; break;
	        	case 9: cout<<"diecinueve "; break;
			break;
		}
		 
		case 2: if(uni==0){
			cout<<"veinte";
		}else{
			cout<<"veinti";
		} break;
		case 3: if(uni==0){
			cout<<"treinta";
		}else{
			cout<<"treinta y ";
		} break;
		case 4: if(uni==0){
			cout<<"cuarenta";
		}else{
			cout<<"cuarenta y ";
		} break;
		case 5: if(uni==0){
			cout<<"cincuenta";
		}else{
			cout<<"cincueta y ";
		} break;
		case 6: if(uni==0){
			cout<<"sesenta";
		}else{
			cout<<"sesenta y ";
		} break;
		case 7: if(uni==0){
			cout<<"setenta";
		}else{
			cout<<"setenta y ";
		} break;
		case 8: if(uni==0){
			cout<<"ochenta";
		}else{
			cout<<"ochenta y ";
		} break;
		case 9: if(uni==0){
			cout<<"noventa";
		}else{
			cout<<"noventa y ";
		} break;
	}
	switch(uni){
		
		case 1: cout<<"uno"; break;
		case 2: cout<<"dos"; break;
		case 3: cout<<"tres"; break;
		case 4: cout<<"cuatro"; break;
		case 5: cout<<"cinco"; break;
		case 6: cout<<"seis"; break;
		case 7: cout<<"siete"; break;
		case 8: cout<<"ocho"; break;
		case 9: cout<<"nueve"; break;
		case 10: cout<<"diez "; break;
	}
	
	
    cout<<endl;
    cout<<"desea ingresar otro numero. s/n:  ";
    cin>>res;
  }while(res=='s'||res=='S');
}
void enunciado16(){
	int ca,cb;
	float hip;
	char res;
	do{
	
	cout<<"ingrese el valor del cateto A:  ";
	cin>>ca;
	cout<<"ingrese el valor del cateto B:  ";
	cin>>cb;
	
	hip=sqrt((ca*ca)+(cb*cb));
	cout<<"la hipotenusa de los catetos es: "<<hip<<endl;
	cout<<"desea calcular otra hipotenusa. s/n:  ";
	cin>>res;
    }while(res=='s'||res=='S');
}
void enunciado8(){
	int num,res1;
	char res;
	do{
	
	cout<<"ingrese el numero de la tabla que desea imprimir:  ";
	cin>>num;
	
	for(int i=1;i<=10; i++){
	
	res1=num*i;
	cout<<num<< " x "<<i<<" = "<<res1<<endl;
     }
    cout<<"desea imprimir otra tabla. s/n: " ;
    cin>>res;
  }while(res=='s'||res=='S');
}
void enunciado9(){
	int res;
	for(int i=1;i<=10;i++){
		for(int ii=1;ii<=10;ii++){
		res=i*ii;
		cout<<i<<" x "<<ii<<" = "<<res<<endl;	
		}
		cout<<"________________________________"<<endl;
	}	
}
void enunciado10(){
	int fac1, fac2,res1,res2,res3,res4,res5,uni,dec,cen,mill;
	char res;
	do{
	
	cout<<"ingresa el primer numero de los factores que desea multiplicar:  ";
	cin>>fac1;
	cout<<"ingresa el segundo numero de los factores que desea multiplicar:  ";
	cin>>fac2;
	cout<<"    "<<fac2<<endl;
	cout<<"    "<<fac1<<endl;
	cout<<"-----------"<<endl;
	res5=fac1*fac2;
	
	res=fac1*fac2;
		uni= fac1%10;
		 fac1 /=10;
     	dec= fac1%10;
		 fac1 /=10;
     	cen= fac1%10;
		 fac1 /=10;
     	mill= fac1%10;
		 fac1 /=10;

		 int arr[4];
		arr[0]=uni;
	    arr[1]=dec;
		arr[2]=cen;
	    arr[3]=mill;
	   
		res1=arr[0]*fac2;
	    res2=arr[1]*fac2;
		res3=arr[2]*fac2;
	    res4=arr[3]*fac2;
	 
	 int resarrpfac[4];
	  resarrpfac[0]=res1;
	  resarrpfac[1]=res2;
	  resarrpfac[2]=res3;
	  resarrpfac[3]=res4;  
	if( resarrpfac[0]==0){
	}else{
		cout<<"    "<<resarrpfac[0]<<endl;
	}
		if( resarrpfac[1]==0){
	}else{
		cout<<"   "<<resarrpfac[1]<<endl;
	}
		if( resarrpfac[2]==0){
	}else{
		cout<<"  "<<resarrpfac[2]<<endl;
	}
		if( resarrpfac[3]==0){
	}else{
		cout<<" "<<resarrpfac[3]<<endl;
	}
	cout<<"-----------"<<endl;
	cout<<"  "<<res5<<endl;
	
	cout<<"desea multiplicar otros factores. s/n:  ";
	cin>>res;
}while(res=='s'||res=='S');
}
void enunciado11(){
	int dec[20];
	int bin[20];
	int i;
	char res;
	do{
	
	cout<<"ingrese que numero que desea convertir a binario:  ";
	cin>>dec[0];
	
	for(i=0; dec[i]!=1;i++){
		dec[i+1]=dec[i]/2;
		bin[i]=dec[i]%2;
		if(dec[i+1]==1){bin[i+1]=1;
		}
	}
	for(int a=i;a>=0;a--){
		cout<<bin[a];
	}
	cout<<endl;
		cout<<"desea convertir otro numero a binario.s/n:  ";
		cin>>res;
	}while(res=='s'||res=='S');	
}

void enunciado12(){
	int dec,resid,res1,i=0;
	int hex[20];
	char res;
	do{
		
	cout<<"ingresa el numero que desea convetir a hexadecimal: ";
	cin>>dec;
	do{
		resid=dec%16;
		res1=dec/16;
		hex[i]=resid;
		dec=res1;		
	i++;	
	}while(res1>15); 
	hex[i]=res1;
	for(int a=i;a>=0;a--){
		if(hex[a]==10){
			cout<<"A";
		}
		else if(hex[a]==11){
			cout<<"B";
		}
		else if(hex[a]==12){
			cout<<"C";
		}else if(hex[a]==13){
			cout<<"D";
		}else if(hex[a]==14){
			cout<<"E";
		}else if(hex[a]==15){
			cout<<"F";
		}
		else{
			cout<<hex[a];
		}
	}
	cout<<endl; 
	cout<<"desea convetir otro numero a hexadecimal. s/n: ";
		cin>>res;
	}while(res=='s'||res=='S'); 		
}
void enunciado13(){
	cout<<"No. targeta:  123456789"<<endl;
	cout<<"PIN: 9876"<<endl;
	
	int opcion,opcion2,monto,saldo=4000,numt,num,pin;
	 
	char res;
	do{
	
	cout<<"Ingresa el numero de su tarjeta:  ";
	cin>>numt;
	cout<<"Ingrese el PIN:  ";
	cin>>pin;
	if(numt==123456789 && pin==9876){
	cout<<"1. consulta de saldos               2. retiro de efectivo"<<endl;
	cout<<endl;
	cout<<"3. consulta de saldo de ahorro      4. Tranferencias mobiles"<<endl;
	cout<<endl;
	cout<<"ingrese el numero de la opcion que desea realizar:  ";
	cin>>opcion;
	switch(opcion){
		case 1:{
			cout<<"su saldo disponible es de "<<saldo<<endl;
			break;
		}
		case 2:{
			cout<<"1. 500                   2. 1000"<<endl;
			cout<<endl;
			cout<<"3. 2000                  4. monto variable"<<endl;
			cout<<"seleccione el numero de la cantidad que desea retirar: ";
			cin>>opcion2;
			switch(opcion2){
				case 1:{
					cout<<"retire su efectivo"<<endl;
					cout<<"su nuevo saldo es de "<<saldo-500<<endl;
					break;
				}
				case 2:{
					cout<<"retire su efectivo"<<endl;
					cout<<"su nuevo saldo es de "<<saldo-1000<<endl;
					break;
				}
				case 3:{
					cout<<"retire su efectivo"<<endl;
					cout<<"su nuevo saldo es de "<<saldo-2000<<endl;
					break;
				}
				case 4:{
					cout<<"ingrese la cantidad que desea retirar:  ";
					cin>>monto;
					if(monto<=saldo){
						cout<<"su nuevo saldo es de "<<saldo-monto<<endl;
					}else{
						cout<<"su saldo es insuficiente para esta transaccion"<<endl;
					}
					break;
				}
			}
			break;
		}
		case 3: {
			cout<<"su saldo de ahorro es de 15500"<<endl;
			break;
		}
		case 4: {
			cout<<"ingrese el numero de telefono de la persona destinataria:  ";
			cin>>num;
			cout<<"ingrese el monto que desea tranferir:  ";
			cin>>monto;
			cout<<"transaccion exitosa"<<endl;
			cout<<"su nuevo saldo es de "<<saldo-monto<<endl;
			break;
		}
	}
}else{
	cout<<"datos incorrectos.    intentelo de nuevo"<<endl;
}
cout<<"desea realizar otra transaccion. s/n:  ";
cin>>res;
}while(res=='s'||res=='S');
}	





