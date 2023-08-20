(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (d[i][j]==INF)cout<<"x";
            else cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
}