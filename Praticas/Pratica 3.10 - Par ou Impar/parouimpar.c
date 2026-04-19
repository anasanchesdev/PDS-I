int parOuImpar(unsigned int number){
    number |= ~0x01;
    return ~number;
}