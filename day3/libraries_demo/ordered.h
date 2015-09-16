#ifndef ORDERED
#define ORDERED


template<typename Derived>
class Ordered
{
public:
   Derived& self() {return static_cast<Derivec&>(*this); }
//   const Derived& self() {return static_cast<const Derivec&>(*this); }

   bool operator<(const Ordered& rhs) const
   {
      return rhs < *this;
   }
};



#endif // ORDERED

