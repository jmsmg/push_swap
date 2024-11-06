
# push_swap

`push_swap` 프로젝트는 두 개의 스택과 제한된 명령어를 사용하여 숫자 집합을 정렬하는 과제입니다. 이 프로젝트에서는 그리디 알고리즘을 사용하며, 특히 스택 `a`에서 `b`로 요소를 옮길 때 **두 개의 피벗**을 설정하여  정렬을 구현합니다.

## 목차
- [push\_swap](#push_swap)
	- [목차](#목차)
	- [프로젝트 개요](#프로젝트-개요)
	- [사용된 알고리즘](#사용된-알고리즘)
		- [그리디 알고리즘과 2피벗](#그리디-알고리즘과-2피벗)
	- [구현 세부 사항](#구현-세부-사항)
	- [설치 방법](#설치-방법)
	- [사용 방법](#사용-방법)

## 프로젝트 개요

`push_swap` 프로젝트의 목표는 두 개의 스택(`a`와 `b`)과 제한된 명령어 집합을 사용해 숫자 집합을 정렬하는 것입니다. 이때 사용 가능한 명령어는 `sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`로 제한되며, 각 명령어는 스택의 요소를 이동하거나 교환하는 역할을 합니다.

## 사용된 알고리즘

이 프로젝트에서는 **그리디 알고리즘**과 **두 개의 피벗 값**을 사용하여 정렬 과정을 최적화합니다.

### 그리디 알고리즘과 2피벗

그리디 알고리즘을 통해 각 단계에서 최적의 선택을 하며 스택을 정렬합니다. 이 과정에서 **두 개의 피벗**을 사용하여 스택을 더 효율적으로 분할합니다.

- **피벗 설정**: 스택 `a`의 값들을 기준으로 두 피벗 값을 선택합니다. 일반적으로, 낮은 피벗과 높은 피벗을 설정하여 전체 요소를 세 개의 구간으로 나누게 됩니다.
  - `피벗1`: 중간 값보다 낮은 값들을 분류하는 기준
  - `피벗2`: 중간 값보다 높은 값들을 분류하는 기준

- **스택 분할**:
  - `피벗1`보다 작은 값은 스택 `b`로 옮깁니다.
  - `피벗2`보다 큰 값은 스택 `a`에 남겨 둡니다.
  - 두 피벗 사이의 값은 적절한 명령어를 통해 `a`와 `b`에서 계속 조정합니다.

- **그리디 정렬**:
  - 두 피벗에 따라 스택을 세 부분으로 나누고, 각 구간에 대해 그리디 알고리즘을 적용해 최적의 이동을 수행합니다.
  - `push` 및 `rotate` 명령어를 조합하여 각 구간에서 가장 적은 이동으로 정렬 상태에 도달할 수 있도록 합니다.

이 과정을 통해 전체 이동 횟수를 줄이고, 효율적인 정렬을 구현할 수 있습니다.

## 구현 세부 사항

- **스택 초기화**: 프로그램 실행 시 주어진 숫자 집합을 스택 `a`에 푸시합니다.
- **명령어 집합**: 다음과 같은 명령어를 사용하여 스택을 정렬합니다.
  - `sa`, `sb`, `ss`: 스택의 상위 두 숫자를 교환합니다.
  - `pa`, `pb`: 스택에서 숫자를 다른 스택으로 이동합니다.
  - `ra`, `rb`, `rr`: 스택을 한 칸씩 위로 이동합니다.
  - `rra`, `rrb`, `rrr`: 스택을 한 칸씩 아래로 이동합니다.
- **최적 경로 계산**: 두 피벗과 그리디 알고리즘을 사용해 현재 스택 상태에서 최소 이동으로 목표 상태에 가까워지도록 명령어를 선택합니다.
- **정렬 완료 검사**: 스택 `a`가 오름차순으로 정렬되고, 스택 `b`가 비어 있으면 정렬이 완료됩니다.

## 설치 방법

1. 터미널에서 이 저장소를 클론합니다.
    ```bash
    git clone https://github.com/jmsmg/push_swap.git
    cd push_swap
    ```

2. 프로젝트를 빌드합니다.
    ```bash
    make
    ```

3. 컴파일이 완료되면 `push_swap` 실행 파일이 생성됩니다.

## 사용 방법

`push_swap`을 실행하여 주어진 숫자 집합을 정렬하는 명령어 시퀀스를 출력합니다.

```bash
./push_swap 3 2 5 1 4
```

출력된 명령어 시퀀스는 숫자 집합을 정렬하기 위해 `push_swap`이 수행해야 할 일련의 이동을 나타냅니다. 예를 들어:

```bash
pb
ra
sa
pa
```