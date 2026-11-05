
undefined4 FUN_021a1dc4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_021a1f04();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x38);
  }
  return uVar2;
}

