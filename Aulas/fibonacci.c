int fibonacci(int n) {
    
    if ((n < 1)||(n > 30)){
        return -1;
    }
    
    int lista[n];
    
    
    for (int i = 0; i <= n; i++){
        if ((i == 0)||(i == 1)){
            lista[0] = 1;
            lista[1] = 1;
        }
        else{
            lista[i] = lista[i - 1] + lista[i - 2]; 
        }
    }
    return lista[n - 1];
}
