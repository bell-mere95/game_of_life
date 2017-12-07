#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <time.h>
#include <windows.h>
#include <string>
//BIBLIOTHIKES

using namespace std;


HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); 
COORD CursorPosition;
void gotoXY(int x, int y)  // SYNARTHSH gotoXY
{ 
CursorPosition.X = x; // STHLH STHN OTHONH
CursorPosition.Y = y; // GRAMMH STHN OTHONH
SetConsoleCursorPosition(console,CursorPosition);// EPOMENH THESH OPOY THA TYPWSOUME
}

char WelcomeLoop()                     ////////////////////////////////////////////////////////
{                                     // WelcomeLoop: XREIAZETAI STHN ARXH TOY PROGRAMMATOS //  
	char n;                          // ELEGXEI AN O XRHSTHS PLHKTROLOGEI 'y' H' 'n'       //
	cin>>n;                         ////////////////////////////////////////////////////////
    while ((n!='y') && (n!='n')){
    	cout<<"Type 'y' for yes or 'n' for no"<<endl;
    	cin>>n;
	} 
	return n;
}
int GenerationLoop()      ///////////////////////////////////////////////////////////////////////////////////////////
{                        // GenerationLoop:XREIAZETAI STO TELOS TOY PROGRAMMATOS.                                 //
                        // O XRHSTHS EXEI TH DYNATOTHTA NA SYNEXISEI NA BLEPEI TOYS NEOUS KOSMOYS                //
	int n;             //  H' NA TELEIWSEI TO PAIXNIDI.AYTO KATHORIZETAI APO TO AN THA PLHKTROLOGISEI           //
	                  //   THETIKO ARITHMO H' MHDEN. GINETAI ELEGXOS WSTE NA MH PLHKTROLOGHSEI ARNHTIKO ARITHMO//
	cin>>n;          ///////////////////////////////////////////////////////////////////////////////////////////
	while (n<0){
		cout<<"Type a positive number if you want to continue or type 0 for exit"<<endl;
		cin>>n;
	}
	return n;
}
int myflag(char b, char a, int n)  ///////////////////////////////////////////////////////
{                                 // myflag: ELEGXEI AN DYO XARAKTHRES EINAI IDIOI     //
	if (b!=a)                    // AN DEN EINAI, ENAS METRHTHS AYKSANETAI KATA 1.    //
	{                           // STO PROGRAMMA XRHSIMEYEI GIA NA ENTOPISTOYN AN    //
	                           // YPARXOUN ALLAGES APO TON ARXIKO KOSMO STON        //
		n=n+1;                // EPOMENO, EPITREPONTAS ETSI NA DHMIOYRGHTHOYN OI   //
	}                        // EPOMENES GENIES (NEOI KOSMOI).                    //
	return n;               //                                                   //
}                          //                                                   ///////////////////////////////////////
int ValidChoice()         //ValidChoice: SYNARTHSH POY EPISTREFEI TIMH GIA THN EPILOGH TOY XRHSTH PWS THA PAIKSEI. //
{                        //TSEKAREI AN O ARITHMOS POY PLHKTROLOGEI O XRHSTHS EINAI STH LISTA TWN EPILOGWN         //
	int n;              ///////////////////////////////////////////////////////////////////////////////////////////
	 cin>>n;
      while ((n!=1) && (n!=2) && (n!=3))
	  {                         
       		  cout<<"Type one of the numbers below: "<<endl;
      		  cout<<"make your own pattern (1), pick one from the gallery (2),insert a file named 'someworld.txt (3)"<<endl;
      		  cin>>n;
                    }
        return n;
											    
}

int ValidNumber()        ///////////////////////////////////////////////////////////////////////////////////////
{                       //SYNARTHSH POY EPISTREFEI EGKYRH TIMH GIA TON ARITHMO TWN ZWNTANWN KELIWN           //
	int n;             // POY EPILEGEI O XRHSTHS GIA TON ARXIKO KOSMO. SE PERIPTWSH POY O ARITHMOS TOYS     //
	                  // EINAI MEGALYTEROS APO TON ARITHMO TWN KELIWN OLOY TOY PINAKA H' EINAI ARNHTIKOS   //
	                 // H SYNARTHSH ValidNumber ZHTAEI KSANA TIMH.                                        //
	                /////////////////////////////////////////////////////////////////////////////////////// 
	cout<<"How many alive cells do you want on your world?"<<endl;
	cin>>n;
	while ((n<=0)||(n>600)){
		cout<<"Please note that the number of alive cells must be less than the number of cells of the table"<<endl;
		cin>>n;
	}
	return n;
	
	
}
char Space()             //////////////////////////////////////////////////////
{                       //Space: SYNARTHSH POY EPISTREFEI TON KENO XARAKTHRA//
	char n;            //////////////////////////////////////////////////////
	n=' ';
	return n;
}

