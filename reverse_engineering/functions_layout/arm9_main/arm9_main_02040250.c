
/* JUS-CLASS jus_TagSPDB::vfunc_07 [class-virtual] slot 7 of vtable 02095ff4 (own slot, not
   inherited) */

void jus_TagSPDB::vfunc_07(int param_1)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *unaff_r6;
  bool bVar8;
  int local_34;
  int local_30;
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [8];
  
  bVar8 = *(short *)(param_1 + 0x4a) != -1;
  piVar1 = (int *)0xffffffff;
  if (bVar8) {
    unaff_r6 = *(int **)(param_1 + 0x20);
    piVar1 = DAT_020a1054;
  }
  if (bVar8 && unaff_r6 != piVar1) {
    iVar7 = *(int *)(param_1 + 0x34);
    (**(code **)(*unaff_r6 + 0x34))(unaff_r6,0);
    if ((*(char *)(param_1 + 0x5e) != '\0') ||
       ((*(byte *)(*(int *)(*(int *)(param_1 + 0x38) + 0x50) + 0x24) & 0x7f) >> 6 == 0)) {
      iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x38) + 0x50) + 0x4c))();
      if (*(char *)(iVar7 + 0x954) != '\0') {
        *(undefined1 *)(iVar7 + 0x954) = 0;
        local_34 = ((int)(*(int *)(iVar2 + 0x14) + ((uint)(*(int *)(iVar2 + 0x14) >> 0xb) >> 0x14))
                    >> 0xc & 7U) << 0xc;
        local_30 = ((int)(*(int *)(iVar2 + 0x10) + ((uint)(*(int *)(iVar2 + 0x10) >> 0xb) >> 0x14))
                    >> 0xc & 7U) << 0xc;
        FUN_0203d658(iVar7,&local_30,&local_34);
      }
      iVar6 = *(int *)(iVar2 + 0x10) + *(int *)(iVar7 + 0x928);
      iVar5 = *(int *)(iVar2 + 0x14) + *(int *)(iVar7 + 0x92c);
      iVar2 = (int)(iVar6 + ((uint)(iVar6 >> 0xb) >> 0x14)) >> 0xf;
      iVar5 = (int)(iVar5 + ((uint)(iVar5 >> 0xb) >> 0x14)) >> 0xf;
      if ((int)*(short *)(param_1 + 0x4a) != (uint)*(ushort *)(param_1 + 0x6a)) {
        *(undefined1 *)(param_1 + 0x5e) = 1;
        *(undefined2 *)(param_1 + 0x6a) = *(undefined2 *)(param_1 + 0x4a);
      }
      psVar3 = (short *)FUN_02044e78(unaff_r6,(int)*(short *)(param_1 + 0x4a));
      if (*(char *)(param_1 + 0x5e) == '\0') {
        iVar6 = (int)*(short *)(param_1 + 100);
        bVar8 = iVar2 == iVar6;
        if (bVar8) {
          iVar6 = (int)*(short *)(param_1 + 0x66);
        }
        if (!bVar8 || iVar5 != iVar6) {
          FUN_0201dc68(auStack_24,iVar2,iVar5,iVar2 + (uint)*(byte *)(psVar3 + 1),
                       iVar5 + (uint)*(byte *)((int)psVar3 + 3));
          FUN_0203d870(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x6c),auStack_24);
        }
      }
      *(short *)(param_1 + 100) = (short)iVar2;
      *(short *)(param_1 + 0x66) = (short)iVar5;
      if (*(int *)(param_1 + 0x70) == 0) {
        *(ushort *)(param_1 + 0x4e) =
             (ushort)*(byte *)(psVar3 + 1) * (short)*(undefined4 *)(iVar7 + 0x940);
        *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)((int)psVar3 + 3);
        *(short *)(param_1 + 0x60) =
             *psVar3 + (short)(*(uint *)(*(int *)(param_1 + 0x20) + 0x50) >> 5) +
             (short)(*(uint *)(*(int *)(param_1 + 0x20) + 0x54) >> 5) * 0x1000;
        FUN_02032018(auStack_2c,iVar2,iVar5,iVar2 + (uint)*(byte *)(psVar3 + 1),
                     iVar5 + (uint)*(byte *)((int)psVar3 + 3));
      }
      else {
        *(undefined2 *)(param_1 + 0x60) = 0;
        FUN_02032018(auStack_2c,iVar2,iVar5,iVar2 + (uint)*(ushort *)(param_1 + 0x4e),
                     iVar5 + (uint)*(ushort *)(param_1 + 0x50));
      }
      *(short *)(param_1 + 0x5c) =
           (short)((uint)*(ushort *)(iVar7 + 0x8c8) * *(int *)(iVar7 + 0x940) >> 1);
      iVar6 = *(int *)(iVar7 + 0x940);
      iVar7 = (**(code **)(iVar7 + 0x948))();
      *(uint *)(param_1 + 0x58) =
           iVar7 + (((iVar2 + 2) - iVar6) * iVar6 & 0xfffffffeU) +
           (uint)*(ushort *)(param_1 + 0x5c) * iVar5 * 2;
      if (*(char *)(param_1 + 0x5e) == '\0') {
        if (*(short *)(param_1 + 0x68) != *(short *)(param_1 + 0x60)) {
          *(short *)(param_1 + 0x68) = *(short *)(param_1 + 0x60);
          FUN_0203d838(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x6c),auStack_2c);
        }
      }
      else {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x38) + 0x50) + 0x50))();
        iVar7 = FUN_02045220(unaff_r6,(int)*(short *)(param_1 + 0x4a));
        if (iVar7 == 0) {
          if (*(int *)(param_1 + 0x6c) == 0) {
            iVar7 = *(int *)(param_1 + 0x34);
            if (*(int *)(iVar7 + 0x8e4) == 1) {
              uVar4 = FUN_0203d6e8(iVar7,param_1,FUN_02040e94);
              *(undefined4 *)(param_1 + 0x6c) = uVar4;
            }
            else if (*(int *)(iVar7 + 0x940) == 1) {
              uVar4 = FUN_0203d6e8(iVar7,param_1,FUN_02040d6c);
              *(undefined4 *)(param_1 + 0x6c) = uVar4;
            }
            else {
              uVar4 = FUN_0203d6e8(iVar7,param_1,FUN_02040d70);
              *(undefined4 *)(param_1 + 0x6c) = uVar4;
            }
          }
        }
        else {
          if (*(int *)(param_1 + 0x70) == 0) {
            *(int *)(param_1 + 0x54) = iVar7;
          }
          else {
            *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x70);
          }
          if (*(int *)(param_1 + 0x6c) == 0) {
            iVar7 = *(int *)(param_1 + 0x34);
            if (unaff_r6[0x19] == 1) {
              if (*(int *)(iVar7 + 0x8e4) == 1) {
                uVar4 = FUN_0203d6e8(iVar7,param_1,FUN_02040a10);
                *(undefined4 *)(param_1 + 0x6c) = uVar4;
              }
              else if (*(int *)(iVar7 + 0x940) == 1) {
                uVar4 = FUN_0203d6e8(iVar7,param_1,FUN_020406fc);
                *(undefined4 *)(param_1 + 0x6c) = uVar4;
              }
              else {
                uVar4 = FUN_0203d6e8(iVar7,param_1,FUN_0204090c);
                *(undefined4 *)(param_1 + 0x6c) = uVar4;
              }
            }
            else if (*(int *)(iVar7 + 0x8e4) == 1) {
              uVar4 = FUN_0203d6e8(iVar7,param_1,FUN_02040b3c);
              *(undefined4 *)(param_1 + 0x6c) = uVar4;
            }
            else if (*(int *)(iVar7 + 0x940) != 1) {
              uVar4 = FUN_0203d6e8(iVar7,param_1,FUN_02040c68);
              *(undefined4 *)(param_1 + 0x6c) = uVar4;
            }
          }
        }
        if ((*(byte *)(param_1 + 0x10) & 0x7f) >> 6 == 0) {
          *(undefined1 *)(*(int *)(param_1 + 0x6c) + 0x3e) = 3;
        }
        FUN_0203d784(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x6c),auStack_2c);
        FUN_0203d838(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x6c),auStack_2c);
        *(undefined1 *)(param_1 + 0x5e) = 0;
      }
    }
  }
  return;
}

