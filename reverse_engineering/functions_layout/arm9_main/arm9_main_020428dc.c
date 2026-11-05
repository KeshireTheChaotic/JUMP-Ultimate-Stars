
void FUN_020428dc(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_r4;
  uint uVar2;
  bool bVar3;
  undefined1 auStack_18 [4];
  int local_14;
  int local_10;
  
  uVar2 = 0;
  while( true ) {
    if (DAT_020a145c <= uVar2) {
      return;
    }
    iVar1 = *(int *)(DAT_020a1458 + uVar2 * 8);
    bVar3 = iVar1 == param_2;
    if (bVar3) {
      unaff_r4 = DAT_020a1458 + uVar2 * 8;
      iVar1 = *(int *)(unaff_r4 + 4);
    }
    if (bVar3 && iVar1 == param_3) break;
    uVar2 = uVar2 + 1;
  }
  local_14 = unaff_r4;
  local_10 = unaff_r4;
  FUN_0200f69c(auStack_18,1);
  iVar1 = (DAT_020a1458 + DAT_020a145c * 8) - unaff_r4;
  FUN_02002450(unaff_r4,unaff_r4 + 8,(((int)(iVar1 + ((uint)(iVar1 >> 2) >> 0x1d)) >> 3) + -1) * 8);
  DAT_020a145c = DAT_020a145c - 1;
  return;
}

