
void FUN_01fff5d8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int unaff_r11;
  int in_r12;
  int *piVar5;
  
  piVar5 = (int *)(param_2 + 0x78);
  piVar3 = *(int **)(param_2 + 0x74);
  do {
    iVar1 = in_r12 * *piVar5 +
            unaff_r11 * *(int *)(param_2 + 0x7c) +
            unaff_r10 * *(int *)(param_2 + 0x80) +
            unaff_r9 * *(int *)(param_2 + 0x84) +
            unaff_r8 * *(int *)(param_2 + 0x88) +
            unaff_r7 * *(int *)(param_2 + 0x8c) +
            unaff_r6 * *(int *)(param_2 + 0x90) +
            unaff_r5 * *(int *)(param_2 + 0x94) + *param_1 * 0x4000 >> 0xe;
    *piVar5 = iVar1;
    *piVar3 = iVar1;
    iVar1 = in_r12 * *(int *)(param_2 + 0x7c) +
            unaff_r11 * *(int *)(param_2 + 0x80) +
            unaff_r10 * *(int *)(param_2 + 0x84) +
            unaff_r9 * *(int *)(param_2 + 0x88) +
            unaff_r8 * *(int *)(param_2 + 0x8c) +
            unaff_r7 * *(int *)(param_2 + 0x90) +
            unaff_r6 * *(int *)(param_2 + 0x94) + unaff_r5 * *piVar5 + param_1[1] * 0x4000 >> 0xe;
    *(int *)(param_2 + 0x7c) = iVar1;
    piVar3[1] = iVar1;
    iVar1 = in_r12 * *(int *)(param_2 + 0x80) +
            unaff_r11 * *(int *)(param_2 + 0x84) +
            unaff_r10 * *(int *)(param_2 + 0x88) +
            unaff_r9 * *(int *)(param_2 + 0x8c) +
            unaff_r8 * *(int *)(param_2 + 0x90) +
            unaff_r7 * *(int *)(param_2 + 0x94) +
            unaff_r6 * *piVar5 + unaff_r5 * *(int *)(param_2 + 0x7c) + param_1[2] * 0x4000 >> 0xe;
    *(int *)(param_2 + 0x80) = iVar1;
    piVar3[2] = iVar1;
    iVar1 = in_r12 * *(int *)(param_2 + 0x84) +
            unaff_r11 * *(int *)(param_2 + 0x88) +
            unaff_r10 * *(int *)(param_2 + 0x8c) +
            unaff_r9 * *(int *)(param_2 + 0x90) +
            unaff_r8 * *(int *)(param_2 + 0x94) +
            unaff_r7 * *piVar5 +
            unaff_r6 * *(int *)(param_2 + 0x7c) +
            unaff_r5 * *(int *)(param_2 + 0x80) + param_1[3] * 0x4000 >> 0xe;
    *(int *)(param_2 + 0x84) = iVar1;
    piVar3[3] = iVar1;
    iVar1 = in_r12 * *(int *)(param_2 + 0x88) +
            unaff_r11 * *(int *)(param_2 + 0x8c) +
            unaff_r10 * *(int *)(param_2 + 0x90) +
            unaff_r9 * *(int *)(param_2 + 0x94) +
            unaff_r8 * *piVar5 +
            unaff_r7 * *(int *)(param_2 + 0x7c) +
            unaff_r6 * *(int *)(param_2 + 0x80) +
            unaff_r5 * *(int *)(param_2 + 0x84) + param_1[4] * 0x4000 >> 0xe;
    *(int *)(param_2 + 0x88) = iVar1;
    piVar3[4] = iVar1;
    iVar1 = in_r12 * *(int *)(param_2 + 0x8c) +
            unaff_r11 * *(int *)(param_2 + 0x90) +
            unaff_r10 * *(int *)(param_2 + 0x94) +
            unaff_r9 * *piVar5 +
            unaff_r8 * *(int *)(param_2 + 0x7c) +
            unaff_r7 * *(int *)(param_2 + 0x80) +
            unaff_r6 * *(int *)(param_2 + 0x84) +
            unaff_r5 * *(int *)(param_2 + 0x88) + param_1[5] * 0x4000 >> 0xe;
    *(int *)(param_2 + 0x8c) = iVar1;
    piVar3[5] = iVar1;
    piVar2 = param_1 + 7;
    iVar1 = in_r12 * *(int *)(param_2 + 0x90) +
            unaff_r11 * *(int *)(param_2 + 0x94) +
            unaff_r10 * *piVar5 +
            unaff_r9 * *(int *)(param_2 + 0x7c) +
            unaff_r8 * *(int *)(param_2 + 0x80) +
            unaff_r7 * *(int *)(param_2 + 0x84) +
            unaff_r6 * *(int *)(param_2 + 0x88) +
            unaff_r5 * *(int *)(param_2 + 0x8c) + param_1[6] * 0x4000 >> 0xe;
    *(int *)(param_2 + 0x90) = iVar1;
    piVar4 = piVar3 + 7;
    piVar3[6] = iVar1;
    param_1 = param_1 + 8;
    iVar1 = in_r12 * *(int *)(param_2 + 0x94) +
            unaff_r11 * *piVar5 +
            unaff_r10 * *(int *)(param_2 + 0x7c) +
            unaff_r9 * *(int *)(param_2 + 0x80) +
            unaff_r8 * *(int *)(param_2 + 0x84) +
            unaff_r7 * *(int *)(param_2 + 0x88) +
            unaff_r6 * *(int *)(param_2 + 0x8c) +
            unaff_r5 * *(int *)(param_2 + 0x90) + *piVar2 * 0x4000 >> 0xe;
    *(int *)(param_2 + 0x94) = iVar1;
    piVar3 = piVar3 + 8;
    *piVar4 = iVar1;
    param_3 = param_3 + -8;
  } while (param_3 != 0);
  *(int **)(param_2 + 0x74) = piVar3;
  return;
}

