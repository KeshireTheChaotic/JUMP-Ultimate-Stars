
undefined4 FUN_0219ba50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  uVar2 = 0;
  bVar3 = (DAT_0214cd00 & 1) == 0;
  if (bVar3) {
    FUN_02199e68();
  }
  iVar1 = FUN_02069880(param_1);
  if (iVar1 == 0) {
    thunk_FUN_020699d4(param_1,0x414a554a);
    iVar1 = thunk_FUN_020697c0(param_1);
    if (iVar1 != 0) {
      thunk_FUN_02069784(param_1);
    }
    uVar2 = 1;
  }
  if (bVar3) {
    FUN_02199fd8();
  }
  return uVar2;
}

