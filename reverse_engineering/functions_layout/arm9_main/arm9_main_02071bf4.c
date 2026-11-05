
void FUN_02071bf4(int param_1,int param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (-1 < param_2) {
    FUN_02071bb8();
    param_1 = param_1 * 0xc;
    iVar4 = param_1 + 0x20b02b8;
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      iVar5 = iVar3 * 4;
      uVar2 = *(uint *)(iVar4 + iVar5 + 0x70f0);
      if ((uVar2 & 0x40000000) == 0) {
        iVar3 = param_1 + 0x20b73a8;
        *(int *)(iVar3 + iVar5) = param_2;
        *(uint *)(iVar3 + iVar5) = *(uint *)(iVar3 + iVar5) | 0xc0000000;
        FUN_02073114(param_1 + 0x70f0U + iVar5,4,iVar3,0x40000000,param_4);
        return;
      }
      uVar2 = uVar2 & 0x3fffffff;
      if (param_3 == 0) {
        if (param_2 < (int)uVar2) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      else if ((int)uVar2 < param_2) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        if (iVar3 == 0) {
          if ((*(uint *)(param_1 + 0x20b73ac) & 0x40000000) != 0) {
            *(uint *)(param_1 + 0x20b73b0) = *(uint *)(param_1 + 0x20b73ac);
            FUN_02073114(param_1 + 0x70f8,4,iVar4,0x3fffffff,param_4);
          }
          if ((*(uint *)(param_1 + 0x20b73a8) & 0x40000000) != 0) {
            *(uint *)(param_1 + 0x20b73ac) = *(uint *)(param_1 + 0x20b73a8);
            FUN_02073114(param_1 + 0x70f4,4);
          }
        }
        else if ((iVar3 == 1) && ((*(uint *)(param_1 + 0x20b73ac) & 0x40000000) != 0)) {
          *(uint *)(param_1 + 0x20b73b0) = *(uint *)(param_1 + 0x20b73ac);
          FUN_02073114(param_1 + 0x70f8,4,iVar4,0x3fffffff,param_4);
        }
        iVar3 = param_1 + 0x20b73a8;
        *(int *)(iVar3 + iVar5) = param_2;
        *(uint *)(iVar3 + iVar5) = *(uint *)(iVar3 + iVar5) | 0xc0000000;
        FUN_02073114(param_1 + 0x70f0U + iVar5,4);
        return;
      }
    }
  }
  return;
}

