class Fraction{
  private:
      m_numerator{0};
      m_denominator{1};
  public:
      Fraction(int numerator=0,int denominator=1) : m_numerator(numerator),m_denominator(denominator){};
      Fraction(const Fraction& f) : m_numerator(f.m_numerator),m_denominator(f.m_denominator) {
          std::cout<<"Copy is called bro!"<<std::endl;
      }
      void print const(){
        std::cout<<"Fraction : (" << m_numerator <<" / " <<m_denominator <<" )\n" ;        
      }      
};
int main(){
  
  
}
