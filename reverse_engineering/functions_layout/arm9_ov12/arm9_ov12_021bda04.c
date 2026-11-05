
void FUN_021bda04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int local_10;
  int local_c;
  undefined4 uStack_8;
  
  uVar1 = *(int *)(param_1 + 0x60) + 1;
  *(uint *)(param_1 + 0x60) = uVar1;
  local_10 = (uVar1 >> 2) * -0x1000;
  local_c = (*(uint *)(param_1 + 0x60) >> 2) << 0xc;
  uStack_8 = param_4;
  FUN_021bb970(*(undefined4 *)(param_1 + 0x1c),&local_c,&local_10);
  return;
}

