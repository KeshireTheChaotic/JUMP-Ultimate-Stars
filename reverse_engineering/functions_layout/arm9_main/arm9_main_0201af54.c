
int FUN_0201af54(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  iVar1 = FUN_0201afa8();
  *(int *)(param_1 + 0x1c) = iVar1;
  *(short *)(param_1 + 4) = (short)*(undefined4 *)(iVar1 + 0x14);
  *(uint *)(param_1 + 0x10) = *(uint *)(*(int *)(param_1 + 0x1c) + 0x14) & 0xffff;
  uVar2 = FUN_0201b078(param_1);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined2 *)(param_1 + 6) = 0;
  *(int *)param_1 = param_1;
  return param_1;
}

