void print(int input[], vector<int> v, int n)
{
    int a = sizeof(input) / sizeof(int);
    if (a == 0)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
        return;
    }
    int x = input[0];
    print(input + 1, v, n);
    v.push_back(x);
    print(input + 1, v, n);
}
void printSubsetsOfArray(int input[], int size)
{
    vector<int> v;
    v.push_back(" ");
}
