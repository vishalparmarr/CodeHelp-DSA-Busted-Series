# Coding Questions :-

1. [Allocate Books](https://www.naukri.com/code360/problems/allocate-books_1089560?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&count=25&page=1&search=book&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM&customSource=studio_nav)

2. [Aggressive Cows](https://www.naukri.com/code360/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2)

```cpp
1. bool isPossible(vector<int> &pages, int n, int b, int mid) {

	int studentCount = 1;
	int pageSum = 0;

	for(int i = 0; i < n; i++) {

		if(pageSum + pages[i] <= mid)
			pageSum += pages[i];
		else {
			studentCount++;
            if (studentCount > b || pages[i] > mid)
                return false;

            pageSum = pages[i];
		}
	}
	return true;
}

int allocateBooks(vector<int> &pages, int n, int b) {

	if( b > n)
		return -1;

	int start = 0;
	int sum = 0;
	int ans = -1;

	for(int i = 0; i < n; i++)
		sum += pages[i];

	int end = sum;
	int mid = start + (end - start) / 2;

	while(start <= end) {

		if(isPossible(pages, n, b, mid)) {
			ans = mid;
			end = mid - 1;
		}
		else
			start  = mid + 1;

		mid = start + (end - start) / 2;
	}
	return ans;
}
```

```cpp
2. bool isPossible(vector<int> &stalls, int k, int mid, int n) {

    int cowCount = 1;
    int lastPos = stalls[0];

    for(int i = 0; i < n; i++){

        if(stalls[i] - lastPos >= mid){

			cowCount++;
            if(cowCount==k)
                return true;

            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k) {

	sort(stalls.begin(), stalls.end());
   	int start = 0;
    int n = stalls.size();
    int end = stalls[n-1];
    int ans = -1;
    int mid = start + (end - start) / 2;

    while(start <= end) {
        if(isPossible(stalls, k, mid, n)) {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;

        mid = start + (end - start) / 2;
    }
    return ans;
}
```

## Homework :-

1. [Painter's Partition Problem](https://www.naukri.com/code360/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=PROBLEM)

```cpp
1. bool isPossible(vector<int> &boards, int k, int mid) {

    int paintersCount = 1;
    int boardsSum = 0;

    for(int i = 0; i < boards.size(); i++) {

        if(boardsSum + boards[i] <= mid)
            boardsSum += boards[i];
        else {
            paintersCount++;
            if(paintersCount > k || boards[i] > mid)
                return false;

            boardsSum = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k) {

    int start = 0;
    int sum = 0;

    for(int i = 0; i < boards.size(); i++)
        sum += boards[i];

    int end = sum;
    int ans = -1;
    int  mid = start + (end - start) / 2;

    while(start <= end) {

        if(isPossible(boards, k, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;

        mid = start + (end - start) / 2;
    }
    return ans;
}
```
