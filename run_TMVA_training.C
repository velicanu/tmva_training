#include "../TMVAClassification.C"
#include <iostream>

void run_TMVA_training(int ipt , int ieta, int ialgo){
 // int nalgo=3;
 // int neta=3;
 // int npt=4;
 int algo[]={4,5,6};
 double etamin[]={0  ,0.5,1.2};
 double etamax[]={0.5,1.2,2.4};
 int ptmin[]={0.5,1,3,  8};
 int ptmax[]={  1,3,8,300};
 
 // for(int ieta=0;ieta<neta;ieta++){
  // for(int ipt=0;ipt<npt;ipt++){
   // for(int ialgo=0;ialgo<nalgo;ialgo++){
    cout<<"step"<<ieta<<ipt<<ialgo<<endl;
    TMVAClassification("CutsGA",etamin[ieta],etamax[ieta],ptmin[ipt],ptmax[ipt],algo[ialgo]);
   // }
  // }
 // }
 cout<<"done"<<endl;
}


int main(int argc, char *argv[])
{
  if(argc != 4)
  {
    std::cout << "Usage: ./run_TMVA_training.exe <ieta> <ipt> <ialgo>" << std::endl;
    return 1;
  }
  run_TMVA_training(atoi(argv[1]),atoi(argv[2]),atoi(argv[3]));
}

