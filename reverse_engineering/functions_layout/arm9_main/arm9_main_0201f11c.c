
/* JUS-CLASS jus_Class_0209cac0::vfunc_53 [class-virtual] slot 53 of vtable 0209cac0 (own slot, not
   inherited) */

void jus_Class_0209cac0::vfunc_53(int *param_1,undefined4 param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  short *psVar13;
  byte *pbVar14;
  int *piVar15;
  int iVar16;
  int *local_44;
  int *local_40;
  uint local_3c;
  int *local_2c;
  int *local_28;
  
  *(short *)((int)param_1 + 0x2a) = (short)param_2;
  (**(code **)(*param_1 + 0xd0))();
  iVar3 = FUN_0201e6d4();
  uVar4 = (**(code **)(*param_1 + 0xd0))();
  iVar5 = FUN_02020590(uVar4,param_2);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(iVar5 + 0x24);
  local_3c = 0;
  *(byte *)((int)param_1 + 0x32) =
       *(byte *)((int)param_1 + 0x32) & 0xf9 | ((*(byte *)(iVar5 + 0x27) & 1) != 0) << 1;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  for (iVar6 = 0; iVar6 < (int)(uint)*(byte *)(iVar3 + 6); iVar6 = iVar6 + 1) {
    iVar7 = iVar5 + iVar6 * 2;
    if (*(byte *)(iVar3 + 4) < 2) {
      uVar8 = (uint)*(ushort *)(iVar7 + 0x28);
    }
    else {
      uVar8 = local_3c + *(ushort *)(iVar7 + 0x28);
      local_3c = uVar8;
    }
    pbVar14 = (byte *)(iVar5 + uVar8);
    iVar7 = *(int *)(param_1[0x17] + iVar6 * 4);
    if (iVar7 != 0) {
      piVar15 = *(int **)(iVar7 + 0x1c);
      iVar16 = 0;
      *(undefined2 *)(iVar7 + 0x52) = 0;
      if (*(short *)(iVar5 + iVar6 * 2 + 0x28) != 0) {
        for (; iVar16 < (int)(uint)*pbVar14; iVar16 = iVar16 + 1) {
          uVar8 = (uint)pbVar14[iVar16 + 2];
          if (*(int *)(param_1[0x18] + uVar8 * 4) == 0) {
            uVar4 = (**(code **)(*param_1 + 0xd0))();
            uVar4 = FUN_02020514(uVar4,uVar8);
            uVar10 = FUN_020326b0();
            local_40 = (int *)(**(code **)(*piVar15 + 0x40))(piVar15,uVar4,&local_28,uVar10);
            *(int **)(param_1[0x18] + uVar8 * 4) = local_40;
            *(int **)(param_1[0x19] + uVar8 * 4) = local_28;
          }
          else {
            iVar9 = (**(code **)(**(int **)(param_1[0x19] + uVar8 * 4) + 0x30))();
            if (iVar9 == 0) {
              local_28 = piVar15;
            }
            else {
              piVar11 = *(int **)(param_1[0x19] + uVar8 * 4);
              local_28 = (int *)(**(code **)(*piVar11 + 0x54))(piVar11,piVar15);
            }
            local_40 = *(int **)(param_1[0x18] + uVar8 * 4);
          }
          if (local_40 != (int *)0x0) {
            uVar4 = FUN_0201f6bc(pbVar14,iVar16);
            (**(code **)(*local_40 + 0x24))(local_40,local_28,uVar4);
          }
        }
        *(undefined4 *)(iVar7 + 0x48) = 0;
        if ((*(int *)(iVar7 + 0x4c) != 0) &&
           (*(ushort *)(iVar7 + 0x50) < (ushort)*(byte *)(iVar3 + 8))) {
          FUN_0200f18c(*(int *)(iVar7 + 0x4c),0x10,8,&DAT_0201f6f0);
          *(undefined4 *)(iVar7 + 0x4c) = 0;
        }
        if (*(int *)(iVar7 + 0x4c) == 0) {
          bVar1 = *(byte *)(iVar3 + 8);
          iVar16 = jus_AllocDebug((uint)bVar1 * 0x10 + 8);
          uVar4 = 0;
          if (iVar16 != 0) {
            uVar4 = FUN_0200ef34(iVar16,(uint)bVar1,0x10,8,0,0);
          }
          *(undefined4 *)(iVar7 + 0x4c) = uVar4;
          *(ushort *)(iVar7 + 0x50) = (ushort)*(byte *)(iVar3 + 8);
        }
        *(undefined2 *)(iVar7 + 0x52) = 0;
        for (iVar16 = 0; iVar16 < (int)(uint)pbVar14[1]; iVar16 = iVar16 + 1) {
          sVar2 = 0;
          uVar8 = (uint)pbVar14[iVar16 + (uint)*pbVar14 + 2];
          if ((pbVar14[iVar16 + (uint)*pbVar14 + 2] & 0x80) != 0) {
            iVar9 = FUN_0201f6f4(pbVar14,iVar16);
            sVar2 = *(short *)(iVar9 + -2);
            uVar8 = uVar8 & 0x7f;
          }
          if (uVar8 == (int)(short)param_1[0x1b]) {
            uVar4 = FUN_0201f6f4(pbVar14,iVar16);
            *(undefined4 *)(iVar7 + 0x48) = uVar4;
            *(undefined4 *)(*(int *)(iVar7 + 0x4c) + (uint)*(ushort *)(iVar7 + 0x52) * 0x10 + 4) = 0
            ;
            *(int **)(*(int *)(iVar7 + 0x4c) + (uint)*(ushort *)(iVar7 + 0x52) * 0x10) = piVar15;
            uVar4 = FUN_0201f6f4(pbVar14,iVar16);
            *(undefined4 *)(*(int *)(iVar7 + 0x4c) + (uint)*(ushort *)(iVar7 + 0x52) * 0x10 + 0xc) =
                 uVar4;
            *(code **)(*(int *)(iVar7 + 0x4c) + (uint)*(ushort *)(iVar7 + 0x52) * 0x10 + 8) =
                 FUN_0201e4c8;
            uVar4 = FUN_02011b38(piVar15);
            FUN_0201e468(uVar4,*(undefined4 *)(iVar7 + 0x48));
            *(short *)(iVar7 + 0x52) = *(short *)(iVar7 + 0x52) + 1;
          }
          else {
            local_44 = *(int **)(param_1[0x18] + uVar8 * 4);
            if (local_44 == (int *)0x0) {
              uVar4 = (**(code **)(*param_1 + 0xd0))();
              uVar4 = FUN_02020514(uVar4,uVar8);
              uVar10 = FUN_020326b0();
              local_44 = (int *)(**(code **)(*piVar15 + 0x40))(piVar15,uVar4,&local_2c,uVar10);
              *(int **)(param_1[0x18] + uVar8 * 4) = local_44;
              *(int **)(param_1[0x19] + uVar8 * 4) = local_2c;
            }
            else {
              iVar9 = (**(code **)(**(int **)(param_1[0x19] + uVar8 * 4) + 0x30))();
              if (iVar9 == 0) {
                local_2c = piVar15;
              }
              else {
                piVar11 = *(int **)(param_1[0x19] + uVar8 * 4);
                local_2c = (int *)(**(code **)(*piVar11 + 0x54))(piVar11,piVar15);
              }
            }
            if (local_44 != (int *)0x0) {
              *(int **)(*(int *)(iVar7 + 0x4c) + (uint)*(ushort *)(iVar7 + 0x52) * 0x10 + 4) =
                   local_44;
              *(int **)(*(int *)(iVar7 + 0x4c) + (uint)*(ushort *)(iVar7 + 0x52) * 0x10) = local_2c;
              uVar4 = FUN_0201f6f4(pbVar14,iVar16);
              *(undefined4 *)(*(int *)(iVar7 + 0x4c) + (uint)*(ushort *)(iVar7 + 0x52) * 0x10 + 0xc)
                   = uVar4;
              if (sVar2 == 0) {
                iVar9 = (**(code **)(*local_44 + 0x78))();
                if (iVar9 == 0) {
                  *(code **)(*(int *)(iVar7 + 0x4c) + (uint)*(ushort *)(iVar7 + 0x52) * 0x10 + 8) =
                       FUN_0201e1e4;
                }
                else {
                  uVar4 = (**(code **)(*local_44 + 0x78))();
                  *(undefined4 *)
                   (*(int *)(iVar7 + 0x4c) + (uint)*(ushort *)(iVar7 + 0x52) * 0x10 + 8) = uVar4;
                }
              }
              else {
                puVar12 = (undefined4 *)(**(code **)(*local_44 + 0x90))(local_44,sVar2);
                *(undefined4 *)(*(int *)(iVar7 + 0x4c) + (uint)*(ushort *)(iVar7 + 0x52) * 0x10 + 8)
                     = *puVar12;
              }
              if (uVar8 == (int)*(short *)((int)param_1 + 0x6a)) {
                iVar9 = FUN_0201f6f4(pbVar14,iVar16);
                param_1[0x15] = iVar9;
                param_1[0x16] = iVar9;
                sVar2 = 0;
                *(code **)(*(int *)(iVar7 + 0x4c) + (uint)*(ushort *)(iVar7 + 0x52) * 0x10 + 8) =
                     FUN_0201e44c;
                for (psVar13 = (short *)param_1[0x15]; *psVar13 != -1; psVar13 = psVar13 + 2) {
                  sVar2 = sVar2 + 1;
                }
                *(short *)(param_1 + 0x1a) = sVar2;
              }
              *(short *)(iVar7 + 0x52) = *(short *)(iVar7 + 0x52) + 1;
            }
          }
        }
      }
    }
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  (**(code **)(*param_1 + 0xcc))();
  return;
}

