
/* JUS-CLASS jus_Class_020966d0::vfunc_26 [class-virtual] slot 26 of vtable 020966d0 (own slot, not
   inherited) */

void jus_Class_020966d0::vfunc_26(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x24) | *(byte *)(param_2 + 0x25);
  bVar1 = *(byte *)(param_1 + 0x24);
  *(byte *)(param_1 + 0x24) = bVar1 & 0xf7;
  if ((bVar1 & 0x37) >> 5 != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x24);
    uVar3 = uVar2 & 0xffffffdf;
    *(char *)(param_1 + 0x24) = (char)uVar3;
    if ((uVar2 & 3) >> 1 == 0) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    else if ((uVar2 & 7) >> 2 == 0) {
      FUN_02019f00(param_1 + 0x3c,*(undefined4 *)(param_1 + 0x30),uVar3,param_4,param_4);
    }
    else {
      FUN_02019f00(param_1 + 0x3c,*(undefined4 *)(param_1 + 0x30),uVar3,param_4,param_4);
      FUN_02018ac8(param_1 + 0x3c,param_1 + 0x34);
      FUN_02018ac8(param_1 + 0x44,param_1 + 0x38);
      FUN_02018ac8(param_1 + 0x40,param_1 + 0x34);
      FUN_02018ac8(param_1 + 0x48,param_1 + 0x38);
    }
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x10);
  }
  (**(code **)(param_1 + 0x28))(param_1,param_2);
  return;
}

