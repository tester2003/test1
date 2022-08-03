void print(int st, int en){
    for(int i = 1 ; i <= st - 1 ; i++) cout << " ";
    for(int i = st; i <= en ; i ++) cout << "*";
    cout << endl;
}

void printArrow(int n, bool left){

    int st = (left) ? n : 1;
    int en = (left) ? n * 2 - 1 : n;

    for(int i = 1 ; i <= n ; i++){
        print(st, en);
        if(i == n) continue;

        st += (left) ? -1 : 2;
        en += (left) ? -2 : 1;
    }
    for(int i = n + 1; i <= n * 2 - 1; i++){
        st += (left) ? 1 : -2;
        en += (left) ? +2 : -1;
        print(st, en);
    }
}
