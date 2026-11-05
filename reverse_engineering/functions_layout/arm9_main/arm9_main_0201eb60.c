
void FUN_0201eb60(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
                    /* JUS-TAG strings=["Marker","NoteTrack"] */
  (**(code **)(*param_1 + 0xd0))();
  iVar1 = FUN_0201e6d4();
  if (*(char *)(iVar1 + 6) == '\0') {
    return;
  }
  iVar7 = param_1[0x17];
  for (iVar6 = 0; iVar6 < (int)(uint)*(ushort *)((int)param_1 + 0x6e); iVar6 = iVar6 + 1) {
    piVar5 = *(int **)(iVar7 + iVar6 * 4);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))();
      iVar2 = *(int *)(iVar7 + iVar6 * 4);
      *(byte *)(iVar2 + 0x32) = *(byte *)(iVar2 + 0x32) & 0xfe | 1;
    }
  }
  iVar6 = jus_AllocDebug((uint)*(byte *)(iVar1 + 6) << 2);
  param_1[0x17] = iVar6;
  if (*(ushort *)(param_1 + 0x1c) != (ushort)*(byte *)(iVar1 + 8)) {
    iVar6 = param_1[0x18];
    if ((iVar6 != 0) && (iVar2 = FUN_0201a9ec(iVar6), iVar2 == 0)) {
      FUN_0201a958(iVar6,1);
    }
    iVar6 = jus_AllocDebug((uint)*(byte *)(iVar1 + 8) << 3);
    param_1[0x18] = iVar6;
    param_1[0x19] = iVar6 + (uint)*(byte *)(iVar1 + 8) * 4;
    *(ushort *)(param_1 + 0x1c) = (ushort)*(byte *)(iVar1 + 8);
  }
  MIi_CpuClear32(0,param_1[0x18],(uint)*(byte *)(iVar1 + 8) << 3);
  iVar6 = 0;
  do {
    if ((int)(uint)*(byte *)(iVar1 + 6) <= iVar6) {
      *(undefined2 *)((int)param_1 + 0x6a) = 0xffff;
      *(undefined2 *)(param_1 + 0x1b) = 0xffff;
      for (iVar6 = 0; iVar6 < (int)(uint)*(byte *)(iVar1 + 8); iVar6 = iVar6 + 1) {
        uVar4 = (**(code **)(*param_1 + 0xd0))();
        uVar4 = FUN_02020514(uVar4,iVar6);
        iVar2 = FUN_02004c2c(uVar4,s_Marker_0209d944);
        if (iVar2 == 0) {
          *(short *)((int)param_1 + 0x6a) = (short)iVar6;
        }
        else {
          iVar2 = FUN_02004c2c(uVar4,s_NoteTrack_0209d94c);
          if (iVar2 == 0) {
            *(short *)(param_1 + 0x1b) = (short)iVar6;
          }
        }
      }
      for (iVar6 = 0; iVar6 < (int)(uint)*(ushort *)((int)param_1 + 0x6e); iVar6 = iVar6 + 1) {
        piVar5 = *(int **)(iVar7 + iVar6 * 4);
        if (piVar5 != (int *)0x0) {
          if ((*(byte *)((int)piVar5 + 0x32) & 1) == 0) {
            (**(code **)(*piVar5 + 0xc))();
          }
          else {
            iVar2 = (**(code **)(*piVar5 + 0xc))();
            if (iVar2 != 0) {
              (**(code **)(**(int **)(iVar7 + iVar6 * 4) + 0xc))();
            }
          }
        }
      }
      if ((iVar7 != 0) && (iVar6 = FUN_0201a9ec(iVar7), iVar6 == 0)) {
        FUN_0201a958(iVar7,1);
      }
      *(ushort *)((int)param_1 + 0x6e) = (ushort)*(byte *)(iVar1 + 6);
      return;
    }
    iVar2 = (**(code **)(*(int *)param_1[7] + 0xa8))();
    if (iVar2 == 0) {
      if (*(char *)(iVar1 + 6) != '\x01') {
        iVar3 = *(int *)(param_1[7] + 0x54);
        piVar5 = (int *)(**(code **)(*param_1 + 0xd0))();
        iVar2 = (**(code **)(*piVar5 + 0x30))(piVar5,iVar6);
        if (iVar3 != iVar2) {
          iVar2 = 0;
          goto LAB_0201ed04;
        }
      }
      iVar2 = param_1[7];
    }
    else {
      piVar8 = (int *)param_1[7];
      piVar5 = (int *)(**(code **)(*param_1 + 0xd0))();
      uVar4 = (**(code **)(*piVar5 + 0x30))(piVar5,iVar6);
      iVar2 = (**(code **)(*piVar8 + 0xb0))(piVar8,uVar4);
    }
LAB_0201ed04:
    if (iVar2 == 0) {
      *(undefined4 *)(param_1[0x17] + iVar6 * 4) = 0;
    }
    else {
      if (iVar2 == param_1[7]) {
        *(int **)(param_1[0x17] + iVar6 * 4) = param_1;
      }
      else {
        iVar3 = jus_AllocDebug(0x58);
        uVar4 = 0;
        if (iVar3 != 0) {
          uVar4 = jus_TagCAMT::jus_TagCAMT(iVar3,iVar2,param_1);
        }
        *(undefined4 *)(param_1[0x17] + iVar6 * 4) = uVar4;
        FUN_020239b0(iVar2,*(undefined4 *)(param_1[0x17] + iVar6 * 4),0);
      }
      iVar2 = *(int *)(param_1[0x17] + iVar6 * 4);
      *(byte *)(iVar2 + 0x32) = *(byte *)(iVar2 + 0x32) & 0xfe;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}

