# new

## 동적 메모리 할당
동적 메모리 할당은 프로그램 실행 중에 필요한 메모리를 운영체제에 요청하는 방법이다.  
이 메모리는 힙(heap)이라는 운영체제에서 관리하는 메모리 풀에서 할당된다.

## new 와 delete
변수를 동적으로 할당할 때 new 연산자를 사용한다.
동적으로 할당된 변수를 사용한 이후에 delete 연산자를 통해 메모리를 해제하여  
할당되었던 메모리를 재사용 할 수 있게 해야한다.  
