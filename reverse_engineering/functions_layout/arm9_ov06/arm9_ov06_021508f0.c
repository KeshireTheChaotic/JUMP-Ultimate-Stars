
undefined4 FUN_021508f0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_02078660(*(undefined4 *)(*(int *)(DAT_02172960 + 0xdc) + 0x1b4),0,1);
  if (iVar2 == 0) {
    return 1;
  }
  cVar1 = *(char *)(*(int *)(DAT_02172960 + 0xe0) + 0x18);
  if ((cVar1 == '\x1b') || (cVar1 == '\x18')) {
    FUN_0215041c(param_1);
    return 1;
  }
  uVar3 = FUN_0214f9fc(param_1);
  return uVar3;
}

