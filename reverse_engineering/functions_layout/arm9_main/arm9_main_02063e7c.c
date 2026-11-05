
undefined4
FUN_02063e7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,int param_7,int param_8)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = param_6;
  *(undefined4 *)(param_1 + 0x40) = param_5;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x40);
  if (param_7 == 0) {
    param_7 = 0x2064369;
  }
  *(int *)(param_1 + 0x48) = param_7;
  if (param_8 == 0) {
    param_8 = 0x2064351;
  }
  *(int *)(param_1 + 0x4c) = param_8;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 2;
  return 1;
}

