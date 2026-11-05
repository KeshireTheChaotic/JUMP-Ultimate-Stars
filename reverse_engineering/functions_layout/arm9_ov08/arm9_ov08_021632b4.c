
void FUN_021632b4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_28;
  undefined1 auStack_20 [4];
  int local_1c [2];
  
  iVar1 = FUN_02165d60();
  iVar3 = 0;
  if (0 < iVar1) {
    local_28 = 0;
    do {
      FUN_02165b60(param_1,iVar3,auStack_20,local_1c);
      if ((local_1c[0] < param_2) || (0xbf < local_1c[0])) {
        uVar2 = 0x200;
      }
      else {
        uVar2 = local_28;
      }
      FUN_02165ce0(param_1,iVar3,uVar2,0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}

