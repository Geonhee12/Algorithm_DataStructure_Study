# 최대부분배열합(Maximum Subarray)

## 최대부분배열합?
배열에서 연속해 있는 값의 합을 최대로 만드는 것이다.


## 구현
k번 째 위치에서 그 전까지의 최대 부분배열 합을 더할 것인지 아니면 k번 째 위치만을 가져갈 것인지 정한다.
<br>
그 후 해당 값을 최댓값과 비교하여 최댓값을 최신화 해준다.


## 최대부분배열합

### 적용

1. k번 째 원소에 k-1까지의 sum을 더할지 말지 정한다.
2. 그 후 해당 값을 best와 비교 후 best보다 크다면 값을 best에 넣는다.
   
   

[해당 블로그 글 보기](https://sondiaa.tistory.com/32?category=1003963)
