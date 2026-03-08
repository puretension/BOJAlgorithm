// // #include<bits/stdc++.h>
// // using namespace std;


// // int main(){ 
// //     int arr[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
// //     int i, j, temp;

// //     for(int i = 0; i<9; i++){
// //         j = i;
// //         while(arr[j] > arr[j+1]){
// //             temp = arr[j];
// //             arr[j] = arr[j+1];
// //             arr[j+1] = temp;
// //             j--;
// //         }
// //     }

// //     for(int i = 0;i<10;i++){
// //         cout << arr[i] << " ";
// //     }
// //     return 0;
// // }

// // #include<bits/stdc++.h>
// // using namespace std;

// // void quickSort(int *arr, int start, int end) {
// //     if (start >= end) return; // 베이스 케이스: 배열의 길이가 1 이하인 경우
// //     int pivot = start;
// //     int i = start + 1, j = end, temp; // 'i'를 pivot 바로 다음 요소로 초기화

// //     while (i <= j) { // 'i'와 'j'가 교차할 때까지 반복
// //         while (i <= end && arr[i] <= arr[pivot]) i++; // pivot보다 큰 값을 찾음
// //         while (j > start && arr[j] >= arr[pivot]) j--; // pivot보다 작은 값을 찾음
// //         if (i < j) { // 'i'와 'j'가 아직 교차하지 않은 경우
// //             temp = arr[i];
// //             arr[i] = arr[j];
// //             arr[j] = temp;
// //         }
// //     }
// //     // pivot과 arr[j]를 교환하여 pivot 기준으로 왼쪽은 작은 값, 오른쪽은 큰 값이 오도록 함
// //     temp = arr[j];
// //     arr[j] = arr[pivot];
// //     arr[pivot] = temp;

// //     quickSort(arr, start, j - 1); // 왼쪽 부분 배열에 대해 퀵 정렬 재귀 호출
// //     quickSort(arr, j + 1, end); // 오른쪽 부분 배열에 대해 퀵 정렬 재귀 호출
// // }


// // int main(){ 
// //     int arr[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

// //     for(int i = 0;i<10;i++){
// //         cout << arr[i] << " ";
// //     }

// //     quickSort(arr, 0, 9);
// //     cout << "\n";

// //     for(int i = 0;i<10;i++){
// //         cout << arr[i] << " ";
// //     }

// //     return 0;
// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ARRSIZE 10
// // int sorted[ARRSIZE];

// // void merge(int *arr, int left, int mid, int right){
// //     int i = left, j = mid + 1, k = left;
// //     while(i <= mid && j <= right){
// //         if(arr[i] <= arr[j]) sorted[k++] = arr[i++];
// //         else sorted[k++] = arr[j++];
// //     }
// //     // 남은 부분들
// //     if(i > mid) for(int t = j; t<=right; t++) sorted[k++] = arr[t];
// //     else for(int t = i;t <= mid; t++) sorted[k++] = arr[t];

// //     for(int t = left;t<=right;t++) arr[t] = sorted[t];

// // }

// // void mergeSort(int *arr, int left, int right){
// //     if(left < right){
// //         int mid = (left + right) / 2;

// //         mergeSort(arr, left, mid);
// //         mergeSort(arr, mid + 1, right);

// //         merge(arr, left, mid, right);
// //     }
// // }

// // int main(){ 
// //     int arr[ARRSIZE] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

// //     for(int i = 0;i<10;i++){
// //         cout << arr[i] << " ";
// //     }

// //     mergeSort(arr, 0, 10);
// //     cout << "\n";

// //     for(int i = 0;i<10;i++){
// //         cout << arr[i] << " ";
// //     }
// //     return 0;
// // }


// // ------------------------------------------------------------------------------------------------------------

// // #include<bits/stdc++.h>
// // using namespace std;

// // void insertionSort(int arr[], int n);
// // void quickSort(int arr[], int start, int end);
// // void mergeSort(int arr[], int left, int right);



