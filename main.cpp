#include "graph.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int end = 0;
    int in;
    int i;
    int j;
    int numEdge = 0;
    cout << "Enter number of verticies you want: " << endl;
    cin >> numEdge;
    graph newGraph(numEdge);


    while (end == 0)
    {
        cout << "\nPress 1 to add an edge to graph.\nPress 2 remove an edge from graph.\nPress 3 Find an edge in the graph.\nPress 4 Find the out edges of a vertices\nPress 5 Find the in edges of a vertices\nPress 6 To Print out Adjacency Matrix\nPress 7 to quit.\n";
        cin >> in;
        if (in == 1)
        {
            cout << "Enter i: " <<endl;
            cin >> i;
            cout << "Enter j: "<<endl;
            cin >> j;
            if (i > numEdge || j > numEdge)
            {
                cout << "Number larger than matrix, try again." << endl;
            }
            else
                newGraph.addEdge(i,j);
        }
        else if (in == 2)
        {
            cout << "Enter i: "<<endl;
            cin >> i;
            cout << "Enter j: "<<endl;
            cin >> j;
            if (i > numEdge || j > numEdge)
            {
                cout << "Number larger than matrix, try again." << endl;
            }
            else
                newGraph.removeEdge(i,j);
        }
        else if (in == 3)
        {
            cout << "Enter i : "<<endl;
            cin >> i;
            cout << "Enter j: "<<endl;
            cin >> j;
            if (i > numEdge || j > numEdge)
            {
                cout << "Number larger than matrix, try again." << endl;
            }
            else
                newGraph.hasEdge(i,j);
        }
        else if (in == 4)
        {
            vector<int> out = newGraph.outEdges();
            for (int k = 0; k < out.size(); k++)
            {
                cout << out.at(k) << " ";
            }
        }
        else if (in == 5)
        {
            vector<int> in = newGraph.inEdges();
            for (int k = 0; k < in.size(); k++)
            {
                cout << in.at(k) << " ";
            }
        }
        else if (in == 6)
        {
            newGraph.PrintOutMatrix();
        }
        else if (in == 7)
        {
           cout << "Ok, goodbye :)" << endl;
           end = 1; 
        }
        else
        {
            cout << "Wrong input, try again";
        }
    }
}