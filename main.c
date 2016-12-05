int funcion(int a, int b, int c, int d, int e, int f, int g){
  int r;
  if( g > 4){
    r = a+b+c+d-e-f;
  }
  else{
    r = a+b+c+d+e-f;
  }
  return r;
}

int main(){
  int a = 1;
  int b = 2;
  int c = 3;
  int d = 4;
  int e = 5;
  int f = 6;
  int g = 7;
  int r;

  r = funcion(a,b,c,d,e,f,g);
  return 0;
}

