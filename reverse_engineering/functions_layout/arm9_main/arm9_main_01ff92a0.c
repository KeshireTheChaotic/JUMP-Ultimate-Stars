
void FUN_01ff92a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint in_lr;
  undefined8 uVar14;
  
  uVar14 = CONCAT44(*param_1 + 2,param_1 + 9);
  iVar2 = param_1[9];
  iVar4 = param_1[10];
  iVar6 = param_1[0xb];
  iVar8 = param_1[0xc];
  iVar10 = param_1[0xd];
  iVar13 = param_1[0x1f];
  iVar3 = iVar2;
  iVar5 = iVar4;
  iVar7 = iVar6;
  iVar9 = iVar8;
  iVar11 = iVar10;
  do {
    iVar12 = *(int *)((int)uVar14 + 0x54);
    do {
      piVar1 = (int *)uVar14;
      *piVar1 = iVar3;
      piVar1[1] = iVar5;
      piVar1[2] = iVar7;
      piVar1[3] = iVar9;
      piVar1[4] = iVar11;
      *(undefined4 *)piVar1[4] = 0;
      uVar14 = FUN_01ffaa4c(piVar1,(int)((ulonglong)uVar14 >> 0x20));
      piVar1 = (int *)uVar14;
      iVar3 = *piVar1 + 0x10;
      iVar5 = piVar1[1] + 0x10;
      iVar7 = piVar1[2] + 4;
      iVar9 = piVar1[3] + 2;
      iVar11 = piVar1[4] + 4;
      iVar12 = iVar12 + -0x10;
    } while (iVar12 != 0);
    iVar11 = piVar1[0x15] >> 4;
    iVar3 = *piVar1 + 0x1010 + iVar11 * -0x10;
    iVar5 = piVar1[1] + 0x810 + iVar11 * -0x10;
    iVar7 = piVar1[2] + 0x108 + iVar11 * -4;
    iVar9 = piVar1[3] + 0x44 + iVar11 * -2;
    iVar11 = piVar1[4] + 0x4c + iVar11 * -4;
    iVar13 = iVar13 + -0x10;
  } while (iVar13 != 0);
  *piVar1 = iVar2;
  piVar1[1] = iVar4;
  piVar1[2] = iVar6;
  piVar1[3] = iVar8;
  piVar1[4] = iVar10;
                    /* WARNING: Could not recover jumptable at 0x01ff9408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_lr & 0xfffffffc))(((int)((ulonglong)uVar14 >> 0x20) - piVar1[-9]) + -2);
  return;
}

