#ifndef SP_H
#define SP_H
#include <utility>

template <typename T>
class Sp
{
public:
   Sp()
      : obj(0)
      , count(0)
   {

   }

   Sp(T* t)
      : obj(t)
      , count(new int(1)) {}

   ~Sp()
   {
      if (*count == 1 )
      {
         delete obj;
         delete count;
      }
      else
         --(*count);
   }


   Sp(const Sp& other) : obj(other.obj), count(other.count)
   {
      ++(*count);
   }

   void swap(Sp& other)
   {
      std::swap(obj, other.obj);
      std::swap(count, other.count);
   }


   Sp& operator=(const Sp& rhs)
   {
      Sp temp(rhs);
      swap(temp);

      return *this;
   }



   int use_count() { return *count; }

   T& operator*() const {return *obj;}
   T* operator->() const {return obj; }

private:
   T* obj;
   int* count;
};

#endif // SP_H
