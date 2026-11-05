
/* JUS-CLASS jus_TagCNTR::vfunc_19 [class-virtual] slot 19 of vtable 02095560 (own slot, not
   inherited) */

void jus_TagCNTR::vfunc_19(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    iVar1 = FUN_0201a9ec(uVar2);
    if (iVar1 == 0) {
      FUN_0201a958(uVar2,1);
    }
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    uVar2 = *(undefined4 *)(param_1 + 8);
    iVar1 = FUN_0201a9ec(uVar2);
    if (iVar1 == 0) {
      FUN_0201a958(uVar2,1);
    }
  }
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 0xc) = 1;
  iVar1 = FUN_0201a228(param_2 << 2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0200ef34(iVar1,param_2,4,0,FUN_020354b8,0);
  }
  MIi_CpuCopy32(param_4,uVar2,param_2 << 2);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  iVar1 = FUN_0201a228(param_2 << 3);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0200ef34(iVar1,param_2,8,0,FUN_0203515c,0);
  }
  MIi_CpuCopy32(param_3,uVar2,param_2 << 3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(uint *)(param_1 + 4) = param_2 & 0xffff;
  return;
}

