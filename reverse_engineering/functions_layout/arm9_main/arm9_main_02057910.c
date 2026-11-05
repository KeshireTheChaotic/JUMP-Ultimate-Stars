
void FUN_02057910(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_02056ae0();
  iVar4 = param_1 + param_2 * 8;
  iVar3 = *(int *)(iVar4 + 0x18);
  if (iVar3 != 0) {
    if (param_3 == iVar3) {
      FUN_02056acc();
      return;
    }
    iVar5 = param_1 + 0x18 + param_2 * 8;
    iVar1 = *(int *)(iVar3 + 0x18);
    if (iVar5 == *(int *)(iVar3 + 0x18)) {
      *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar4 + 0x1c);
      DC_StoreRange(*(undefined4 *)(iVar4 + 0x18),0x3c);
    }
    else {
      do {
        iVar3 = iVar1;
        if (iVar3 == 0) break;
        iVar1 = *(int *)(iVar3 + 4);
      } while (iVar5 != *(int *)(iVar3 + 4));
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + param_2 * 8 + 0x1c);
      DC_StoreRange(iVar3,8);
    }
  }
  uVar2 = *(undefined4 *)(param_3 + 0x18);
  *(int *)(param_3 + 0x18) = param_1 + 0x18 + param_2 * 8;
  iVar3 = param_1 + param_2 * 8;
  *(undefined4 *)(iVar3 + 0x1c) = uVar2;
  *(int *)(iVar3 + 0x18) = param_3;
  FUN_02056acc();
  DC_StoreRange(param_1,0x3c);
  DC_StoreRange(param_3,0x3c);
  return;
}

