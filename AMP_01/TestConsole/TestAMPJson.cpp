/*
  TestAMPJson.cpp
*/

#include <iostream>
#include <stdio.h>
#include <string>

#include "JsonBox.h"
//#include "JsonBox/Value.h"

void main(void);
void TestProjInfoJson(void);

void test_json(void);


using namespace JsonBox;

void main(void)
{
  TestProjInfoJson();
  test_json();
}

void TestProjInfoJson(void)
{


}

/////////////////////////////////////////////////////////////////////////////

void test_json (void)
{
	JsonBox::Object jo;
	jo["myName"] = JsonBox::Value(123);
	jo["myOtherMember"] = JsonBox::Value("asld\\kfn");
	jo["hahaha"] = JsonBox::Value(true);
	jo["adamo"] = JsonBox::Value(129.09);
	//std::cout << jo << std::endl;
	JsonBox::Value v(jo);
	v.writeToFile("path to your file");

    std::cout << jo["myName"] << std::endl;
    printf("%d\n", jo["myName"].getInt());

/*
	JsonBox::Array a;
	a.push_back(JsonBox::Value("I'm a string..."));
	a.push_back(JsonBox::Value(123));
	std::cout << a << std::endl;
	
	JsonBox::Value v2;
	v2.loadFromFile("path to your file");
	std::cout << v2 << std::endl;
	v2.writeToStream(std::cout, true, true);
	v2.writeToFile("path to your file", false, false);
*/
	JsonBox::Value v2;

	v2.loadFromFile("path to your file");
    printf("%d %s\n", v2["myName"].getInt(), v2["myOtherMember"].getString().c_str());

    printf("\n");

    return;
}
