#include<iostream>
#include<string>
using namespace std;
class Sales_data
{
    friend istream& operator >>(istream&, Sales_data&);
    friend ostream& operator << (ostream&, const Sales_data&);
    friend bool operator < (const Sales_data&, const Sales_data&);
    friend bool operator == (const Sales_data&, const Sales_data&);


private:
    /* data */
    string bookNo;
    unsigned uints_sold = 0;
    double sellingprice = 0.0;
    double saleprice = 0.0;
    double discount = 0.0;

public:
    Sales_data() = default;
    Sales_data( const string &book): bookNo(book){}
    Sales_data(istream &is){ is  >> *this;}
    Sales_data& operator += (const Sales_data&);
    string isbn() const {return bookNo;}

    ~Sales_data();
};


Sales_data::~Sales_data()
{
}

inline bool compareIsbn(const Sales_data& lhs, const Sales_data& rhs ){
    return lhs.isbn()== rhs.isbn();
}
Sales_data operator + (const Sales_data& , const Sales_data& );

inline bool operator == (const Sales_data& lhs, const Sales_data& rhs ){
    return lhs.isbn()== rhs.isbn() && lhs.sellingprice == rhs.sellingprice && lhs.saleprice == rhs.saleprice && lhs.uints_sold == rhs.uints_sold ;
}
inline bool operator != (const Sales_data& lhs, const Sales_data& rhs ){
    return !(lhs == rhs);
}

Sales_data& Sales_data::operator += (const Sales_data& rhs ){
    uints_sold += rhs.uints_sold;
    saleprice = (rhs.saleprice* rhs.uints_sold+ saleprice*uints_sold)/(rhs.uints_sold+uints_sold);
    if(sellingprice != 0)
    {
        discount = saleprice / sellingprice;
    }
    return *this;
}

Sales_data operator + (const Sales_data& lhs , const Sales_data& rhs )
{
    Sales_data ret(lhs);
    ret += rhs;
    return ret;
}

istream& operator >>(istream& in, Sales_data& s)
{
    in >> s.bookNo >> s.uints_sold >> s.sellingprice >> s.saleprice;
    if(in && s.sellingprice != 0){
        s.discount = s.saleprice/ s.sellingprice;
    }
    else{
        s = Sales_data();
    }
    return in ;
}

ostream& operator <<(ostream& out , const Sales_data& s){
    out << s.isbn() << " " << s.uints_sold << " "<< s.saleprice<< " " << s.sellingprice << " "<< s.discount;
    return out;
}

int main(){
    Sales_data book;
    cout << " please input sale records" << endl;
    // while(cin >> book){
    //     cout << "ISBN UINT_SOLD  SELLINGPRICE SALEPRICE DISCOUNT" << book << endl;

    // }

    Sales_data trans1, trans2;
    cout << "please input two same sale record" << endl;
    cin >> trans1 >> trans2;
    if (compareIsbn(trans1, trans2))
    {
        cout << "sum ISBN UINT_SOLD SALEPRICE SELLINGPRICE DISCOUNT "  << trans1 << endl<< trans2 << endl<< trans1 + trans2 << endl;

    }
    else{
        cout << "Two records are not same" << endl;
    }

}