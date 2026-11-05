
undefined4 FUN_0208b88c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    if (2 < uVar3) {
      return 0;
    }
    uVar1 = FUN_0208a4dc(uVar3 + 1);
    iVar2 = FUN_020024cc(param_1 + 10,uVar1,6);
    if (iVar2 == 0) break;
    uVar3 = uVar3 + 1;
  }
  *(char *)(DAT_0214ccec + (uint)*(ushort *)(param_1 + 0x10) + 0x3c) =
       *(char *)(DAT_0214ccec + uVar3 + 0x54) + '\x01';
  return 1;
}

