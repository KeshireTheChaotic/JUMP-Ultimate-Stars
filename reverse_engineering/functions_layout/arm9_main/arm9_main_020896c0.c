
/* JUS-GAME ALObjectImp::PostSyncMessage [source-string] __FILE__="ALObjectImp.h"
   __FUNCTION__="PostSyncMessage" lines=[] passed to 1 source-location call(s) */

void ALObjectImp::PostSyncMessage(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
                    /* JUS-TAG
                       strings=["ALObjectImp.h","CommLib.cpp","PostSyncMessage","WH_StateOutStartChild"]
                        */
  sVar1 = *(short *)(param_1 + 2);
  if (sVar1 == 0) {
    sVar1 = *(short *)(param_1 + 8);
    if (sVar1 == 7) {
      DAT_0214bea4 = 5;
      iVar3 = FUN_02059864(&LAB_020895f0_1,&DAT_0214cb20,DAT_0214be5c & 0xffff,&DAT_0214caa0,
                           DAT_0214be94 & 0xffff,1);
      if (iVar3 == 2) {
        DAT_0214be44 = *(undefined2 *)(param_1 + 10);
      }
      else {
        FUN_02088904(iVar3,s_CommLib_cpp_020a0338,0x596);
        DAT_0214bea4 = 4;
      }
    }
    else if (sVar1 != 6) {
      if (sVar1 == 9) {
        DAT_0214bea4 = 2;
        uVar4 = FUN_0201a30c();
        FUN_0201a2d4(DAT_0214be68);
        uVar2 = DAT_0214be98;
        if (DAT_0214be74 != 0) {
          uVar6 = *(undefined4 *)(DAT_0214be74 + 4);
          iVar3 = jus_AllocDebug(0x2c,s_ALObjectImp_h_020a025c,s_PostSyncMessage_020a026c,0x121);
          uVar5 = 0;
          if (iVar3 != 0) {
            uVar5 = jus_Class_0209455c::jus_Class_0209455c(iVar3,uVar2,0,0,0,0);
          }
          FUN_020287f8(uVar6,uVar5,0);
        }
        FUN_0201a2d4(uVar4);
      }
      else if (sVar1 != 0x1a) {
        if (sVar1 == 8) {
          if (DAT_0214be8c != (code *)0x0) {
            (*DAT_0214be8c)(s__s___BEACON_LOST_020a04d4,s_WH_StateOutStartChild_020a02fc);
          }
        }
        else {
          if (DAT_0214be8c != (code *)0x0) {
            (*DAT_0214be8c)(s_unknown_state__d___s_020a04e8,sVar1,&DAT_020a0500);
          }
          DAT_0214bea4 = 9;
        }
      }
    }
  }
  else {
    FUN_02088904(sVar1,s_CommLib_cpp_020a0338,0x5ad);
    if (sVar1 == 0xc) {
      DAT_0214bea4 = 9;
    }
    else if (sVar1 == 0xb) {
      DAT_0214bea4 = 9;
    }
    else if (sVar1 == 1) {
      DAT_0214bea4 = 8;
    }
    else {
      DAT_0214bea4 = 9;
    }
  }
  return;
}

