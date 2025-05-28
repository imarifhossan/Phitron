 for(int i=0;i<n-1;i++){
        for (int j=n-1;j>=0;j--){
            int temp = a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }