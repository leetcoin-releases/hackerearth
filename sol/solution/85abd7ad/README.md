# [**Make an array**](https://www.hackerearth.com/community/practice/make-an-array-85abd7ad/)

You are given an array **A** of length **N**. You take an array **B** of length **N** such that `B[i] = 0` for each `1 <= i <= N`. You can apply the following operation on B any number of times:
- Choose (N - 1) distinct indices and add 1 to each of those indices.

## **Task**
Find the number of operations required to convert array B into array A by applying the given operation. Print -1 if it is impossible to do so.

## **Function description**

Complete the function solve() provided in the editor. This function takes the following two parameters and returns the required answer:
- N: Represents the length of array A.
- A: Represents the array A.

### **Input format**
**Note:** This is the input format that you must use to provide custom input (available above the **Compile and Test** button).
- The first line contains T, denoting the number of test cases. T also specifies the number of times you have to run the solve function on a different set of inputs.
- For each test case:
    - The first line contains N, denoting the size of array A.
    - The second line contains N space-separated integers A[1], A[2], ....., A[N], denoting the elements of array A.

### **Output format**
For each test case, print the number of operations required to convert array B into array A by applying the given operation or -1 if it is impossible to do so.

**Constraints**<br>
<math xmlns="http://www.w3.org/1998/Math/MathML">
  <mn>1</mn>
  <mo>&#x2264;</mo>
  <mi>T</mi>
  <mo>&#x2264;</mo>
  <msup>
    <mn>10</mn>
    <mn>4</mn>
  </msup>
</math><br>
<math xmlns="http://www.w3.org/1998/Math/MathML">
  <mn>2</mn>
  <mo>&#x2264;</mo>
  <mi>N</mi>
  <mo>&#x2264;</mo>
  <msup>
    <mn>10</mn>
    <mn>5</mn>
  </msup>
</math><br>
<math xmlns="http://www.w3.org/1998/Math/MathML">
  <mn>0</mn>
  <mo>&#x2264;</mo>
  <msub>
    <mi>A</mi>
    <mi>i</mi>
  </msub>
  <mo>&#x2264;</mo>
  <msup>
    <mn>10</mn>
    <mrow data-mjx-texclass="ORD">
      <mn>9</mn>
    </mrow>
  </msup>
</math><br>
<math xmlns="http://www.w3.org/1998/Math/MathML">
  <mrow>
    <mtext>Sum of&#xA0;</mtext>
    <mrow data-mjx-texclass="ORD">
      <mi>N</mi>
    </mrow>
    <mtext>&#xA0;over all test cases does not exceed&#xA0;</mtext>
  </mrow>
  <mn>2</mn>
  <mo>&#x22C5;</mo>
  <msup>
    <mn>10</mn>
    <mn>5</mn>
  </msup>
</math>

#### **Sample Input**
```md
2
3
3 1 0
2
0 2
```

#### **Sample Output**
```md
-1
2
```

#### **Explanation**
```md
The first line denotes T = 2.
```

##### **For the first test case**

**Given**
- N = 3
- A = [3, 1, 0]
<br>

**Approach**
- It is impossible to convert B = [0, 0, 0] into A = [3, 1, 0] using the given operation. Thus, the answer is -1.

##### **For the second test case**

**Given**
- N = 2
- A = [0, 2]
<br>

**Approach**
- Initially, B = [0, 0].
- Applying the operation on index i = 2 makes B = [0, 1].
- Applying the operation on index i = 2 makes B = [0, 2], which is equal to A. Thus, the answer is 2.