// // void insertionSort(int arr[], int n) {
// //     int i, j, temp;
// //     for(i = 1; i < n; i++) {
// //         temp = arr[i];
// //         j = i - 1;
// //         while(j >= 0 && arr[j] > temp) {
// //             arr[j + 1] = arr[j];
// //             j--;
// //         }
// //         arr[j + 1] = temp;
// //     }
// // }

// // void quickSort(int arr[], int start, int end) {
// //     if (start >= end) return;
// //     int pivot = start, i = start + 1, j = end, temp;
// //     while (i <= j) {
// //         while (i <= end && arr[i] <= arr[pivot]) i++;
// //         while (j > start && arr[j] >= arr[pivot]) j--;
// //         if (i < j) {
// //             temp = arr[i];
// //             arr[i] = arr[j];
// //             arr[j] = temp;
// //         }
// //     }
// //     temp = arr[j];
// //     arr[j] = arr[pivot];
// //     arr[pivot] = temp;
// //     quickSort(arr, start, j - 1);
// //     quickSort(arr, j + 1, end);
// // }

// // #define ARRSIZE 10
// // int sorted[ARRSIZE]; 

// // void merge(int arr[], int left, int mid, int right) {
// //     int i = left, j = mid + 1, k = left;
// //     while(i <= mid && j <= right) {
// //         if(arr[i] <= arr[j]) sorted[k++] = arr[i++];
// //         else sorted[k++] = arr[j++];
// //     }
// //     if(i > mid) for(int t = j; t <= right; t++) sorted[k++] = arr[t];
// //     else for(int t = i; t <= mid; t++) sorted[k++] = arr[t];
// //     for(int t = left; t <= right; t++) arr[t] = sorted[t];
// // }

// // void mergeSort(int arr[], int left, int right) {
// //     if(left < right) {
// //         int mid = (left + right) / 2;
// //         mergeSort(arr, left, mid);
// //         mergeSort(arr, mid + 1, right);
// //         merge(arr, left, mid, right);
// //     }
// // }

// // int main() {
// //     int arr[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
// //     int n = sizeof(arr) / sizeof(arr[0]); 

// //     // Using Insertion Sort
// //     insertionSort(arr, n);
// //     cout << "Array after Insertion Sort: ";
// //     for(int i = 0; i < n; i++) {
// //         cout << arr[i] << " ";
// //     }
// //     cout << "\n";

// //     int arr2[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

// //     // Using Quick Sort
// //     quickSort(arr2, 0, n-1);
// //     cout << "Array after Quick Sort: ";
// //     for(int i = 0; i < n; i++) {
// //         cout << arr2[i] << " ";
// //     }
// //     cout << "\n";

// //     int arr3[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

// //     // Using Merge Sort
// //     mergeSort(arr3, 0, n-1);
// //     cout << "Array after Merge Sort: ";
// //     for(int i = 0; i < n; i++) {
// //         cout << arr3[i] << " ";
// //     }
// //     cout << "\n";

// //     return 0;
// // }

// // ------------------------------------------------------------------------------------------------------------
// // 학교 코드
// #include<bits/stdc++.h>
// using namespace std;
// #define SWAP(a, b) do { int SWAP_temp = a; a = b; b = SWAP_temp; } while (0)
// #define FALSE 0
// #define TRUE 1
// // void insertionSort(int arr[], int n);
// // void quickSort(int arr[], int start, int end);
// // void mergeSort(int arr[], int left, int right);
// void SelectionSort(int arr[], int n);

// void SelectionSort(int arr[], int n){
//     int i, j, mindIndex;
//     for(i = 0;i<n-1;i++){
//         mindIndex = i;
//         for(j = mindIndex + 1;j<n;j++){
//             if(arr[mindIndex] > arr[j])
//                 mindIndex = j;
//         }
//         if(mindIndex != i){
//             SWAP(arr[i], arr[mindIndex]);
//         }
//     }
// }

// void BubbleSort(int arr[], int n){
//     int i;
//     for(int i = 1;i<n;i++){
//         if(arr[i-1] > arr[i])
//             SWAP(arr[i-1], arr[i]);
//     }
// }

