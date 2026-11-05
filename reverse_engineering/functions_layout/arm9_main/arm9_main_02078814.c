
undefined4 FUN_02078814(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  
  uVar7 = 0;
  uVar9 = 0;
  uVar11 = 0;
  uVar12 = 0;
  do {
    if (0xf < uVar12) {
      puVar8 = *(undefined4 **)(param_1 + 0x558);
      do {
        if (puVar8 == (undefined4 *)0x0) {
          return 1;
        }
        uVar3 = *(ushort *)puVar8[0xd];
        if (0x365 < uVar3) {
          return 0;
        }
        for (puVar10 = *(undefined4 **)(param_1 + 0x558); puVar10 != (undefined4 *)0x0;
            puVar10 = (undefined4 *)*puVar10) {
          if (puVar8 != puVar10) {
            if (uVar3 == *(ushort *)puVar10[0xd]) {
              return 0;
            }
            if (((ushort *)puVar8[0xd])[1] == ((ushort *)puVar10[0xd])[1]) {
              return 0;
            }
          }
        }
        puVar8 = (undefined4 *)*puVar8;
      } while( true );
    }
    sVar4 = *(short *)(param_2 + uVar12 * 4);
    if (0x365 < sVar4) {
      return 0;
    }
    if ((-1 < sVar4) && (iVar5 = FUN_02076c98(param_1), iVar5 != 0)) {
      bVar1 = *(byte *)(iVar5 + 6);
      if (2 < bVar1) {
        return 0;
      }
      bVar2 = *(byte *)(param_2 + uVar12 * 4 + 3);
      if ((bVar2 & 0x10) != 0) {
        uVar7 = uVar7 + 1;
        if (1 < uVar7) {
          return 0;
        }
        if (bVar1 != 0) {
          return 0;
        }
      }
      if ((bVar2 & 0x20) != 0) {
        uVar9 = uVar9 + 1;
        if (1 < uVar9) {
          return 0;
        }
        if (bVar1 == 2) {
          return 0;
        }
      }
      if ((bVar2 & 0x40) != 0) {
        uVar11 = uVar11 + 1;
        if (1 < uVar11) {
          return 0;
        }
        if (bVar1 == 2) {
          return 0;
        }
      }
      if ((bVar1 != 2) && ((bVar2 & 0xf) != 0)) {
        return 0;
      }
      for (uVar6 = 0; uVar6 < 0x10; uVar6 = uVar6 + 1) {
        if ((uVar12 != uVar6) &&
           (*(short *)(param_2 + uVar12 * 4) == *(short *)(param_2 + uVar6 * 4))) {
          return 0;
        }
      }
    }
    uVar12 = uVar12 + 1;
  } while( true );
}

