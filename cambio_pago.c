void cambio_pago(int precio, int billete){
  int cant_dinero=billete-precio,x,y=0,z=0;
  int cambio[9],preciobilletes[9]={500,200,100,50,20,10,5,2,1};
  for(x=0;x<9;x++){
      cambio[x]=0;
      }
  //500 200 100 50 20 10 5 2 1
  while(cant_dinero>0){
      if(cant_dinero>=preciobilletes[z]){
              cambio[y]=cambio[y]+1;
              cant_dinero=cant_dinero-preciobilletes[z];
          }else{
              z++;
              y++;
              }
      }
  
  for(x=0;x<9;x++){
      printf("DE %d -> %d \n",preciobilletes[x],cambio[x]);
  }

}
