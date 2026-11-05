
void FUN_0215f480(int param_1)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char extraout_r1;
  char extraout_r1_00;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int *piVar14;
  int local_40;
  char local_38;
  char local_37;
  undefined1 local_36;
  undefined1 auStack_35 [5];
  undefined1 auStack_30 [3];
  undefined1 auStack_2d [9];
  
  piVar8 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  if ((*(byte *)(*piVar8 + 0x5f2) & 0x10) == 0) {
    piVar3 = (int *)FUN_020101f4(s_koma_koma_aar_0216cb90,0);
    DAT_02093c08 = DAT_02093c08 + -1;
    (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
    DAT_020a0dd0 = *(undefined4 *)(piVar8[4] + 4);
    piVar9 = (int *)piVar8[1];
    local_36 = 0;
    thunk_FUN_0207400c(auStack_35,s_koma_______dtx_0216cba0);
    FUN_0200d12c(*(undefined1 *)(piVar9[0xd] + 5),10);
    local_37 = extraout_r1 + '0';
    uVar4 = FUN_0200d12c(*(undefined1 *)(piVar9[0xd] + 5),10);
    FUN_0200d12c(uVar4,10);
    local_38 = extraout_r1_00 + '0';
    thunk_FUN_02074258(auStack_30,(&PTR_DAT_0209e840)[*(byte *)(piVar9[0xd] + 4)]);
    thunk_FUN_02074258(auStack_2d,&local_38);
    iVar12 = (int)(*(byte *)((int)piVar9 + 0xe) & 0xf0) >> 4;
    uVar7 = *(byte *)((int)piVar9 + 0xe) & 0xf;
    piVar14 = (int *)(iVar12 * 0x14 + *piVar8 + 8 + uVar7 * 4);
    piVar10 = piVar8 + uVar7 + iVar12 * 5 + 5;
    iVar12 = iVar12 * 0x30;
    pcVar13 = (char *)piVar9[0xe];
    iVar11 = (short)uVar7 * 0x30;
    local_40 = 0;
    sVar2 = 0;
    do {
      if ((*pcVar13 != '\0') && ((int *)*piVar14 == piVar9)) {
        if (*piVar10 == 0) {
          piVar5 = (int *)FUN_02032a1c(auStack_35);
          if (piVar5[6] == 0) {
            (**(code **)(*piVar5 + 0x14))();
          }
          iVar6 = piVar5[6];
          *piVar10 = iVar6;
          *(short *)(*(int *)(*(int *)(iVar6 + 4) + 100) + 0x4a) = sVar2;
          sVar1 = *(short *)((int)piVar8 + 0xce);
          piVar5 = *(int **)(*(int *)(*piVar10 + 4) + 0x50);
          piVar5[3] = (iVar11 + (short)piVar8[0x33]) * 0x1000;
          piVar5[4] = (iVar12 + sVar1) * 0x1000;
          if (*(byte *)(piVar5 + 9) != (*(byte *)(piVar5 + 9) | 1)) {
            (**(code **)(*piVar5 + 0x18))();
          }
          *(byte *)(piVar5 + 9) = *(byte *)(piVar5 + 9) | 0x31;
          (**(code **)(**(int **)(*piVar10 + 4) + 0xd8))(*(int **)(*piVar10 + 4),1);
        }
        sVar2 = sVar2 + 1;
      }
      if (iVar11 < 0xc0) {
        iVar11 = iVar11 + 0x30;
      }
      else {
        iVar11 = 0;
        iVar12 = iVar12 + 0x30;
      }
      local_40 = local_40 + 1;
      pcVar13 = pcVar13 + 1;
      piVar14 = piVar14 + 1;
      piVar10 = piVar10 + 1;
    } while (local_40 < 0x14);
    DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
    DAT_02093c08 = DAT_02093c08 + 1;
    (**(code **)(*piVar3 + 0xc))();
    iVar12 = *piVar9;
    piVar8[1] = iVar12;
    if (iVar12 == 0) {
      FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215f73c);
    }
  }
  else {
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215f73c);
  }
  return;
}

