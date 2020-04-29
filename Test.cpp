#include "doctest.h"
#include "solver.hpp"
using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;

TEST_CASE("Double:RealVariable"){
    RealVariable x;
            CHECK(solve(2*x-4 == 10)==7);
            CHECK(((solve((x^2) == 16)==4) || (solve((x^2) == 16)==-4)));
            CHECK(solve(5*x-10 == 5)==3);
            CHECK(((solve((x^2)-3*x+2 == 0)==2) || (solve((x^2)-3*x+2 == 0)==1)));
            CHECK(solve((-7*x) == 14)==-2);
            CHECK(solve(22*x+7 == 19*x+4)==-1);
            CHECK(solve(3*x+10 == 15*x-14)==2);
            CHECK(((solve((x^2)-5*x+4 == 0)==4) || (solve((x^2)-5*x+4 == 0)==1)));
            CHECK(solve(x == 4)==4);
            CHECK(solve((0*x^2)+0*x+0 == 0)==1);//all the answers are correct
            CHECK(solve(x == (-1*x))==0);
            CHECK(solve(3*x/0.5*x)==6);
            CHECK(solve(2*x/(2+8)+6*x/12)==-16);

}

TEST_CASE("RealVariable:Double"){
    RealVariable x;
            CHECK(solve(x*2-4 == 10)==7);
            CHECK(((solve((x^2)+7 == 16)==3) || (solve((x^2)+7 == 16)==-3)));
            CHECK(solve(x*-1 == 10)==-10);
            CHECK(((solve((x^2)+x*2-3 == 0)==1) || (solve((x^2)+x*2-3 == 0)==-3)));
            CHECK(((solve((x^2)*2-x*5+4 == (x^2)-2)==3) || (solve((x^2)*2-x*5+4 == (x^2)-2)==2)));
            CHECK(solve(x*9-5 == x*8+5)==10);
            CHECK(solve(x*-4+2 == 0)==0.5);
            CHECK(solve(x*2+8 == x*-2+6)==-0.5);
            CHECK(solve(x*-6 == 0)==0);
}

TEST_CASE("Double:ComplexVariable"){
    ComplexVariable y;
            CHECK(((solve((y^2) == -4)==complex<double> (0,2)) || (solve((y^2) == -4)==complex<double> (0,-2))));
            CHECK(((solve((y^2)+100==0)==complex<double> (0,10)) || (solve((y^2)+100==0)==complex<double> (0,-10))));
            CHECK(solve(y+5 == y-y+6i) == std::complex<double>(-5,6));
            CHECK(solve(5*y+2i-3.0 == 6i+2.0)==complex<double>(1,0.8));
            CHECK(solve(-2*y+6 == 2*y-2-2i)==complex<double>(2,0.5));
            CHECK(((solve((y^2)+7 == 6)==complex<double>(0,1)) || (solve((y^2)+7 == 6)==complex<double>(0,-1))));
            CHECK(solve(y+5i-3.0 == 10i-12.0)==complex<double>(-9,5));
            CHECK(solve(7.0+1.0*y+1i == 5.0)==complex<double>(-2,1));
            CHECK(solve(1.5*y-15.0 == y-y+30i) == std::complex<double>(10,20));
            CHECK(solve(5*y-5i == 6*y-5i) == std::complex<double>(0,0));
            CHECK(solve(100*y == 100*y) == std::complex<double>(0,0));//all the answres are correct
            CHECK(solve(1000*y == 0) == std::complex<double>(0,0));
            CHECK(solve(5*y/2.5+7i-4 == 0)==std::complex<double>(4,-3.5));
}

TEST_CASE("ComplexVariable:Double"){

}

TEST_CASE("Real Exceptions"){
    RealVariable x;
    CHECK_THROWS(solve((x^2)==-16));
    CHECK_THROWS(solve(2*(x^2)-3*x+4 == 0));
    CHECK_THROWS(solve(-1*x+2 == -1*x+4));
    CHECK_THROWS(solve(3*x/0.5*x-6 == 0));
    CHECK_THROWS(solve((x^2)==-20));
    CHECK_THROWS(solve((x^3)+5==-1));
    CHECK_THROWS(solve((x^2)+14==-6));
    CHECK_THROWS(solve(14+(x^3)==-150));
    CHECK_THROWS(solve(32+(x^2)==-2));
    CHECK_THROWS(solve((x^3)==-5));

}

TEST_CASE("Complex Exceptions"){
    ComplexVariable y;
    CHECK_THROWS(solve((y^2)/0+2i == 5));
    CHECK_THROWS(solve(y/0 == 0));
    CHECK_THROWS(solve(10/y == 0));
    CHECK_THROWS(solve(y/(1-1) == -1));

}

