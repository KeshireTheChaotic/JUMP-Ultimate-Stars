
void FUN_02197544(undefined2 *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = (*DAT_021a84fc)(param_4 << 3);
  if (iVar1 != 0) {
    iVar2 = iVar1 + param_4 * 2;
    FUN_020517fc(param_1 + 1,0,(param_4 + -1) * 2);
    *param_1 = 1;
    iVar3 = thunk_FUN_02197c28(param_3,param_4);
    uVar4 = param_4 << 4;
    for (uVar5 = (param_4 - iVar3) * 0x10; uVar5 < uVar4; uVar5 = uVar5 + 1) {
      if ((0x8000U >> (uVar5 & 0xf) &
          (uint)*(ushort *)(param_3 + ((param_4 - ((int)uVar5 >> 4)) + -1) * 2)) != 0) {
        FUN_02051890(param_2,param_1,param_4 << 1);
        uVar5 = uVar5 + 1;
        break;
      }
    }
    if (uVar5 < uVar4) {
      do {
        FUN_0219780c(iVar1,param_1,param_4);
        FUN_02051890(iVar1,param_1,param_4 << 1);
        if (param_5 != 0) {
          FUN_0219765c(0,param_1,param_5,param_1,param_4,iVar2);
        }
        if ((0x8000U >> (uVar5 & 0xf) &
            (uint)*(ushort *)(param_3 + ((param_4 - ((int)uVar5 >> 4)) + -1) * 2)) != 0) {
          FUN_02197954(iVar1,param_1,param_2,param_4);
          FUN_02051890(iVar1,param_1,param_4 << 1);
          if (param_5 != 0) {
            FUN_0219765c(0,param_1,param_5,param_1,param_4,iVar2);
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
    (*DAT_021a8528)(iVar1);
  }
  return;
}

