#include <iostream>
using namespace std;
int normal[4][10], premium[10], i;
float time;


class pre{
	public:
	void park() {
        for (i = 0; i < 10; i++) {
            if (premium[i] == 0) {
                cout << "Your parking slot number: " << i << endl;
                cout<<"Enter how many hours you stayed in the mall: ";
                cin>>time;
                premium[i] = 1;
                break;
            }

        }
    }
};

class nor{
  public:
  void park(){
    for(int i = 0; i < 4; i++) {
      int asig;
    	for(int j = 0; j < 10; j++) {
        if(normal[i][j]==0){
          cout<<"Your parking floor="<<i<<" slot= "<<j<<endl;
          cout<<"Enter how many Hours you stayed in the mall: ";
          cin>>time;
          normal[i][j]=1;
          asig=1;
          break;
        }
      }
		if(asig==1){
      break;
    }
    }
	}
  void slowpark(){
    for(int i = 1; i < 4; i++) {
      int asig;
    	for(int j = 0; j < 10; j++) {
        if(normal[i][j]==0){
          cout<<"Your parking floor="<<i<<" slot= "<<j<<endl;
          cout<<"Enter how many minutes you stayed in the mall: ";
          cin>>time;
          normal[i][j]=1;
          asig=1;
          break;
        }
      }
		if(asig==1){
      break;
    }
    }
	}
};


class fee : public pre,public nor{
public:
    float fare,total;
        void nor_fast(){
            fare=2.0;
            total = fare*time;
            cout<<"please pay: RS "<<total<<endl;
        }
        void nor_slow() {
            fare=60.0;
            total = fare*time;
            cout<<"please pay: RS "<<total<<endl;
        }
        void pre() {
            fare=200.0;
            total = fare*time;
            cout<<"please pay: RS "<<total<<endl;
        }
};

int main(){

cout<<endl;
    cout<<"\t\t\t=========================================================================================================================\n";

  	cout<<"\t\t\t\t\t\t* * * *      *       * * * *   *     *  * * * *  **      *   * * *  \n";
    cout<<"\t\t\t\t\t\t*      *    * *      *      *  *    *      *     * *     *  *     * \n";
    cout<<"\t\t\t\t\t\t*      *   *   *     *      *  *   *       *     *  *    *  *       \n";
    cout<<"\t\t\t\t\t\t* * * *   * * * *    * * * *   * **        *     *   *   *  *   *** \n";
    cout<<"\t\t\t\t\t\t*        *       *   *  *      *   *       *     *    *  *  *     * \n";
    cout<<"\t\t\t\t\t\t*       *         *  *    *    *    *      *     *     * *  *     * \n";
    cout<<"\t\t\t\t\t\t*      *           * *      *  *     *  * * * *  *      **   * * *  \n";
    cout<<endl;

    cout<<"\t\t\t\t\t\t  * * *   *       *   * * *   * * * * *  * * * *  **     **\n";
    cout<<"\t\t\t\t\t\t*      *   *     *  *      *      *      *        * *   * *\n";
    cout<<"\t\t\t\t\t\t*           *   *   *             *      *        *  * *  *\n";
    cout<<"\t\t\t\t\t\t * * * *     * *     * * * *      *      * * * *  *   *   *\n";
    cout<<"\t\t\t\t\t\t        *     *             *     *      *        *       *\n";
    cout<<"\t\t\t\t\t\t *      *     *      *      *     *      *        *       *\n";
    cout<<"\t\t\t\t\t\t  * * *       *       * * *       *      * * * *  *       *\n";

    cout<<"\t\t\t=========================================================================================================================\n";
    cout<<endl;

  	pre a;
  	nor b;
  	fee c;
  	int t=0;
  	while(t==0){
	cout<<"what kind of parking do you want? "<<endl;
  	cout<<"1. Normal  2. Premium"<<endl;
  	int opinion;
		cin>>opinion;

  	if(opinion==1){
      int dur_choice;
      cout<<"How long are you going to park:"<<endl<<"1.less than an hour\t2.more than an hour"<<endl;
      cin>>dur_choice;
      if(dur_choice==1){
      a.park();
      c.nor_fast();
      }
      else if(dur_choice==2){
        b.slowpark();
        c.nor_slow();
      }
    }
  	else if(opinion==2){
       a.park();
       c.pre();
    }
  	else{
      cout<<"wrong input"<<endl;
    }
    }

return 0;
}
