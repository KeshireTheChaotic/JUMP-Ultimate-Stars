
uint * FUN_0200aed8(uint *param_1,uint param_2,uint param_3,int param_4,byte *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar4;
  uint uVar3;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  uint local_8c;
  int local_88;
  uint local_58;
  uint local_50;
  undefined4 local_4c;
  int local_44;
  undefined **local_40;
  undefined4 local_3c [2];
  undefined **local_34;
  undefined4 local_30 [2];
  int iStack_28;
  uint local_8;
  int iStack_4;
  
                    /* JUS-TAG
                       strings=["!std::exception!!std::logic_error!!std::length_error!!","!std::exception!!std::logic_error!!std::out_of_range!!","basic_string:
                       length_error","basic_string: out_of_range"] */
  local_8 = param_3;
  iStack_28 = param_4;
  bVar11 = (int)(*param_1 << 0x1f) < 0;
  if (bVar11) {
    local_58 = param_1[1];
    pbVar10 = (byte *)param_1[2];
    uVar9 = *param_1 >> 1;
  }
  else {
    pbVar10 = (byte *)((int)param_1 + 1);
    uVar9 = 0xb;
    local_58 = (uint)(byte)((byte)*param_1 >> 1);
  }
  iStack_4 = param_4;
  if (local_58 < param_2) {
    local_34 = &PTR_FUN_0200b1b4_1_02093758;
    iVar1 = FUN_02004b04(s_basic_string__out_of_range_02093828);
    uVar2 = jus_AllocDebug(iVar1 + 1);
    local_8c = local_8c & 0xffffff00;
    FUN_0200ab5c(local_30,uVar2,local_8c);
    FUN_02004b18(local_30[0],s_basic_string__out_of_range_02093828);
    local_34 = &PTR_FUN_0200b1fc_1_02093730;
    FUN_0200f5fc(s__std__exception__std__logic_erro_02093844,&local_34,0x200b1fd);
  }
  local_50 = local_58 - param_2;
  if (local_58 - param_2 < local_8) {
    puVar4 = &local_50;
  }
  else {
    puVar4 = &local_8;
  }
  uVar3 = *puVar4;
  uVar5 = (int)param_5 - param_4;
  if ((0x7ffffffe < uVar5) || (0x7ffffffe - uVar5 < local_58 - uVar3)) {
    local_40 = &PTR_FUN_0200b1b4_1_02093758;
    iVar1 = FUN_02004b04(s_basic_string__length_error_0209387c);
    uVar2 = jus_AllocDebug(iVar1 + 1);
    local_8c = local_8c & 0xffffff00;
    FUN_0200ab5c(local_3c,uVar2,local_8c);
    FUN_02004b18(local_3c[0],s_basic_string__length_error_0209387c);
    local_40 = &PTR_FUN_0200b1d8_1_02093744;
    FUN_0200f5fc(s__std__exception__std__logic_erro_020937f0,&local_40,0x200b1d9);
  }
  uVar6 = uVar5 + (local_58 - uVar3);
  iVar1 = local_58 - (param_2 + uVar3);
  if (uVar6 < uVar9) {
    uVar9 = 0;
    puVar8 = &local_4c;
    do {
      uVar9 = uVar9 + 1;
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    } while (uVar9 < 3);
    local_88 = param_4;
    if (((iVar1 != 0) && (pbVar10 + uVar5 + param_2 < param_5)) && (param_5 <= pbVar10 + local_58))
    {
      FUN_0200b174(&local_4c,param_4,param_5);
      if (local_4c << 0x1f < 0) {
        local_88 = local_44;
      }
      else {
        local_88 = (int)&local_4c + 1;
      }
    }
    if (iVar1 != 0) {
      FUN_02002450(pbVar10 + uVar5 + param_2,pbVar10 + uVar3 + param_2,iVar1);
    }
    FUN_02002450(pbVar10 + param_2,local_88,uVar5);
    pbVar10[uVar6] = DAT_020936c4;
    if (bVar11) {
      param_1[1] = uVar6;
    }
    else {
      *(byte *)param_1 = (byte)*param_1 & 1 | (byte)((uVar6 & 0x7f) << 1);
    }
    FUN_0200ad54(&local_4c);
  }
  else {
    for (uVar9 = uVar9 + 0xf & 0xfffffff0; uVar9 < uVar6 + 1; uVar9 = uVar9 * 2) {
    }
    uVar7 = jus_AllocDebug(uVar9);
    if (param_2 != 0) {
      FUN_02002434(uVar7,pbVar10,param_2);
    }
    FUN_02002450(uVar7 + param_2,param_4,(int)param_5 - param_4);
    if (iVar1 != 0) {
      FUN_02002434(uVar7 + param_2 + uVar5,pbVar10 + uVar3 + param_2,iVar1);
    }
    *(undefined1 *)(uVar7 + uVar6) = DAT_020936c5;
    if (bVar11) {
      FUN_0201b244(pbVar10);
    }
    else {
      *param_1 = *param_1 & 0xfffffffe | 1;
    }
    param_1[2] = uVar7;
    param_1[1] = uVar6;
    *param_1 = uVar9 << 1 | *param_1 & 1;
  }
  return param_1;
}

