# 병합정렬(MergeSort)

## 병합정렬이란?
분할 정복 기법을 적용한 비교 기반 정렬이다.


## 시간복잡도와 공간복잡도

* 시간 복잡도: O(nlogn) = 분할 + 병합 및 정렬
  - 분할은 logn이 걸림
  - 병합도 logn이고 정렬이 n이므로 병합 및 정렬은 nlogn
    

* 공간 복잡도: 정렬을 위해 추가적인 공간을 요구하기에 공간이 충분하지 않다면 사용할 수 없음. O(n)


## 구현

### 과정

1. 크기가 0 또는 1의 리스트는 정렬되어 있다고 하며 그 이외의 경우 계속해서 중앙을 기준으로 분할한다.
2. 나누어진 리스트가 각각 정렬한다.
3. 두 리스트를 병합한다.
   
   

[해당 블로그 글 보기](https://sondiaa.tistory.com/41?category=1003963)