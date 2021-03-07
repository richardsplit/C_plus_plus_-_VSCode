//REAL EXAM 06 TRY ATTEMPT 
int n;
cin>>n;

bool isTrue=false;
int hundreds=(n/1000)%10;
int tens=(n/10)%10;
int units=n%10;

int sum =units*tens*hundreds;

for(int number=111;number<=999;number++){
 
    for(int numone=1;numone<=hundreds;numone++){
        for(int numtwo=1;numtwo<=tens;numtwo++){
            for(int numthree=1;numthree<=units;numthree++){
                int result= numone*numtwo*numthree;
                std::cout<<numone<<" * "<<numtwo<<" * "<<numthree<<" = "<<result<<endl;
                
                if(sum==result){
                    break;
                    isTrue=true;
                    }

              
                }

            
            }

        isTrue=true;
        }

    }