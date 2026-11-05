
void FUN_037fc320(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_038082c4 == 0) {
    if ((DAT_038082da == 0) && (iVar1 = OS_GetProcMode(), iVar1 != 0x12)) {
      iVar3 = *DAT_038082d0;
      iVar1 = FUN_037fc400();
      if (((iVar3 != iVar1) && (iVar1 != 0)) &&
         ((*(int *)(iVar3 + 0x48) == 2 || (iVar2 = OS_SaveContext(iVar3), iVar2 == 0)))) {
        if (DAT_038082cc != (code *)0x0) {
          (*DAT_038082cc)(iVar3,iVar1);
        }
        if (DAT_038082e4 != (code *)0x0) {
          (*DAT_038082e4)(iVar3,iVar1);
        }
        DAT_038082dc = iVar1;
        OS_LoadContext(iVar1);
      }
    }
    else {
      DAT_038082d8 = 1;
    }
  }
  return;
}

