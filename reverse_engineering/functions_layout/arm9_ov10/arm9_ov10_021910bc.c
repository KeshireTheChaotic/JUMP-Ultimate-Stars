
undefined4 FUN_021910bc(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  bVar2 = true;
  bVar1 = true;
  bVar4 = true;
  if ((DAT_021a8538 != 0) && (param_1 != DAT_021a8538)) {
    bVar4 = false;
  }
  if ((!bVar4) && (param_1 != 0x7f000001)) {
    bVar1 = false;
  }
  if ((!bVar1) && (iVar3 = FUN_02191130(param_1), iVar3 == 0)) {
    bVar2 = false;
  }
  if ((!bVar2) && (iVar3 = FUN_02191114(param_1), iVar3 == 0)) {
    uVar5 = 0;
  }
  return uVar5;
}

