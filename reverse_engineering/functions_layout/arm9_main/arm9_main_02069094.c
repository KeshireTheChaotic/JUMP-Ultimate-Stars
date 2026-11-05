
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02069094(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_020673ec(1);
  uVar2 = FUN_020673ec(4);
  FUN_02068ec8(uVar1,param_1,uVar2);
  _DAT_021a9d24 = 4;
  iVar3 = func_0x02193680(uVar2);
  if (iVar3 == 0) {
    return 0xc;
  }
  FUN_02067378(2);
  return 0x11;
}

