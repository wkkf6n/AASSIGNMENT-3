#include<iostream>
#include<queue>
using namespace std;

//function to move front to rear of queue
queue<int> move_to_rear(queue<int> queue)
{
	int top = queue.front();
	queue.pop();
	queue.push(top);

	return queue;
}

//function to print the queue
void showq(queue<int> gq)
{
	queue<int> g = gq;
	while (!g.empty()) {
		cout << '\t' << g.front();
		g.pop();
	}
	cout << '\n';
}

//main function
int main()
{
	queue<int> gquiz;
	gquiz.push(10);
	gquiz.push(20);
	gquiz.push(30);

	showq(gquiz);
	gquiz = move_to_rear(gquiz);
	showq(gquiz);
}