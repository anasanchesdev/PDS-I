int primo(int);

int primo(int numero){
    for (int i = 2; i< numero ;i++){
        if (numero % i == 0){
            return 0;
        }
    }
    return 1;
}
