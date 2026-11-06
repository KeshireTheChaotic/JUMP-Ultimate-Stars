
/* JUS-GAME CommLib::ScanFunc [source-string] __FILE__="CommLib.cpp" __FUNCTION__="ScanFunc"
   lines=[1798] passed to 2 source-location call(s); header inlines: ALObjectImp.h:PostSyncMessage
    */

void CommLib::ScanFunc(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 uVar8;
  
                    /* JUS-TAG strings=["ALObjectImp.h","CommLib.cpp","PostSyncMessage","ScanFunc"]
                        */
  if (*(short *)(param_1 + 2) == 0) {
    if (DAT_0214bea4 == 3) {
      uVar4 = FUN_0201a30c();
      FUN_0201a2d4(DAT_0214be68);
      sVar1 = *(short *)(param_1 + 8);
      if (sVar1 == 3) {
        FUN_0201a2d4(uVar4);
      }
      else {
        if ((sVar1 != 4) && (sVar1 == 5)) {
          DC_InvalidateRange(&DAT_0214bf40,0xc0);
          bVar7 = false;
          if ((0xf < *(ushort *)(param_1 + 0x36)) && (*(short *)(param_1 + 0x38) == 1)) {
            bVar7 = true;
          }
          if ((((bVar7) && (*(int *)(param_1 + 0x3c) == DAT_0214bf08)) &&
              ((DAT_0214bf0c & 0xc000) == (*(ushort *)(param_1 + 0x40) & 0xc000))) &&
             ((*(byte *)(param_1 + 0x43) & 3) == 1)) {
            if (DAT_0214be74 != 0) {
              uVar5 = thunk_FUN_0201a228(0xc0,s_CommLib_cpp_020a0338,s_ScanFunc_020a0228,0x706);
              MIi_CpuCopy32(&DAT_0214bf40,uVar5,0xc0);
              uVar2 = DAT_0214be54;
              uVar8 = *(undefined4 *)(DAT_0214be74 + 4);
              iVar3 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_020a025c,s_PostSyncMessage_020a026c,
                                         0x121);
              uVar6 = 0;
              if (iVar3 != 0) {
                uVar6 = jus_Class_0209455c::jus_Class_0209455c(iVar3,uVar2,0,uVar5,0,2);
              }
              FUN_020287f8(uVar8,uVar6,2);
            }
            if (DAT_0214be41 != '\0') {
              iVar3 = FUN_020898a0();
              if (iVar3 == 0) {
                DAT_0214bea4 = 9;
              }
              FUN_0201a2d4(uVar4);
              return;
            }
          }
        }
        iVar3 = FUN_020898c8();
        if (iVar3 == 0) {
          DAT_0214bea4 = 9;
        }
        FUN_0201a2d4(uVar4);
      }
    }
    else {
      iVar3 = FUN_020898a0();
      if (iVar3 == 0) {
        DAT_0214bea4 = 9;
      }
    }
  }
  else {
    FUN_02088904(*(short *)(param_1 + 2),s_CommLib_cpp_020a0338,0x6c0);
  }
  return;
}

