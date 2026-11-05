
/* JUS-GAME CommGame::MessageFunc [source-string] __FILE__="CommGame.cpp" __FUNCTION__="MessageFunc"
   lines=[511, 543, 599] passed to 4 source-location call(s) */

void CommGame::MessageFunc(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int extraout_r1;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 auStack_32 [2];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 == 0x70000000) {
    iVar7 = (**(code **)*param_2)();
    iVar2 = DAT_0214ccec;
    uVar4 = *(uint *)(DAT_0214ccec + 0x1c);
    for (uVar10 = 0; uVar10 < uVar4; uVar10 = uVar10 + 1) {
      iVar11 = *(int *)(*(int *)(iVar2 + 0x18) + uVar10 * 4);
      iVar9 = FUN_020024cc(iVar7 + 4,iVar11 + 4,6);
      if (iVar9 == 0) {
        *(undefined4 *)(iVar11 + 0xc0) = 0xf0;
        MIi_CpuCopy32(iVar7,iVar11,0xc0);
        iVar9 = *(int *)(DAT_0214ccec + 0x24);
        if (iVar9 == 0) {
          FUN_0208b4ca();
          iVar9 = extraout_r1;
        }
        ALObjectImp::PostMessage(param_1,iVar9,0x70000000,iVar11,iVar11 + 0x50,0);
        FUN_0208b4ca();
      }
    }
    iStack_30 = thunk_FUN_0201a228(0xc4,s_CommGame_cpp_020a056c,s_MessageFunc_020a0544,0x11d);
    MIi_CpuCopy32(iVar7,iStack_30,0xc0);
    *(undefined4 *)(iStack_30 + 0xc0) = 0xf0;
    iVar2 = DAT_0214ccec;
    param_2 = (int *)(DAT_0214ccec + 0x18);
    FUN_0200f69c(&uStack_38,1);
    uVar4 = *(uint *)(iVar2 + 0x1c);
    if (uVar4 < *(uint *)(iVar2 + 0x20)) {
      *(uint *)(iVar2 + 0x1c) = uVar4 + 1;
      *(int *)(*param_2 + uVar4 * 4) = iStack_30;
    }
    else {
      FUN_0200f69c(&uStack_37,1);
      FUN_0200f69c(auStack_32,1);
      FUN_0200b27c(param_2,1);
      iStack_20 = iVar2 + 0x20;
      iStack_2c = 0;
      iStack_28 = 0;
      uStack_24 = 0;
      iStack_1c = 0;
      uVar4 = FUN_0200b27c(param_2,(*(int *)(iVar2 + 0x1c) + 1) - *(int *)(iVar2 + 0x20));
      FUN_0200f69c(&uStack_36,1);
      if (0x3fffffff < uVar4) {
        FUN_02003bd8(s_vector_length_error_020a057c);
        FUN_02001f18();
      }
      iVar7 = thunk_FUN_0201a228(uVar4 << 2);
      if (iVar7 == 0) {
        FUN_02003bd8(s_Memory_allocation_failure_0209d844);
        FUN_02001f18();
      }
      iStack_1c = *(int *)(iVar2 + 0x1c);
      iStack_2c = iVar7;
      uStack_24 = uVar4;
      FUN_0200f69c(&uStack_35,1);
      *(int *)(iStack_28 * 4 + iStack_2c + iStack_1c * 4) = iStack_30;
      iStack_28 = iStack_28 + 1;
      iVar9 = *param_2;
      iVar7 = *(int *)(iVar2 + 0x1c) * 4;
      FUN_0200f69c(&uStack_34,1);
      iVar7 = (int)(iVar7 + ((uint)(iVar7 >> 1) >> 0x1e)) >> 2;
      iStack_1c = iStack_1c - iVar7;
      FUN_02002434(iStack_2c + iStack_1c * 4,iVar9,iVar7 << 2);
      FUN_02002488(iVar9,0,iVar7 << 2);
      iStack_28 = iStack_28 + iVar7;
      FUN_0200f69c(&uStack_33,1);
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      FUN_0204f098(iVar2 + 0x20,&uStack_24);
      iVar7 = *param_2;
      *param_2 = iStack_2c;
      iStack_2c = iVar7;
      FUN_0204f098(iVar2 + 0x1c,&iStack_28);
      FUN_0200b2fc(&iStack_2c);
    }
    if (*(int *)(DAT_0214ccec + 0x24) != 0) {
      ALObjectImp::PostMessage
                (param_1,*(int *)(DAT_0214ccec + 0x24),0x70000000,iStack_30,iStack_30 + 0x50,0);
      FUN_0208b4ca();
      goto LAB_0208aa2c;
    }
  }
  else {
LAB_0208aa2c:
    iVar2 = (**(code **)(*param_2 + 8))();
    if (iVar2 != 0x70000004) {
      iVar2 = (**(code **)(*param_2 + 8))();
      if (iVar2 == 0x70000005) {
        if (*(int *)(DAT_0214ccec + 0x24) != 0) {
          puVar3 = (ushort *)(**(code **)*param_2)();
          uVar4 = (**(code **)(*param_2 + 4))();
          if (uVar4 < 3) {
            uVar5 = (**(code **)(*param_2 + 8))();
            ALObjectImp::PostMessage
                      (param_1,*(undefined4 *)(DAT_0214ccec + 0x24),uVar5,*puVar3 & 0x7fff,0,0);
          }
          else {
            iVar2 = (**(code **)(*param_2 + 4))();
            uVar5 = thunk_FUN_0201a228(iVar2 + -2,s_CommGame_cpp_020a056c,s_MessageFunc_020a0544,
                                       0x1ff);
            iVar2 = (**(code **)(*param_2 + 4))();
            MIi_CpuCopy16(puVar3 + 1,uVar5,iVar2 + -2);
            uVar6 = (**(code **)(*param_2 + 8))();
            ALObjectImp::PostMessage
                      (param_1,*(undefined4 *)(DAT_0214ccec + 0x24),uVar6,*puVar3 & 0x7fff,uVar5,4);
          }
        }
      }
      else {
        iVar2 = (**(code **)(*param_2 + 8))();
        if (iVar2 == 0x70000006) {
          thunk_FUN_02002488(DAT_0214ccec + 0x30,0xff,0xc);
          thunk_FUN_02002488(DAT_0214ccec + 0x3c,0xff,0xc);
          FUN_0208a6bc();
          if (*(int *)(DAT_0214ccec + 0x24) != 0) {
            ALObjectImp::PostMessage(param_1,*(int *)(DAT_0214ccec + 0x24),0x70000006,0,0,0);
          }
          FUN_02088260();
          if ('\0' < *(char *)(DAT_0214ccec + 0x48)) {
            DAT_0214cce0 = 1;
          }
        }
        else {
          iVar2 = (**(code **)(*param_2 + 8))();
          if (iVar2 == 0x70000002) {
            iVar2 = (**(code **)*param_2)();
            iVar7 = thunk_FUN_0201a228(0x1e,s_CommGame_cpp_020a056c,s_MessageFunc_020a0544,0x21f);
            FUN_02051890(iVar2 + 10,iVar7,6);
            FUN_02051890(iVar2 + 0x14,iVar7 + 6,0x18);
            iVar9 = DAT_0214ccec + (uint)*(ushort *)(iVar2 + 0x10);
            cVar1 = *(char *)(iVar9 + 0x3c);
            if (cVar1 < '\0') {
              if (*(char *)(iVar7 + 0x1c) == '\0') {
                uVar4 = FUN_0208a61c();
              }
              else {
                uVar4 = FUN_0208a66c();
              }
            }
            else {
              *(char *)(iVar9 + 0x30) = cVar1;
              uVar4 = (uint)*(char *)(DAT_0214ccec + (uint)*(ushort *)(iVar2 + 0x10) + 0x30);
            }
            if (*(int *)(DAT_0214ccec + 0x24) == 0) {
              FUN_0201b268(iVar7);
            }
            else {
              ALObjectImp::PostMessage
                        (param_1,*(int *)(DAT_0214ccec + 0x24),0x70000002,iVar7,iVar7 + 6,2);
            }
            FUN_0208b4ec();
            if (uVar4 < 4) {
              uVar5 = FUN_02070cdc(uVar4);
              FUN_02051890(iVar7 + 6,uVar5,0x14);
              FUN_0208b568();
            }
            FUN_0208a5c4();
            FUN_0208a5f8();
          }
          else {
            iVar2 = (**(code **)(*param_2 + 8))();
            if (iVar2 == 0x70000003) {
              iVar2 = (**(code **)*param_2)();
              uVar4 = (uint)*(char *)(DAT_0214ccec + 0x30 + (uint)*(ushort *)(iVar2 + 0x10));
              if ((uVar4 < 4) && (*(char *)(DAT_0214ccec + 0x4a) != '\0')) {
                DAT_0214cce2 = 1;
              }
              else {
                *(undefined1 *)(DAT_0214ccec + 0x30 + (uint)*(ushort *)(iVar2 + 0x10)) = 0xff;
                *(undefined1 *)(DAT_0214ccec + (uint)*(ushort *)(iVar2 + 0x10) + 0x3c) = 0xff;
                if (*(int *)(DAT_0214ccec + 0x24) != 0) {
                  iVar7 = thunk_FUN_0201a228(0x1e,s_CommGame_cpp_020a056c,s_MessageFunc_020a0544,599
                                            );
                  FUN_02051890(iVar2 + 10,iVar7,6);
                  FUN_02051890(iVar2 + 0x14,iVar7 + 6,0x18);
                  ALObjectImp::PostMessage
                            (param_1,*(undefined4 *)(DAT_0214ccec + 0x24),0x70000003,iVar7,iVar7 + 6
                             ,2);
                }
                if (*(char *)(DAT_0214ccec + 0x4a) == '\0') {
                  FUN_0208a5f8();
                }
                FUN_0208a250(uVar4 << 8 | 4,0xffff);
                uVar10 = 0;
                do {
                  iVar2 = FUN_0208c14c(uVar10);
                  if (-1 < iVar2) {
                    *(undefined1 *)(DAT_0214ccec + iVar2 + 0x30) = 0xff;
                    *(undefined1 *)(DAT_0214ccec + iVar2 + 0x3c) = 0xff;
                    if (uVar10 < 4) {
                      uVar8 = FUN_0208a61c();
                      if (uVar10 != uVar8) {
                        uVar5 = FUN_02070cdc(uVar10);
                        uVar6 = FUN_02070cdc(uVar8);
                        FUN_020725e0(uVar6,uVar5,0);
                      }
                    }
                    else {
                      FUN_0208a66c();
                    }
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar10 < 8);
                FUN_0208b4ec();
                FUN_0208b568();
                FUN_0208a5c4();
                if ((uVar4 < 4) && (*(char *)(DAT_0214ccec + 0x4a) != '\0')) {
                  DAT_0214cce2 = 1;
                }
              }
            }
          }
        }
      }
      return;
    }
    (**(code **)*param_2)();
    (**(code **)(*param_2 + 4))();
    uVar4 = (**(code **)*param_2)();
    uVar4 = uVar4 & 0xff;
    if (uVar4 < 0x28) goto LAB_0208aa62;
  }
  uVar4 = FUN_0208b4ca();
LAB_0208aa62:
                    /* WARNING: Could not recover jumptable at 0x0208aa6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*(short *)(&DAT_0208aa6e + uVar4 * 2) + 0x208aa70))();
  return;
}

