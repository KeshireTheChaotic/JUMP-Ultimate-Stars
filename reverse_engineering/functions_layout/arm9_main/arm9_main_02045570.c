
undefined4 FUN_02045570(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18) * 0xc) = param_2;
  *(int *)(*(int *)(param_1 + 0x18) * 0xc + *(int *)(param_1 + 0x14) + 4) =
       *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 8);
  *(int *)(*(int *)(param_1 + 0x18) * 0xc + *(int *)(param_1 + 0x14) + 8) = param_3;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  uVar1 = *(int *)(param_1 + 8) + param_3;
  *(uint *)(param_1 + 8) = uVar1;
  if (*(uint *)(param_1 + 0xc) < uVar1) {
    *(uint *)(param_1 + 0xc) = uVar1;
  }
  return uVar2;
}

