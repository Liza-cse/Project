#include <bits/stdc++.h>
using namespace std;
int remain_first_seats = 5;
int remain_normal_seats = 5;
int FSeat(int n)
{
  if(n > remain_first_seats)
  {
    return -1;
  }
  else
  {
    remain_first_seats = remain_first_seats - n;
    return 5 - remain_first_seats + 1;
  }

}
int NSeat(int n )
{
  if(n > remain_normal_seats)
  {
    return -1;
  }
  else
  {
    remain_normal_seats = remain_normal_seats -n;
    return 10 - remain_normal_seats + 1;
  }

}
int main()
{
  int cls, prsn;
  int next_first_seat = 1;
  int next_normal_seat = 6;
  int temp_next_first_seat = 0;
  int temp_next_normal_seat = 0;

  cls = 0;
  prsn = 0;
  while(true)
    {
    cout<<"WELCOME TO OUR FLIGHT TICKET SERVICE"<<endl<<endl;
    cout<<"Please input 1 for First Class Seats or 2 for Normal Seats: ";
    cin>>cls;
    if(cls == 1)
    {
      cout<<"Please input the number of seats for First Class Seats: ";
      cin>>prsn;
      if(prsn == 0)
      {
        continue;
      }
      temp_next_first_seat = next_first_seat;
      next_first_seat = FSeat(prsn);
      if(next_first_seat == -1)
      {
        cout<<"Sorry, it is not available for "<<prsn<<" seat(s)."<<endl;
        next_first_seat = temp_next_first_seat;
      } else
      {
        cout<<"Seat(s) ";
        for (int i = temp_next_first_seat; i < next_first_seat; i++)
        {
          if(i < next_first_seat - 1)
          {
            cout<<i<<", ";
          } else {
            cout<<i<<" are reserved for you."<<endl;
          }
        }
      }
    }
  else if( cls == 2)
    {
      cout<<"Please input the number of seats for Normal Seats: ";
      cin>>prsn;
      if(prsn == 0)
      {
        continue;
      }
      temp_next_normal_seat = next_normal_seat;
      next_normal_seat = NSeat(prsn);
      if(next_normal_seat == -1)
      {
        cout<<"Sorry, it is not available for "<<prsn<<" seat(s)."<<endl;
        next_normal_seat = temp_next_normal_seat;
        cout<<"Choose another one"<<endl;
      }
  else
    {
        cout<<"Seat(s) ";
        for (int i = temp_next_normal_seat; i < next_normal_seat; i++)
        {
          if(i < next_normal_seat - 1)
          {
            cout<<i<<", ";
          } else
          {
            cout<<i<<" are reserved for you."<<endl;
            cout<<"Thank You"<<endl;
          }
        }
      }
    }
  }


  return 0;
}
