#include<bits/stdc++.h>
using namespace std;
void unionS(int arr1[], int arr2[], int size1, int size2){
int i=0,j=0,k=0;
vector <int> unio;
//unio[-1] = -99999;
while( i<size1 && j<size2){
    if(arr1[i]<arr2[j])
    {
        if (unio.empty() || arr1[i]>unio.back()){
        unio.push_back(arr1[i]);
        i++;
        }
        else i++;
    }
    else if(arr1[i] == arr2[j] ){
        if(unio.empty() || arr1[i]>unio.back()){
        unio.push_back(arr1[i]);
        i++;j++;
    }
    else{
        i++;
        j++;
    }
    }
    else if(arr1[i]>arr2[j] )
    {
        if(unio.empty() || arr2[j]>unio.back()){
    	unio.push_back(arr2[j]);
        j++;
        }
        else{
            j++;
        }
    }

}
while(i<size1 )
{
	if(unio.empty() || arr1[i]>unio.back()){
    unio.push_back(arr1[i++]);
}
	else{
		i++;
	}
}
while(j<size2)
{
	if(unio.empty() || arr2[j]>unio.back()){
	
    unio.push_back(arr2[j++]);
}
else{
	j++;
}
}
for(int m=0; m<unio.size(); m++){
    cout << unio[m] << " ";
    
}
}
int main(){
    vector <int> u;
    // u.push_back(8);
    // cout << u.back();
    // cout << u.empty();
    int arr1[] = {2,3,5,5,6};
    int arr2[] = {4,5,6,7,8};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    unionS(arr1,arr2,size1,size2);
    return 0;
}