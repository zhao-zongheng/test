
using namespace std;

int main()
{
    int n;
    cin>>n;
    int M[n][n];
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>M[i][j];
        }
    }
    int sum[1][n];
    for(int i=0;i<n;i++){
        sum[0][i]=0;
        for(int j=0;j<n;j++){
            sum[0][i]+=M[j][i];
        }
        cout << sum[0][i] <<' ';
    }

    return 0;
}
