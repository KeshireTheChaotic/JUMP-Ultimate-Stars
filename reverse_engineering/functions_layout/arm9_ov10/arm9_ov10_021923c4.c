
undefined4 FUN_021923c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(*(int *)(param_1 + 100) + 0xf8) <
      (int)(uint)*(ushort *)(*(int *)(param_1 + 100) + 0xfc)) {
    return 0;
  }
  iVar1 = FUN_02191978(0x21923b9,param_1,0);
  if (iVar1 == 0) {
    return 0xffffffdf;
  }
  uVar2 = FUN_021918a0(param_1);
  return uVar2;
}

