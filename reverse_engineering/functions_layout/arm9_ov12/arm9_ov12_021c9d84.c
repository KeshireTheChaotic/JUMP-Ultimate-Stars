
/* JUS-CLASS jus_Class_021d4b9c::vfunc_07 [class-virtual] slot 7 of vtable 021d4b9c (own slot, not
   inherited) */

void jus_Class_021d4b9c::vfunc_07(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  ushort *puVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  int local_44;
  int local_28;
  
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  (**(code **)(**(int **)(param_1 + 0x20) + 0x34))(*(int **)(param_1 + 0x20),0);
  iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x38) + 0x50) + 0x4c))();
  piVar14 = *(int **)(param_1 + 0x34);
  uVar6 = (**(code **)(*piVar14 + 0x80))();
  uVar7 = (**(code **)(*piVar14 + 0x84))();
  iVar8 = (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 0x30) + 100))();
  iVar8 = *(int *)(iVar8 + 0x10);
  uVar1 = *(ushort *)(param_1 + 0x24);
  uVar15 = (uint)uVar1;
  if (*(char *)(param_1 + 0x175) == '\0') {
    iVar18 = 8;
    local_44 = 0x40;
  }
  else {
    iVar18 = 0x10;
    local_44 = 0x80;
  }
  uVar9 = *(uint *)(param_1 + 0x5c);
  iVar10 = (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 0x30) + 100))();
  iVar16 = 0;
  if (*(short *)(iVar10 + 8) != 0x10) {
    iVar16 = 0x10;
  }
  if ((uVar1 & 1) == 0) {
    uVar17 = 0;
    do {
      uVar13 = (uint)*(ushort *)
                      ((uVar17 + (uint)*(byte *)(param_1 + 0x173) * 0x10) * 2 + iVar8 + iVar16 * 2);
      uVar1 = FUN_0200d338(((int)uVar13 >> 10 & 0x1fU) * ((int)uVar15 >> 10 & 0x1fU),0xff);
      uVar2 = FUN_0200d338((uVar13 & 0x1f) * (uVar15 & 0x1f),0xff);
      uVar3 = FUN_0200d338(((int)uVar13 >> 5 & 0x1fU) * ((int)uVar15 >> 5 & 0x1fU),0xff);
      uVar13 = uVar17 + 1;
      (&DAT_021d52ac)[uVar17] = uVar2 & 0x1f | (uVar3 & 0x1f) << 5 | (uVar1 & 0x1f) << 10 | 0x8000;
      uVar17 = uVar13;
    } while (uVar13 < 0x10);
    uVar15 = FUN_0204572c(uVar7,&DAT_021d52ac,0x20,&DAT_021d52ac,0);
  }
  else {
    uVar11 = (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 0x30) + 100))();
    uVar15 = FUN_0204572c(uVar7,iVar8 + (iVar16 + (uint)*(byte *)(param_1 + 0x173) * 0x10) * 2,0x20,
                          uVar11,(uint)*(byte *)(param_1 + 0x173) + iVar16);
  }
  uVar17 = 0;
  do {
    if (uVar9 <= uVar17) {
      ALWidgetImp_020958dc::vfunc_07(param_1);
      return;
    }
    iVar8 = *(int *)(param_1 + 0x58);
    if (*(short *)(iVar8 + uVar17 * 8) == -1) {
      uVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0x1c))
                        (*(int **)(param_1 + 0x54),*(undefined2 *)(iVar8 + uVar17 * 8 + 2));
      *(undefined2 *)(iVar8 + uVar17 * 8) = uVar4;
    }
    iVar8 = *(int *)(param_1 + 0x58) + uVar17 * 8;
    iVar10 = (uint)*(ushort *)(iVar8 + 6) +
             ((int)(*(int *)(iVar5 + 0x14) + ((uint)(*(int *)(iVar5 + 0x14) >> 0xb) >> 0x14)) >> 0xc
             );
    iVar8 = (uint)*(ushort *)(iVar8 + 4) +
            ((int)(*(int *)(iVar5 + 0x10) + ((uint)(*(int *)(iVar5 + 0x10) >> 0xb) >> 0x14)) >> 0xc)
    ;
    if ((*(byte *)(param_1 + 0x10) & 0x7f) >> 6 == 0) {
LAB_021ca034:
      puVar12 = (ushort *)FUN_02041204(piVar14 + 0x129);
      *puVar12 = (ushort)iVar10 & 0xff;
      puVar12[1] = (ushort)iVar8 & 0x1ff | (ushort)*(byte *)(param_1 + 0x175) << 0xe;
      FUN_021ae0ac(&local_28,param_1);
      *(uint *)(puVar12 + 2) =
           *(uint *)(puVar12 + 2) & 0xffff03ff |
           ((int)(local_28 + ((uint)(local_28 >> 0xb) >> 0x14)) >> 0x12 & 3U) << 10 |
           (uVar15 >> 5 & 0xf) << 0xc;
      uVar13 = FUN_02045570(uVar6,local_44 *
                                  (uint)*(ushort *)(*(int *)(param_1 + 0x58) + uVar17 * 8) +
                                  *(int *)(*(int *)(param_1 + 0x54) + 0x74));
      *(uint *)(puVar12 + 2) = *(uint *)(puVar12 + 2) & 0xfffffc00 | uVar13 >> 6 & 0x3ff;
    }
    else {
      bVar19 = SBORROW4(iVar8,0x100);
      iVar16 = iVar8 + -0x100;
      if (iVar8 < 0x100) {
        bVar19 = SBORROW4(iVar10,0xc0);
        iVar16 = iVar10 + -0xc0;
      }
      if (((iVar16 < 0 != bVar19) && (iVar8 + iVar18 != 0)) && (iVar10 + iVar18 != 0))
      goto LAB_021ca034;
    }
    uVar17 = uVar17 + 1;
  } while( true );
}

