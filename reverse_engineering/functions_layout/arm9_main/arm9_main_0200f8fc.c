
/* JUS-CLASS jus_Class_02095ea0::vfunc_24 [class-virtual] slot 24 of vtable 02095ea0 (own slot, not
   inherited) */

void jus_Class_02095ea0::vfunc_24(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int local_20;
  
  if (param_1[7] == 0) {
    param_1[10] = 0;
  }
  else {
    iVar2 = (**(code **)(*(int *)param_1[7] + 0x2c))((int *)param_1[7],0);
    piVar3 = (int *)param_1[7];
    if ((*(byte *)(iVar2 + 5) & 2) == 0) {
      iVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,0);
      param_1[10] = (uint)*(ushort *)(iVar2 + 6);
    }
    else {
      iVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,0);
      uVar4 = (uint)*(ushort *)(iVar2 + 6);
      for (uVar13 = 0; uVar13 < uVar4; uVar13 = uVar13 + 1) {
        uVar5 = (**(code **)(*param_1 + 100))(param_1,uVar13);
        if ((uVar5 & 3) != 0) {
          local_20 = (**(code **)(*param_1 + 0x28))(param_1,uVar13);
          uVar5 = (**(code **)(*param_1 + 100))(param_1,uVar13);
          if ((uVar5 & 0x80) != 0) {
            local_20 = local_20 + -0x22;
          }
          uVar5 = uVar4 - uVar13;
          iVar14 = uVar5 * 0x10;
          iVar2 = (**(code **)(*(int *)param_1[7] + 0x1c))();
          uVar1 = DAT_020a0dd8;
          uVar6 = iVar14 + (iVar2 - local_20) + 0x10;
          uVar12 = 4 - (uVar6 & 3) & 3;
          iVar2 = uVar6 + uVar12;
          uVar7 = FUN_0201a5a4(DAT_020a0dd8,0,DAT_02093bcc,1,1);
          iVar8 = FUN_0201a5a4(uVar1,0,iVar2 + 0x40,0,1);
          FUN_0201a958(uVar7,1);
          FUN_02002488(iVar8,0xff,iVar2 + 0x40);
          iVar9 = (**(code **)(*(int *)param_1[7] + 0x2c))((int *)param_1[7],0);
          iVar10 = jus_AllocDebug(0x30);
          if (iVar10 != 0) {
            ALStreamImp::ALStreamImp(iVar10,iVar8,iVar2,1);
          }
          iVar10 = FUN_0200fac4();
          FUN_02051890(iVar9,iVar8,0x10);
          FUN_02051890(iVar9 + uVar13 * 0x10 + 0x10,iVar8 + 0x10,iVar14 + 0x10);
          iVar11 = local_20 - uVar12;
          FUN_02051890(iVar9 + iVar11,iVar8 + iVar14 + 0x10,iVar2 + uVar5 * -0x10 + -0x10);
          if (uVar4 != uVar5) {
            for (uVar4 = 0; uVar4 < uVar5; uVar4 = uVar4 + 1) {
              iVar2 = uVar4 * 0x10 + 0x14;
              *(uint *)(iVar8 + iVar2) = *(int *)(iVar8 + iVar2) - (iVar11 + uVar5 * -0x10 + -0x10);
            }
          }
          *(short *)(iVar8 + 6) = (short)uVar5;
          *(byte *)(iVar8 + 5) = *(byte *)(iVar8 + 5) & 0xfd;
          iVar8 = jus_AllocDebug(0x34);
          iVar2 = 0;
          if (iVar8 != 0) {
            iVar2 = jus_Class_02095ea0(iVar8,*(undefined4 *)(iVar10 + 4),0,1);
          }
          param_1[0xb] = iVar2;
          *(int **)(iVar2 + 0x20) = param_1;
          *(uint *)(param_1[0xb] + 0x24) = uVar13;
          (**(code **)(**(int **)(iVar10 + 4) + 0xc))();
          (**(code **)(*(int *)param_1[7] + 0x20))((int *)param_1[7],local_20);
          param_1[10] = uVar13;
          return;
        }
      }
    }
  }
  return;
}

