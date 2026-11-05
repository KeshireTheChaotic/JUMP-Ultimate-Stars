
void FUN_02054344(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_020541ec(2);
  FUN_020540ec(2,uVar1);
  uVar1 = FUN_02054100(2);
  FUN_020540d8(2,uVar1);
  if ((DAT_020aadd0 == 0) || (uVar2 = FUN_02053a80(), (uVar2 & 3) == 1)) {
    OS_SetProtectionRegion1(&DAT_0200002b);
    OS_SetProtectionRegion2(0x23e0021);
    return;
  }
  return;
}

