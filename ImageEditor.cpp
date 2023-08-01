//ImageEditor

#include <iostream>
#include <cstdio>
#include <fstream>

#define x 750
#define y 500


int main(){

	FILE* inp;
	FILE* outp;
	unsigned char img[y][x] , output[y][x];
	
	inp = fopen("unesco-1.raw" , "rb");
	fread(img , 1 , y*x , inp);
	
	
	//reverse
	for (int j=0 ; j<y ; j++){
		for (int i=0 ; i<x ; i++){
			
			output[j][i] = img[j][x-i];
			
		}
	}
	
	outp = fopen("reverseImg.raw" , "wb");
	fwrite(output , 1 , y*x , outp);
	fclose(outp);
	
	
	//add 20
	for (int j=0 ; j<y ; j++){
		for (int i=0 ; i<x ; i++){
			
			output[j][i] = img[j][i] + 20;
			
		}
	}
	
	outp = fopen("add20Img.raw" , "wb");
	fwrite(output , 1 , y*x , outp);
	fclose(outp);
	
	
	//add 128
	for (int j=0 ; j<y ; j++){
		for (int i=0 ; i<x ; i++){
			
			output[j][i] = img[j][i] + 128;
			
		}
	}
	
	outp = fopen("add128Img.raw" , "wb");
	fwrite(output , 1 , y*x , outp);
	fclose(outp);
	

	fclose(inp);

}//end main