TEST_CASE("Complex:Divive By Zero Exception"){
    ComplexVariable y;
    CHECK_THROWS(solve((y^2)/0 == 0));
    CHECK_THROWS(solve((1.0*y)+1.0i == 0.0));
    CHECK_THROWS(solve((10.0/1.0*y)+1.0i == 0.0));
    CHECK_THROWS(solve(1*y+1.0i == -1.0));
    CHECK_THROWS(solve(7*y/0==3));
    CHECK_THROWS(solve(4*y/0==0.0));
    CHECK_THROWS(solve(0+5*y/0==0));
    CHECK_THROWS(solve(1*y/0==13));
    CHECK_THROWS(solve(143.0*y/0.0==6.0));
    CHECK_THROWS(solve(2*y+2.0i/0.0==73.0));

}

TEST_CASE("Real:Divive By Zero Exception"){
    RealVariable x;
    CHECK_THROWS(solve((x^2)/0 == 5));
    CHECK_THROWS(solve(x/0 == 0));
    CHECK_THROWS(solve(10*x/0 == 0));
    CHECK_THROWS(solve(x/(1-1) == -1));
    CHECK_THROWS(solve((8*x+4)/0==0));
    CHECK_THROWS(solve(1*x/100-99-1==0));
    CHECK_THROWS(solve(15*x/15*x-15*x==0));
    CHECK_THROWS(solve(13*x/0==0));
    CHECK_THROWS(solve(13*x+13/2-1-1==0));
    CHECK_THROWS(solve(15*x/9-9==0));

}

TEST_CASE("High Power ^ Exception"){
    ComplexVariable y;
    CHECK_THROWS(solve((y^3) == 0.0));
    CHECK_THROWS(solve((y^6/8) == -12));
    CHECK_THROWS(solve((y^8/3) == 24));
    CHECK_THROWS(solve((y^3/2) == 6));
    CHECK_THROWS(solve((y^5) == 0));
    CHECK_THROWS(solve((y^6) == 123));
    CHECK_THROWS(solve((y^8)+9 == 95));
    CHECK_THROWS(solve((y^3/2) == 3));
    CHECK_THROWS(solve((y^5) == 55));

}

//~~~~~~~~Ron's Tests~~~~~~~~~~


TEST_CASE("General RealVariable"){
    RealVariable x;
            CHECK(solve(x*2+1+1== 10)==4);
            CHECK(solve(1+x*2+1== 10-2)==3);
            CHECK(solve(1+1== 10-4-x*2)==2);
            CHECK(solve(1+1== -1*x*2+10-4)==2);
            CHECK(solve(1+1+x*2== 10-x*2-4)==2);
            CHECK(solve(-4+1+1+x*2== 10-x*2)==2);
            CHECK(solve(x==2+2*2)==6);
            CHECK(solve(2+(x^2)*2==20)==6);
            CHECK((solve((x^2)-3*x-10==0)==-2)||(solve((x^2)-3*x-10==0)==5));
            CHECK((solve(-3*x-10== -1*(x^2))==-2)||(solve((x^2)-3*x-10== -1*(x^2))==5));
            CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4)||(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
            CHECK(solve(x-1-1 == x*8+5)==-1);
            CHECK((solve((x^2)+(x^2)+2*(x^2) == 64)==4)||(solve((x^2)+(x^2)+2*(x^2) == 64)==4));
            CHECK((solve((x^2)-5*x+4)==1)||(solve((x^2)-5*x+4)==4));
            CHECK((solve(0.5*(x^2)-3*x+4 == 0)==2)||(solve(0.5*(x^2)-3*x+4 == 0)==4));
}

TEST_CASE("General ComplexVariable"){
    ComplexVariable x;
            CHECK(solve(x==10)==complex<double> (10,0));
            CHECK(solve(x==10i)==complex<double> (0,10));
            CHECK(solve(x==10i+10.)==complex<double> (10,10));
            CHECK(solve(x==10.+10i)==complex<double> (10,10));
            CHECK((solve((x^2)==-144)==complex<double> (0,12))||(solve((x^2)==-144)==complex<double> (0,-12)));
            CHECK((solve((x^2)*9==-144)==complex<double> (0,4))||(solve((x^2)*9==-144)==complex<double> (0,-4)));
            CHECK((solve(0==-144-(x^2))==complex<double> (0,12))||(solve(0==-144-(x^2))==complex<double> (0,-12)));
            CHECK(solve(x==0+0)==complex<double> (0,0));
            CHECK(solve(x==1i*1i)==complex<double> (-1,0));
            CHECK(solve(x==0.+0i)==complex<double> (0,0));
            CHECK(solve(x==0.5+0.5i)==complex<double> (0.5,0.5));
            CHECK(solve(x/2-x==0.5+0.5i)==complex<double> (1,1));
            CHECK(solve(x/2+(x^2)==3*(x^2)/2-(x^2)+0.5+0.5i)==complex<double> (1,1));
            CHECK(solve(x==0/2)==complex<double> (0,0));
            CHECK(solve(x==0./10i)==complex<double> (0,0));
            CHECK_THROWS(solve(x/2-x==-0.5*x+0.5i));
            CHECK_THROWS(solve(x==0/0));
            CHECK(solve(x+5i == 2*x+3i)==complex<double> (0,2));
}