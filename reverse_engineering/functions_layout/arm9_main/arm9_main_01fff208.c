
void FUN_01fff208(void)

{
  int *piVar1;
  int in_r3;
  int *piVar2;
  int unaff_r4;
  int *piVar3;
  int *piVar4;
  int unaff_r6;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  piVar3 = (int *)(unaff_r4 + (0x7f - unaff_r6) * 4);
  *(int *)(in_r3 + 0x200) = *piVar3 >> 4;
  iVar5 = piVar3[2];
  iVar6 = piVar3[3];
  iVar7 = piVar3[4];
  iVar8 = piVar3[5];
  iVar9 = piVar3[6];
  *(int *)(in_r3 + 0x204) = piVar3[1] * 2 >> 4;
  *(int *)(in_r3 + 0x208) = iVar5 * 3 >> 4;
  *(int *)(in_r3 + 0x20c) = iVar6 * 4 >> 4;
  *(int *)(in_r3 + 0x210) = iVar7 * 5 >> 4;
  *(int *)(in_r3 + 0x214) = iVar8 * 6 >> 4;
  *(int *)(in_r3 + 0x218) = iVar9 * 7 >> 4;
  iVar5 = 0x72;
  piVar1 = (int *)(in_r3 + 0x21c);
  piVar3 = piVar3 + 7;
  do {
    piVar4 = piVar3;
    piVar2 = piVar1;
    iVar6 = piVar4[1];
    iVar7 = piVar4[2];
    iVar8 = piVar4[3];
    iVar9 = piVar4[4];
    iVar10 = piVar4[5];
    *piVar2 = *piVar4 >> 1;
    piVar2[1] = iVar6 >> 1;
    piVar2[2] = iVar7 >> 1;
    piVar2[3] = iVar8 >> 1;
    piVar2[4] = iVar9 >> 1;
    piVar2[5] = iVar10 >> 1;
    iVar5 = iVar5 + -6;
    piVar1 = piVar2 + 6;
    piVar3 = piVar4 + 6;
  } while (iVar5 != 0);
  iVar5 = piVar4[7];
  iVar6 = piVar4[8];
  iVar7 = piVar4[9];
  iVar8 = piVar4[10];
  iVar9 = piVar4[0xb];
  piVar2[6] = piVar4[6] * 7 >> 4;
  piVar2[7] = iVar5 * 6 >> 4;
  piVar2[8] = iVar6 * 5 >> 4;
  piVar2[9] = iVar7 * 4 >> 4;
  piVar2[10] = iVar8 * 3 >> 4;
  iVar5 = piVar4[0xc];
  piVar2[0xb] = iVar9 * 2 >> 4;
  piVar2[0xc] = iVar5 >> 4;
  return;
}

