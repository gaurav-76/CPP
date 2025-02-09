void printBinary(int num){
    for(int i = 10; i >= 0; --i){
        cout << ((num >> i)&1);
    }
    cout << endl;
}