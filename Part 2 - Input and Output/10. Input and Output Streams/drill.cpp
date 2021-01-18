#include "../../std_lib_facilities.h"

class Point{
    public :
        friend const istream& operator >> (istream&in, Point& p);
        friend const ifstream& operator >> (ifstream&in, Point& p);        
        friend const ostream& operator << (ostream&out, const Point& p);
    private:
        int x,y;
};

const istream& operator>>(istream&in, Point&p){
    in >> p.x >> p.y;
    return in;
}

const ifstream& operator>>(ifstream&in, Point&p){
    char ch1, ch2, ch3;
    in >> ch1 >> p.x >> ch2  >> p.y >> ch3;
    return in;
}

const ostream& operator<<(ostream&out, const Point& p){
    out << "(" <<  p.x << "," << p.y << ")";
    return out;
}

int main(){
    string fname;
    // ifstream ifs{fname};
    ofstream out{"input.txt"};
    vector<Point> original_points;


    for(int i = 0; i < 7 ; i++){
        Point pts; 
        cin >> pts;
        out << pts;
        original_points.push_back(pts);
    }
    // ifs.close();
    out.close();

    ifstream ins{"input.txt"};
    vector<Point> prossed_points;
    for(Point p; ins>>p;){
        prossed_points.push_back(p);
    } 
    ins.close();
    
    cout << "Original Points : ";
    for(auto p : original_points){
        cout << p ;
        cout << " ";
    }
    cout << '\n';

    cout << "Prossed Points : ";
    for(auto p : prossed_points){
        cout << p ;
        cout << " ";
    }
    cout << endl;
    return 0;
}