// void ImporvedBubbleSort(int arr[], int n){
//     int i, Sorted;
//     Sorted = FALSE;
//     while (!Sorted)
//     {
//         Sorted = TRUE;
//         for(int i = 1;i<n;i++){
//             if(arr[i-1] > arr[i]){
//                 SWAP(arr[i-1], arr[i]);
//                 Sorted = FALSE;
//             }
//         }
//     }
// }

// void InsertionSort(int arr[], int n){
//     int i, j, Value;
//     for(int i = 2;i<=n;i++){
//         Value = arr[i];
//         j = i;
//         while (arr[j-1] > Value)
//         {
//            arr[j] = arr[j-1];
//            j--;
//         }
//         arr[j] = Value;
//     }
// }

// void ShellSort(int arr[], int n){
//     int i, j, h, Value;
//     h = 1;
//     do h = 3 * h + 1; while(h<n);
//     do{
//         h = h/3;
//         for(i = h;i<n;i++){
//             Value = arr[i];
//             j = i;
//             while (arr[j - h] > Value)
//             {
//                 arr[j] = arr[j-h];
//                 j -= h;
//                 if(j < h - 1) break;
//             }
//             arr[j] = Value;
//         }
//     }while(h > 1);
// }

// // void ShellSort(int arr[], int n) {
// //     int i, j, h, Value;
    
// //     // 간격 h 초기화
// //     h = 1;
// //     // 초기 간격 h를 설정하기 위한 반복문
// //     // 3*h+1 규칙을 사용하여 적절한 초기 간격을 찾는다
// //     do {
// //         h = 3 * h + 1;
// //     } while (h < n);
    
// //     // 간격 h를 줄여가며 삽입 정렬 수행
// //     do {
// //         // 현재 간격으로 배열을 그룹화
// //         h = h / 3;

// //         // 각 그룹에 대해 삽입 정렬 실행
// //         for (i = h; i < n; i++) {
// //             // 현재 삽입할 원소 저장
// //             Value = arr[i];
// //             j = i;

// //             // 현재 원소를 올바른 위치에 삽입
// //             // 이전 위치의 원소가 현재 원소보다 크면, 원소를 h만큼 뒤로 이동
// //             while (j >= h && arr[j - h] > Value) {
// //                 arr[j] = arr[j - h];
// //                 j -= h;
// //             }

// //             // 올바른 위치에 현재 원소 삽입
// //             arr[j] = Value;
// //         }
// //     } while (h > 1); // 간격 h가 1보다 큰 동안 반복
// // }


// int main() {
//     int arr[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
//     int n = sizeof(arr) / sizeof(arr[0]); 

//     // Using Insertion Sort
//     InsertionSort(arr, n);
//     cout << "Array after Insertion Sort: ";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";

//     int arr2[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

//     // Using Quick Sort
//     quickSort(arr2, 0, n-1);
//     cout << "Array after Quick Sort: ";
//     for(int i = 0; i < n; i++) {
//         cout << arr2[i] << " ";
//     }
//     cout << "\n";

//     int arr3[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

//     // Using Merge Sort
//     mergeSort(arr3, 0, n-1);
//     cout << "Array after Merge Sort: ";
//     for(int i = 0; i < n; i++) {
//         cout << arr3[i] << " ";
//     }
//     cout << "\n";

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// #define N 30

// // 삽입 정렬
// void InsertionSort(vector<int>& v) {
//     for (int i = 1; i < N; ++i) {
//         int key = v[i]; // 삽입할 데이터를 저장
//         int j = i - 1; // 지금까지 정렬된 데이터의 index 범위: 0 ~ j

//         // sorted data의 마지막 값부터 순서대로 key와 비교, key보다 크다면 뒤로 한 칸씩 이동
//         while (j >= 0 && v[j] > key) {
//             v[j + 1] = v[j];
//             j -= 1;
//         }
        
