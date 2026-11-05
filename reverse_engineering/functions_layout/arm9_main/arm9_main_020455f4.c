
uint FUN_020455f4(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  *(undefined4 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18) * 0xc) = param_3;
  *(uint *)(*(int *)(param_1 + 0x18) * 0xc + *(int *)(param_1 + 0x14) + 4) =
       *(int *)(param_1 + 0x1c) + param_2;
  *(int *)(*(int *)(param_1 + 0x18) * 0xc + *(int *)(param_1 + 0x14) + 8) = param_4;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (param_2 < *(uint *)(param_1 + 0x10)) {
    *(uint *)(param_1 + 0x10) = param_2;
  }
  if (*(uint *)(param_1 + 0xc) < param_2 + param_4) {
    *(uint *)(param_1 + 0xc) = param_2 + param_4;
  }
  return param_2;
}

