
void FUN_02175b4c(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_021a73f4 == 0) {
    FUN_020517fc(param_1,0,0xc);
    *(undefined2 *)(param_1 + 8) = param_2;
    *(undefined2 *)(param_1 + 10) = 1;
    *(undefined2 *)(param_1 + 4) = 1;
    *(undefined2 *)(param_1 + 6) = 0;
    DAT_021a73f4 = param_1;
    FUN_02175af8();
    FUN_021961f8(param_4);
  }
  return;
}