//         // key보다 작은 데이터를 발견했으면 해당 데이터의 뒤에 key를 할당
//         v[j + 1] = key;
        
//         // 각 turn의 결과를 출력합니다!
//         cout << "Turn " << i << ": ";
//         for (const auto& x : v) {
//             cout << x << " ";
//         }
//         cout << "\n";
//     }
// }

// int main() {
//     vector<int> v(N); 
//     srand(time(NULL)); 

//     // 1부터 100까지의 랜덤한 수로 초기화
//     for (int i = 0; i < N; ++i) {
//         v[i] = rand() % 100 + 1;
//     }

//     // 초기 배열 출력
//     cout << "초기 데이터 상태: ";
//     for (const auto& x : v) {
//         cout << x << " ";
//     }
//     cout << "\n";

//     // 삽입 정렬 실행
//     InsertionSort(v);

//     // 정렬된 배열 출력
//     cout << "정렬된 데이터 상태: ";
//     for (const auto& x : v) {
//         cout << x << " ";
//     }
//     cout << "\n";

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// // 선택 정렬 함수
// void SelectionSort(vector<int>& arr) {
//     int N = arr.size(); // 벡터의 크기
//     for (int i = 0; i < N; i++) {
//         // 최솟값을 가지는 index 
//         int minIndex = i;
//         for (int j = i + 1; j < N; j++) {
//             if (arr[minIndex] > arr[j]) {
//                 minIndex = j;
//             }
//         }

//         // 최솟값을 가지는 index의 값과, 수색 범위의 첫번째 index의 값을 교환
//         swap(arr[minIndex], arr[i]);

//         cout << "Turn " << i + 1 << ": ";
//         for (const auto& x : arr) {
//             cout << x << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int N;
//     cout << "배열의 크기를 입력하세요: ";
//     cin >> N;

//     vector<int> arr(N);
//     cout << "배열의 원소를 입력하세요: ";
//     for (int i = 0; i < N; i++) {
//         cin >> arr[i];
//     }

//     SelectionSort(arr);

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// void SelectionSort(vector<int>& arr) {
//     for (int i = 0; i < arr.size(); i++) {
//         int minIndex = i;
//         for (int j = i + 1; j < arr.size(); j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         swap(arr[minIndex], arr[i]);

//         cout << "Turn " << i + 1 << ": ";
//         for (const auto& x : arr) {
//             cout << x << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     vector<int> arr = {30, 20, 40, 10, 5, 10, 30, 15};

//     cout << "Initial array: ";
//     for (const auto& x : arr) {
//         cout << x << " ";
//     }
//     cout << endl;

//     SelectionSort(arr);

//     cout << "Sorted array: ";
//     for (const auto& x : arr) {
//         cout << x << " ";
//     }
//     cout << endl;

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
#define NUM_OF_KEYS 10

