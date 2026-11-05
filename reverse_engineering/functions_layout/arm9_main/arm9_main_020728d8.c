
/* JUS-GAME Record::RecordLoad [source-string] __FILE__="Record.cpp" __FUNCTION__="RecordLoad"
   lines=[] passed to 1 source-location call(s) */

undefined4 Record::RecordLoad(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_2c [4];
  undefined4 local_1c;
  undefined4 local_18;
  
                    /* JUS-TAG strings=["Record.cpp","RecordLoad"] */
  uVar2 = FUN_02051fa0();
  if (uVar2 == 0xfffffffd) {
    uVar3 = 4;
  }
  else {
    uVar7 = 0;
    do {
      iVar4 = thunk_FUN_0201a228(0x7560,s_Record_cpp_0209e61c,s_RecordLoad_0209e5e8,0x690);
      local_2c[uVar7 + 4] = iVar4;
      uVar6 = uVar7 + 1;
      local_2c[uVar7 + 2] = local_2c[uVar7 + 4] + 8;
      uVar7 = uVar6;
    } while (uVar6 < 2);
    uVar7 = 0;
    uVar2 = uVar2 & 0xffff;
    do {
      local_2c[uVar7] = 0;
      FUN_02061d9c(uVar2);
      cVar1 = FUN_02062374();
      if (cVar1 == '\x01') {
        FUN_02062380(uVar7 << 0xf,local_2c[uVar7 + 4],0x7560,0,0,0,6,1,0);
      }
      else {
        local_2c[uVar7] = 4;
      }
      iVar4 = FUN_02061dd8();
      if (iVar4 != 0) {
        local_2c[uVar7] = 4;
      }
      FUN_02061d90(uVar2);
      FUN_02051ff8(uVar2);
      if (local_2c[uVar7] == 0) {
        if ((*(int *)local_2c[uVar7 + 4] == 0x4753534a) &&
           (((int *)local_2c[uVar7 + 4])[1] == 0x7558)) {
          iVar4 = local_2c[uVar7 + 2];
          uVar6 = SVC_GetCRC16(0,iVar4,0x7548);
          iVar5 = FUN_02072a60(iVar4);
          if (uVar6 != *(ushort *)(iVar4 + iVar5 * 2 + 0x7548)) {
            local_2c[uVar7] = 3;
          }
        }
        else {
          local_2c[uVar7] = 2;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 2);
    if (local_2c[0] == 0) {
      FUN_02051890(local_2c[2],param_1,0x7558);
    }
    else if (local_2c[1] == 0) {
      FUN_02051890(local_2c[3],param_1,0x7558);
    }
    FUN_0201b268(local_1c);
    FUN_0201b268(local_18);
    DAT_020b02b4 = 0xffffffff;
    uVar3 = 0;
    DAT_020b02b0 = 0;
    if ((local_2c[0] != 0) || (local_2c[1] != 0)) {
      if ((local_2c[0] == 0) || (local_2c[1] == 0)) {
        uVar3 = 1;
      }
      else if ((local_2c[0] == 4) || (local_2c[1] == 4)) {
        uVar3 = 4;
      }
      else if ((local_2c[0] == 2) || (local_2c[1] == 2)) {
        uVar3 = 2;
      }
      else {
        uVar3 = 3;
      }
    }
  }
  return uVar3;
}

