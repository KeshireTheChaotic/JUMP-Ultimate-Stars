
void FUN_021be668(int param_1,undefined2 *param_2)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  ushort *puVar9;
  code *pcVar10;
  
  if (param_1 < 0x1a) {
    if (param_1 < 0x19) {
      if (param_1 < 0x12) {
        if (((param_1 < 0x11) && (param_1 < 4)) && (-1 < param_1)) {
          if (param_1 == 0) {
            uVar1 = param_2[8];
            if ((uVar1 != 0) && (uVar1 < 0x10)) {
              FUN_021be9b8(uVar1,2,param_2);
            }
          }
          else if (param_1 == 1) {
            uVar3 = (uint)(ushort)param_2[8];
            if ((uVar3 != 0) && (uVar3 < 0x10)) {
              *(undefined2 *)(DAT_021d525c + (uVar3 - 1) * 2 + 0x148a) = 0;
              FUN_020517fc(DAT_021d525c + 0x14a8 + ((ushort)param_2[8] - 1) * 4,0,4);
              FUN_020517fc(DAT_021d525c + 0x1340 + ((ushort)param_2[8] - 1) * 0x16,0);
              FUN_021c15f8(param_2[8]);
              *(undefined2 *)(DAT_021d525c + ((ushort)param_2[8] - 1) * 2 + 0x1754) = 0;
              iVar8 = (ushort)param_2[8] - 1;
              bVar2 = *(byte *)(DAT_021d525c + iVar8 + 0x1526);
              if (bVar2 != 0xff) {
                iVar4 = (uint)bVar2 * 0x5d4;
                puVar9 = (ushort *)(DAT_021d525c + iVar4 + 0x1d4e);
                uVar1 = (ushort)(1 << ((ushort)param_2[8] & 0xff));
                *puVar9 = *puVar9 & ~uVar1;
                puVar9 = (ushort *)(DAT_021d525c + iVar4 + 0x1d50);
                *puVar9 = *puVar9 | uVar1;
                *(undefined1 *)(DAT_021d525c + iVar8 + 0x1526) = 0xff;
                puVar9 = (ushort *)(DAT_021d525c + iVar4 + 0x1d4c);
                *puVar9 = *puVar9 & ~uVar1;
              }
              if (((uint)*(ushort *)(DAT_021d525c + 0x1536) & 1 << ((ushort)param_2[8] & 0xff)) != 0
                 ) {
                *(char *)(DAT_021d525c + 0x1535) = *(char *)(DAT_021d525c + 0x1535) + -1;
                *(ushort *)(DAT_021d525c + 0x1536) =
                     *(ushort *)(DAT_021d525c + 0x1536) &
                     ~(ushort)(1 << ((ushort)param_2[8] & 0xff));
              }
              if (*(int *)(DAT_021d525c + ((ushort)param_2[8] - 1) * 4 + 0x14e8) == 8) {
                FUN_021be9b8((uint)(ushort)param_2[8],9,0);
              }
              FUN_021be9b8(param_2[8],3,param_2);
              *(undefined4 *)(DAT_021d525c + ((ushort)param_2[8] - 1) * 4 + 0x14e8) = 0;
            }
          }
          else if (param_1 == 3) {
            FUN_021be2ac(param_2);
          }
        }
      }
      else if (param_1 == 0x15) {
        FUN_021be9b8(0,1,param_2);
      }
    }
    else {
      FUN_021bde3c();
    }
  }
  else if (param_1 < 0x100) {
    if (param_1 < 0xff) {
      if (param_1 == 0x1c) {
        uVar3 = 0;
        do {
          iVar4 = uVar3 * 0x5d4;
          iVar8 = DAT_021d525c + iVar4;
          if ((*(char *)(iVar8 + 0x1d52) != '\0') && (*(short *)(iVar8 + 0x1d50) != 0)) {
            FUN_021bf9e4(DAT_021d525c + 0x186c + iVar4,DAT_021d525c + 0x1340,
                         *(undefined2 *)(iVar8 + 0x1d4e));
            *(undefined2 *)(DAT_021d525c + iVar4 + 0x1d50) = 0;
          }
          uVar3 = uVar3 + 1 & 0xff;
        } while (uVar3 < 0x10);
        uVar5 = FUN_021bfc48();
        uVar6 = FUN_021bfc3c();
        uVar7 = FUN_021bfbf0();
        FUN_021bf8f4(uVar5,uVar6,uVar7);
      }
    }
    else {
      switch(param_2[1]) {
      default:
        FUN_021bdd98(0,8);
        break;
      case 1:
      case 4:
      case 5:
      case 6:
      case 8:
      case 9:
        FUN_021bdd98(0,9);
      }
    }
  }
  else if (param_1 == 0x100) {
    switch(*param_2) {
    case 0:
    case 7:
    case 8:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x12:
    case 0x15:
    case 0x19:
    case 0x1d:
      FUN_021bdd98(0,9);
      break;
    default:
      FUN_021bdd98(0,8);
    }
  }
  if (param_1 == 0x11) {
    pcVar10 = *(code **)(DAT_021d525c + 0x14e4);
    MIi_CpuClearFast(0,DAT_021d525c,32000);
    DAT_021d525c = 0;
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(0,0xc,0);
    }
  }
  return;
}

