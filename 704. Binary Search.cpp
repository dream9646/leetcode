/* 1. 題目描述  */
{
   ' 853. Car Fleet
    Medium',
'There are n cars going to the same destination along a one-lane road.
The destination is target miles away.
一条单车道道路上有 n 辆汽车前往同一目的地。目的地是目标英里之外。
You are given two integer array position and speed, 
both of length n, 
where position[i] is the position of the ith car,
and speed[i] is the speed of the ith car (in miles per hour).
给定两个整数数组位置和速度，长度均为 n，
其中位置 [i] 是第 i 辆车的位置，
速度 [i] 是第 i 辆车的速度（以英里每小时为单位）。
A car can never pass another car ahead of it,
but it can catch up to it and drive bumper to bumper at the same speed.
The faster car will slow down to match the slower car's speed.
The distance between these two cars is ignored
//(i.e., they are assumed to have the same position).
一辆车永远无法超过它前面的另一辆车，
但它可以追上它并以相同的速度行驶。
较快的汽车将减速以匹配较慢的汽车的速度。
忽略这两辆车之间的距离（即，假设它们具有相同的位置）。
A car fleet is some non-empty set of cars driving at the same position and same speed.
Note that a single car is also a car fleet.
车队是一些以相同位置和相同速度行驶的非空汽车集合。请注意，单辆汽车也是一个车队。
If a car catches up to a car fleet right at the destination point,
it will still be considered as one car fleet.
如果一辆汽车在目的地正好追上车队，它仍将被视为一个车队。
Return the number of car fleets that will arrive at the destination.
返回将到达目的地的车队数量。
}
/*Example*/
{

}
{
    題目鏈接： []
    難度： []
    主要概念： []
}
/*2. 解題思路*/ 
{
Ask1.reply={理解問題：，
                "汽車沒辦法超過前面的汽車，如果追上了就會與前車同速行駛。
                如果多輛車同速且同位置行駛，就形成了一個車隊。
                如果車子在終點追上其他車，那麼也會被視為一個車隊。
                最終目的是計算有多少個車隊將到達目的地。
                考慮下一步：

                首先，你可能需要考慮如何計算每輛車到達目的地的時間。
                然後，你可以思考如何根據這些時間來判斷有多少個車隊。
                你可以先嘗試寫出計算每輛車到達目的地時間的代碼。如果遇到困難，可以隨時提問。"}

    初步思路： []
    優化思路： []
    時間複雜度： []
    空間複雜度： []
}
/*3. 代碼實現*/

/*4. 關鍵收穫*/
{
    學到的新知識： []
    遇到的困難和解決方案： []
    自我反思： []
}
/*5. 參考資源*/
{
    [chatgpt]
}


