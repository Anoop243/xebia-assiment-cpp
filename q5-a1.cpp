#include<iostream>
using namespace std;
int main(){
    int n;
    int r,c;
    cout<<"Enter the size of the square matrix: ";
    cin>>n;
    int mat[n][n];
    cout<<endl<<"Input the elements of the "<<n<<"X"<<n<<" matrix:\n";
    for(r=0;r<n;r++){
        for(c=0;c<n;c++){
            cin>>mat[r][c];
        }
    }
    for(r=0;r<n;r++){
        for(c=r;c<n;c++){
            int z=mat[r][c];
            mat[r][c]=mat[c][r];
            mat[c][r]=z;
        }
    }
    for(r=0;r<n;r++){
        int left=0;
        int right=n-1;
        while(left<right){
            int temp=mat[r][right];
            mat[r][right]=mat[r][left];
            mat[r][left]=temp;
            left++;
            right--;
        }
    }
    cout<<endl<<"Matrix after a 90 degree clockwise rotation:\n";
    for(r=0;r<n;r++){
        for(c=0;c<n;c++){
            cout<<mat[r][c]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
