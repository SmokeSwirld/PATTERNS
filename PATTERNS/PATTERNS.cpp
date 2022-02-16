
#include "Prototype.h"
int main()
{
    ObjectFactory::initialize();
    Prototype* object;

    /* All the object were created by cloning the prototypes. */
    object = ObjectFactory::getType1Value1();
    cout << object->getType() << ": " << object->getValue() << endl;

    object = ObjectFactory::getType1Value2();
    cout << object->getType() << ": " << object->getValue() << endl;

    object = ObjectFactory::getType2Value1();
    cout << object->getType() << ": " << object->getValue() << endl;

    object = ObjectFactory::getType2Value2();
    cout << object->getType() << ": " << object->getValue() << endl;


    return 0;
}