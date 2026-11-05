
void FUN_02081ddc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  puVar10 = *(undefined4 **)(param_1 + 0x48);
  uStack_28 = param_4;
  do {
    if (puVar10 == (undefined4 *)0x0) {
      for (puVar10 = *(undefined4 **)(param_1 + 0x48); puVar10 != (undefined4 *)0x0;
          puVar10 = (undefined4 *)*puVar10) {
        iVar11 = puVar10[2];
        iVar13 = *(int *)(*(int *)(iVar11 + 8) + 0x1c);
        iVar15 = *(int *)(*(int *)(iVar11 + 0xc) + 0x1c);
        iVar7 = *(int *)(iVar13 + 0xc);
        iVar4 = *(int *)(iVar15 + 0xc);
        *(uint *)(iVar7 + 0x40) = *(uint *)(iVar7 + 0x40) | 0x800;
        *(uint *)(*(int *)(iVar15 + 0xc) + 0x40) = *(uint *)(*(int *)(iVar15 + 0xc) + 0x40) | 0x800;
        iVar6 = (int)*(char *)(*(int *)(iVar15 + 0x10) + 4);
        iVar8 = (int)*(char *)(*(int *)(iVar15 + 0x10) + 5);
        uVar18 = *(uint *)(*(int *)(iVar13 + 0xc) + 0x44);
        iVar9 = iVar6 * 0x100;
        iVar17 = iVar8 * 0x100;
        if (((uVar18 & 0x200) != 0) && ((*(uint *)(*(int *)(iVar15 + 0xc) + 0x38) & 0x4000) != 0)) {
          iVar9 = iVar6 * 0x180;
        }
        if (((uVar18 & 0x100) != 0) && ((*(uint *)(*(int *)(iVar15 + 0xc) + 0x38) & 0x8000) != 0)) {
          iVar17 = iVar8 * 0x180;
        }
        if (((uVar18 & 0x20000) != 0) && ((*(uint *)(*(int *)(iVar15 + 0xc) + 0x38) & 0x4000) != 0))
        {
          iVar9 = iVar9 + iVar6 * -0x80;
        }
        if (((uVar18 & 0x10000) != 0) && ((*(uint *)(*(int *)(iVar15 + 0xc) + 0x38) & 0x8000) != 0))
        {
          iVar17 = iVar17 + iVar8 * -0x80;
        }
        *(int *)(iVar7 + 0xe8) = *(int *)(iVar7 + 0xe8) + (iVar9 >> 2);
        *(int *)(iVar7 + 0x130) = *(int *)(iVar7 + 0x130) + iVar17;
        *(uint *)(iVar7 + 0x150) = *(uint *)(iVar7 + 0x150) | *(uint *)(iVar15 + 0x14) & 0x3ffffff;
        *(uint *)(iVar7 + 0x154) = *(uint *)(iVar7 + 0x154) | *(uint *)(iVar15 + 0x18);
        *(uint *)(iVar4 + 0x158) = *(uint *)(iVar4 + 0x158) | *(uint *)(iVar13 + 0x14) & 0xffffff;
        *(uint *)(iVar4 + 0x15c) = *(uint *)(iVar4 + 0x15c) | *(uint *)(iVar13 + 0x18);
        cVar2 = *(char *)(*(int *)(iVar15 + 0x10) + 3);
        if (cVar2 != '\0') {
          if (cVar2 < '\x01') {
            if (*(char *)(iVar7 + 0x173) == '\0') {
              *(char *)(iVar7 + 0x173) = cVar2;
              *(ushort *)(iVar7 + 0x16a) = (ushort)*(undefined4 *)(iVar15 + 0x14) & 0xff;
            }
            else if (cVar2 < *(char *)(iVar7 + 0x173)) {
              *(char *)(iVar7 + 0x173) = cVar2;
              *(ushort *)(iVar7 + 0x16a) = (ushort)*(undefined4 *)(iVar15 + 0x14) & 0xff;
            }
          }
          else if (*(char *)(iVar7 + 0x172) == '\0') {
            *(char *)(iVar7 + 0x172) = cVar2;
            *(ushort *)(iVar7 + 0x168) = (ushort)*(undefined4 *)(iVar15 + 0x14) & 0xff;
          }
          else if (cVar2 < *(char *)(iVar7 + 0x172)) {
            *(char *)(iVar7 + 0x172) = cVar2;
            *(ushort *)(iVar7 + 0x168) = (ushort)*(undefined4 *)(iVar15 + 0x14) & 0xff;
          }
        }
        if ((((*(uint *)(iVar15 + 0x14) & 0x3000000) != 0) &&
            ((*(uint *)(iVar13 + 0x14) & 0x37f0) == 0)) &&
           ((*(uint *)(*(int *)(iVar13 + 0xc) + 0x40) & 0x4000000) == 0)) {
          FUN_02081ab0(param_1,iVar15,iVar11);
        }
        if (*(char *)(*(int *)(iVar15 + 0x10) + 0xe) != '\0') {
          iVar17 = *(int *)(*(int *)(iVar11 + 0xc) + 0x20);
          iVar9 = *(int *)(*(int *)(iVar11 + 8) + 0x20);
          FUN_02080d28(*(int *)(iVar11 + 8) + 0x3c + (uint)*(byte *)(iVar11 + 0x11) * 8,
                       *(int *)(iVar11 + 0xc) + 0x3c + (uint)*(byte *)(iVar11 + 0x12) * 8,
                       (int)*(short *)(iVar9 + 0x34),(int)*(short *)(iVar9 + 0x36),
                       (int)*(short *)(iVar17 + 0x34),(int)*(short *)(iVar17 + 0x36),&local_2c,
                       &local_30);
          iVar9 = *(int *)(iVar15 + 0x10);
          cVar2 = *(char *)(iVar9 + 0xf);
          cVar3 = *(char *)(iVar9 + 0xe);
          uVar5 = FUN_0206cf28(*(undefined4 *)(*(int *)(iVar15 + 0xc) + 0x30));
          func_0x02153ce8(*(undefined4 *)(*(int *)(iVar15 + 0xc) + 0x6c),(int)cVar3,(int)cVar2,
                          local_2c,local_30,uVar5,*(undefined1 *)(iVar9 + 0x10),
                          *(undefined1 *)(iVar9 + 0x11),0);
        }
        if ((*(uint *)(iVar15 + 0x18) & 1) != 0) {
          *(byte *)(*(int *)(iVar11 + 0xc) + 0x18) = *(byte *)(*(int *)(iVar11 + 0xc) + 0x18) | 2;
        }
        bVar1 = *(byte *)(*(int *)(iVar15 + 0x10) + 1);
        if ((*(ushort *)(iVar7 + 0x16c) < (ushort)bVar1) &&
           (*(ushort *)(iVar7 + 0x16c) = (ushort)bVar1, *(short *)(iVar7 + 0x16c) != 0)) {
          *(uint *)(*(int *)(iVar13 + 0xc) + 0x40) = *(uint *)(*(int *)(iVar13 + 0xc) + 0x40) | 0x10
          ;
        }
        iVar9 = FUN_0206cf28(*(undefined4 *)(*(int *)(iVar15 + 0xc) + 0x30));
        iVar17 = *(int *)(iVar13 + 0xc);
        if (iVar9 == 0) {
          uVar18 = *(uint *)(iVar17 + 0x40) | 0x20;
        }
        else {
          uVar18 = *(uint *)(iVar17 + 0x40) & 0xffffffdf;
        }
        *(uint *)(iVar17 + 0x40) = uVar18;
      }
      return;
    }
    puVar12 = (undefined4 *)*puVar10;
    iVar9 = puVar10[2];
    for (puVar14 = *(undefined4 **)(param_1 + 0x48); puVar14 != (undefined4 *)0x0;
        puVar14 = (undefined4 *)*puVar14) {
      puVar16 = (undefined4 *)*puVar14;
      if ((iVar9 != puVar14[2]) && (*(int *)(iVar9 + 0xc) == *(int *)(puVar14[2] + 0xc))) {
        uVar18 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
        if ((uVar18 >> 4 & 1) != 0) {
          FUN_02037c24(param_1 + 0x48,puVar10);
          puVar10[2] = 0;
          FUN_02037b98(param_1 + 0xd8,puVar10);
          break;
        }
        if (puVar14 == puVar12) {
          puVar12 = puVar16;
        }
        FUN_02037c24(param_1 + 0x48,puVar14);
        puVar14[2] = 0;
        FUN_02037b98(param_1 + 0xd8,puVar14);
      }
    }
    puVar10 = puVar12;
  } while( true );
}

