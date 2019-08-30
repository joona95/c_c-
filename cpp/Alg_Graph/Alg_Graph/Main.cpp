#include <cstdio>
#include <vector>
#include <stack>
#include <queue>
template <class NODE_TYPE, typename WEIGHT_TYPE>

class Graph
{
public:
	int nNodes;
	NODE_TYPE *nodes;
	std::vector<std::pair<int, WEIGHT_TYPE>> *edges;

	Graph() { nNodes = 0; }
	Graph(int _nNodes)
	{
		nNodes = _nNodes;
		AllocateMem();
	}

	Graph(const char *_fileName)
	{
		FILE *input = fopen(_fileName, "r");
		fscanf(input, "%d ", &nNodes);
		AllocateMem();
		for (int i = 0; i < nNodes; i++)
		{
			fscanf(input, "%c ", &(nodes[i]));
			int nEdges;
			fscanf(input, "%d ", &nEdges);
			for (int j = 0; j < nEdges; j++)
			{
				char tmp;
				fscanf(input, "%c ", &tmp);
				int idx = (int)(tmp - 'A');
				edges[i].push_back(std::make_pair(idx, 0));
			}
		}
	}

	void AllocateMem()
	{
		nodes = new NODE_TYPE[nNodes];
		edges = new std::vector<std::pair<int, WEIGHT_TYPE>>[nNodes];
	}



	void DFS(int _stIdx)
	{
		std::stack<int> s;
		s.push(_stIdx);
		while (!s.empty())
		{
			int x = s.top();
			s.pop();
			printf("%c ", nodes[x]);
			//for(int i=0; i<edges[x].size() ; i++) -> °Å²Ù·Î ³ª¿È
			if (edges[x].size()>0)
			{
				for (int i = edges[x].size() - 1; i>=0; i--)
				{
					s.push(edges[x][i].first);
				}
			}
		}
	}




	void BFS(int _stIdx)
	{
		std::queue<int> s;
		s.push(_stIdx);
		while (!s.empty())
		{
			int x = s.front();
			s.pop();
			printf("%c ", nodes[x]);
			for(int i=0; i<edges[x].size() ; i++)
			{
				s.push(edges[x][i].first);
			}
		}
	}


};

int main()
{
	Graph<char, int> g("c:\\c++\\graph.txt");
	g.DFS(0);
	printf("\n");
	g.BFS(0);
	return 0;
}