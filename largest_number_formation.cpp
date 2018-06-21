using namespace std;

// custom comprator function 

bool sort1(int a,int b){
    string s1,s2;
    s1=to_string(a);
    s2=to_string(b);
    string s3=s1+s2;
    string s4=s2+s1;
   // int ans1=stoi(s3);
   // int ans2=stoi(s4);
    if( s4 < s3){
        return true;
    }
    return false;
}
int main()
 {
	int  t;
        scanf("%d",&t);
       for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        vector<int>v1;
        v1.clear();
        for(int k=0;k<n;k++){
            int a;
            scanf("%d",&a);
            v1.push_back(a);
        }
        sort(v1.begin(),v1.end(),sort1);
        for(int k=0;k<v1.size();k++){
            cout << v1[k];
        }
        printf("\n");
       }

	return 0;
}
