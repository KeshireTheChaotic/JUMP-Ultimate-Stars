
uint FUN_0207d2dc(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (**(code **)(param_1 + 0x134))();
  uVar1 = uVar2 >> 8;
  *param_4 = (char)uVar2;
  bVar3 = (uVar2 & 0xff0000) != 0;
  if (bVar3) {
    uVar2 = 1;
  }
  *param_5 = (char)uVar1;
  if (!bVar3) {
    uVar2 = 0;
  }
  return uVar2;
}

