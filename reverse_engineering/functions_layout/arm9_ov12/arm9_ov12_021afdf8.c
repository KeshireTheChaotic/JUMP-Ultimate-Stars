
void FUN_021afdf8(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int unaff_r11;
  bool bVar7;
  undefined1 local_28;
  
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  if ((param_3[2] & 1) == 0) {
    uVar1 = param_3[3];
    uVar3 = param_3[4];
    param_2[2] = param_3[2];
    param_2[3] = uVar1;
    param_2[4] = uVar3;
    goto LAB_021affa8;
  }
  FUN_021ac1c0(param_2 + 2);
  uVar4 = param_3[3];
  if (0x7ffffffe < uVar4) {
    FUN_02003bd8(s_basic_string__reserve_length_err_021d17f8);
    FUN_02001f18();
  }
  bVar7 = (param_2[2] & 1) != 0;
  if (bVar7) {
    uVar6 = param_2[3];
    uVar2 = (uint)param_2[2] >> 1;
  }
  else {
    uVar2 = 0xb;
    uVar6 = (uint)(*(byte *)(param_2 + 2) >> 1);
  }
  if (uVar4 < uVar6) {
    uVar4 = uVar6;
  }
  if (uVar4 + 1 < 0xc) {
    uVar4 = 0xb;
  }
  else {
    uVar4 = uVar4 + 0x10 & 0xfffffff0;
  }
  if (uVar4 != uVar2) {
    if (uVar4 == 0xb) {
      iVar5 = (int)param_2 + 9;
      unaff_r11 = param_2[4];
      uVar2 = 0;
    }
    else {
      if (uVar2 < uVar4) {
        iVar5 = FUN_021ac6a0(param_2 + 2,uVar4,0);
      }
      else {
        iVar5 = FUN_021ac6a0(param_2 + 2,uVar4,0);
        if (iVar5 == 0) goto LAB_021aff80;
      }
      if (bVar7) {
        unaff_r11 = param_2[4];
      }
      uVar2 = 1;
      if (!bVar7) {
        unaff_r11 = (int)param_2 + 9;
      }
    }
    FUN_02002450(iVar5,unaff_r11,uVar6);
    *(undefined1 *)(iVar5 + uVar6) = 0;
    if (bVar7) {
      FUN_0201b244(unaff_r11);
    }
    param_2[2] = param_2[2] & 0xfffffffe | uVar2;
    if (uVar2 == 0) {
      *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 1 | (byte)((uVar6 & 0x7f) << 1);
    }
    else {
      param_2[4] = iVar5;
      param_2[3] = uVar6;
      param_2[2] = param_2[2] & 1 | uVar4 << 1;
    }
  }
LAB_021aff80:
  FUN_021ac3ec(param_2 + 2,0,0,param_3[4],param_3[4] + param_3[3],local_28);
LAB_021affa8:
  param_2[5] = param_3[5];
  param_2[6] = param_3[6];
  param_2[7] = param_3[7];
  param_2[8] = param_3[8];
  return;
}

