# 题解
 * Scholarship  
小v今年有n门课，每门都有考试，为了拿到奖学金，小v必须让自己的平均成绩至少为avg。每门课由平时成绩和考试成绩组成，满分为r。现在他知道每门课的平时成绩为ai ,若想让这门课的考试成绩多拿一分的话，小v要花bi 的时间复习，不复习的话当然就是0分。同时我们显然可以发现复习得再多也不会拿到超过满分的分数。为了拿到奖学金，小v至少要花多少时间复习。  
`思路：要求最少时间，总共的分数可以确定：n*avg，需要学习增加的分数target = n*avg - sum(ai),只需按bi排序，轮流将ai补充到r，同时判断最后剩余的分数时候需要完全将ai补到r。`  

 * Streelights  
一条长l的笔直的街道上有n个路灯，若这条街的起点为0，终点为l，第i个路灯坐标为ai ，每盏灯可以覆盖到的最远距离为d，为了照明需求，所有灯的灯光必须覆盖整条街，但是为了省电，要是这个d最小，请找到这个最小的d。  
`思路：求最小的d，主要是求所有相邻的2个坐标之间的间隔最大的除以2得到d，注意坐标没有包含0与l的时候要拿出来和前面的d做比较，取最大的便是结果。`  

 * MagicCoin  
小易采购魔法神器总共需要n个魔法币,所以小易只能通过两台魔法机器产生恰好n个魔法币,小易需要你帮他设计一个投入方案使他最后恰好拥有n个魔法币。  
`思路：通过n判断最后一步市由奇数还是偶数操作得到的，然后倒序输出就可以了`  

 * OppositeNum  
为了得到一个数的"相反数",我们将这个数的数字顺序颠倒,然后再加上原先的数得到"相反数"。例如,为了得到1325的"相反数",首先我们将该数的数字顺序颠倒,我们得到5231,之后再加上原先的数,我们得到5231+1325=6556.如果颠倒之后的数字有前缀零,前缀零将会被忽略。  

 * StrFragment  
一个由小写字母组成的字符串可以看成一些同一字母的最大碎片组成的。例如,"aaabbaaac"是由下面碎片组成的:'aaa','bb','c'。牛牛现在给定一个字符串,请你帮助计算这个字符串的所有碎片的平均长度是多少。  
`思路：注意最后一个元素，当最后为2个不同的字符时，tmp+2，相同的时候，求长度并将tmp+1`  

 * VisitKOM  
输入包括两行,第一行包括两个正整数n(2 ≤ n ≤ 50)和L(1 ≤ L ≤ 100),表示城市个数和小易能行动的次数。
第二行包括n-1个整数parent[i](0 ≤ parent[i] ≤ i), 对于每个合法的i(0 ≤ i ≤ n - 2),在(i+1)号城市和parent[i]间有一条道路连接。  
`思路：求出最长路径的深度sum，当l+1 < sum时，只可以在最长路径上移动；反之，剩余的步数可以到达一个点需要走2步，若(l+1-sum)/2 + sum > n时可以走完所有点n，<n时只可以走(l+1-sum)/2 + sum。`

 * RrangeSeries  
小易有一个长度为N的正整数数列A = {A[1], A[2], A[3]..., A[N]}。
对数列A进行重新排列,使数列A满足所有的A[i] * A[i + 1](1 ≤ i ≤ N - 1)都是4的倍数。小易现在需要判断一个数列是否可以重排之后满足要求。  
`思路：存在 2 的倍数，所有 2 的倍数相邻排列，无论count2是奇偶都需要连接一个4的倍数，剩余的奇数最多和 4 的倍数数量相等，要求 count4 >= countOdd；没有 2 的倍数，原本放 2 的倍数一端可以改放一个奇数，count4 >= count4 - 1；所以只需要count4 >= countOdd - !count2`

 * LCPS  
一个合法的括号匹配序列被定义为:
1. 空串""是合法的括号序列
2. 如果"X"和"Y"是合法的序列,那么"XY"也是一个合法的括号序列
3. 如果"X"是一个合法的序列,那么"(X)"也是一个合法的括号序列
4. 每个合法的括号序列都可以由上面的规则生成
例如"", "()", "()()()", "(()())", "(((()))"都是合法的。
从一个字符串S中移除零个或者多个字符得到的序列称为S的子序列。
例如"abcde"的子序列有"abe","","abcde"等。
定义LCS(S,T)为字符串S和字符串T最长公共子序列的长度,即一个最长的序列W既是S的子序列也是T的子序列的长度。
小易给出一个合法的括号匹配序列s,小易希望你能找出具有以下特征的括号序列t:
1、t跟s不同,但是长度相同
2、t也是一个合法的括号匹配序列
3、LCS(s, t)是满足上述两个条件的t中最大的
因为这样的t可能存在多个,小易需要你计算出满足条件的t有多少个。

如样例所示: s = "(())()",跟字符串s长度相同的合法括号匹配序列有:
"()(())", "((()))", "()()()", "(()())",其中LCS( "(())()", "()(())" )为4,其他三个都为5,所以输出3.  
`思路：根据题意，要想使得 LCS 最大，删去任意一个字符即可获得 LCS = |s| - 1 ，再把该字符插到与原来不同的任意位置可以维持原长度，而不影响 LCS 的计算。`