
void FUN_03803568(uint param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_03803a84();
  piVar1 = DAT_03809c80;
  if (iVar2 != 0) {
    iVar2 = DAT_03809c80[8];
    for (; param_3 != 0; param_3 = param_3 - uVar3) {
      uVar3 = iVar2 - (param_1 & iVar2 - 1U);
      if (param_3 < uVar3) {
        uVar3 = param_3;
      }
      FUN_038038b8();
      FUN_03803bb8(piVar1[9] + 1 + uVar3);
      FUN_0380380c(param_1,10);
      FUN_038039f4(param_2,0,uVar3,&LAB_03803964);
      FUN_03803b34(piVar1[0xb],piVar1[0xc]);
      if (*piVar1 != 0) {
        return;
      }
      param_2 = param_2 + uVar3;
      param_1 = param_1 + uVar3;
    }
  }
  return;
}

