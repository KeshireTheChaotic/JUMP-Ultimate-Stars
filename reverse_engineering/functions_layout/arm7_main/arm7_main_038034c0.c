
void FUN_038034c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_03803a84();
  piVar1 = DAT_03809c80;
  if (iVar2 != 0) {
    DAT_0380a2b0 = 1;
    FUN_03803bb8(DAT_03809c80[9] + 1 + param_3);
    FUN_0380380c(param_1,3);
    FUN_038039f4(param_2,0,param_3,&LAB_038038fc);
    FUN_03803b34(0,0);
    if ((*piVar1 == 0) && (DAT_0380a2b0 == 0)) {
      *piVar1 = 1;
    }
  }
  return;
}

