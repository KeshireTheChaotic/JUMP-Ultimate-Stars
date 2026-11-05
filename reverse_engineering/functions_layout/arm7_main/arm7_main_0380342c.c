
void FUN_0380342c(uint param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_03809c80;
  iVar3 = DAT_03809c80[7];
  if ((iVar3 - 1U & (param_1 | param_2)) == 0) {
    iVar2 = FUN_03803a84();
    if (iVar2 != 0) {
      for (; param_2 != 0; param_2 = param_2 - iVar3) {
        FUN_038038b8();
        FUN_03803bb8(piVar1[9] + 1);
        FUN_0380380c(param_1,0xd8);
        FUN_03803b34(piVar1[0xf],piVar1[0x10]);
        if (*piVar1 != 0) {
          return;
        }
        param_1 = param_1 + iVar3;
      }
    }
  }
  else {
    *DAT_03809c80 = 2;
  }
  return;
}

