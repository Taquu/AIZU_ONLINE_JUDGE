pattern = {'N':(1,5,2,3,0,4),'S':(4,0,2,3,5,1),'E':(3,1,0,5,4,2),'W':(2,1,5,0,4,3)}
dice_num = input().split()
for x in input():
    dice_num = [dice_num[i] for i in pattern[x]]
print(dice_num[0])
