#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here
void shuffle(int *ft,int *h,int *fh,int *t){
	

	
	int w8[4]={*ft,*h,*fh,*t};
	
	for  (int i=0;i<4;i++){
		
		int r = rand()%4;
		
		int t = w8[r];
		
		w8[r]=w8[i];
		
		w8[i]=t;
		 
		
	}
	
	*ft = w8[0];
	*h = w8[1];
	*fh = w8[2];
	*t = w8[3];	

}
