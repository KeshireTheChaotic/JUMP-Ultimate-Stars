
int FUN_03801ac0(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  int unaff_r5;
  
  switch(param_3) {
  case 0:
    unaff_r5 = FUN_03801c78(*(undefined4 *)(param_1 + 0x28));
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    break;
  case 1:
    unaff_r5 = FUN_03801c28();
    break;
  case 2:
    unaff_r5 = FUN_03801b88();
    break;
  case 3:
    sVar1 = FUN_03801c28();
    sVar2 = FUN_03801c28(param_1);
    iVar5 = FUN_037ff368();
    unaff_r5 = (iVar5 * (((int)sVar2 - (int)sVar1) + 1) >> 0x10) + (int)sVar1;
    break;
  case 4:
    uVar3 = FUN_03801c78(*(undefined4 *)(param_1 + 0x28));
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    psVar4 = (short *)FUN_03800814(param_2,uVar3);
    if (psVar4 != (short *)0x0) {
      unaff_r5 = (int)*psVar4;
    }
  }
  return unaff_r5;
}

