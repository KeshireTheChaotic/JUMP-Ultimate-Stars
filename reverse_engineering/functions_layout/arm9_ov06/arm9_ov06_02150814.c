
undefined4 FUN_02150814(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1c) < (int)(uint)*(byte *)(param_1 + 0xc6)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xb4) + 1;
  }
  *(int *)(param_1 + 0xb4) = iVar2;
  if (*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0xb0)) {
    uVar1 = FUN_0214f9fc();
    return uVar1;
  }
  FUN_0215041c();
  return 1;
}

