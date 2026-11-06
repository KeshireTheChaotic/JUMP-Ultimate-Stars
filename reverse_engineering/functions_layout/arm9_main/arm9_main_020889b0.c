
/* JUS-GAME CommLib::port_receive_func [source-string] __FILE__="CommLib.cpp"
   __FUNCTION__="port_receive_func" lines=[349, 379, 394] passed to 10 source-location call(s);
   header inlines: ALObjectImp.h:PostSyncMessage */

void CommLib::port_receive_func(int param_1)

{
  short sVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
                    /* JUS-TAG
                       strings=["ALObjectImp.h","CommLib.cpp","PostSyncMessage","port_receive_func"]
                        */
  sVar1 = *(short *)(param_1 + 2);
  uVar4 = FUN_0201a30c();
  FUN_0201a2d4(DAT_0214be68);
  if (sVar1 == 0) {
    uVar2 = *(ushort *)(param_1 + 4);
    if (uVar2 < 0x16) {
      if (uVar2 < 0x15) {
        if ((((uVar2 < 10) && (6 < uVar2)) && (uVar2 == 7)) && (DAT_0214be8c != (code *)0x0)) {
          (*DAT_0214be8c)(s_Port_Connected_020a03b0);
        }
      }
      else {
        if (DAT_0214be8c != (code *)0x0) {
          (*DAT_0214be8c)(s_<_Receive_Data_success_(0x_04x)_020a038c,
                          **(undefined2 **)(param_1 + 0xc));
        }
        uVar7 = DAT_0214bea8;
        if (DAT_0214be60 < 4) {
                    /* WARNING: Switch is manually overridden */
          switch(DAT_0214be60) {
          case 0:
            if (DAT_0214be64 != 0) {
              uVar2 = **(ushort **)(param_1 + 0xc);
              if (uVar2 < 0x8000) {
                if (*(ushort *)(param_1 + 0x10) < 3) {
                  uVar5 = *(undefined4 *)(DAT_0214be64 + 4);
                  iVar6 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_020a025c,
                                             s_PostSyncMessage_020a026c,0x121);
                  uVar8 = 0;
                  if (iVar6 != 0) {
                    uVar8 = jus_Class_0209455c::jus_Class_0209455c(iVar6,uVar7,0,uVar2,0,0);
                  }
                  FUN_020287f8(uVar5,uVar8,0);
                }
                else {
                  uVar5 = thunk_FUN_0201a228(*(ushort *)(param_1 + 0x10) - 2,s_CommLib_cpp_020a0338,
                                             s_port_receive_func_020a028c,0x16c);
                  MIi_CpuCopy16(*(int *)(param_1 + 0xc) + 2,uVar5,*(ushort *)(param_1 + 0x10) - 2);
                  uVar8 = DAT_0214bea8;
                  uVar3 = **(undefined2 **)(param_1 + 0xc);
                  uVar9 = *(undefined4 *)(DAT_0214be64 + 4);
                  iVar6 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_020a025c,
                                             s_PostSyncMessage_020a026c,0x121);
                  uVar7 = 0;
                  if (iVar6 != 0) {
                    uVar7 = jus_Class_0209455c::jus_Class_0209455c(iVar6,uVar8,0,uVar3,uVar5,4);
                  }
                  FUN_020287f8(uVar9,uVar7,4);
                }
              }
              else {
                uVar5 = thunk_FUN_0201a228(*(undefined2 *)(param_1 + 0x10),s_CommLib_cpp_020a0338,
                                           s_port_receive_func_020a028c,0x15d);
                MIi_CpuCopy16(*(undefined4 *)(param_1 + 0xc),uVar5,*(undefined2 *)(param_1 + 0x10));
                uVar8 = DAT_0214be70;
                uVar9 = *(undefined4 *)(DAT_0214be64 + 4);
                uVar3 = *(undefined2 *)(param_1 + 0x10);
                iVar6 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_020a025c,s_PostSyncMessage_020a026c,
                                           0x121);
                uVar7 = 0;
                if (iVar6 != 0) {
                  uVar7 = jus_Class_0209455c::jus_Class_0209455c(iVar6,uVar8,0,uVar5,uVar3,2);
                }
                FUN_020287f8(uVar9,uVar7,2);
              }
            }
            break;
          case 1:
            if (DAT_0214be74 != 0) {
              uVar2 = **(ushort **)(param_1 + 0xc);
              if (uVar2 < 0x8000) {
                if (*(ushort *)(param_1 + 0x10) < 3) {
                  uVar5 = *(undefined4 *)(DAT_0214be74 + 4);
                  iVar6 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_020a025c,
                                             s_PostSyncMessage_020a026c,0x121);
                  uVar8 = 0;
                  if (iVar6 != 0) {
                    uVar8 = jus_Class_0209455c::jus_Class_0209455c(iVar6,uVar7,0,uVar2,0,0);
                  }
                  FUN_020287f8(uVar5,uVar8,0);
                }
                else {
                  uVar5 = thunk_FUN_0201a228(*(ushort *)(param_1 + 0x10) - 2,s_CommLib_cpp_020a0338,
                                             s_port_receive_func_020a028c,0x18a);
                  MIi_CpuCopy16(*(int *)(param_1 + 0xc) + 2,uVar5,*(ushort *)(param_1 + 0x10) - 2);
                  uVar8 = DAT_0214bea8;
                  uVar3 = **(undefined2 **)(param_1 + 0xc);
                  uVar9 = *(undefined4 *)(DAT_0214be74 + 4);
                  iVar6 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_020a025c,
                                             s_PostSyncMessage_020a026c,0x121);
                  uVar7 = 0;
                  if (iVar6 != 0) {
                    uVar7 = jus_Class_0209455c::jus_Class_0209455c(iVar6,uVar8,0,uVar3,uVar5,4);
                  }
                  FUN_020287f8(uVar9,uVar7,4);
                }
              }
              else {
                uVar5 = thunk_FUN_0201a228(*(undefined2 *)(param_1 + 0x10),s_CommLib_cpp_020a0338,
                                           s_port_receive_func_020a028c,0x17b);
                MIi_CpuCopy16(*(undefined4 *)(param_1 + 0xc),uVar5,*(undefined2 *)(param_1 + 0x10));
                uVar8 = DAT_0214be70;
                uVar9 = *(undefined4 *)(DAT_0214be74 + 4);
                uVar3 = *(undefined2 *)(param_1 + 0x10);
                iVar6 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_020a025c,s_PostSyncMessage_020a026c,
                                           0x121);
                uVar7 = 0;
                if (iVar6 != 0) {
                  uVar7 = jus_Class_0209455c::jus_Class_0209455c(iVar6,uVar8,0,uVar5,uVar3,2);
                }
                FUN_020287f8(uVar9,uVar7,2);
              }
            }
          }
        }
      }
    }
  }
  else if (DAT_0214be8c != (code *)0x0) {
    (*DAT_0214be8c)(s_<_Receive_Data_failed__ERRCODE:_0_020a03c0,*(undefined2 *)(param_1 + 2));
  }
  FUN_0201a2d4(uVar4);
  return;
}

