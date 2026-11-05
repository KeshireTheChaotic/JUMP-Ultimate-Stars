
void FUN_03803338(undefined1 param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 local_28;
  undefined1 local_27;
  
  iVar2 = FUN_03803a84();
  piVar1 = DAT_03809c80;
  if (iVar2 != 0) {
    iVar2 = 10;
    local_28 = 1;
    local_27 = param_1;
    do {
      FUN_038038b8();
      FUN_03803bb8(2);
      FUN_038039f4(&local_28,0,2,&LAB_03803964);
      FUN_03803b34(5,0);
      if (*piVar1 != 4) {
        return;
      }
      iVar2 = iVar2 + -1;
    } while (0 < iVar2);
  }
  return;
}

