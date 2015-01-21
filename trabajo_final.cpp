#include <conio>
#include <iostream>
#include <fstream>
int entrada (int a , int b, int op)
{
	switch(op)
   {
   	case 1:	//AND
      {
      	if (a==b && a==1)
         {
         	return 1;
         }
         else
         {
         	return 0;
         }
      break;
      }

      case 2:   //OR
      {
      	if (a==b && a==0)
         {
         	return 0;
         }
         else
         {
         	return 1;
         }
      break;
      }
      case 3:   //NAND
      {
      	if (a==b && a==1)
         {
         	return 0;
         }
         else
         {
         	return 1;
         }
      break;
      }

      case 4:   //EXOR
      {
      	if (a==b)
         {
         	return 0;
         }
         else
         {
         	return 1;
         }
      break;
      }
      case 5:       //NOR
      {
      	if (a==b && a==0)
         {
         	return 1;
         }
         else
         {
         	return 0;
         }
      break;
      }
      case 6:	//       XNOR
      {
      	if (a==b)
         {
         	return 1;
         }
         else
         {
         	return 0;
         }

      break;
      }
   }
}

void caso1()
{


      int a[4], b[4], c[4];
		a[1]=0;
		a[2]=0;
		a[3]=1;
		a[4]=1;
		b[1]=0;
		b[2]=1;
		b[3]=0;
		b[4]=1;
      ofstream archivo("C:/BC5/Trabajo Final/final.txt");
      cout<<"El archivo fue almacenado en la direccion C:/BC5/Trabajo Final con el nombre de final.txt"<<"\n\n";
      cout<<"Las tablas han sido generadas y almacenadas en el archivo"<<"\n\n";
      cout<<"¿Desea mostrar el contenido del archivo almacenado? (opcion 2)"<<"\n\n";
      archivo<<"El resultado de la opcion 1 es:"<<"\n\n";
		archivo<<"AND\n";
		for(int i=1; i<5; i++)
		{
			c[i]=entrada(a[i],b[i],1);
		   archivo<<a[i]<<"\t"<<b[i]<<"\t"<<c[i]<<"\n";
		}
		archivo<<"\n\n"<<"OR\n";
		for(int i=1; i<5; i++)
		{
			c[i]=entrada(a[i],b[i],2);
   		archivo<<a[i]<<"\t"<<b[i]<<"\t"<<c[i]<<"\n";
		}
		archivo<<"\n\n"<<"NAND\n";
		for(int i=1; i<5; i++)
		{
			c[i]=entrada(a[i],b[i],3);
	   	archivo<<a[i]<<"\t"<<b[i]<<"\t"<<c[i]<<"\n";
		}
		archivo<<"\n\n"<<"X-OR\n";
		for(int i=1; i<5; i++)
		{
			c[i]=entrada(a[i],b[i],4);
   		archivo<<a[i]<<"\t"<<b[i]<<"\t"<<c[i]<<"\n";
		}
		archivo<<"\n\n"<<"NOR\n";
		for(int i=1; i<5; i++)
		{
			c[i]=entrada(a[i],b[i],5);
		   archivo<<a[i]<<"\t"<<b[i]<<"\t"<<c[i]<<"\n";
		}
		archivo<<"\n\n"<<"X-NOR\n";
		for(int i=1; i<5; i++)
		{
			c[i]=entrada(a[i],b[i],6);
	  	 archivo<<a[i]<<"\t"<<b[i]<<"\t"<<c[i]<<"\n";
		}
      archivo.close();
}

void caso2()
{
   char caracter;
   ifstream archivo("C:/BC5/Trabajo Final/final.txt", ios::in);
   while(!archivo.eof())
   {
      archivo.get(caracter);
      cout<<caracter;
   }
   archivo.close();
   getch();
   cout<<"\n\n";
   clrscr();
}

void caso3()
{





}

main()
{
   int opcion, hs=0;
	do
	{
		cout<<'\t'<<" Ingrese la orden que desea reallizar."<<'\n';
		cout<<'\t'<<"1.- Generar tablas de verdad con dos entradas."<<'\n';
		cout<<'\t'<<"2.- Ver tablas de verdad con dos entradas."<<'\n';
		cout<<'\t'<<"3.- Generar y ver tabla con n entradas."<<'\n';
		cout<<'\t'<<"4.- Salir."<<'\n'<<'\n';
      cout<<'\n'<<"opcion: ";
		cin>>opcion;
      clrscr();
			switch(opcion)
			{
					 case 1:
				 	 {
  						caso1();
    	           hs=1;
			 			break;
                }

                 case 2:
				 	  {
   						if(hs==0)
               		{
                  		cout<<'\t'<<"\n\n"<<"El archivo no existe, desea generar el archivo para mostrarlo(opcion 1)."<<"\n\n";
 	              		}
   	            	else if (hs==1)
      	         	{
         	        		caso2();
 								break;
               		}
                 }
   		}
	}while (opcion<4 && opcion!=0);    // op menor a 4 y mayor a 0
   cout<<'\t'<<"\n\n"<<"Gracias por preferirnos."<<'\n';
        
getch();
}
