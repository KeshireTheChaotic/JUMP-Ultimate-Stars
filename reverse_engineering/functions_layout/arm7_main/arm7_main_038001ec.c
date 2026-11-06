
void FUN_038001ec(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int local_40;
  uint local_30;
  uint local_2c;
  
  iVar10 = 0;
  local_2c = 0x7f;
  local_30 = 0;
  local_40 = 0;
  do {
    iVar5 = iVar10 * 0x54;
    puVar11 = &DAT_03808aa8 + iVar5;
    bVar1 = (&DAT_03808aab)[iVar5];
    if ((bVar1 & 1) != 0) {
      if ((bVar1 & 3) >> 1 == 0) {
        iVar6 = SND_IsChannelActive(iVar10);
        if (iVar6 == 0) {
          if ((code *)(&DAT_03808af0)[iVar10 * 0x15] == (code *)0x0) {
            (&DAT_03808aca)[iVar5] = 0;
          }
          else {
            (*(code *)(&DAT_03808af0)[iVar10 * 0x15])(puVar11,1,(&DAT_03808af4)[iVar10 * 0x15]);
          }
          (&DAT_03808acc)[iVar10 * 0x2a] = 0;
          (&DAT_03808aab)[iVar5] = (&DAT_03808aab)[iVar5] & 0xfe;
          goto LAB_038004dc;
        }
      }
      else {
        (&DAT_03808aab)[iVar5] = bVar1 & 7 | (bVar1 >> 3 | 1) << 3;
        (&DAT_03808aab)[iVar5] = (&DAT_03808aab)[iVar5] & 0xfd;
      }
      sVar4 = *(short *)(&DAT_03807cd4 + (uint)(byte)(&DAT_03808ab1)[iVar5] * 2);
      bVar1 = (&DAT_03808ab0)[iVar5];
      bVar2 = (&DAT_03808aad)[iVar5];
      iVar6 = FUN_0380005c(puVar11,param_1);
      iVar7 = FUN_037ff8dc(puVar11,param_1);
      iVar12 = sVar4 + iVar6 + (int)(short)(&DAT_03808ab4)[iVar10 * 0x2a] +
               (int)(short)(&DAT_03808aae)[iVar10 * 0x2a];
      iVar14 = ((uint)bVar1 - (uint)bVar2) * 0x40 + iVar7 +
               (int)(short)(&DAT_03808ab6)[iVar10 * 0x2a];
      iVar7 = FUN_037ff840(puVar11,param_1);
      cVar3 = (&DAT_03808ad0)[iVar5];
      iVar6 = local_40;
      if (cVar3 == '\0') {
        iVar14 = iVar14 + iVar7;
      }
      else if (cVar3 == '\x01') {
        if (-0x8000 < iVar12) {
          iVar12 = iVar12 + iVar7;
        }
      }
      else if (cVar3 == '\x02') {
        iVar6 = iVar7;
      }
      iVar6 = iVar6 + (char)(&DAT_03808ab2)[iVar5];
      if ((byte)(&DAT_03808aac)[iVar5] != 0x7f) {
        iVar6 = (int)(iVar6 * (uint)(byte)(&DAT_03808aac)[iVar5] + 0x40) >> 7;
      }
      cVar3 = (&DAT_03808ab3)[iVar5];
      if (((&DAT_03808aaa)[iVar5] == '\x03') && (iVar12 < -0x2d2)) {
        (&DAT_03808aab)[iVar5] = (&DAT_03808aab)[iVar5] & 7 | 0x10;
        if ((code *)(&DAT_03808af0)[iVar10 * 0x15] == (code *)0x0) {
          (&DAT_03808aca)[iVar5] = 0;
        }
        else {
          (*(code *)(&DAT_03808af0)[iVar10 * 0x15])(puVar11,1,(&DAT_03808af4)[iVar10 * 0x15]);
        }
        (&DAT_03808acc)[iVar10 * 0x2a] = 0;
        (&DAT_03808aab)[iVar5] = (&DAT_03808aab)[iVar5] & 0xfe;
      }
      else {
        uVar8 = FUN_037ff408(iVar12);
        uVar9 = FUN_037ff48c((&DAT_03808ae4)[iVar10 * 0x2a],iVar14);
        if ((&DAT_03808aa9)[iVar5] == '\x01') {
          uVar9 = uVar9 & 0xfffc;
        }
        uVar13 = iVar6 + cVar3 + 0x40;
        if ((int)uVar13 < 0) {
          uVar13 = local_30;
        }
        else if (0x7f < (int)uVar13) {
          uVar13 = local_2c;
        }
        if (uVar8 != (ushort)(&DAT_03808acc)[iVar10 * 0x2a]) {
          (&DAT_03808acc)[iVar10 * 0x2a] = (short)uVar8;
          (&DAT_03808aab)[iVar5] =
               (&DAT_03808aab)[iVar5] & 7 | ((byte)(&DAT_03808aab)[iVar5] >> 3 | 8) << 3;
        }
        if (uVar9 != (ushort)(&DAT_03808ace)[iVar10 * 0x2a]) {
          (&DAT_03808ace)[iVar10 * 0x2a] = (short)uVar9;
          (&DAT_03808aab)[iVar5] =
               (&DAT_03808aab)[iVar5] & 7 | ((byte)(&DAT_03808aab)[iVar5] >> 3 | 4) << 3;
        }
        if (uVar13 != (byte)(&DAT_03808acb)[iVar5]) {
          (&DAT_03808acb)[iVar5] = (char)uVar13;
          (&DAT_03808aab)[iVar5] =
               (&DAT_03808aab)[iVar5] & 7 | ((byte)(&DAT_03808aab)[iVar5] >> 3 | 0x10) << 3;
        }
      }
    }
LAB_038004dc:
    iVar10 = iVar10 + 1;
    if (0xf < iVar10) {
      return;
    }
  } while( true );
}

