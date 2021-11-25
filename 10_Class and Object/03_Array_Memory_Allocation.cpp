#include<iostream>
using namespace std;

class Shop {
    private:
        int itemId[2];
        int itemPrice[2];
        int count;
        string item[2];
    public:
        void initcount(void);
        void setItem(void);
        int getItem(int item); 
        void allItem(void);
};
void Shop :: initcount(void){
    count = 0;
}
void Shop :: setItem(void){
    int itemNum = 1;
    for(int i=0; i<2; i++){
       cout<<"Enter The "<<itemNum<<" a Item Id: ";
       cin>>itemId[i];
       cout<<"Enter The "<<itemNum<<" a Item Price: ";
       cin>>itemPrice[i];
       cout<<"Enter The "<<itemNum<<" a Item Name: ";
       cin>>item[i];
       count = count + 1;
       itemNum++;
    }
}
int Shop :: getItem(int item){
    for(int i=0; i<count; i++){
        if(itemId[i] == item) {
            return i;
        }
    }
}
void Shop :: allItem(void){
    cout<<"The List Of Item Id and item In Shop is Following"<<endl;
    for(int i=0; i<count; i++){
        cout<<itemId[i]<<": ";
        cout<<item[i]<<", Price: ";
        cout<<itemPrice[i]<<endl;
    }

}

int main(){
    Shop sh1;
    sh1.initcount();
    sh1.setItem();
    sh1.allItem();

    int item;
    cout<<"Enter Item Id For Searching:";
    cin>>item;
    int result = sh1.getItem(item);
    cout<<"Your Search Item id is "<<result<<" index";
    return 0;
}