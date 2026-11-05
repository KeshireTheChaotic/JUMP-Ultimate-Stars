
/* JUS-CLASS jus_Class_0209cac0::jus_Class_0209cac0 [class-default] stores vtable 0209cac0 into
   *this (constructor) */

int * jus_Class_0209cac0::jus_Class_0209cac0(int *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  
  jus_Class_0209cc28::jus_Class_0209cc28();
  *param_1 = (int)&vftable;
  piVar2 = *(int **)(param_2 + 0x44);
  param_1[0x11] = (int)piVar2;
  (**(code **)(*piVar2 + 8))();
  (**(code **)(*param_1 + 0xd0))();
  iVar3 = FUN_0201e6d4();
  iVar4 = FUN_0201a228((uint)*(byte *)(iVar3 + 6) << 2);
  param_1[0x17] = iVar4;
  *(undefined2 *)((int)param_1 + 0x6e) = *(undefined2 *)(param_2 + 0x6e);
  iVar4 = FUN_0201a228((uint)*(byte *)(iVar3 + 8) << 3);
  param_1[0x18] = iVar4;
  param_1[0x19] = iVar4 + (uint)*(byte *)(iVar3 + 8) * 4;
  MIi_CpuCopy32(*(undefined4 *)(param_2 + 0x60),param_1[0x18],(uint)*(byte *)(iVar3 + 8) << 3);
  *(ushort *)(param_1 + 0x1c) = (ushort)*(byte *)(iVar3 + 8);
  uVar5 = (**(code **)(*param_1 + 0xd0))();
  iVar4 = FUN_02020590(uVar5,*(undefined2 *)((int)param_1 + 0x2a));
  iVar10 = 0;
  do {
    if ((int)(uint)*(ushort *)((int)param_1 + 0x6e) <= iVar10) {
      param_1[0x15] = *(int *)(param_2 + 0x54);
      param_1[0x16] = *(int *)(param_2 + 0x58);
      *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x68);
      *(undefined2 *)((int)param_1 + 0x6a) = *(undefined2 *)(param_2 + 0x6a);
      *(undefined2 *)(param_1 + 0x1b) = *(undefined2 *)(param_2 + 0x6c);
      (**(code **)(*param_1 + 0xcc))();
      return param_1;
    }
    iVar6 = (**(code **)(*(int *)param_1[7] + 0xa8))();
    if (iVar6 == 0) {
      if (*(char *)(iVar3 + 6) != '\x01') {
        iVar7 = *(int *)(param_1[7] + 0x54);
        piVar2 = (int *)(**(code **)(*param_1 + 0xd0))();
        iVar6 = (**(code **)(*piVar2 + 0x30))(piVar2,iVar10);
        if (iVar7 != iVar6) {
          iVar6 = 0;
          goto LAB_0201e8a0;
        }
      }
      iVar6 = param_1[7];
    }
    else {
      piVar9 = (int *)param_1[7];
      piVar2 = (int *)(**(code **)(*param_1 + 0xd0))();
      uVar5 = (**(code **)(*piVar2 + 0x30))(piVar2,iVar10);
      iVar6 = (**(code **)(*piVar9 + 0xb0))(piVar9,uVar5);
    }
LAB_0201e8a0:
    if (iVar6 == 0) {
      *(undefined4 *)(param_1[0x17] + iVar10 * 4) = 0;
    }
    else {
      if (iVar6 == param_1[7]) {
        *(int **)(param_1[0x17] + iVar10 * 4) = param_1;
      }
      else {
        iVar7 = FUN_0201a228(0x58);
        uVar5 = 0;
        if (iVar7 != 0) {
          uVar5 = jus_TagCAMT::jus_TagCAMT(iVar7,iVar6,param_1);
        }
        FUN_020239b0(iVar6,uVar5,0);
        *(undefined4 *)(param_1[0x17] + iVar10 * 4) = *(undefined4 *)(iVar6 + 0x68);
      }
      iVar7 = *(int *)(param_1[0x17] + iVar10 * 4);
      iVar11 = *(int *)(*(int *)(param_2 + 0x5c) + iVar10 * 4);
      *(undefined2 *)(iVar7 + 0x52) = 0;
      if (*(short *)(iVar4 + iVar10 * 2 + 0x28) != 0) {
        *(undefined4 *)(iVar7 + 0x48) = *(undefined4 *)(iVar11 + 0x48);
        bVar1 = *(byte *)(iVar3 + 8);
        iVar8 = FUN_0201a228((uint)bVar1 * 0x10 + 8);
        uVar5 = 0;
        if (iVar8 != 0) {
          uVar5 = FUN_0200ef34(iVar8,(uint)bVar1,0x10,8,0,0);
        }
        *(undefined4 *)(iVar7 + 0x4c) = uVar5;
        *(ushort *)(iVar7 + 0x50) = (ushort)*(byte *)(iVar3 + 8);
        *(undefined2 *)(iVar7 + 0x52) = *(undefined2 *)(iVar11 + 0x52);
        for (iVar8 = 0; iVar8 < (int)(uint)*(ushort *)(iVar7 + 0x52); iVar8 = iVar8 + 1) {
          FUN_0201ea38(*(int *)(iVar7 + 0x4c) + iVar8 * 0x10,*(int *)(iVar11 + 0x4c) + iVar8 * 0x10)
          ;
          *(int *)(*(int *)(iVar7 + 0x4c) + iVar8 * 0x10) = iVar6;
          if (*(code **)(*(int *)(iVar7 + 0x4c) + iVar8 * 0x10 + 8) == FUN_0201e4c8) {
            uVar5 = FUN_02011b38(iVar6);
            FUN_0201e468(uVar5,*(undefined4 *)(iVar7 + 0x48));
          }
        }
      }
    }
    iVar10 = iVar10 + 1;
  } while( true );
}