void Merge(int arr[], int left, int mid, int right) {
    int sorted[NUM_OF_KEYS];
    int i, l, r, k;
    // 왼쪽 부분배열의 시작인덱스 l, 오른쪾 부분배열 시작인덱스 r, 합병된 배열의 현재인덱스 k
    l = left; r = mid + 1; k = left;
    // 두 부분 배열의 요소들을 비교하며 합병(오름차순으로)
    while (l <= mid && r <= right) {
        if (arr[l] <= arr[r]) sorted[k++] = arr[l++];
        else sorted[k++] = arr[r++];
    }
     // 남은 왼쪽 부분 배열의 요소들을 추가
    while (l <= mid) sorted[k++] = arr[l++];
     // 남은 오른쪽 부분 배열의 요소들을 추가
    while (r <= right) sorted[k++] = arr[r++];
    
    // 임시 배열의 요소들을 원래 배열에 복사
    for (i = left; i <= right; i++) arr[i] = sorted[i];
    
    // 출력: 합병된 배열 상태
   cout << "After merging: ";
    for(i = left; i <= right; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void MergeSort(int arr[], int Left, int Right) {
    if (Left < Right) {
        int Mid = (Left + Right) / 2;
        // 왼쪽 부분을 재귀적으로 정렬
        MergeSort(arr, Left, Mid); 
         // 오른쪽 부분을 재귀적으로 정렬
        MergeSort(arr, Mid + 1, Right);
        Merge(arr, Left, Mid, Right);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
    }
    cout << "\n";
}

// 비순환적 합병 정렬은 재귀 호출을 사용하지 않고 반복문을 통해 배열을 정렬하는 방식
void NonRecursiveMergeSort(int arr[], int n) {
    int curSize; 
    int leftStart;
 
    // 부분 배열의 크기를 1부터 시작해서 n-1까지 증가시키며 합병을 수행
    for (curSize = 1; curSize <= n-1; curSize = 2*curSize) {
        // 배열의 크기가 1로 시작(cursize =  1)하여,  부분 배열들을 합병하여 크기를 점점 늘려가며 전체 배열을 정렬
        for (leftStart = 0; leftStart < n-1; leftStart += 2*curSize) {
             // 중간 지점과 오른쪽 끝을 계산
            int mid = min(leftStart + curSize - 1, n-1);
            int right_end = min(leftStart + 2*curSize - 1, n-1);
             // 합병 함수를 호출하여 부분 배열을 합병
            Merge(arr, leftStart, mid, right_end);
            cout << "현재 배열 상태: ";
            printArray(arr, n);
        }
    }
}

int main() {
    int arr[NUM_OF_KEYS] = {30, 20, 40, 35, 5, 50, 45, 10, 25, 15};
    cout << "최초 배열: ";
    printArray(arr, NUM_OF_KEYS);

    // 순환적 합병 정렬 함수를 호출
    MergeSort(arr, 0, NUM_OF_KEYS-1);
    cout << "합병정렬 이후 배열: ";
    printArray(arr, NUM_OF_KEYS);
    
    // 비순환적 합병 정렬 함수를 호출
    // NonRecursiveMergeSort(arr, NUM_OF_KEYS);
    // cout << "비순환적 합병정렬 이후 배열: ";
    // printArray(arr, NUM_OF_KEYS);

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// #define SWAP(a, b) do { int SWAP_temp = a; a = b; b = SWAP_temp; } while (0)

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
// }

// void MakeHeap(int arr[], int root, int lastNode) {
//     int parent, leftSon, rightSon, son, rootValue;
//     parent = root;
//     rootValue = arr[root];
//     leftSon = 2 * parent + 1;
//     rightSon = leftSon + 1;
//     while (leftSon <= lastNode) {
//         if (rightSon <= lastNode && arr[leftSon] < arr[rightSon])
//             son = rightSon;
//         else
//             son = leftSon;
//         if (rootValue < arr[son]) {
//             arr[parent] = arr[son];
//             parent = son;
//             leftSon = 2 * parent + 1;
//             rightSon = leftSon + 1;
//         } else
//             break;
//     }
//     arr[parent] = rootValue;
// }

// void HeapSort(int arr[], int n) {
//      int i;
//     // Heap creation
//     for (int i = n / 2 - 1; i >= 0; i--) {
//         MakeHeap(arr, i, n - 1);
//         cout << "각 Turn마다 힙생성 후의 배열 " << i << ": ";
//         printArray(arr, n);
//     }

//     // HeapSort
//     for(i = n/2; i>=0; i--) MakeHeap(arr, i, n-1);
//     for(i = n-1; i>0; i--){
//         SWAP(arr[0], arr[i]);
//          MakeHeap(arr,0,i-1);
//                   cout << "각 Turn마다 힙정렬 후의 배열 " << i-1 << ": ";
//          printArray(arr, n);
//     }
// }

// int main() {
//     int arr[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
//     int n = sizeof(arr)/sizeof(arr[0]);
    
//     cout << "Initial array: ";
//     printArray(arr, n);
    
//     HeapSort(arr, n);
    
//     cout << "Sorted array: ";
//     printArray(arr, n);
    
//     return 0;
// }