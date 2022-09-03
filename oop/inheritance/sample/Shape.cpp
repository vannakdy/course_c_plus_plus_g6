#include"iostream"
using namespace std;

class Shape{
    protected: 
        int width;
        int height;
    public:
        Shape(){
            this->width = 0;
            this->height = 0;
        }
        Shape(int width, int height){
            this->width = width;
            this->height = height;
        }
        int getWidth(){
            return width;
        }
        int getHeight(){
            return height;
        }
        void setWidth(int w){
            this->width = w;
        }
        void setHeight(int h){
            this->height = h;
        }
        void input(){

        }
        void output(){

        }

};
class Rectangle : public Shape{
    public:
        Rectangle() : Shape(2,2){}
        int getAear(){
            return width * height;
        }
        int Volume(){
            return (width + height) * 2;
        }
};
class Triangle : public Shape{
    // by defualt private
    public:
        Triangle(): Shape(2,4){}
        int Volume(){
            return 8888;
            // return (width + height) * 2;
        }
        int getAear(){
            return (width * height)/2;
        }
    
};
int main(){
    system("clear");
    Rectangle objR;
    cout << "===== Rectangle =======" << endl;
    cout << "Width : " << objR.getWidth() << endl;
    cout << "Height : " << objR.getHeight() << endl;
    cout << "Arear : " << objR.getAear() << endl;
    cout << "Arear : " << objR.Volume() << endl;

    Triangle objT;
    objT.setWidth(100);
    objT.setHeight(50);
    cout << "===== Triangle =======" << endl;
    cout << "Arear : " << objT.getAear() << endl;;
    cout << "Arear : " << objT.Volume() << endl;
    return 0;
}