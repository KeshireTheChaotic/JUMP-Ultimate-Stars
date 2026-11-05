
void FUN_021bad90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  undefined1 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 local_34;
  int local_30 [3];
  
  piVar10 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)((int)piVar10 + 0xa3) == '\0') {
    return;
  }
  *(undefined1 *)((int)piVar10 + 0xa3) = 0;
  puVar9 = (undefined1 *)(piVar10[0x19] * 0x24 + *piVar10);
  local_30[2] = param_4;
  FUN_021b65bc();
  *(char *)(piVar10 + 0x26) = (char)piVar10[0x19];
  iVar3 = 0;
  do {
    iVar8 = iVar3 + 1;
    piVar10[iVar3 + 0x20] = piVar10[iVar3 + 0x1a];
    iVar3 = iVar8;
  } while (iVar8 < 6);
  uVar7 = 1;
  *(char *)(piVar10 + 0x27) = (char)*(undefined2 *)(puVar9 + 2);
  *(undefined1 *)((int)piVar10 + 0x9e) = *puVar9;
  *(undefined1 *)((int)piVar10 + 0x9f) = puVar9[1];
  *(undefined1 *)(piVar10 + 0x29) = 1;
  *(undefined1 *)((int)piVar10 + 0xa7) = 0;
  *(undefined1 *)((int)piVar10 + 0xa6) = 0;
  *(undefined1 *)((int)piVar10 + 0xa2) = 1;
  if ((char)piVar10[0x27] == '\x02') {
    uVar7 = 2;
  }
  *(undefined1 *)(piVar10 + 0x28) = uVar7;
  *(undefined1 *)((int)piVar10 + 0x9b) = 0;
  *(undefined1 *)((int)piVar10 + 0x9d) = 0;
  if (*(char *)((int)piVar10 + 0xa1) != -1) {
    *(char *)(piVar10 + 0x28) = *(char *)((int)piVar10 + 0xa1);
  }
  iVar3 = (*(code *)(&PTR_FUN_021d3e98)[(char)piVar10[0x27]])(piVar10);
  iVar8 = (int)*(char *)((int)piVar10 + 0x9f);
  if ((((char)piVar10[0x27] + -1) * 0x1000000 >> 0x18 & 0xffU) < 2) {
    if (iVar8 < 0x12) {
      iVar8 = 0x12;
    }
  }
  else if (iVar8 < 8) {
    iVar8 = 8;
  }
  switch((char)piVar10[0x27]) {
  case '\0':
  default:
switchD_021bae98_default:
    bVar1 = false;
    goto LAB_021baed4;
  case '\x01':
    goto switchD_021bae98_default;
  case '\x02':
    goto switchD_021bae98_default;
  case '\x03':
    break;
  case '\x04':
    break;
  case '\x05':
    goto switchD_021bae98_default;
  case '\x06':
    break;
  case '\a':
    break;
  case '\b':
    break;
  case '\t':
  }
  bVar1 = true;
