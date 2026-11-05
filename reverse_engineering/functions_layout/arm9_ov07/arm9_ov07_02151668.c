
void FUN_02151668(uint param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint extraout_r1;
  int iVar3;
  undefined4 uVar4;
  
  if (6 < param_2) {
    param_2 = 6;
  }
  uVar2 = (&DAT_02168a60)[6 - param_2] * 10 - 1;
  if (uVar2 < param_1) {
    param_1 = uVar2;
  }
  for (iVar3 = 0; iVar3 < (int)(param_2 - 1); iVar3 = iVar3 + 1) {
    uVar4 = (&DAT_02168a60)[(6 - param_2) + iVar3];
    uVar1 = FUN_0200d338(param_1,uVar4);
    FUN_0200d338(param_1,uVar4);
    *(undefined1 *)(param_3 + iVar3) = uVar1;
    param_1 = extraout_r1;
  }
  *(char *)(param_3 + iVar3) = (char)param_1;
  return;
}

