
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_037fa9c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = _DAT_0380fff4;
  iVar1 = FUN_027ebb30(_DAT_0380fff4 + 0x47c);
  if (iVar1 == 0) {
    iVar3 = FUN_027ebb30(iVar3 + 0x490);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

