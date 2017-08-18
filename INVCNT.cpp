    #include <iostream>
    #include <vector>
    using namespace std;
     
    vector<int> a;
    vector<int> c;
    void merge(int low, int high, int mid);
    void mergesort(int low, int high)
    {
     int mid;
     if (low < high)
     {
         mid=(low+high)/2;
         mergesort(low,mid);
         mergesort(mid+1,high);
         merge(low,high,mid);
     }
    return ;
    }
     
    long long count ; //to store the inversion count
    void merge(int low, int high, int mid)
    {
    int i, j, k;
    i = low;
    k = low;
    j = mid + 1;
    // standard merging from merge sort
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
             j++;
          //   cout<<a[i]<<" "<<mid<<" "<<i<<"\n";
             count += (long long)mid - (long long) i + 1L; // This is where the trick occurs, if X > Y,
             //eg. in [3, 4, 5] and [1,2]
             //if(3>1) then 4,5 is obviously greater then 1, thus making count as mid - i+1              
         }
     }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
     }
    }
    int main()
    {
    //int a[20], i, b[20];
    int T;
    cin>>T;
    while(T--){
        //cout<<"enter  the elements\n";
        int N;
        cin>>N;
        count =0;
        a.clear(); a.resize(N);
        c.clear(); c.resize(N);
        for (int i = 0; i < N; i++)
        {
            cin>>a[i];
        }
        mergesort(0, N-1);
     
        cout<<count<<"\n";
    }
    }
