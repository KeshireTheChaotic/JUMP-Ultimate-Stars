
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_037f89b8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = _DAT_0380fff4;
  piVar3 = (int *)(_DAT_0380fff4 + 0x17c);
  if (*(short *)(param_2 + 10) == -0x40e3) {
    iVar2 = FUN_037f882c(param_1);
    if (iVar2 == 0) {
      if (*piVar3 == 0) {
        FUN_037fd40c(*(undefined4 *)(iVar1 + 0x180),*(undefined4 *)(iVar1 + 0x184),param_2);
      }
      else if (*piVar3 == 1) {
        (**(code **)(iVar1 + 0x184))(param_2);
      }
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}

