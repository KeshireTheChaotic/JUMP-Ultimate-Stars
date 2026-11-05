
undefined4 FUN_02069c1c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_02069c44();
  if (iVar1 != 3) {
    return 0;
  }
  uVar2 = FUN_02069c54(param_1);
  if ((uVar2 & 4) == 4) {
    return 1;
  }
  return 0;
}