LAB_021baed4:
  *(short *)(piVar10 + 0x18) = (short)iVar8 * 0xc + 0x10;
  iVar8 = (int)(short)piVar10[0x18] >> 0x1f;
  iVar8 = ((uint)((short)piVar10[0x18] * 0x20000000 + iVar8) >> 0x1d | iVar8 << 3) - iVar8;
  if (iVar8 == 0) {
    sVar2 = 0;
  }
  else {
    sVar2 = 8 - (short)iVar8;
  }
  *(short *)(piVar10 + 0x18) = (short)piVar10[0x18] + sVar2;
  *(short *)((int)piVar10 + 0x62) = *(char *)((int)piVar10 + 0x9e) * 0x10 + 0x10;
  if ((char)piVar10[0x27] == '\x01' || (char)piVar10[0x27] == '\x02') {
    sVar2 = 0x18;
  }
  else {
    sVar2 = 0;
  }
  *(short *)((int)piVar10 + 0x62) = *(short *)((int)piVar10 + 0x62) + sVar2;
  if (bVar1) {
    sVar2 = 8;
  }
  else {
    sVar2 = 0;
  }
  *(short *)((int)piVar10 + 0x62) = *(short *)((int)piVar10 + 0x62) + sVar2;
  *(short *)(piVar10 + 0x17) = 0x80 - (short)piVar10[0x18] / 2;
  *(short *)((int)piVar10 + 0x5e) = 0x60 - *(short *)((int)piVar10 + 0x62) / 2;
  *(short *)(piVar10 + 0x15) = (short)piVar10[0x17];
  *(undefined2 *)((int)piVar10 + 0x56) = *(undefined2 *)((int)piVar10 + 0x5e);
  *(short *)(piVar10 + 0x16) = (short)piVar10[0x18] >> 3;
  *(short *)((int)piVar10 + 0x5a) = *(short *)((int)piVar10 + 0x62) >> 3;
  if ((short)piVar10[0x16] < 4) {
    *(undefined2 *)(piVar10 + 0x16) = 4;
  }
  if (*(short *)((int)piVar10 + 0x5a) < 4) {
    *(undefined2 *)((int)piVar10 + 0x5a) = 4;
  }
  piVar4 = *(int **)(*(int *)(piVar10[7] + 4) + 100);
  (**(code **)(*piVar4 + 0x7c))(piVar4,0);
  switch((char)piVar10[0x27]) {
  case '\0':
  default:
    FUN_021bc1a4(piVar10);
    FUN_021bcad4(piVar10);
    break;
  case '\x01':
    FUN_021bc1a4(piVar10);
    FUN_021bcc28(piVar10,0);
    FUN_021bc06c(piVar10,(int)(char)piVar10[0x28]);
    break;
  case '\x02':
    FUN_021bc1a4(piVar10);
    FUN_021bcc28(piVar10,1);
    FUN_021bc06c(piVar10,(int)(char)piVar10[0x28]);
    break;
  case '\x03':
    goto LAB_021bb040;
  case '\x04':
LAB_021bb040:
    FUN_021bc4c4(piVar10,0);
    FUN_021bcad4(piVar10);
    break;
  case '\x05':
    FUN_021bc1a4(piVar10);
    break;
  case '\x06':
    FUN_021bc4c4(piVar10,0);
    break;
  case '\a':
    goto LAB_021bb0bc;
  case '\b':
    goto LAB_021bb0bc;
  case '\t':
LAB_021bb0bc:
    FUN_021bc4c4(piVar10,1);
    FUN_021bcad4(piVar10);
  }
  iVar11 = (char)piVar10[0x26] * 0x24 + *piVar10;
  FUN_021bbf80();
  iVar8 = 0;
  DAT_020a0dd0 = *(undefined4 *)(piVar10[6] + 4);
  do {
    if ((int *)piVar10[iVar8 + 8] != (int *)0x0) {
      (**(code **)(*(int *)piVar10[iVar8 + 8] + 8))();
      piVar10[iVar8 + 8] = 0;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 8);
  (*DAT_020a0e18)();
  if (bVar1) {
    iVar8 = 0x10;
  }
  else {
    iVar8 = 8;
  }
  for (iVar13 = 0; iVar13 < *(char *)((int)piVar10 + 0x9e); iVar13 = iVar13 + 1) {
    if (iVar3 == 0) {
      iVar12 = (int)piVar10 + iVar13 * 0x2a + 0xcf;
    }
    else {
      iVar12 = iVar11 + 4 + iVar13 * 4 + *(int *)(iVar11 + iVar13 * 4 + 4);
    }
    iVar5 = FUN_02074294(iVar12);
    iVar6 = iVar5 * 0xc >> 0x1f;
    iVar6 = ((uint)(iVar5 * -0x80000000 + iVar6) >> 0x1d | iVar6 << 3) - iVar6;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = 8 - iVar6;
    }
    iVar6 = ALTextDS::Create(iVar5 * 0xc + iVar6,0x10,s_font_jskfont_aft_021d3f80,0,0);
    piVar10[iVar13 + 8] = iVar6;
    piVar4 = *(int **)(*(int *)(iVar6 + 4) + 100);
    (**(code **)(*piVar4 + 0xa4))(piVar4,0);
    piVar4 = *(int **)(*(int *)(piVar10[iVar13 + 8] + 4) + 100);
    (**(code **)(*piVar4 + 0xa8))(piVar4,0);
    piVar4 = *(int **)(*(int *)(piVar10[iVar13 + 8] + 4) + 100);
    (**(code **)(*piVar4 + 0x68))(piVar4,iVar12);
    local_30[1] = 0x8000;
    local_30[0] = (iVar8 + iVar13 * 0x10) * 0x1000;
    FUN_021bb970(piVar10[iVar13 + 8],local_30 + 1,local_30);
    local_34 = 0x20000;
    FUN_021bbde0(piVar10[iVar13 + 8],&local_34);
    piVar4 = *(int **)(piVar10[iVar13 + 8] + 4);
    if (piVar10[7] == 0) {
      (**(code **)(*piVar4 + 0xd4))(piVar4,0);
    }
    else {
      (**(code **)(*piVar4 + 0xd4))(piVar4,*(undefined4 *)(piVar10[7] + 4));
    }
    (*DAT_020a0e18)();
  }
  FUN_021bc03c();
  if ((((char)piVar10[0x27] + -1) * 0x1000000 >> 0x18 & 0xffU) < 2) {
    FUN_021bc06c(piVar10,(int)(char)piVar10[0x28]);
    iVar3 = piVar10[0x28];
    if ((char)iVar3 == 2) {
      (**(code **)(**(int **)(piVar10[0x14] + 4) + 0x14c))(*(int **)(piVar10[0x14] + 4),8);
    }
    FUN_021b6214(*(undefined4 *)(piVar10[(char)iVar3 + 0x12] + 4),1);
  }
  if (*(char *)((int)piVar10 + 0xa5) != '\0') {
    FUN_02073f24((&DAT_021d0114)[(uint)*(byte *)((int)piVar10 + 0x9a) * 2],0,
                 u_>__7__021d0128[*(char *)((int)piVar10 + 0x99)]);
  }
  FUN_02028384(*(undefined4 *)(piVar10[4] + 4),&LAB_021bb6dc);
  return;
}