int ChoosePattern()                                      /////////////////////////////////////////////
{                                                       //  ChoosePattern: SYNARTHSH POU EPISTREFEI// 
                                                       // KAI ELEGXEI TH TIMH POY DINEI O XRHSTHS //
	int n;                                            // GIA THN EPILOGH ETOIMOY KOSMOU          //
	                                                 /////////////////////////////////////////////
	cin>>n;
	while ((n<1)||(n>11))
	{
		cout<<"Press one of the number below:"<<endl;
		cout<<"1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11"<<endl;
		cin>>n;
	}
	return n;
}
int main(int argc, char *argv[])
 {
     ///////////////////////////////////////////////////////////////
    //DHLWSH PINAKWN GIA TOYS EIDIKOUS ARXIKOUS KOSMOUS          //
   // ME SYNTETAGMENES GIA NA TOPOTHETHTHOYN ORGANISMOI         //
  //STON PINAKA TOY ARXIKOY KOSMOY.                            //
 //ARXIKOS KOSMOS: matrix[22][32]. EPOMENOS:nextmatrix[22][32]//
///////////////////////////////////////////////////////////////

             int block[4][2]={ {11, 16}, {11, 17}, {12, 16}, {12, 17}} ;
             int beehive[6][2]={ {11, 17}, {11, 18}, {12, 16}, {12, 19}, {13, 17}, {13, 18} };
             int loaf[7][2]={ {11, 17}, {11, 18}, {12, 16}, {12, 19}, {13, 17}, {13, 19}, {14, 18} };
             int boat[5][2]={ {11, 16}, {11, 17}, {12, 16}, {12, 18}, {13, 17} };
             int beacon[6][2]={ {10, 16}, {10, 17}, {11, 16}, {12, 19}, {13, 18}, {13, 19} } ;
             int toad[6][2]={ {11, 17}, {11, 18}, {11, 19}, {12, 16}, {12, 17}, {12, 18} };
             int blinker[3][2]={ {11, 16}, {11, 17}, {11, 18} }, geitones[22][32], A[3][3];
             int lwss[9][2]={ {10, 11}, {10, 14}, {11, 10}, {12, 10}, {12, 14}, {13, 10}, {13, 11}, {13, 12}, {13, 13}  };
             int glider[5][2]={ {10, 11}, {11, 12}, {12, 10}, {12, 11}, {12, 12} } ;
             int pulsar[48][2]={ {5, 10}, {5, 11}, {5, 12},{7, 8},{8, 8}, {9, 8}, {7,13}, {8, 13},{9, 13},{10, 10}, {10, 11},{10, 12},{12, 10},{12, 11}, {12, 12},{13, 8},{14,8},{15,8},{13,13},{14,13},{15,13},{17,10},{17,11},{17, 12},{5,16},{5,17},{5,18},{10,16},{10,17},{10,18},{12,16},{12,17},{12,18},{17,16},{17,17},{17,18},{7,15},{8,15},{9,15},{13,15},{14,15},{15,15},{7,20},{8,20},{9,20},{13,20},{14,20},{15,20} };
             int pentadecathlon[12][2]={ {5,14}, {6,14}, {7,13},{7,15},{8,14},{9,14},{10,14},{11,14},{12,13},{12,15},{13,14},{14,14}};
             
     ////////////////////////////////////////////////////////////////////////////////////
    //A[3][3]: APOTELEITAI APO 9 KELIA, APO TA OPOIA TA 8 XRHSIMEYOUN                 //
   //GIA THN EYRESH ZWNTANWN ORGANISMWN STA GEITONIKA KELIA KATA TH SARWSH TOY matrix//
  //geitones[22][32]: APOTHIKEYEI GIA KATHE KELI POSOI EINAI SYNOLIKA OI ZWNTANTOI  //
 ////////////////////////////////////////////////////////////////////////////////////   
          
             int i, k, n, j, ans, ans1, metr, alivec, r, x, y, epanalipseis, h , d; //OI METABLHTES THA EKSIGITHOYN PARAKATW
             char matrix[22][32], nextmatrix[22][32], answer, c;
             
          
             srand (time(NULL)); // ARXIKOPOIHSH GENNHTRIAS
 ////ARXIKH OTHONH:
             cout<<"Welcome to the Game of Life!!!"<<endl;
             
               cout<<"Do you want to play? Type 'y' for yes or 'n' for no "<<endl;
               answer=WelcomeLoop(); // ELEGXOS APO TH SYNARTHSH GIA THN APANTHSH TOY XRHSTH (y H' n)
              do {
			  
             switch (answer)
             {
 //ARXIZEI TO PAIXNIDI:
                    case 'y':
                         cout<<"Great!"<<endl;
     ///////////////////////////////////////////////////                     
    //TOPOTHETOYNTAI KENA SE OLO TO PINAKA:          //
   // matrix: O KOSMOS MAS                          //
  //nextmatrix: O EPOMENOS KOSMOS                  //
 ///////////////////////////////////////////////////
 						for(i=0; i<22; i++)
 						{
 							for (k=0; k<32; k++)
 							{
 								matrix[i][k]=Space();
							 }
						 }
						    ///////////////////////////////////////////////////////
						   //TOPOTHETOUNTAI # STA AKRA TOY matrix TOY nextmatrix// 
						  //KAI 0 STA AKRA TOY geitones AFOY EINAI TYPOY int   //
						 ///////////////////////////////////////////////////////
                          for (i=0; i<=21; i++)
                                     {
                                         for (k=0; k<=31; k++)
                                         {
                                             if ((i==0)||(i==21)||(k==0)||(k==31))
                                             {
                                             	geitones[i][k]=0;
                                                matrix[i][k]='#';
                                                nextmatrix[i][k]='#';
                                                }
                                                }
                                                 }
    //////////////////////////////////////////////////////////////////////////////////////////////////////                                              
   //DIALEGEI O XRHSTHS KATHGORIA: NA XTISEI TO DIKO TOY KOSMO EPILEGONTAS POSOYS ORGANISMOUS NA EXEI  //
  //                               NA EPILEKSEI ENAN ETOIMO KOSMO APO TH LISTA                        //
 //                                NA EISAGEI ARXEIO someworld.txt                                   //
//////////////////////////////////////////////////////////////////////////////////////////////////////
                                      cout<<"Now pick one way to build your world and type the number of your choice:"<<endl;
                                      cout<<"make your own pattern (1), pick one from the gallery (2),insert a file named 'someworld.txt (3)"<<endl;
                                      ans=ValidChoice();        
                                               
                                              do{
                                                       
                                                       cout<<"How many generations do you want to see (if any)?"<<endl;
                                                       cin>>epanalipseis; //POSOUS NEOUS KOSMOYS-GENIES THELEI NA DEI O XRHSTHS (K EPANALIPSEIS OPOY ZHTOYNTAI)
                                                       } while (epanalipseis<=0); //ELEGXOS EGKYROTHTAS
                                              
 
                         switch (ans)
                         {
                                case 1:  //O XRHSTHS XTIZEI TO DIKO TOY KOSMO:
                                    
                                                                ///////////////////////////////////////////////////////////////   
                                     alivec=ValidNumber();     // alivec: POSOYS ZWNTANTOUS ORGANIMOUS EPELEKSE O XRHSTHS   //
                                     system("CLS");           // system("CLS"):KATHARIZEI THN OTHONH WSTE NA EMFANISTEI    // 
                                                             //PARAKATW O matrix XWRIS TIS PROHGOUMENES ERWTHSEIS         //
                                                            ///////////////////////////////////////////////////////////////
                                     for (int j=0; j<alivec; j++)
                                      {
                                          do
                                          {
               //ELEGXOS AN TO KELI STO matrix (ARXIKOS KOSMOS EXEI HDH EPILEGEI APO TH rand:
                                                 i=rand()%(19)+1;
                                                 k=rand()%(29)+1;
                                                 } while (matrix[i][k]=='O');
                                          matrix[i][k]='O';
                                          }
									    for (i=0; i<22; i++)
									    {
   /////////////////////////////////	
  //TOPOTHENTOUNTAI KENA STON    //
 // matrix 					    //			
/////////////////////////////////			
												for (k=0; k<32; k++)
												{
											if ((matrix[i][k]!='#')&&(matrix[i][k]!='O'))
											{
												matrix[i][k]=Space();
											}
										}
									  }  
                                          break;
      /////////////////////////////////////
     //O XRHSTHS DIALEGEI ENAN APO TOYS //
    // ETOIMOYS KOSMOYS :              //                        
   /////////////////////////////////////
                                     case 2:
                                     cout<<"Here's the gallery of already done patterns:"<<endl;
                                     cout<<"Block (1), Beehive (2), Loaf (3), Boat (4), Beacon (5), Toad (6), Blinker (7), LWSS (8), Glider (9), Pulsar (10), Pentadecathlon (11)"<<endl;
                                     cout<<"Type the number of your choice:"<<endl;
                                     ans1=ChoosePattern();
									 system("CLS");           
                                     switch (ans1)  //EPILOGH KOSMOY
                                     { 
                                            case 1:
                                                 
                                                 for (i=0; i<4; i++)
                                                 {
                                                 	for (k=0; k<2; k++)
                                                 	{              ///////////////////////////////////////////////////////
                                                 		if (k==0) //H PRWTH STHLH PERIEXEI SYNTETAGMENES GIA TH GRAMMH //
                                                 		{        ///////////////////////////////////////////////////////
                                                 			x=block[i][k]; 
															   
														 }     ///////////////////////////////////////////////////////////////
														else  //ENW H DEYTERH STHLH SYNTETAGMENES GIA TH STHLH .           //
														{    // FTANONTAS STH DEYTERH STHLH TOY PINAKA EXEI PAREI HDH     //
														    // TIMH TO x OPOTE PAIRNEI 'O' TO KATALLHLO KELI STON matrix //
														   ///////////////////////////////////////////////////////////////
														   
															y=block[i][k];               //////////////
															matrix[x][y]='O';           //          //
														}                              //   BLOCK  //
													 }                                //          //
												 }                                   //////////////
												 //OMOIWS GIA KATHE ETOIMO KOSMO:
												                                                 
                                                 break;
                                            case 2:
                                                
                                                 for (i=0; i<6; i++)                 ///////////////////////
                                                 {                                  //                   //
                                                 	for (k=0; k<2; k++)            //     BEEHIVE       // 
                                                 	{                             //                   //
                                                 		if (k==0)                ///////////////////////
                                                 		{
                                                 			x=beehive[i][k];
														 }
														else
														{
															y=beehive[i][k];
															matrix[x][y]='O';
														}	
													 }
												 }
                                                 break;
                                            case 3:
                                                
                                                for (i=0; i<7; i++)
                                                 {
                                                 	for (k=0; k<2; k++)         /////////////////
                                                 	{                          //             //
                                                 		if (k==0)             //    LOAF     //
                                                 		{                    //             //    
                                                 			x=loaf[i][k];   /////////////////
														 }
														else
														{
															y=loaf[i][k];
															matrix[x][y]='O';
														}
													 }
												 }
												 
                                                 break;
                                            case 4:
                                               
                                                for (i=0; i<5; i++)
                                                 {
                                                 	for (k=0; k<2; k++)
                                                 	{                              //////////////////
                                                 		if (k==0)                 //              //
                                                 		{                        //     BOAT     // 
                                                 			x=boat[i][k];       //              //
														 }                     //////////////////
														else
														{
															y=boat[i][k];
															matrix[x][y]='O';
														}
													 }
												 }
                                                 break;
                                            case 5:
                                                
                                                for (i=0; i<6; i++)
                                                 {
                                                 	for (k=0; k<2; k++)             /////////////////
                                                 	{                              //             //
                                                 		if (k==0)                 //    BEACON   //
                                                 		{                        //             //
                                                 			x=beacon[i][k];     ///////////////// 
														 }
														else
														{
															y=beacon[i][k];
															matrix[x][y]='O';
														}
													 }
												 }
                                                 break;
                                            case 6:
                                                
                                                for (i=0; i<6; i++)
                                                 {
                                                 	for (k=0; k<2; k++)                 ////////////////
                                                 	{                                  //            //
                                                 		if (k==0)                     //    TOAD    //
                                                 		{                            //            //
                                                 			x=toad[i][k];           ////////////////
														 }
														else
														{
															y=toad[i][k];
															matrix[x][y]='O';
														}
													 }
												 }
                                                 break;
                                            case 7:
                                            	for (i=0; i<3; i++)                    ///////////////
                                                 {                                    //           //
                                                 	for (k=0; k<2; k++)              //  BLINKER  //
                                                 	{                               //           //
                                                 		if (k==0)                  ///////////////
                                                 		{
                                                 			x=blinker[i][k];
														 }
														else
														{
															y=blinker[i][k];
															matrix[x][y]='O';
														}
                                                 		
                                                 		
													 }
												 }
                                                
                                                 break;                             //////////////////////
                                            case 8:                                //                  //
                                                                                  //  LIGHTWEIGHT     //
                                                 for (i=0; i<9; i++)             //                  //
                                                 {                              //  SPACESHIP       //
                                                                               //        L W S S   //
                                                 	for (k=0; k<2; k++)       //                  //
                                                 	{                        //////////////////////
                                                 		if (k==0)
                                                 		{
                                                 			x=lwss[i][k];
														 }
														else
														{
															y=lwss[i][k];
															matrix[x][y]='O';
														}
                                                 		
                                                 		
													 }
												 }
                                                 break;
                                            case 9:                             //////////////
                                                                               //          //
                                                    for (i=0; i<5; i++)       //  GLIDER  //
                                                 {                           //          //
                                                 	for (k=0; k<2; k++)     //////////////
                                                 	{
                                                 		if (k==0)
                                                 		{
                                                 			x=glider[i][k];
														 }
														else
														{
															y=glider[i][k];
															matrix[x][y]='O';
														}
                                                 		
                                                 		
													 }
												 }
												 break;
											case 10:
												 for (i=0; i<48; i++)       
                                                 {                                 //////////////////////
                                                 	for (k=0; k<2; k++)           //                  //   
                                                 	{                            //     PULSAR       //
                                                 		if (k==0)               //                  //
                                                 		{                      //////////////////////
                                                 			x=pulsar[i][k];
														 }
														else
														{
															y=pulsar[i][k];
															matrix[x][y]='O';
														}
                                                 		
                                                 		
													 }
												 }
												 break;
											case 11:
												 for (i=0; i<12; i++)                      /////////////////////////////
                                                 {                                        //                         //
                                                 	for (k=0; k<2; k++)                  //     PENTADECATHLON      // 
                                                 	{                                   //                         //
                                                 		if (k==0)                      /////////////////////////////
                                                 		{
                                                 			x=pentadecathlon[i][k];
														 }
														else
														{
															y=pentadecathlon[i][k];
															matrix[x][y]='O';
														}
												
                                                    }
                                                }
                                            }
                                 
                                     break;
                                      ///////////////////////////////////////////////////
                                     // O XRHSTHS EISAGEI ARXEIO someworld.txt:       //
                                    /////////////////////////////////////////////////// 
                                case 3:
                                	  ifstream fin;                         
                                	  fin.open("someworld.txt", ios::in);  //ANOIGEI TO ARXEIO TXT
                                	  if (fin.fail())                 //MHNYMA LATHOUS AN DEN VRETHEI TO ARXEIO
                                	  {
                                	  	cout<<"File not found"<<endl;
                                	  	return 0;            //EKSODOS APO TO PROGRAMMA
                                	  	
									  }
											for (i=0; i<22; i++)
									  		{
									  			for (k=0; k<32; k++)
									  				{
									  					fin.get(c) ;  //TO PROGRAMMA DIAVAZEI TON EPOMENO XARAKTHRA APO TO ARXEIO
														matrix[i][k]=c;  //O XARAKTHRAS POU DIAVASTHKE APOTHIKEYETAI STO matrix
										 			 }
										 			 fin.get(c); //TO PROGRAMMA DIAVAZEI TON EPOMENO XARAKTHRA APO TO ARXEIO (ALLAGH GRAMMHS)
										 		
									 		 }
									   fin.close();           //TO ARXEIO KLEINEI  
                                                     }    
// GIA KATHE PERIPTWSH EINAI ETOIMOS O PINAKAS matrix:
						system("CLS");
                        gotoXY(0,0);  // PHGAINOUME STH THESH (0,0) THS OTHONHS
                        for (i=0; i<22; i++)
                        {
                            for(k=0; k<32; k++)
                            {
                                     cout<<matrix[i][k];   //TYPWNETAI O TREXWN KOSMOS
                                     }
                                     cout<<endl;
                                     }
                                     Sleep(50);  // PERIMENOYME LIGO GIA TON EPOMENO KYKLO ZWHS
             
// EPEKSERGASIA matrix GIA THN EPOMENH GENIA:

do{
metr=0;  //METRHTHS: METRAEI POSES EPANALHPSEIS EXOYN GINEI WSTE NA EMFANISTOUN TOSES GENEIES OSES ZHTHSE O XRHSTHS ME THN epanalipseis:
	do
	{

                       for (i=1; i<21;  i++)
                       {
                           for (k=1; k<31; k++)
                           {                //////////////////////////////////////////////////////////////////////////////////////
                              n=0;         //GEITONES GIA TO KELI matrix[i][k] (DEN EXOUN METRHTHEI MEXRI AYTH TH GRAMMH) ...  //
                              A[1][1]=1;  //TO A[1][1]  KELI DEN THELOUME NA EXEI KAPOIA APO TIS TIMES '#', ' ', 'O'          //
							             // WSTE NA MHN YPOLOGISTEI SAN GEITONAS PARAKATW GIA AYTO EXEI PAREI MIA TYXAIA TIMH//
							            ////////////////////////                                                       ///////
                              if ((i==1)&&(k==1))            //                                                       //
                              {                             //PERIPTWSEIS GIA TH THESH TOY KELIOU POY SARWNETAI:     //
                              	A[0][0]=matrix[20][30];    // DIAFORETIKES PERIPTWSEIS GIA TA AKRA WSTE O KOSMOS    //
                             	A[0][1]=matrix[20][k];    // NA EINAI STROGGYLOS                                   //
                              	A[0][2]=matrix[20][k+1]; ///////////////////////////////////////////////////////////
                              	A[1][0]=matrix[i][30];
                              	A[1][2]=matrix[i][k+1];
                              	A[2][0]=matrix[i+1][30];  //   <========== PERIPTWSH TO EKSETAZOMENO KELI NA EINAI TO matrix[1][1]
                              	A[2][1]=matrix[i+1][k];
                              	A[2][2]=matrix[i+1][k+1];
							  }
							  else if ((i==20)&&(k==30))   
							  {                             //  <========== PERIPTWSH TO KELI NA EINAI TO matrix[20][30]
							    A[0][0]=matrix[i-1][k-1];
                             	A[0][1]=matrix[i-1][k];
                              	A[0][2]=matrix[i-1][1];
                              	A[1][0]=matrix[i][k-1];
                              	A[1][2]=matrix[i][1];
                              	A[2][0]=matrix[1][k-1];
                              	A[2][1]=matrix[1][k];
                              	A[2][2]=matrix[1][1];
							  }
							  else if ((i==1)&&(k==30))
							  {
							  	A[0][0]=matrix[20][k-1];        // <========== PERIPTWSH TO KELI NA EINAI TO matrix[1][30]
                             	A[0][1]=matrix[20][k];
                              	A[0][2]=matrix[20][1];
                              	A[1][0]=matrix[i][k-1];
                              	A[1][2]=matrix[i][1];
                              	A[2][0]=matrix[i+1][k-1];
                              	A[2][1]=matrix[i+1][k];
                              	A[2][2]=matrix[i+1][1];
							  }
							  else if ((i==20)&&(k==1))
							  {                            // <============ PERIPTWSH TO KELI NA EINAI TO matrix[20][1] 
							  	A[0][0]=matrix[i-1][30];
                             	A[0][1]=matrix[i-1][k];
                              	A[0][2]=matrix[i-1][k+1];
                              	A[1][0]=matrix[i][30];
                              	A[1][2]=matrix[i][k+1];
                              	A[2][0]=matrix[1][30];
                              	A[2][1]=matrix[1][k];
                              	A[2][2]=matrix[1][k+1];
							  }
							  else if (i==1)
							  {                             // <============ PERIPTWSH TO KELI NA ANHKEI STH 1H SEIRA ALLA NA MHN EINAI GWNIAKO
							  	A[0][0]=matrix[20][k-1];
                             	A[0][1]=matrix[20][k];
                              	A[0][2]=matrix[20][k+1];
                              	A[1][0]=matrix[i][k-1];
                              	A[1][2]=matrix[i][k+1];
                              	A[2][0]=matrix[i+1][k-1];
                              	A[2][1]=matrix[i+1][k];
                              	A[2][2]=matrix[i+1][k+1];
							  }
							  else if (k==1)
							  {
							  	A[0][0]=matrix[i-1][30];   // <============ PERIPTWSH TO KELI NA ANHKEI STH 1H STHLH ALLA NA MHN EINAI GWNIAKO
                             	A[0][1]=matrix[i-1][k];
                              	A[0][2]=matrix[i-1][k+1];
                              	A[1][0]=matrix[i][30];
                              	A[1][2]=matrix[i][k+1];
                              	A[2][0]=matrix[i+1][30];
                              	A[2][1]=matrix[i+1][k];
                              	A[2][2]=matrix[i+1][k+1];
							  }
							  else if (i==20)               // <============ PERIPTWSH TO KELI NA ANHKEI STH 20H SEIRA ALLA NA MHN EINAI GWNIAKO
							  {
							  	A[0][0]=matrix[i-1][k-1];
                             	A[0][1]=matrix[i-1][k];
                              	A[0][2]=matrix[i-1][k+1];
                              	A[1][0]=matrix[i][k-1];
                              	A[1][2]=matrix[i][k+1];
                              	A[2][0]=matrix[1][k-1];
                              	A[2][1]=matrix[1][k];
                              	A[2][2]=matrix[1][k+1];
							  }
							  else if (k==30)              // <============ PERIPTWSH TO KELI NA ANHKEI STH 30H STHLH ALLA NA MHN EINAI GWNIAKO
							  {
							  	A[0][0]=matrix[i-1][k-1];
                             	A[0][1]=matrix[i-1][k];
                              	A[0][2]=matrix[i-1][1];
                              	A[1][0]=matrix[i][k-1];
                              	A[1][2]=matrix[i][1];
                              	A[2][0]=matrix[i+1][k-1];
                              	A[2][1]=matrix[i+1][k];
                              	A[2][2]=matrix[i+1][1];
							  }
                             else
                             {
                             	A[0][0]=matrix[i-1][k-1];  // <============ PERIPTWSH TO KELI NA MHN ANHKEI STA AKRA TOY PINAKA
                             	A[0][1]=matrix[i-1][k];
                              	A[0][2]=matrix[i-1][k+1];
                              	A[1][0]=matrix[i][k-1];
                              	A[1][2]=matrix[i][k+1];
                              	A[2][0]=matrix[i+1][k-1];
                              	A[2][1]=matrix[i+1][k];
                              	A[2][2]=matrix[i+1][k+1];
							 }
                              for (int r=0; r<3; r++)        ////////////////////////////////////////////////////////////////////
                              {                             // AFOU EINAI PLEON ETOIMOS O PINAKAS A[3][3]                     //
                              	for (int t=0; t<3; t++)    // EKSETAZONTAI TA KELIA MHPWS EINAI ZWNTANOI ORGANISMOI          //
                              	{                         //                                                                //
                              		if (A[r][t]=='O')    //                                                                //
                              		{                   //                                                                //
                              				n=n+1;     //PROSWRINOS METRHTHS GIA TOYS ZWNTANOUS GEITONIKOUS ORGANISMOUS  //
											          //==> DINEI TH TIMH TOY STO ANTISTOIXO KELI STO geitones[22][32]  //
										             ////////////////////////////////////////////////////////////////////
									  }
								  }
							  }
							  geitones[i][k]=n;
						                             
                            }
                        }                                      //////////////////////////////////////////////////////////////////
                           for  (i=0; i<22; i++)              //SXHMATIZETAI O nextmatrix[22][32] ME BASH TOUS KANONES:       //
                           {                                 // AN ENA KELI EINAI ZWNTANO KAI EXEI 2 H 3 ORGANISMOUS         //
                           	for (k=0; k<32; k++)            //EN ZWH, PARAMENEI STHN EPOMENH GENIA. DIAFORETIKA PETHAINEI   //
                           	{                              // AN ENA KELI EINAI KENO KAI EXEI AKRIVWS 3 GEITONES EN ZWH ,  //
                                   if (matrix[i][k]=='O') //GENNIETAI ORGANISMOS                                          //
                                   {                     //////////////////////////////////////                          /////////////////
                                                                                            //                                         //
                                             if ((geitones[i][k]>=2)&&(geitones[i][k]<=3)) //AN TO KELI EXEI ZWNTANO ORGANISMO KAI    //
                                             {                                            // 2 H' 3  ZWNTANOUS GEITONES, PERNAEI     //
                                                                                         // STO NEO KOSMO, DIAFORETIKA PETHAINEI    //
                                                        nextmatrix[i][k]='O';           /////////////////////////////////////////////
                                                        }
                                             else
                                             {
                                                        nextmatrix[i][k]=Space();
                                                        }
                                                        }                          /////////////////////////////////////////////////////////////////////////////
                                    else if (matrix[i][k]==' ')                   // AN TO KELI TOU matrix POU EKSETAZETAI EXEI TH TIMH ' '                  //
                                    {                                            // ELEGXETAI AN EXEI 3 GEITONES EN ZWH , WSTE NA GENNHTHEI                 //
                                        if (geitones[i][k]==3)                  // ORGANISMOS STON NEO KOSMO                                               //
                                        {                                      //                                                                         //
                                                        nextmatrix[i][k]='O'; //                                                                         //
                                                        }                    //                                                                         //
                                        else                                //                                                                         //
                                        {                                  //                                                                         //
                                             nextmatrix[i][k]=Space();    // DIAFORETIKA DEN THA EXEI ORGANISMO EN ZWH OUTE STON NEO KOSMO           //
                                               }                         //                                                                         //
                                        }                               //                                                                         //
                                    else                               //                                                                         //
                                    {                                 //                                                                         //
                                    	nextmatrix[i][k]='#';        // H MONH PERIPTWSH POY EMEINE EINAI NA EKSETAZONTAI TA AKRA POY EXOUN #   //
									}                               /////////////////////////////////////////////////////////////////////////////
                                             }
                                         }
                                         
                                             
// O PINAKAS nextmatrix EINAI PLEON ETOIMOS. TYPWNOYME TON nextmatrix :
                       gotoXY(0,0);  
                        for (i=0; i<22; i++)
                        {
                            for (k=0; k<32; k++)
                            {
                                cout<<nextmatrix[i][k];
                                }
                                cout<<endl;               //ALLAGH GRAMMHS
                                
                                }                         ////////////////////////////////////////////////////////////
                                Sleep(50); //     <==== // PERIMENOYME LIGO GIA NA FANEI O PINAKAS TOY NEOY KOSMOU//
                                                        //                                                        //
                        i=0;	                       //                                                        //
						n=0;                          //                                                        //
						while (i<22 )                //SKANARWNTAI OI PINAKES matrix KAI nextmatrix            //
						{                           //                                                        //
							k=0;                   //ELEGXOS AN ALLAZEI O KOSMOS APO GENIA SE GENIA (myflag) //
							while(k<32)           ////////////////////////////////////////////////////////////
							{
								r=myflag(matrix[i][k], nextmatrix[i][k], n);
								n=r;
								k=k+1;
							}
							i=i+1;
						}
                                     //////////////////////////////////////////////////////////////////////////////        
                         if (n==0)  //AN O KOSMOS DEN EXEI ALLAGES , TOTE O METRHTHS POY METRAEI TIS            //
                         {         // EPANALHPSEIS-GENIES PAIRNEI MEGISTH TIMH WSTE NA TERMATISTEI TO PROGRAMMA//
                                  //////////////////////////////////////////////////////////////////////////////
                         	metr=epanalipseis+1;
                         	
						 }
						 else                                   //////////////////////////////////////////////////////
						 {                                     //AN YPARXOUN ALLAGES STON EPOMENO KOSMO, SYNEXIZEI //
						 	for (i=0; i<22; i++)              //TO PROGRAMMA NA BRISKEI KAI ALLES GENIES.         //
                         	 {                               //////////////////////////////////////////////////////
                             for (k=0; k<32; k++)
                             {                                     //////////////////////////////////////////////////
                                 matrix[i][k]=nextmatrix[i][k];   //O nextmatrix DINEI TIS TIMES TOY STON matrix  //
                                 nextmatrix[i][k]=Space();       //////////////////////////////////////////////////
                                 }
                                 }
                                 metr=metr+1;
						 }                                     ////////////////////////////////////////////////////////////////////////////////
                        } while ((n>0)&&(metr<epanalipseis)); //ELEGXOS AN YPARXOYN ALLES GENIES, KAI POSES GENIES THELEI O XRHSTHS NA DEI. //
                         //////////////////////////////////////                                                                            //
						// O XRHSTHS MPOREI NA SYNEXISEI NA BLEPEI TIS EPOMENES GENIES EFOSON YPARXOUN, OSO EPILEKSEI:                    //
                       ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                        cout<<"Do you want to continue? For 'yes type the number of generations you want to see"<<endl;
                        cout<<"Otherwise type 0 for menu"<<endl;
                        
                        epanalipseis=GenerationLoop();  //ELEGXOS AN O ARITHMOS EINAI MH ARNHTIKOS
                        system("CLS");
                    } while (epanalipseis>0); //: H DYNATOTHTA NA SYNEXISEI O XRHSTHS NA BLEPEI TIS EPOMENES GENIES (NEOUS KOSMOUS)
                        break;
                     case 'n':
                     	cout<<"Goodbye!"<<endl; //MHNYMA EKSODOU
                     	return 0; //EKSODOS
                          break;  
                            }
                            cout<<endl;
                            cout<<"Do you want to play again? (type 'y' or 'n')"<<endl;
                           answer=WelcomeLoop();
                           }while(answer=='y');
                           if (answer=='n')
                           {
                           	cout<<"Goodbye!"<<endl;
						   }
                            
                            
                            
 //EKSODOS:
 return 0;
  }         
