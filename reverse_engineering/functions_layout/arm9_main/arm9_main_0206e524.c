
undefined * FUN_0206e524(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = param_2 * 8;
  if (param_4 != -1) {
    (&DAT_020afccc)[iVar1] = (char)param_4;
  }
  if (param_3 != -1) {
    (&DAT_020afccd)[iVar1] = (char)param_3;
  }
  *(undefined4 *)(&DAT_020afcd0 + iVar1) = param_5;
  if (param_1 != 0) {
    DAT_020afcc2 = 1;
    DAT_020afe3c = param_2;
  }
  return &DAT_020afccc + iVar1;
}

