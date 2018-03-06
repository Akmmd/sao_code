# 题解
 >1 Scholarship  
小v今年有n门课，每门都有考试，为了拿到奖学金，小v必须让自己的平均成绩至少为avg。每门课由平时成绩和考试成绩组成，满分为r。现在他知道每门课的平时成绩为ai ,若想让这门课的考试成绩多拿一分的话，小v要花bi 的时间复习，不复习的话当然就是0分。同时我们显然可以发现复习得再多也不会拿到超过满分的分数。为了拿到奖学金，小v至少要花多少时间复习。  

思路：要求最少时间，总共的分数可以确定：n*avg，需要学习增加的分数target = n*avg - sum(ai),只需按bi排序，轮流将ai补充到r，同时判断最后剩余的分数时候需要完全将ai补到r。