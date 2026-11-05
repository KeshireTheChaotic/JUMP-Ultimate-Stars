
void FUN_021be328(int param_1,uint param_2)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  ushort *puVar7;
  short *psVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 local_48 [2];
  undefined2 local_46;
  undefined4 local_34;
  undefined1 auStack_30 [22];
  undefined2 local_1a;
  
  if ((param_2 != 0) && (param_2 < 0x10)) {
    iVar6 = FUN_021c14dc(param_1 + 10,local_48,param_2);
    iVar12 = param_2 - 1;
    iVar9 = iVar12 * 4;
    iVar13 = *(int *)(DAT_021d525c + iVar9 + 0x14e8);
    switch(local_48[0]) {
    case 7:
      if (iVar13 == 2) {
        if (iVar6 == 0) {
          return;
        }
        FUN_02051890(iVar6,&local_34,0x1d);
        *(undefined4 *)(DAT_021d525c + iVar9 + 0x14a8) = local_34;
        *(undefined2 *)(DAT_021d525c + iVar12 * 2 + 0x148a) = local_1a;
        iVar14 = iVar12 * 0x16;
        FUN_02051890(auStack_30,DAT_021d525c + 0x1340 + iVar14,0x16);
        *(byte *)(DAT_021d525c + 0x1340 + iVar14) =
             *(byte *)(DAT_021d525c + 0x1340 + iVar14) & 0xf | (byte)((param_2 & 0xf) << 4);
        FUN_021be9b8(param_2,10,auStack_30);
      }
      if (iVar13 == 10) {
        bVar4 = 0;
        bVar1 = *(byte *)(iVar6 + 0x1c);
        uVar11 = (uint)bVar1;
        if (((uVar11 < 0x10) &&
            (iVar6 = DAT_021d525c + uVar11 * 0x5d4, *(char *)(iVar6 + 0x1d52) != '\0')) &&
           (*(int *)(DAT_021d525c + iVar9 + 0x14a8) == *(int *)(*(int *)(iVar6 + 0x1d40) + 0x14))) {
          uVar10 = 0;
          do {
            if ((1 << uVar10 & (uint)*(ushort *)(iVar6 + 0x1d4e)) != 0) {
              bVar4 = bVar4 + 1;
            }
            uVar10 = uVar10 + 1 & 0xff;
          } while (uVar10 < 0x10);
          if (*(byte *)(*(int *)(iVar6 + 0x1d40) + 0x18) <= bVar4) {
            *(undefined2 *)(DAT_021d525c + iVar12 * 2 + 0x1754) = 0;
            FUN_021be9b8(param_2,0xb);
            return;
          }
        }
        else {
          *(undefined2 *)(DAT_021d525c + iVar12 * 2 + 0x1754) = 4;
        }
        psVar8 = (short *)(DAT_021d525c + iVar12 * 2 + 0x1754);
        sVar2 = *psVar8;
        if (sVar2 != 3) {
          if (sVar2 == 4) {
            *psVar8 = 0;
            FUN_021be9b8(param_2,4);
            return;
          }
          return;
        }
        uVar10 = 1 << (param_2 & 0xff);
        if ((*(ushort *)(DAT_021d525c + 0x1536) & uVar10) == 0) {
          *(char *)(DAT_021d525c + 0x1535) = *(char *)(DAT_021d525c + 0x1535) + '\x01';
          uVar3 = (ushort)uVar10;
          *(ushort *)(DAT_021d525c + 0x1536) = *(ushort *)(DAT_021d525c + 0x1536) | uVar3;
          *(byte *)(DAT_021d525c + param_2 + 0x1525) = bVar1;
          puVar7 = (ushort *)(DAT_021d525c + uVar11 * 0x5d4 + 0x1d4e);
          *puVar7 = *puVar7 | uVar3;
          puVar7 = (ushort *)(DAT_021d525c + uVar11 * 0x5d4 + 0x1d50);
          *puVar7 = *puVar7 | uVar3;
          *(undefined2 *)(DAT_021d525c + iVar12 * 2 + 0x1754) = 0;
          FUN_021be9b8(param_2,5);
          return;
        }
      }
      break;
    case 8:
      if (iVar13 == 5) {
        FUN_021be9b8(param_2,0xe,0);
        return;
      }
      if ((iVar13 == 0xe) && (*(short *)(DAT_021d525c + iVar12 * 2 + 0x1754) == 2)) {
        iVar6 = (uint)*(byte *)(DAT_021d525c + iVar12 + 0x1526) * 0x5d4;
        puVar7 = (ushort *)(DAT_021d525c + iVar6 + 0x1d4c);
        *puVar7 = *puVar7 | (ushort)(1 << (param_2 & 0xff));
        *(undefined2 *)(DAT_021d525c + iVar6 + 0x1d48) = 0;
        *(undefined2 *)(DAT_021d525c + iVar12 * 2 + 0x1754) = 0;
        FUN_021be9b8(param_2,6,0);
        return;
      }
      break;
    case 9:
      if ((iVar13 == 6) &&
         (uVar11 = (uint)*(byte *)(DAT_021d525c + iVar12 + 0x1526), uVar11 != 0xff)) {
        uVar5 = FUN_021bddc0(*(undefined2 *)(DAT_021d525c + uVar11 * 0x5d4 + 0x1d4a),local_46);
        *(undefined2 *)(DAT_021d525c + uVar11 * 0x5d4 + 0x1d4a) = uVar5;
        DAT_021d51a8 = DAT_021d51a8 | 1 << uVar11;
        return;
      }
      break;
    case 10:
      if (iVar13 == 6) {
        uVar11 = (uint)*(byte *)(DAT_021d525c + iVar12 + 0x1526);
        if (uVar11 != 0xff) {
          puVar7 = (ushort *)(DAT_021d525c + uVar11 * 0x5d4 + 0x1d4c);
          *puVar7 = *puVar7 & ~(ushort)(1 << (param_2 & 0xff));
          FUN_021be9b8(param_2,7,0);
          return;
        }
      }
      else if ((iVar13 == 7) &&
              (psVar8 = (short *)(DAT_021d525c + iVar12 * 2 + 0x1754), *psVar8 == 5)) {
        *psVar8 = 0;
        FUN_021be9b8(param_2,8);
      }
    }
  }
  return;
}

