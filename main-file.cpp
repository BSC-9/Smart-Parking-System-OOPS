#include <iostream>
#include <cstdlib>
using namespace std;
int normal[4][10], premium[10], i, timex;

class pre{
	public:
    int e1,e2,x1,x2;
	void park() {
        for (i = 0; i < 10; i++) {
            if (premium[i] == 0) {
                cout << "Your parking slot number: " << i << endl;
                cout<<"Enter the time you entered(hrs and mins): ";
                cin>>e1>>e2;
                cout<<"Enter the time you exited(hrs and mins): ";
                cin>>x1>>x2;
                timex = ((x1*60)+x2)-((e1*60)+e2);
                premium[i] = 1;
                system("cls");
                break;
            }

        }
    }
};

class nor{
  public:
      int e1,e2,x1,x2;
  void park(){
    for(int i = 0; i < 4; i++) {
      int asig;
    	for(int j = 0; j < 10; j++) {
        if(normal[i][j]==0){
          cout<<"Enter the time you entered(hrs and mins): ";
                cin>>e1>>e2;
                cout<<"Enter the time you exited(hrs and mins): ";
                cin>>x1>>x2;
                timex = ((x1*60)+x2)-((e1*60)+e2);
          normal[i][j]=1;
          asig=1;
          system("cls");
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
          cout<<"Enter the time you entered(hrs and mins): ";
                cin>>e1>>e2;
                cout<<"Enter the time you exited(hrs and mins): ";
                cin>>x1>>x2;
                timex = ((x1*60)+x2)-((e1*60)+e2);
          normal[i][j]=1;
          asig=1;
          system("cls");
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
    int fare,total;
        void nor_fast(){
            fare=2;
            total = fare*timex;
            cout<<"please pay: RS "<<total<<endl;
        }
        void nor_slow() {
            fare=1;
            total = fare*timex;
            cout<<"please pay: RS "<<total<<endl;
        }
        void pre() {
            fare=3;
            total = fare*timex;
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
