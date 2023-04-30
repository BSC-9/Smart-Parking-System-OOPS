#include <iostream>
using namespace std;
int normal[4][10], premium[10], i;


class pre{
	public:
	void park() {
        for (i = 0; i < 10; i++) {
            if (premium[i] == 0) {
                cout << "Your parking slot number: " << i << endl;
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


class fee{
	
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
      }
      else if(dur_choice==2){
        b.slowpark();
      }
    }
  	else if(opinion==2){
       a.park();
    }
  	else{
      cout<<"wrong input"<<endl;
    }
    }
  	
return 0;
}
