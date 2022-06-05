
    class Solution {
public:
int totalNQueens(int n) {

	int count = 0;
	vector<bool> cols(n, true);
	vector<bool> main(2 * n - 1, true);
	vector<bool> anti(2 * n - 1, true);
	helper(0, count, cols, main, anti);
	return count;
}
private:
void helper(int s, int& count, vector<bool>& cols, vector<bool>& main, vector<bool>& anti)
{
	if (s == cols.size())
	{
		count++;
		return;
	}
	for (int i = 0; i < cols.size(); i++)
	{
		if (cols[i] && main[s + i] && anti[s + cols.size() - 1 - i])
		{
			cols[i] = main[s + i] = anti[s + cols.size() - 1 - i] = false;
			helper(s + 1, count, cols, main, anti);
			cols[i] = main[s + i] = anti[s + cols.size() - 1 - i] = true;
		}
	}
}
};
