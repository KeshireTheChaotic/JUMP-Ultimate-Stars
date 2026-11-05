
uint FUN_020023e4(int param_1,short *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  
  uVar2 = 0;
  if ((param_1 == 0) || (uStack_18 = param_4, param_2 == (short *)0x0)) {
    return 0;
  }
  while( true ) {
    if (*param_2 == 0) {
      *(undefined1 *)(param_1 + uVar2) = 0;
      return uVar2;
    }
    param_2 = param_2 + 1;
    iVar1 = FUN_0200237c(auStack_1c);
    if (param_3 < uVar2 + iVar1) break;
    FUN_02004b94(param_1 + uVar2,auStack_1c,iVar1);
    uVar2 = uVar2 + iVar1;
    if (param_3 < uVar2) {
      return uVar2;
    }
  }
  return uVar2;
}

