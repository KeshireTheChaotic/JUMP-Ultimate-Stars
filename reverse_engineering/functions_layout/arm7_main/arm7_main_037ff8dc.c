
undefined4 FUN_037ff8dc(int param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 0x32) == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x14) < iVar3) {
      lVar1 = (longlong)(int)*(short *)(param_1 + 0x32) *
              (longlong)(iVar3 - *(int *)(param_1 + 0x14));
      uVar2 = FUN_03807710((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),iVar3,iVar3 >> 0x1f);
      if ((param_2 != 0) && ((*(byte *)(param_1 + 3) & 7) >> 2 != 0)) {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

