class Solution{
  public:
    int smallestNumber(int arr[], int n){
      int smallest = INT_MAXI;
      for(int i = 0; i < n; i++) {
        if(arr[i] < smallest) smallest = arr[i];
      }
      return smallest;
    }
};

int main(){

  int tc;
  cin >> tc;
  while(tc--) {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    cout << "Smallest number is " << smallestNumber(arr, n) << endl;
  }
  return 0;
}
