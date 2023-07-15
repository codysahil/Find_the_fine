long long int totalFine(int n, int date, int car[], int fine[])
    {
        long long int fineeven = 0; 
        long long int fineodd = 0;
        
        if(date%2==0){
            for(int i = 0; i<n; i++){
                if(car[i]%2!=0){
                    fineodd = fineodd + fine[i];
                }
            }
            return fineodd;
        }
        else{
            
            for(int i = 0; i<n; i++){
                if(car[i]%2==0){
                fineeven = fineeven + fine[i];
                }
            }
            return fineeven;
        }
        
    }
