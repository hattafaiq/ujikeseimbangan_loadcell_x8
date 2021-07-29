float a=200.0;
float bv=150.0;
float c=200.0;
float d=200.0;
float e=10.0;
float f=10.0;
float g=10.0;
float h=10.0;

float xcopr, ycopr, xcopl, ycopl, XCOP, YCOP;
float f1r=d*0.0098; //satuan gram ke newton
float f2r=a*0.0098; //satuan gram ke newton
float f3r=c*0.0098; //satuan gram ke newton
float f4r=bv*0.0098; //satuan gram ke newton
float f1l=e*0.0098; //satuan gram ke newton
float f2l=h*0.0098; //satuan gram ke newton
float f3l=f*0.0098; //satuan gram ke newton
float f4l=g*0.0098; //satuan gram ke newton
float dy = 111;//11,1cm//111mm // panjang jarak load 
float dx = 73;//7,3cm//7mm // lebar jarak load
float Xo = 6;//7,6mm//8mm // jarak titik ke bagian samping 
float Yo = 8;//5,5mm//6mm // jarak titik ke bagian depan belakang
float fw = 85;// lebar kaki
float df = 25;//jarak antar kaki

void setup() {
  Serial.begin(57600);

}

void loop() {
xcopr=Xo +(((f2r+f4r)*dx)/(f1r+f2r+f3r+f4r));
ycopr=Yo +(((f1r+f2r)*dy)/(f1r+f2r+f3r+f4r));
xcopl=Xo +(((f2l+f4l)*dx)/(f1l+f2l+f3l+f4l));
ycopl=Yo +(((f1l+f2l)*dy)/(f1l+f2l+f3l+f4l));
XCOP=(fw +(df/2))+(xcopl-xcopr);
YCOP=(ycopl+ycopr)/2;
        Serial.print("gram = f2r=");
       Serial.print(a);
       Serial.print(" f1r=");
       Serial.print(d);
       Serial.print(" f2l=");
       Serial.print(h);
       Serial.print(" f1l=");
       Serial.print(e);
       Serial.print(" f4r=");
       Serial.print(bv);
       Serial.print(" f3r=");
       Serial.print(c);
       Serial.print(" f4l=");
       Serial.print(f);
       Serial.print(" f3l=");
       Serial.print(g);
       Serial.println(" ");

//int XA= round(XCOP);
//int YA= round(YCOP);
Serial.print("newton = f1r=");
Serial.print(f1r);
Serial.print(" f2r=");
Serial.print(f2r);
Serial.print(" f3r=");
Serial.print(f3r);
Serial.print(" f4r=");
Serial.print(f4r);
Serial.print(" f1l=");
Serial.print(f1l);
Serial.print(" f2l=");
Serial.print(f2l);
Serial.print(" f3l=");
Serial.print(f3l);
Serial.print(" f4l=");
Serial.print(f4l);
Serial.println(" ");
Serial.print(" hasil tiap kaki-> xr= ");
Serial.print(xcopr);
Serial.print(" yr= ");
Serial.print(ycopr);
Serial.print(" xl= ");
Serial.print(xcopl);
Serial.print(" yl= ");
Serial.print(ycopl);
Serial.print(" XCOP =");
Serial.print(XCOP);
//Serial.print(" XA =");
//Serial.print(XA);
Serial.print(" YCOP =");
Serial.print(YCOP);
//Serial.print(" YA =");
//Serial.print(YA);
Serial.println(" ");
delay(2000);
}
