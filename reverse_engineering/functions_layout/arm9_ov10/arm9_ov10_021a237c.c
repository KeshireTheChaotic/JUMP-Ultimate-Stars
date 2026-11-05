
undefined4 FUN_021a237c(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_38 [16];
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  lVar6 = FUN_02069768(param_4);
  uVar4 = (undefined4)((ulonglong)lVar6 >> 0x20);
  FUN_0219c3f8((int)lVar6,uVar4,auStack_38);
  uVar1 = thunk_FUN_02069c44(param_4);
  switch(uVar1) {
  case 0:
    return 0xfffffffd;
  case 1:
    break;
  case 2:
    iVar2 = FUN_02069b60(param_1,(int)lVar6,uVar4);
    if (iVar2 != 1) {
      return 0xfffffffd;
    }
    lVar7 = FUN_020696f8(param_1);
    if ((lVar7 != 0) && (lVar6 == lVar7)) {
      return 0xfffffffc;
    }
    break;
  case 3:
  }
  iVar2 = FUN_02069718(param_1,param_4);
  iVar5 = 0;
  while( true ) {
    if (param_3 <= iVar5) {
      iVar2 = FUN_02178294();
      if (iVar2 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        for (iVar2 = 0; iVar2 < param_3; iVar2 = iVar2 + 1) {
          iVar5 = FUN_020698cc(iVar2 * 0xc + param_2);
          if (iVar5 == 0) {
            if (param_5 != (int *)0x0) {
              *param_5 = iVar2;
            }
            return 0;
          }
        }
        uVar1 = 0xfffffffe;
      }
      return uVar1;
    }
    iVar3 = FUN_020695b8(param_4,param_2 + iVar5 * 0xc);
    if (iVar3 != 0) {
      if (param_5 != (int *)0x0) {
        *param_5 = iVar5;
      }
      return 1;
    }
    if ((0 < iVar2) && (iVar3 = FUN_02069718(param_1,param_2 + iVar5 * 0xc), iVar2 == iVar3)) break;
    iVar5 = iVar5 + 1;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar5;
  }
  return 1;
}

