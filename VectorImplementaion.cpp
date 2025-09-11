template<typname T>
Class SimpleVector{
  private:
      T* data;
      int sz;
      int cap;
  void resize(){
    T* temp = new T[2*sz];
    cap = 2*cap;
    for(int i=0;i<=sz;i++){
        temp[i]=data[i];
    }
    delete data;
    data = temp;
  }
  public:
      SimpleVector(): data(nullptr),sz(0),cap(0){};
      ~SimpleVector() {
        delete data;
      }
  T& operator[](int index){
    if(index>=cap){
      std::cout<<"INDeX OUT OF RANGE\n";
    }
    else{
      return data[index]
      }
  }
  void push_back(int val){
    if(sz==cap){
      resize();
    }
    data[++sz]=val;
  }
      

  
};
