
void FUN_0200ad6c(uint *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_54;
  byte *local_50;
  uint local_4c;
  undefined4 *local_48;
  uint local_44;
  byte *local_40;
  undefined1 local_3c;
  undefined1 *local_24;
  undefined **local_20;
  undefined4 local_1c [2];
  
                    /* JUS-TAG
                       strings=["!std::exception!!std::logic_error!!std::length_error!!","basic_string::reserve
                       length_error"] */
  if (0x7ffffffe < param_2) {
    local_20 = &PTR_FUN_0200b1b4_1_02093758;
    local_48 = local_1c;
    iVar1 = FUN_02004b04(s_basic_string__reserve_length_err_020937cc);
    uVar2 = jus_AllocDebug(iVar1 + 1);
    local_3c = 0;
    local_54 = local_54 & 0xffffff00;
    FUN_0200ab5c(local_48,uVar2,local_54);
    FUN_02004b18(*local_48,s_basic_string__reserve_length_err_020937cc);
    local_20 = &PTR_FUN_0200b1d8_1_02093744;
    FUN_0200f5fc(s__std__exception__std__logic_erro_020937f0,&local_20,0x200b1d9);
  }
  local_4c = (uint)((int)(*param_1 << 0x1f) < 0);
  if (local_4c == 0) {
    uVar5 = (uint)(byte)((byte)*param_1 >> 1);
    uVar3 = 0xb;
  }
  else {
    uVar5 = param_1[1];
    uVar3 = *param_1 >> 1;
  }
  if (param_2 < uVar5) {
    param_2 = uVar5;
  }
  if (param_2 + 1 < 0xc) {
    uVar4 = 0xb;
  }
  else {
    uVar4 = param_2 + 0x10 & 0xfffffff0;
  }
  if (uVar4 != uVar3) {
    if (uVar4 == 0xb) {
      local_40 = (byte *)((int)param_1 + 1);
      local_44 = 0;
      local_50 = (byte *)param_1[2];
    }
    else {
      if (uVar3 < uVar4) {
        local_40 = (byte *)jus_AllocDebug(uVar4);
      }
      else {
        local_24 = (undefined1 *)&local_50;
        local_40 = (byte *)jus_AllocDebug(uVar4);
      }
      local_44 = 1;
      if (local_4c == 0) {
        local_50 = (byte *)((int)param_1 + 1);
      }
      else {
        local_50 = (byte *)param_1[2];
      }
    }
    FUN_02002450(local_40,local_50,uVar5);
    local_40[uVar5] = 0;
    if (local_4c != 0) {
      FUN_0201b244(local_50);
    }
    *param_1 = *param_1 & 0xfffffffe | local_44 & 1;
    if (local_44 == 0) {
      *(byte *)param_1 = (byte)*param_1 & 1 | (byte)((uVar5 & 0x7f) << 1);
      return;
    }
    param_1[2] = (uint)local_40;
    param_1[1] = uVar5;
    *param_1 = uVar4 << 1 | *param_1 & 1;
  }
  return;
}

