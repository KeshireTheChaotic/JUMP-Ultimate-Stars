
/* JUS-CLASS ALTextDS_021d4a2c::vfunc_07 [class-virtual] slot 7 of vtable 021d4a2c (own slot, not
   inherited) */

void ALTextDS_021d4a2c::vfunc_07(int param_1)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  int local_3c;
  int local_38;
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];
  
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  uVar4 = (**(code **)(**(int **)(param_1 + 0x178) + 100))();
  uVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 0x30) + 100))();
  bVar2 = *(byte *)(param_1 + 0x173);
  bVar17 = *(int *)(param_1 + 0x194) != 0;
  if (bVar17) {
    bVar2 = *(byte *)(param_1 + 0x198);
  }
  uVar6 = uVar5;
  if (bVar17) {
    uVar6 = (uint)*(byte *)(param_1 + 0x199);
  }
  uVar14 = 1;
  uVar16 = 0;
  if (bVar17) {
    uVar14 = (uVar6 - bVar2) + 1;
  }
  for (; uVar16 < uVar14; uVar16 = uVar16 + 1) {
    iVar8 = (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 0x30) + 0x18))();
    if (iVar8 != 1) {
      uVar6 = 0;
      do {
        FUN_021c8ae8(uVar4,uVar6 + uVar16 * 0x10,
                     *(undefined2 *)
                      (*(int *)(uVar5 + 0x10) + (bVar2 + uVar16) * 0x20 + uVar6 * 2 + 0x20));
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x10);
    }
    if (*(char *)(param_1 + 0x172) == '\0') {
      iVar8 = (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 0x30) + 0x18))();
      if (iVar8 == 1) {
        iVar8 = (**(code **)(**(int **)(param_1 + 0x178) + 100))();
        sVar3 = *(short *)(param_1 + 0x170);
        if (sVar3 != *(short *)(*(int *)(iVar8 + 0x10) + 2)) {
          uVar7 = (**(code **)(**(int **)(param_1 + 0x178) + 100))();
          FUN_021c8ae8(uVar7,uVar16 * 0x10 + 1,sVar3);
        }
        iVar8 = (**(code **)(**(int **)(param_1 + 0x178) + 100))();
        sVar3 = *(short *)(param_1 + 0x24);
        if (sVar3 != *(short *)(*(int *)(iVar8 + 0x10) + 4)) {
          uVar7 = (**(code **)(**(int **)(param_1 + 0x178) + 100))();
          FUN_021c8ae8(uVar7,uVar16 * 0x10 + 2,sVar3);
        }
      }
      else {
        iVar8 = (**(code **)(**(int **)(param_1 + 0x178) + 100))();
        sVar3 = *(short *)(param_1 + 0x170);
        if (sVar3 != *(short *)(*(int *)(iVar8 + 0x10) + 2)) {
          uVar7 = (**(code **)(**(int **)(param_1 + 0x178) + 100))();
          FUN_021c8ae8(uVar7,uVar16 * 0x10 + 1,sVar3);
        }
      }
    }
    else {
      iVar8 = (**(code **)(**(int **)(param_1 + 0x178) + 100))();
      sVar3 = *(short *)(param_1 + 0x24);
      if (sVar3 != *(short *)(*(int *)(iVar8 + 0x10) + 2)) {
        uVar7 = (**(code **)(**(int **)(param_1 + 0x178) + 100))();
        FUN_021c8ae8(uVar7,uVar16 * 0x10 + 1,sVar3);
      }
    }
  }
  iVar8 = (**(code **)(**(int **)(param_1 + 0x178) + 100))();
  *(short *)(iVar8 + 0xc) = (short)(uVar14 << 4) + -1;
  piVar12 = *(int **)(param_1 + 0x34);
  (**(code **)(*piVar12 + 0x7c))();
  (**(code **)(**(int **)(param_1 + 0x17c) + 0x34))(*(int **)(param_1 + 0x17c),0);
  if (*(byte *)(piVar12 + 0x256) < 2) {
    iVar9 = (**(code **)(**(int **)(*(int *)(param_1 + 0x38) + 0x50) + 0x4c))();
    uVar6 = *(uint *)(iVar9 + 0x10) & 0xfffff000;
    uVar5 = *(uint *)(iVar9 + 0x14) & 0xfffff000;
    iVar10 = uVar6 + ((uint)((int)uVar6 >> 0xb) >> 0x14);
    iVar11 = uVar5 + ((uint)((int)uVar5 >> 0xb) >> 0x14);
    iVar8 = iVar10 >> 0xc;
    iVar1 = iVar11 >> 0xc;
    iVar15 = piVar12[0x246] + iVar8;
    iVar13 = piVar12[0x247] + iVar1;
    iVar8 = (int)(iVar8 + ((uint)(iVar10 >> 0xe) >> 0x1d)) >> 3;
    iVar1 = (int)(iVar1 + ((uint)(iVar11 >> 0xe) >> 0x1d)) >> 3;
    iVar10 = (int)(iVar15 + ((uint)(iVar15 >> 2) >> 0x1d)) >> 3;
    iVar11 = (int)(iVar13 + ((uint)(iVar13 >> 2) >> 0x1d)) >> 3;
    if ((char)piVar12[0x255] != '\0') {
      *(undefined1 *)(piVar12 + 0x255) = 0;
      local_3c = ((int)(*(int *)(iVar9 + 0x14) + ((uint)(*(int *)(iVar9 + 0x14) >> 0xb) >> 0x14)) >>
                  0xc & 7U) << 0xc;
      local_38 = ((int)(*(int *)(iVar9 + 0x10) + ((uint)(*(int *)(iVar9 + 0x10) >> 0xb) >> 0x14)) >>
                  0xc & 7U) << 0xc;
      iVar9 = FUN_021c8b00(piVar12[0x246],&local_38);
      if ((iVar9 != 0) || (iVar9 = FUN_021c8b00(piVar12[0x247],&local_3c), iVar9 != 0)) {
        piVar12[0x246] = (int)(local_38 + ((uint)(local_38 >> 0xb) >> 0x14)) >> 0xc;
        piVar12[0x247] = (int)(local_3c + ((uint)(local_3c >> 0xb) >> 0x14)) >> 0xc;
        piVar12[0x24a] = local_38;
        piVar12[0x24b] = local_3c;
        *(undefined1 *)(piVar12 + 0x263) = 1;
      }
    }
    iVar9 = *(int *)(param_1 + 0x17c);
    if (*(int *)(param_1 + 0x1b4) != *(int *)(iVar9 + 0x54)) {
      *(undefined1 *)(param_1 + 0x1a5) = 1;
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(iVar9 + 0x54);
    }
    *(short *)(param_1 + 0x180) =
         (short)((*(uint *)(iVar9 + 0x54) >> 5) << 0xc) + (short)(*(uint *)(iVar9 + 0x50) >> 5);
    *(undefined2 *)(param_1 + 0x188) = 0x20;
    iVar13 = piVar12[0x250];
    iVar9 = (*(code *)piVar12[0x252])();
    *(uint *)(param_1 + 0x184) =
         iVar9 + (((iVar10 + 2) - iVar13) * iVar13 & 0xfffffffeU) +
         (uint)*(ushort *)(param_1 + 0x188) * iVar11 * 2;
    *(uint *)(param_1 + 0x19c) = *(int *)(param_1 + 0xfc) + 7U >> 3;
    *(uint *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x100) + 7U >> 3;
    if (iVar11 < 0) {
      *(short *)(param_1 + 0x180) =
           *(short *)(param_1 + 0x180) - (short)iVar11 * (short)*(undefined4 *)(param_1 + 0x19c);
      *(uint *)(param_1 + 0x184) =
           *(int *)(param_1 + 0x184) + iVar11 * (uint)*(ushort *)(param_1 + 0x188) * -2;
      *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + iVar11;
      iVar11 = 0;
    }
    if (-1 < *(int *)(param_1 + 0x1a0)) {
      if (*(char *)(param_1 + 0x1a4) == '\0') {
        iVar9 = param_1 + 0x100;
        bVar17 = iVar10 == *(short *)(param_1 + 0x1ac);
        if (bVar17) {
          iVar9 = (int)*(short *)(param_1 + 0x1ae);
        }
        if (!bVar17 || iVar11 != iVar9) {
          FUN_021b85ec(auStack_2c,iVar8,iVar1,iVar8 + (*(uint *)(param_1 + 0xfc) >> 3),
                       iVar1 + (*(uint *)(param_1 + 0x100) >> 3));
          FUN_0203d870(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x1b0),auStack_2c);
        }
      }
      *(short *)(param_1 + 0x1a8) = (short)iVar8;
      *(short *)(param_1 + 0x1aa) = (short)iVar1;
      *(short *)(param_1 + 0x1ac) = (short)iVar10;
      *(short *)(param_1 + 0x1ae) = (short)iVar11;
      FUN_021b85ec(auStack_34,iVar10,iVar11,iVar10 + (*(uint *)(param_1 + 0xfc) >> 3),
                   iVar11 + (*(uint *)(param_1 + 0x100) >> 3));
      if (*(char *)(param_1 + 0x1a4) == '\0') {
        if (*(char *)(param_1 + 0x1a5) != '\0') {
          FUN_0203d838(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x1b0),auStack_34);
          *(undefined1 *)(param_1 + 0x1a5) = 0;
        }
      }
      else {
        if ((*(int *)(param_1 + 0x1b0) == 0) &&
           (iVar8 = *(int *)(param_1 + 0x34), *(int *)(iVar8 + 0x940) != 1)) {
          if (*(int *)(param_1 + 0x194) == 0) {
            uVar4 = FUN_0203d6e8(iVar8,param_1,&LAB_021c9524);
            *(undefined4 *)(param_1 + 0x1b0) = uVar4;
          }
          else {
            uVar4 = FUN_0203d6e8(iVar8,param_1,FUN_021c9630);
            *(undefined4 *)(param_1 + 0x1b0) = uVar4;
          }
        }
        FUN_0203d784(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x1b0),auStack_34);
        FUN_0203d838(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x1b0),auStack_34);
        *(undefined1 *)(param_1 + 0x1a4) = 0;
        *(undefined1 *)(param_1 + 0x1a5) = 0;
      }
      ALWidgetImp_020958dc::vfunc_07(param_1);
    }
  }
  else if ((char)piVar12[0x255] != '\0') {
    *(undefined1 *)(piVar12 + 0x255) = 0;
  }
  return;
}

