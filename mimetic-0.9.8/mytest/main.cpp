/*
* Build and print a test message
*/
#include <iostream>
#include <mimetic/mimetic.h>

using namespace std;
using namespace mimetic;

int main()
{
	MimeEntity me;
	me.header().from("me <me@domain.com>");
	me.header().to("you <you@domain.com>");
	me.header().subject("my first mimetic msg");
	me.body().assign("hello there!");
	cout << me << endl;
	return 0;
}