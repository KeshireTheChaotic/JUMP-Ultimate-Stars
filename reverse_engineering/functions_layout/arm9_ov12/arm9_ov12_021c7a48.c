
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-CLASS ALTextImp_021d4c54::vfunc_07 [class-virtual] slot 7 of vtable 021d4c54 (own slot, not
   inherited) */

void ALTextImp_021d4c54::vfunc_07
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  short local_74;
  short local_72;
  short local_70;
  short local_6e;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [12];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  uStack_28 = param_4;
  FUN_021c6f9c(&local_38);
  iVar10 = *(int *)(param_1 + 0x5c);
  if (iVar10 != 0) {
    if ((*(int *)(param_1 + 0x4c) == 0) ||
       (uVar8 = *(uint *)(*(int *)(*(int *)(param_1 + 0x4c) + 4) + 4), iVar2 = FUN_021c7448(param_1)
       , uVar8 < (uint)(iVar10 * iVar2))) {
      if (*(uint *)(param_1 + 0x108) < *(uint *)(param_1 + 0x5c)) {
        *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x5c) << 1;
      }
      if (*(int *)(param_1 + 0x4c) == 0) {
        iVar10 = FUN_021c7448(param_1);
        uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0x18))();
        uVar3 = FUN_020391e0(*(int *)(param_1 + 0x108) * iVar10,1,uVar3,0,0,0);
        *(undefined4 *)(param_1 + 0x4c) = uVar3;
      }
      else {
        iVar10 = FUN_021c7448(param_1);
        piVar4 = *(int **)(*(int *)(param_1 + 0x4c) + 4);
        (**(code **)(*piVar4 + 0x44))(piVar4,*(int *)(param_1 + 0x108) * iVar10);
      }
    }
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x54) + 0x18))();
    FUN_020196c4(param_1 + 0x14,piVar4,0);
    (**(code **)(*piVar4 + 0x34))(piVar4,0);
    piVar5 = (int *)FUN_021c7f84(param_1 + 0x14);
    (**(code **)(*piVar5 + 0x18))();
    iVar10 = FUN_021c7f84(param_1 + 0x14);
    if (0x10 < *(ushort *)(iVar10 + 8)) {
      _DAT_040004ac = *(int *)(iVar10 + 0x20) + (*(byte *)(param_1 + 0x173) + 1) * 0x20 >> 4;
    }
    local_34 = 0;
    local_38 = 0;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x4c) + 4) + 0x48))();
    piVar5 = *(int **)(*(int *)(param_1 + 0x4c) + 4);
    (**(code **)(*piVar5 + 0x50))(piVar5,5);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x4c) + 4) + 0xc))();
    uVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
    uVar6 = (**(code **)(**(int **)(param_1 + 0x20) + 0x24))();
    iVar10 = (**(code **)(**(int **)(*(int *)(param_1 + 0x38) + 0x50) + 0x4c))();
    iVar7 = *(int *)(iVar10 + 0x10);
    iVar12 = *(int *)(iVar10 + 0x14);
    iVar9 = *(int *)(*(int *)(param_1 + 0x4c) + 4);
    FUN_020661a8(iVar9 + 0x3c,*(ushort *)(param_1 + 0x24) & 0x7fff);
    iVar10 = (**(code **)(*piVar4 + 0x20))();
    iVar2 = (**(code **)(*piVar4 + 0x24))();
    uVar8 = 0;
    if (*(int *)(param_1 + 0x5c) != 0) {
      for (; uVar8 < *(uint *)(param_1 + 0x5c); uVar8 = uVar8 + 1) {
        iVar11 = *(int *)(param_1 + 0x58);
        if (*(short *)(iVar11 + uVar8 * 8) == -1) {
          uVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0x1c))
                            (*(int **)(param_1 + 0x54),*(undefined2 *)(iVar11 + uVar8 * 8 + 2));
          *(undefined2 *)(iVar11 + uVar8 * 8) = uVar1;
        }
        (**(code **)(**(int **)(param_1 + 0x54) + 0x40))
                  (*(int **)(param_1 + 0x54),&local_74,
                   *(undefined2 *)(*(int *)(param_1 + 0x58) + uVar8 * 8));
        local_38 = iVar7 + (uint)*(ushort *)(*(int *)(param_1 + 0x58) + uVar8 * 8 + 4) * 0x1000;
        local_30 = local_38 + local_70 * 0x1000;
        local_34 = iVar12 + (uint)*(ushort *)(*(int *)(param_1 + 0x58) + uVar8 * 8 + 6) * 0x1000;
        local_2c = local_34 + local_6e * 0x1000;
        if ((-1 < local_2c) && (-1 < local_30)) {
          bVar14 = SBORROW4(local_34,0xc0000);
          iVar11 = local_34 + -0xc0000;
          if (local_34 < 0xc0000) {
            bVar14 = SBORROW4(local_38,0x100000);
            iVar11 = local_38 + -0x100000;
          }
          if (iVar11 < 0 != bVar14) {
            FUN_021c6f9c(&local_48);
            iVar13 = (int)local_74;
            local_48 = FUN_0200d12c(iVar13 << 0xc,uVar3);
            iVar11 = (int)local_72;
            local_44 = FUN_0200d12c(iVar11 << 0xc,uVar6);
            local_40 = FUN_0200d12c((iVar13 + local_70) * 0x1000,uVar3);
            local_3c = FUN_0200d12c((iVar11 + local_6e) * 0x1000,uVar6);
            FUN_02066178(iVar9 + 0x3c,iVar10 * local_48,iVar2 * local_44);
            FUN_02066124(iVar9 + 0x3c,(local_38 << 10) >> 0x10,(local_34 << 10) >> 0x10);
            FUN_02066178(iVar9 + 0x3c,iVar10 * local_40,iVar2 * local_44);
            FUN_02066124(iVar9 + 0x3c,(local_30 << 10) >> 0x10,(local_34 << 10) >> 0x10);
            FUN_02066178(iVar9 + 0x3c,iVar10 * local_40,iVar2 * local_3c);
            FUN_02066124(iVar9 + 0x3c,(local_30 << 10) >> 0x10,(local_2c << 10) >> 0x10);
            FUN_02066178(iVar9 + 0x3c,iVar10 * local_48,iVar2 * local_3c);
            FUN_02066124(iVar9 + 0x3c,(local_38 << 10) >> 0x10,(local_2c << 10) >> 0x10);
          }
        }
      }
    }
    FUN_0200f69c(auStack_54,0xc);
    local_60 = DAT_021d029c;
    uStack_5c = DAT_021d02a0;
    uStack_58 = DAT_021d02a4;
    local_6c = DAT_021d02a8;
    uStack_68 = DAT_021d02ac;
    uStack_64 = DAT_021d02b0;
    FUN_02066608(auStack_54,&local_60,&local_6c,1,0);
    _DAT_04000470 = *(int *)(*(int *)(param_1 + 0x34) + 0x4bc) << 8;
    _DAT_040004c0 = 0x4210ffff;
    _DAT_040004c4 = 0x4210;
    _DAT_040004a4 = 0x1f00c0;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x4c) + 4) + 0x4c))();
    iVar10 = *(int *)(param_1 + 0x4c);
    uVar3 = (**(code **)(**(int **)(iVar10 + 4) + 0x78))();
    piVar4 = *(int **)(iVar10 + 4);
    (**(code **)(*piVar4 + 0x1c))(piVar4,uVar3);
    *(int *)(*(int *)(param_1 + 0x34) + 0x4bc) = *(int *)(*(int *)(param_1 + 0x34) + 0x4bc) + 1;
    ALWidgetImp_020958dc::vfunc_07(param_1);
  }
  return;
}

