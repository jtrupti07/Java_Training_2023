#include<stdio.h>
#include<stdlib.h>
#include<iostream>


class A
{
    public:
   A(){
      std:: cout << "I am Constructor of class A \n";
   }

   ~A(){
      std:: cout << "I am Destructor of class A \n";
   }
};

class B : public A
{
     public:
   B(){
      std:: cout << "I am Constructor of class B \n";
   }

   ~B(){
      std:: cout << "I am Destructor of class B \n";
   }
};

class C : public A
{
     public:
   C(){
      std:: cout << "I am Constructor of class C \n";
   }

   ~C(){
      std:: cout << "I am Destructor of class C \n";
   }
};

class D : public B
{
     public:
   D(){
      std:: cout << "I am Constructor of class D \n";
   }

    ~D(){
      std:: cout << "I am Destructor of class D \n";
   }
};

class E : public B
{
     public:
   E(){
      std:: cout << "I am Constructor of class E \n";
   }

   ~E(){
      std:: cout << "I am Destructor of class E \n";
   }
};

class F : public C
{
     public:
   F(){
      std:: cout << "I am Constructor of class F \n";
   }

   ~F(){
      std:: cout << "I am Destructor of class F \n";
   }
};

class G : public C
{
     public:
   G(){
      std:: cout << "I am Constructor of class G \n";
   }

  ~ G(){
      std:: cout << "I am Destructor of class G \n";
   }
};

class H : public D, public E
{
     public:
   H(){
      std:: cout << "I am Constructor of class H \n";
   }

   ~H(){
      std:: cout << "I am Destructor of class H \n";
   }
};

class I : public F, public G
{
     public:
   I(){
      std:: cout << "I am Constructor of class I \n";
   }

 ~ I(){
      std:: cout << "I am Destructor of class I \n";
   }
};

class J : public H, public I
{
     public:
   J(){
      std:: cout << "I am Constructor of class J \n";
   }

  ~ J(){
      std:: cout << "I am Destructor of class J \n";
   }
};

int main() {
   std:: cout << "Inside main \n";
   J j;
    return 0;
}