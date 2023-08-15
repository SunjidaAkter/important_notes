vector<pii>path;
    pii curr={di,dj};
    while(!(curr.first==si && curr.second==sj)){
        path.push_back(curr);
        curr=parents[curr.first][curr.second];
    }
    path.push_back({si,sj});
    reverse(path.begin(),path.end());
    for(int i=1;i<path.size();i++){
        if(path[i-1].first==path[i].first){
            if(path[i-1].second==path[i].second-1){
                cout<<"R";
            }else cout<<"L";
        }else{
            if(path[i-1].first==path[i].first-1){
                cout<<"D";
            }else cout<<"U";
        }
    