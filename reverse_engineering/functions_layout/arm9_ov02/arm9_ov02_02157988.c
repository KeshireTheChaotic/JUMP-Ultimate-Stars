
void FUN_02157988(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  bool bVar12;
  int iStack_2c;
  int iStack_28;
  
  iVar6 = 0;
  iVar9 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  do {
    if (**(short **)(iVar9 + 0x1c) <= iVar6) {
      if (((*(uint *)(&DAT_020b0cd4 + ((uint)(int)*(short *)(iVar9 + 0xa86) >> 5) * 4) &
           1 << ((int)*(short *)(iVar9 + 0xa86) & 0x1fU)) == 0) ||
         ((iVar6 = **(int **)(iVar9 + 8),
          (*(uint *)(iVar6 + *(int *)(iVar6 + 0x70) * 4 + 0x18) &
           ~*(uint *)(iVar6 + *(int *)(iVar6 + 0x74) * 4 + 0x18) & 0x8000) == 0 &&
          (iVar6 = (**(code **)(**(int **)(*(int *)(iVar9 + 0xc) + 4) + 0x130))(), iVar6 == 0)))) {
        if (**(short **)(iVar9 + 0x1c) <= *(short *)(iVar9 + 0xa84)) {
          FUN_02073ebc(3,1);
          FUN_02028384(*(undefined4 *)(*(int *)(iVar9 + 4) + 4),FUN_02157dc0);
        }
      }
      else {
        FUN_02073ebc(3,1);
        FUN_02028384(*(undefined4 *)(*(int *)(iVar9 + 4) + 4),FUN_02157dc0);
      }
      return;
    }
    iVar8 = iVar6 * 0x4dc;
    iVar7 = iVar9 + iVar8;
    if (*(char *)(iVar7 + 0x4e4) == '\0') {
      pbVar11 = *(byte **)(iVar7 + 0x36c);
      if (*(code **)(iVar7 + 0x1dc) == (code *)0x0) {
        uVar3 = (*(code *)(&PTR_FUN_0215c664)[*pbVar11])(pbVar11,iVar9,iVar6);
        while (*(int *)(iVar7 + 0x1dc) == 0 && uVar3 == 0) {
          *(uint *)(iVar7 + 0x36c) = *(int *)(iVar7 + 0x36c) + (uint)*(ushort *)(pbVar11 + 2);
          *(short *)(iVar7 + 0x48c) = *(short *)(iVar7 + 0x48c) + 1;
          if (*(short *)(*(int *)(iVar7 + 0x20) + 4) <= *(short *)(iVar7 + 0x48c)) {
            uVar3 = 1;
            *(undefined1 *)(iVar7 + 0x4e4) = 1;
            *(short *)(iVar9 + 0xa84) = *(short *)(iVar9 + 0xa84) + 1;
            break;
          }
          pbVar11 = *(byte **)(iVar7 + 0x36c);
          uVar3 = (*(code *)(&PTR_FUN_0215c664)[*pbVar11])(pbVar11,iVar9,iVar6);
        }
      }
      else {
        iVar2 = (**(code **)(iVar7 + 0x1dc))(pbVar11,iVar9,iVar6);
        if (iVar2 == 0) {
          *(undefined4 *)(iVar7 + 0x1dc) = 0;
        }
        uVar3 = (uint)(iVar2 != 0);
      }
      bVar12 = uVar3 == 0;
      if (bVar12) {
        uVar3 = *(uint *)(iVar7 + 0x1dc);
      }
      if (bVar12 && uVar3 == 0) {
        *(uint *)(iVar7 + 0x36c) =
             *(int *)(iVar7 + 0x36c) + (uint)*(ushort *)(*(int *)(iVar7 + 0x36c) + 2);
        *(short *)(iVar7 + 0x48c) = *(short *)(iVar7 + 0x48c) + 1;
        if (*(short *)(*(int *)(iVar7 + 0x20) + 4) <= *(short *)(iVar7 + 0x48c)) {
          *(undefined1 *)(iVar7 + 0x4e4) = 1;
          *(short *)(iVar9 + 0xa84) = *(short *)(iVar9 + 0xa84) + 1;
        }
      }
      if ((*(char *)(iVar7 + 0x4e5) != '\0') &&
         (iVar2 = (*(code *)(&DAT_0215c5e4)[iVar6])(), iVar2 != 0)) {
        *(undefined1 *)(iVar7 + 0x4e5) = 0;
      }
      if (*(char *)(iVar7 + 0x4f5) != '\0') {
        FUN_02159eac(iVar9 + 0x20 + iVar8);
        iVar2 = iVar9 + iVar8;
        uVar1 = FUN_02159584(*(undefined1 *)(iVar2 + 0x4f8));
        *(undefined2 *)(iVar2 + 0x490) = uVar1;
        uVar1 = FUN_02159584(*(undefined1 *)(iVar2 + 0x4f9));
        *(undefined2 *)(iVar2 + 0x492) = uVar1;
        *(short *)(iVar2 + 0x4f6) = *(short *)(iVar2 + 0x4f6) + -1;
        if (*(short *)(iVar2 + 0x4f6) < 1) {
          *(undefined2 *)(iVar7 + 0x492) = 0;
          *(undefined2 *)(iVar7 + 0x490) = 0;
          *(undefined1 *)(iVar7 + 0x4f5) = 0;
        }
      }
      iVar2 = 0;
      do {
        iVar4 = iVar2 * 0x1c + iVar7;
        iVar5 = *(int *)(iVar4 + 0x24);
        if (iVar5 == 0) {
          iVar4 = *(int *)(iVar4 + 0x28);
        }
        if (iVar5 != 0 || iVar4 != 0) {
          iVar10 = iVar7 + iVar2 * 0x1c;
          iVar4 = iVar9 + 0x24 + iVar8 + iVar2 * 0x1c;
          FUN_02158e64(iVar4 + 8,iVar4 + 0x14,iVar4 + 0x16,iVar4 + 0x18,iVar5,
                       *(undefined4 *)(iVar10 + 0x28),*(undefined1 *)(iVar10 + 0x3f));
          if (*(short *)(iVar10 + 0x3c) < 1) {
            *(int *)((uint)*(byte *)(iVar10 + 0x3e) * 0xc + iVar7 + 0x390) =
                 (int)*(short *)(iVar10 + 0x38) << 0xc;
            *(int *)((uint)*(byte *)(iVar10 + 0x3e) * 0xc + iVar7 + 0x394) =
                 (int)*(short *)(iVar10 + 0x3a) << 0xc;
            *(undefined4 *)(iVar10 + 0x24) = 0;
            *(undefined4 *)(iVar10 + 0x28) = 0;
          }
        }
        if (iVar2 < 4) {
          iVar4 = iVar7 + iVar2 * 0xc;
          if (*(int *)(iVar4 + 0x1ac) != 0) {
            iVar5 = iVar9 + 0x1ac + iVar8 + iVar2 * 0xc;
            FUN_02159db4(iVar5 + 6,iVar5 + 8,iVar5 + 4);
            if (*(short *)(iVar4 + 0x1b0) < 1) {
              *(undefined4 *)(iVar4 + 0x1ac) = 0;
            }
          }
        }
        iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
      } while (iVar2 < 0xe);
      iStack_2c = (int)*(short *)(iVar7 + 0x492) << 0xc;
      iStack_28 = (int)*(short *)(iVar7 + 0x490) << 0xc;
      FUN_0214d4c0(*(undefined4 *)(iVar7 + 0x368),&iStack_28,&iStack_2c);
    }
    iVar6 = (iVar6 + 1) * 0x10000 >> 0x10;
  } while( true );
}

