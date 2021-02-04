Using IDA I found that we xor unk_4C446D = arr["rootme"] and hardcoded byte array. Started debug.

Then I used gdb: break 0x492f23 and show all-registers.

rax            0x81c0c1b1b23023b   584355362210251323

rbx            0xc420094000        842351067136

Write easy c++ program that xor our arrays (solution.cpp).

Solution - ImLovingGoLand
