#include <iostream>
#include <vector>
#include <utility>
#include <boost/graph/isomorphism.hpp>
#include <boost/graph/adjacency_list.hpp>

typedef boost::adjacency_list<boost::listS, boost::vecS, boost::undirectedS> Graph;

int n, m;
std::vector<std::pair<int, int>> va, vb;

Graph make_graph1()
{
    return Graph(va.begin(), va.end(), n);
}

Graph make_graph2()
{
    return Graph(vb.begin(), vb.end(), n);
}

int main()
{
    std::cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        std::cin >> a >> b;
        va.push_back(std::make_pair(a, b));
    }
    for (int i = 0; i < m; i++) {
        int a, b;
        std::cin >> a >> b;
        vb.push_back(std::make_pair(a, b));
    }

    const Graph g1 = make_graph1();
    const Graph g2 = make_graph2();

    const bool result = boost::isomorphism(g1, g2);
    if (result) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}