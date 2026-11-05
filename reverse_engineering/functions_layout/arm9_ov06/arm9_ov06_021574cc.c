
undefined4
FUN_021574cc(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  code *pcVar8;
  byte bVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  
  uVar10 = 1;
  switch(param_3) {
  case 0:
    break;
  case 1:
    FUN_02157328(param_2,param_4);
    FUN_0215fcac(param_2 + 0x130);
    FUN_02157908(*(undefined4 *)(param_2 + 0x1a4),0x1b);
    *(int *)(param_2 + 0x1cc) = param_4;
    if (*(char *)(param_2 + 0x18) != '\v') {
      FUN_0207342c(0x7a,0x36);
    }
    if (param_5 != 0) {
      param_3 = *(int *)(param_2 + 0x1a4);
    }
    if ((param_5 != 0 && param_3 != 0) && (*(short *)(param_3 + 0x3e) != -1)) {
      *(short *)(param_3 + 0x3e) = *(short *)(param_3 + 0x3e) + 1;
    }
    if (((param_4 == 0) && (iVar5 = *(int *)(param_2 + 0x1a4), iVar5 != 0)) &&
       (*(short *)(iVar5 + 0x52) != -1)) {
      *(short *)(iVar5 + 0x52) = *(short *)(iVar5 + 0x52) + 1;
    }
    break;
  case 2:
    if ((*(byte *)(param_2 + 0xde) & 1) != 0) {
      return 1;
    }
    iVar5 = FUN_02159950(param_2);
    if (iVar5 != 0) {
      return 1;
    }
    uVar10 = 0;
    break;
  case 3:
    break;
  case 4:
    *(undefined1 *)(param_2 + 0xd1) = 1;
    *(int *)(param_2 + 0x1cc) = param_4;
    break;
  case 5:
    break;
  case 6:
    *(undefined1 *)(param_2 + 0xd4) = 1;
    break;
  case 7:
    FUN_0215fcac(param_2 + 0x130);
    FUN_02157908(*(undefined4 *)(param_2 + 0x1a4),0x1c);
    uVar6 = FUN_0215793c(*(undefined4 *)(param_2 + 0x1a8));
    piVar11 = *(int **)(*(int *)(param_2 + 0x1a0) + param_4 * 4 + 0x18c);
    *(int **)(*(int *)(param_2 + 0x1a0) + 0x178) = piVar11;
    iVar12 = piVar11[2];
    iVar5 = (int)*(char *)(iVar12 + 0x1b);
    bVar14 = iVar5 == 1;
    if (bVar14) {
      iVar5 = 1;
    }
    if (!bVar14) {
      iVar5 = 0;
    }
    iVar5 = FUN_02168cf4(*piVar11,*(undefined4 *)(param_2 + 0x1a8),param_5 << 8,param_6 << 8,uVar6,
                         (int)*(char *)(iVar12 + 0x1a),
                         *(undefined4 *)(&DAT_021710e8 + *(char *)(*piVar11 + 0x8c) * 4),iVar5);
    if (iVar5 == 0) {
      iVar5 = 0;
      pcVar8 = (code *)0x0;
    }
    else {
      *(int *)(iVar5 + 0x20) = (int)*(short *)(iVar12 + 6);
      *(int *)(iVar5 + 0x18) = param_2;
      *(code **)(iVar5 + 0x10) = FUN_02157958;
      iVar13 = *(int *)(iVar5 + 8);
      if (*(char *)(iVar12 + 2) == '\x01') {
        FUN_0207cf18();
      }
      else {
        FUN_0207cf78(*(undefined4 *)(iVar13 + 0x10),0,0x20);
      }
      iVar7 = *(int *)(iVar13 + 0x10);
      bVar1 = *(byte *)(iVar7 + 0x175);
      bVar9 = *(byte *)(iVar12 + 3) & 3;
      *(byte *)(iVar7 + 0x175) = bVar1 & 0xfc | bVar9;
      *(byte *)(iVar7 + 0x175) = bVar1 & 0xc0 | bVar9;
      BattleNoteTrack::Battle_NoteTrackCreate
                (iVar13 + 0x18,*(undefined4 *)(iVar13 + 8),iVar13,FUN_02158034,param_2);
      iVar13 = *(int *)(iVar13 + 0x18);
      FUN_02155658(iVar13,0x10 << (uint)*(byte *)(param_2 + 0x1e0));
      sVar2 = *(short *)(iVar12 + 0x20);
      sVar4 = sVar2;
      if (sVar2 == 0) {
        sVar4 = -1;
      }
      *(short *)(piVar11[3] + 0x1e) = sVar4;
      *(short *)(iVar13 + 0xa6) = sVar2;
      pcVar8 = (code *)FUN_0215fce4(param_2 + 0x130,0xd);
    }
    if (iVar5 != 0) {
      pcVar8 = FUN_021579e0;
    }
    *(int *)(param_2 + 0x1ac) = iVar5;
    if (iVar5 != 0) {
      *(code **)(iVar5 + 0x14) = pcVar8;
    }
    FUN_0207342c(0x7a,0x33);
    FUN_0207342c(0x7a,0x36);
    if (((((*(char *)(param_2 + 0x18) + -9) * 0x1000000 >> 0x18 & 0xffU) < 2) &&
        (iVar5 = *(int *)(param_2 + 0x1a4), iVar5 != 0)) && (*(short *)(iVar5 + 0x46) != -1)) {
      *(short *)(iVar5 + 0x46) = *(short *)(iVar5 + 0x46) + 1;
    }
    break;
  case 8:
    if ((*(byte *)(param_2 + 0xde) & 2) != 0) {
      return 1;
    }
    iVar5 = FUN_02159970(param_2);
    if (iVar5 != 0) {
      return 1;
    }
    if ('\x16' < *(char *)(param_2 + 0x18)) {
      return 1;
    }
    if ((*(char *)(*(int *)(*(int *)(*(int *)(param_2 + 0x1a0) + param_4 * 4 + 0x18c) + 8) + 0x1b)
         != '\x02') && ((*(uint *)(*(int *)(*(int *)(param_2 + 0x1a8) + 0x10) + 0x78) & 2) == 0)) {
      return 1;
    }
    if (*(int *)(param_2 + 0x1ac) != 0) {
      return 1;
    }
    if (*(int *)(param_2 + 0x1b0) != 0) {
      return 1;
    }
    uVar10 = 0;
    break;
  case 9:
    FUN_0215fcac(param_2 + 0x130);
    break;
  case 10:
    if (*(int *)(param_2 + 0x1ac) != 0) {
      *(char *)(param_2 + 0x1e5) = (char)param_4;
      *(char *)(*(int *)(param_2 + 0x1ac) + 0x33) = (char)param_4;
      FUN_0207342c(0x78,0xb);
    }
    break;
  case 0xb:
    if (*(char *)(param_2 + 0x1eb) == '\0') {
      return 0;
    }
    if (*(char *)(param_2 + 0xe0) < '\x01') {
      *(undefined1 *)(param_2 + 0xe0) = 0x10;
      FUN_0207342c(0x78,2);
    }
    break;
  case 0xc:
    cVar3 = *(char *)(param_2 + 0x18);
    if (cVar3 == '\b') {
      return 0;
    }
    if (cVar3 == '\x17') {
      return 0;
    }
    if (cVar3 == '\x18') {
      return 0;
    }
    if (cVar3 == '\x19') {
      return 0;
    }
  }
  return uVar10;
}

