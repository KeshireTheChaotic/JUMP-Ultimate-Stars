
void FUN_0214dd44(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int unaff_r7;
  int iVar4;
  
  if (param_2 < 1) {
    return;
  }
  do {
    unaff_r7 = FUN_0200d12c(unaff_r7 * 10 + 3,0xd);
    if (unaff_r7 < 1) {
      unaff_r7 = 1;
    }
    if (unaff_r7 - 9U < 2) {
      unaff_r7 = 0xb;
    }
    bVar1 = false;
    iVar4 = 0;
    iVar2 = param_1;
    if (unaff_r7 < param_2) {
      for (; iVar4 + unaff_r7 < param_2; iVar4 = iVar4 + 1) {
        iVar3 = param_1 + (iVar4 + unaff_r7) * 8;
        if (*(int *)(iVar3 + 4) < *(int *)(iVar2 + 4)) {
          FUN_02051890(iVar2,&DAT_02172280,8);
          FUN_02051890(iVar3,iVar2,8);
          FUN_02051890(&DAT_02172280,iVar3,8);
          bVar1 = true;
        }
        iVar2 = iVar2 + 8;
      }
    }
  } while ((1 < unaff_r7) || (bVar1));
  return;
}

