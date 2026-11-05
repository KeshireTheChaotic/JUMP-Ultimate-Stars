
/* JUS-CLASS jus_TagCNTR::vfunc_18 [class-virtual] slot 18 of vtable 02095560 (own slot, not
   inherited) */

void jus_TagCNTR::vfunc_18(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

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
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(uint *)(param_1 + 4) = param_2 & 0xffff;
  return;
}

