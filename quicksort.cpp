#include<iostream>
using namespace std;
void printarray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int partition(int arr[],int p,int q){
    int pivot=arr[p];
    int i=p;
    for(int j=p+1;j<=q;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
  
    swap(arr[i],arr[p]);
    return i;
}
void quicksort(int arr[],int p,int q){
    if(p<q){
    int pivot=partition(arr,p,q);
    quicksort(arr,p,pivot-1);
    quicksort(arr,pivot+1,q);
    }
}
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;
    quicksort(arr,0,n-1);
    printarray(arr,n);
}
Hey listen miss anugyaaa....first of all I love youuuu tooo much that I can't even express to you ans im with you in every single thing ikkk you are very very upset from me bss tu bata ni rhi ha kyuki ma already parashaan or ni krna cahati ikk tu islia ni bata but ikk tu naraz hai mera or tera naraz hona bhi banta ha yrr glti ha I saying this to you tera naraz hona bhi banta ha and also you may be feeling ki ma tera sath ni ikkk 1000 Tarah ki alag alag khayal aata ha also tera toh periods ka time chl rha moods swings tera pre cramps ikk bhut jaida ganda wala hota ha yahi wkt hota jisma ma sabse jaida 





//pamper krna cahiya terako jaida sa jaida time da chaiya fhyaan rakhna cahiya or issi time par ma tera sath ni hu ikkk bhuut hurt ho rha hogaaa samj rha but bs wo ak nayi cheez aa gyi thi kl acnak sa toh bsss usma toda zone out thaa ik bahana laga rha hogaa but i accept ki meri glti merako tera sath hona chaiya the im really really sorry to you and bss ab ma theek hu also i want to say thanku to you ki jb meri baat huyi tera sa kl shaam ko todi si hi huyi but jitni bhi huyi wo bhut helpful thi mera liya merako achha laga share krke and also kl raat mo bhi jaisa tuna meri baate sooni or rsponse bhut helpful tha yk that ki bss terasa share krta hu sab or tu hoti h thankuua and i love you so muchhhh a toh bss jldi jldi milangaaaa bss kuch hi din bachaa ha phr toh poora time ak dusra ka sath rhna ha jhalna ha ak dusra ko mazzaa aaiga bhut bss ab toh jldi jldi millaaa..i lovee youu and bhut bde wala huggggg...ahhhhhhh......or bhut sara pyar or periods darna ni sath hu ma tera dw im with youu i lovee youuuu or yah jo do din ka gussaa ha wo nikl liyo chutiney chukumbar bana liyo or yah toda comprise krdiyo mera yaar sa ak ouquet or chocolate dunga pkaaaaaa cuttuuuuu i loveee you and im sorry.........