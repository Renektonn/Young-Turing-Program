#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n,m;
  cin>>n>>m;
  vector < vector<bool> > vec ;
  vec.resize(n);
  for(int i=0 ; i<n ; i++){
    vec[i].resize(m);
  }

  
  bool boom;
  for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<m ; j++){
      cin>>boom;
      if(boom){
        if(i!=0 and j!=0){
          vec[i-1][j-1]++;
          vec[i-1][j]++;
          vec[i-1][j+1]++;
          vec[i][j-1];
          vec[i][j+1]++;
          vec[i+1][j-1]++;
          vec[i+1][j]++;
          vec[i+1][j+1]++;
        }
      }
    }
    
  }

  
  
  return 0;
}
