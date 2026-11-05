
void FUN_021957f4(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined1 *local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar6 = (uint)CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]);
  local_c = param_2 + 3;
  *(undefined4 *)(param_1 + 0x45c) = 0xffffffff;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_020561dc(&local_38);
  *(int *)(param_1 + 0x80c) = local_30 + (local_38 + 2000) * 0x10000 + local_34 * 0x100;
  uVar5 = 0;
  *(undefined1 *)(param_1 + 0x6b0) = 0;
  *(undefined4 *)(param_1 + 0x5a0) = 0;
  *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(param_1 + 0x5a0);
  iVar7 = 0;
  while( true ) {
    uVar1 = (uint)CONCAT21(CONCAT11(*local_c,local_c[1]),local_c[2]);
    local_c = local_c + 3;
    uVar6 = uVar6 - (uVar1 + 3);
    *(undefined4 *)(param_1 + 0x458) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x5ad) = 0;
    *(undefined1 *)(param_1 + 0x5ac) = 0;
    *(undefined1 *)(param_1 + 0x5af) = 0;
    *(undefined1 *)(param_1 + 0x6b0) = 0;
    *(undefined1 *)(param_1 + 0x5b0) = 0;
    *(undefined1 *)(param_1 + 0x7b0) = 0;
    *(undefined1 **)(param_1 + 0x804) = local_c;
    *(uint *)(param_1 + 0x808) = uVar1;
    iVar2 = FUN_02195c78(param_1,&local_c,0,0,uVar5);
    if (((iVar2 != 0) || (*(uint *)(param_1 + 0x594) < 0x33)) || (*(int *)(param_1 + 0x5a0) == 0)) {
      *(undefined1 *)(param_1 + 0x455) = 9;
      return;
    }
    uVar1 = FUN_02195a48(param_1);
    if (((iVar7 == 0) && (*(int *)(param_1 + 0x800) != 0)) &&
       (iVar2 = FUN_021959d0(*(int *)(param_1 + 0x800),param_1 + 0x7b0), iVar2 != 0)) {
      uVar1 = uVar1 | 0x4000;
    }
    uVar4 = uVar1 & 0xff;
    if ((uVar4 == 1) && (uVar6 != 0)) {
      local_3c = local_c + 3;
      *(undefined1 *)(param_1 + 0x5ad) = 0;
      iVar2 = FUN_02195c78(param_1,&local_3c,0,0,2);
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 0x455) = 9;
        return;
      }
      uVar3 = FUN_02195b3c(param_1,param_1 + 0x480);
      uVar1 = uVar1 & 0xffffff00 | uVar3;
    }
    if (*(code **)(param_1 + 0x810) != (code *)0x0) {
      uVar1 = (**(code **)(param_1 + 0x810))(uVar1,param_1,iVar7);
    }
    iVar7 = iVar7 + 1;
    if (((uVar4 == 0) || (uVar1 != 0)) || (uVar6 == 0)) break;
    uVar5 = 1;
  }
  if (uVar1 == 0) {
    *(undefined1 *)(param_1 + 0x455) = 3;
    return;
  }
  *(undefined1 *)(param_1 + 0x455) = 9;
  return;
}

