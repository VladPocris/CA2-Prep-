#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
    OrderLine OrderFirst, OrderSecond, OrderThird,
              OrderFourth, OrderFifth, OrderSixth, 
              OrderSeventh,OrderEigth, OrderNineth;
    OrderFirst.name = "First";
    OrderFirst.quantity = 1;
    OrderSecond.name = "Second";
    OrderSecond.quantity = 2;
    OrderThird.name = "Third";
    OrderThird.quantity = 3;
    OrderFourth.name = "Fourth";
    OrderFourth.quantity = 4;
    OrderFifth.name = "Fifth";
    OrderFifth.quantity = 5;
    OrderSixth.name = "Sixth";
    OrderSixth.quantity = 6;
    OrderSeventh.name = "Seventh";
    OrderSeventh.quantity = 7;
    OrderEigth.name = "Eigth";
    OrderEigth.quantity = 8;
    OrderNineth.name = "Nineth";
    OrderNineth.quantity = 9;

    LinkedList my_list, list1, list2;

    my_list.addNode(OrderFirst);
    my_list.addNode(OrderSecond);
    my_list.addNode(OrderThird);
    list1.addNode(OrderFourth);
    list1.addNode(OrderFifth);
    list1.addNode(OrderSixth);
    list2.addNode(OrderSeventh);
    list2.addNode(OrderEigth);
    list2.addNode(OrderNineth);

    my_list.displayList();
    list1.displayList();
    list2.displayList();

    list2.deleteNode(OrderEigth);
    list2.displayList();
    cout << endl;
    list1.reverseList();
    list1.displayList();
    
    return 0;
}