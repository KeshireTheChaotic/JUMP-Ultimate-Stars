
/* JUS-GAME CommLib::ParentFunc [source-string] __FILE__="CommLib.cpp" __FUNCTION__="ParentFunc"
   lines=[] passed to 4 source-location call(s); header inlines: ALObjectImp.h:PostSyncDelayMessage,
   ALObjectImp.h:PostSyncMessage */

void CommLib::ParentFunc(int param_1)

{
  ushort uVar1;
  bool bVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  
                    /* JUS-TAG
                       strings=["ALObjectImp.h","CommLib.cpp","ParentFunc","PostSyncDelayMessage","PostSyncMessage"]
                        */
  uVar3 = (ushort)(1 << (*(ushort *)(param_1 + 0x10) & 0xff));
  if (*(short *)(param_1 + 2) != 0) {
    FUN_02088904(*(short *)(param_1 + 2),s_CommLib_cpp_020a0338,0x22a);
    return;
  }
  uVar5 = FUN_0201a30c();
  FUN_0201a2d4(DAT_0214be68);
  uVar1 = *(ushort *)(param_1 + 8);
  if (uVar1 < 8) {
    if (6 < uVar1) {
      if ((DAT_0214be90 == (code *)0x0) || (iVar8 = (*DAT_0214be90)(param_1), iVar8 != 0)) {
        DAT_0214be4a = DAT_0214be4a | uVar3;
        if (DAT_0214be64 != 0) {
          uVar6 = thunk_FUN_0201a228(0x30,s_CommLib_cpp_020a0338,s_ParentFunc_020a0234,0x264);
          MIi_CpuCopy32(param_1,uVar6,0x30);
          uVar4 = DAT_0214be58;
          uVar9 = *(undefined4 *)(DAT_0214be64 + 4);
          iVar8 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_020a024c,s_PostSyncDelayMessage_020a02cc,
                                     0x127);
          uVar7 = 0;
          if (iVar8 != 0) {
            uVar7 = jus_Class_0209455c::jus_Class_0209455c(iVar8,uVar4,0,uVar6,0,2);
          }
          thunk_FUN_0201b3e4(uVar9,uVar7,2,2);
        }
      }
      else {
        iVar8 = FUN_02058d5c(0,*(undefined2 *)(param_1 + 0x10));
        if (iVar8 != 2) {
          FUN_02088904(iVar8,s_CommLib_cpp_020a0338,0x253);
        }
      }
      goto LAB_02088e64;
    }
    if (uVar1 < 3) {
      if (uVar1 == 0) {
        if ((DAT_0214bea4 == 5) || (DAT_0214bea4 == 6)) {
          bVar2 = true;
        }
        else {
          DAT_0214bea4 = 5;
          iVar8 = FUN_02059864(0x2088c49,&DAT_0214cb20,DAT_0214be5c & 0xffff,&DAT_0214caa0,
                               DAT_0214be94 & 0xffff,1);
          if (iVar8 == 2) {
            bVar2 = true;
          }
          else {
            FUN_02088904(iVar8,s_CommLib_cpp_020a0338,0x213);
            bVar2 = false;
          }
        }
        if (!bVar2) {
          DAT_0214bea4 = 9;
        }
        goto LAB_02088e64;
      }
      if (uVar1 == 2) goto LAB_02088e64;
    }
  }
  else if (uVar1 == 9) {
    if (DAT_0214be8c != (code *)0x0) {
      (*DAT_0214be8c)(s_StartParent___child__aid__x__dis_020a0408,*(undefined2 *)(param_1 + 0x10));
    }
    DAT_0214be4a = ~uVar3 & DAT_0214be4a;
    if (DAT_0214be64 != 0) {
      uVar6 = thunk_FUN_0201a228(0x30,s_CommLib_cpp_020a0338,s_ParentFunc_020a0234,0x274);
      MIi_CpuCopy32(param_1,uVar6,0x30);
      uVar4 = DAT_0214be84;
      uVar9 = *(undefined4 *)(DAT_0214be64 + 4);
      iVar8 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_020a025c,s_PostSyncMessage_020a026c,0x121);
      uVar7 = 0;
      if (iVar8 != 0) {
        uVar7 = jus_Class_0209455c::jus_Class_0209455c(iVar8,uVar4,0,uVar6,0,2);
      }
      FUN_020287f8(uVar9,uVar7,2);
    }
    goto LAB_02088e64;
  }
  if (DAT_0214be8c != (code *)0x0) {
    (*DAT_0214be8c)(s_unknown_indicate__state____d_020a03e8,*(undefined2 *)(param_1 + 8));
  }
LAB_02088e64:
  FUN_0201a2d4(uVar5);
  return;
}

