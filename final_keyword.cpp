// 1)) struct Base1 final { };

// struct Derived1 : Base1 { }; // ill-formed because the class Base1 
//                              // has been marked final


// 2)) struct Base2 {
//     virtual void f() final;
// };

// struct Derived2 : Base2 {
//     void f(); // ill-formed because the virtual function Base2::f has 
//               // been marked final
// };                             

