#include <bits/stdc++.h>
#define INF INT_MAX;

int cidades, acordos;
int M[501][501];
long int custo[501];
int anterior[501];
bool fechado[501];

void djikstra(int origem)
{
    int cost, v_dest;
    int vcm; // vcm é o vertice do custo mínimo.

    for (int i=1; i<=cidades; i++) {
        fechado[i] = 0;
        anterior[i] = -1;
        custo[i] = INF;
    }
    cout << "";

    vcm = origem;
    custo[origem] = 0;
    anterior[origem] = -1;

    while (vcm != -1)
    {
        fechado[vcm] = 1;
        for (int i=1; i<=cidades; i++)
        {
            if (M[vcm][i] != INF)
            {
                cost = M[vcm][i];
                v_dest = i;
            }

            if ((custo[v_dest]) > (custo[vcm]+cost))
            {
                custo[v_dest] = custo[vcm]+cost;
                anterior[v_dest] = vcm;
            }
        }

        vcm = -1;
        cost = INF;
        for (int i=1; i<=cidades; i++)
        {
            if ((!fechado[i]) && (cost > custo[i]))
            {
                cost = custo[i];
                vcm = i;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    int x, y, h;

    cin >> cidades >> acordos;
    while (cidades && acordos)
    {
        for (int i=0; i<=cidades; i++)
            for (int j=0; j<=cidades; j++)
                M[i][j] = INF;

        for (int i=0; i<acordos; i++)
        {
            cin >> x >> y >> h;

            if (M[y][x] != INF)
            {
                M[x][y] = 0;
                M[y][x] = 0;
            }
            else
                M[x][y] = h;
        }

        int origem, destino, consultas;
        cin >> consultas;
        for (int i=0; i<consultas; i++)
        {
            cin >> origem >> destino;
            cout << "";
            djikstra(origem);
            if (custo[destino] != INF)
                cout << "" << custo[destino] << "\n";
            else
                cout << "Nao e possivel entregar a carta\n";
        }

        cout << "\n";
        cin >> cidades >> acordos;
    }

    return 0;
}