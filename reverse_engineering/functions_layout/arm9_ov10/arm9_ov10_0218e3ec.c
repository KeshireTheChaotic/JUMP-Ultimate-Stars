
undefined4 FUN_0218e3ec(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0218f378();
  FUN_0218f3e0();
  FUN_0218f398(0x44,0x43,0xffffffff);
  iVar3 = 0;
  do {
    uVar1 = FUN_0218e740();
    iVar2 = FUN_0218e438(uVar1,iVar3);
    if (iVar2 == 1) break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  FUN_0218f360();
  if (iVar2 == 1) {
    return 1;
  }
  return 0;
}

