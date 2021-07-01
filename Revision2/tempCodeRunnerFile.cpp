int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int max,sec,thi;
    if (a > b)
    {
        if (a > c)
        {
             max = a;
             sec = b;
             thi = c;
        }
        else
        {
             max = c;
             sec = b;
             thi = a;
        }
    }
    else
    {
        if (b > c)
        {
             max = b;
             sec = a;
             thi = c;
        }
        else
        {
             max = c;
             sec = a;
             thi = b;
        }
    }
    int sum = sec*sec + thi*thi;
    if(sum == max){
        cout<<"its an pythagorian triplet";
    }else{
        cout<<"its not";
    }
}