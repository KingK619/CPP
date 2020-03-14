#include<iostream>
#include<vector>
using namespace std;

main()
{   int max[9]{0};                      // size can be changed as width reaches high..
    int array[]={ 1,3,-1,-3,5,3,6,7};
    int k=0;
    max[k]=array[0];
    int i,j, w = 3;     // say width =3
    for(i=0;i<8;i++)
    {

        for(j=i;j<i+w-1;j++)
        {
            if(max[k]<=array[j])
            {
                k++;
                max[k]=array[j];
            }

        }
    }
    i=2;                           // cause we are only displaying the greatest in sets of given width
    while(i<9)
    cout<<max[i++]<<endl;

}
